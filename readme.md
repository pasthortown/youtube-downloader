<h1>Youtube Video Downloader</h1>
<p>Es una interfaz gráfica que se sirve en docker, que permite utilizar youtube-dl con mayor facilidad.</p>
<h3>Instalación:</h3>
<p>Docker-Client       https://hub.docker.com/</p>
<p>Clonar este repositorio en la carpeta donde se desee instalar. Esta carpeta contendrá la carpeta videos donde se encontrarán los videos descargados</p>
<p>abrir una consola en la carpeta descargada y ejecutar:</p>
<p>docker-compose up -d</p>
<h3>Modificar archivo HOSTS:</h3>
<h4>WINDOWS(C:\Windows\System32\drivers\etc\hosts)
<h4>LINUX(/etc/hosts)</h4>
<p>127.0.0.1       desarrollo.lsyoutube-dl</p>
<p>127.0.0.1       desarrollo.lsyoutube-dl-ws</p>
<p>Una vez modificado el archivo hosts, visitar: <a href="http://desarrollo.lsyoutube-dl/">YoutubeDowloader Local</a></p>
