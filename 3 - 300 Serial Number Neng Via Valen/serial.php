<?php 
echo "<center>300 Serial Number Neng Via Valen</center>";
Function getRandomCode(){
$an = "abcdefghijklmnopqrstuvwxyz0123456789";
$su = strlen($an) - 1;
return substr($an, rand(0, $su), 1);
}
for ($a=0; $a < 300 ; $a++) {
	for ($i = 0; $i < 4; $i++)
	echo getRandomCode();
	echo "-";
	for ($i = 0; $i < 4; $i++)
	echo getRandomCode();
	echo "-";
	for ($i = 0; $i < 4; $i++)
	echo getRandomCode();
	echo "-";
	for ($i = 0; $i < 4; $i++)
	echo getRandomCode();
	echo "<br>";
}
?>