double getBmi(double height, double weight) 
{
	double bmi;

	//cm単位をm単位に変える
	height /= 100;

	bmi = weight / height / height;

	//戻り値がbmi
	return bmi;
}