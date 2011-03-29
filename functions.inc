<?php
function calculate_zoom_level($diff) {

	if ($diff > 0.05)
		return ("11");
	if ($diff > 0.025)
		return ("13");
	if ($diff > 0.01)
		return ("14");
	return ("15");
	}
?>