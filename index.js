var Wearable = require('kit-iot-wearable-bluetooth2'),
    kit = new Wearable({
      name: 'wV3_0E003971'
    });
kit.findWearable();

var SerialPort 	= require ('serialport').SerialPort,
	serial 		= new SerialPort('/dev/ttyACM0', {
		baudrate: 9600
	});

function wrap(callback) {
  callback();
}
serial.on('open', function (){
	serial.once('data', function(data){
			kit.on('connected', function() {
				kit.ledOFF();
				if (data){
					if (data=='0'){
						kit.ledON('RED');
						console.log('0');
					} else {
						kit.ledON('GREEN');
						console.log('1');
					}
				} 
				console.log('data received: '+data);
			});
			kit.on('data:button2', function (data) {
				serial.write("Funfou");
			});
		serial.write('ls\n', function(err, results){
			console.log('results'+results);
		});
	});
});