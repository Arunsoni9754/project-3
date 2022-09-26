#include<math.h>
#define RADIUS 6378.16
#define cons 57.296
double find_angle(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double m1=-a1/b1;
    double m2=-a2/b2;
    double theta=(atan((m1-m2)/(1+(m1*m2))))*cons;
     return theta;
}

double find_area(double x1, double y1, double x2,double y2,double x3,double y3)
{
    double d=(((x1*y2)-(x1*y3)-(y1*x2)+(y1*x3)+(x2*y3)-(x3*y2))/2);
	if(d<0)
    {
        return(d*(-1));
    }
    return d;
}
double find_distance(double lat1, double lon1,double lat2, double lon2)
	{
		// distance between latitudes
		// and longitudes
		double dLat = (lat2 - lat1) *
					M_PI / 180.0;
		double dLon = (lon2 - lon1) *
					M_PI / 180.0;

		// convert to radians
		lat1 = (lat1) * M_PI / 180.0;
		lat2 = (lat2) * M_PI / 180.0;

		// apply formulae
		double a = pow(sin(dLat / 2), 2) +
				pow(sin(dLon / 2), 2) *
				cos(lat1) * cos(lat2);
		double rad = 6371;
		double c = 2 * asin(sqrt(a));
		return rad * c;
	}
