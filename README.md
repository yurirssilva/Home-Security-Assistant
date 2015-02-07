## Home & Security Assistant
Atualmente no mercado já existem diversos dispositivos wearables, como relógios e pulseiras inteligentes, que servem basicamente apenas como assistentes dos smartphones, mas esse mercado está começando a ficar saturado, com poucas soluções inovadoras e se formos comparar os diferentes modelos veremos poucas diferenças além do design.

Pensando nesse problema decidi desenvolver meu sistema fugindo do padrão, utilizei o kit wearable da vivo para desenvolver um sistema que auxilia na segurança domiciliar.

Meu projeto utiliza um Arduino Uno com dois sensores ultrassônicos que se comunicam com um servidor em node.js para informar caso aja alguma mudança nele. A comunicação é feita de forma serial e o servidor utiliza a biblioteca serialport para estabelecer a comunicação, após isso, o servidor envia as informações para o kit wearable utilizando um canal de comunicações bluetooth 2.0.

Para mais informações assista esta [apresentação](https://www.youtube.com/watch?v=SfofYbbRYtg). 