<?php
if ($_SERVER['SERVER_NAME'] == 'jitsolutions.info') {
	$server = "guinnessrw.db.5768327.hostedresource.com";
	$user = "guinnessreader";
	$pass = "Guinnessr456";
	} else if ($_SERVER['SERVER_NAME'] == 'localhost') {
	$server = 'localhost';
	$user = 'root';
	$pass = 'root';
	}
	
$link = mysql_connect ($server, $user, $pass) 
		OR DIE ('Unable to connect to database! Please try again later.'); 

$database = "guinnessrw";
mysql_select_db($database, $link)
		OR DIE ('Unable to select DB! Please try again later.'); 
?>