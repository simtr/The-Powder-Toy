#include "simulation/ElementCommon.h"
//#TPT-Directive ElementClass Element_SGLU PT_SGLU 191
Element_SGLU::Element_SGLU()
{
	Identifier = "DEFAULT_PT_SGLU";
	Name = "SGLU";
	Colour = PIXPACK(0X505050);
	MenuVisible = 1;
	MenuSection = SC_CRACKER1000;
	Enabled = 1;

	Advection = 0.0f;
	AirDrag = 0.00f * CFDS;
	AirLoss = 0.00f;
	Loss = 0.00f;
	Collision = 0.0f;
	Gravity = 0.0f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 0;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 5;

	Weight = 20;

	Temperature = R_TEMP + 0.0f + 273.15f;
	HeatConduct = 254;
	Description = "SOLIDIFIED GLUE, turns back into glue when heated.";

	Properties = TYPE_SOLID;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = NT;
	LowTemperatureTransition = NT;
	HighTemperature = 374.15f;
	HighTemperatureTransition = PT_GLUE;

	Update = NULL;
}

Element_SGLU::~Element_SGLU() {}