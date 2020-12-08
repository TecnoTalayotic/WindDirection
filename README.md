# WindDirection
Configuración sensor WindDirection en Arduino

En este Git voy a subir el codigo que he creado para hacer funcionar el sensor WindDirection de amazon (https://www.amazon.es/gp/product/B07KYTKLTB/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)

Datasheet: 
Si abrís el Datasheet, veréis que lleva un mecanismo muy básico, se trata de un circuito con 8 interruptores magnéticos que entregan 8 resistencias diferentes, de esta forma al leer una u otra resistencia podemos saber la posición del viento.
https://www.sparkfun.com/datasheets/Sensors/Weather/Weather%20Sensor%20Assembly..pdf?_ga=2.157979386.1995586139.1543504685-1039030741.1543504685.


En este caso, veréis que los datos imprimidos están en catalan, ya que es un proyecto que estoy creando para mis padres, pero es muy fácil cambiar los datos a otro idioma, ya que lo más difícil sería entender los nombres de los vientos, por eso os indico los grados del viento. Con esto podremos monitorizar los datos recibidos, en otros posts subiré más sensores que podemos adaptar, y al final uno para transmitir la señal via wifi, aun no se como, pero lo haré.
