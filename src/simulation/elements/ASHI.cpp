#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_ASHI PT_ASHI 199
Element_ASHI::Element_ASHI()
{
	Identifier = "DEFAULT_PT_ASHI";
	Name = "ASH";
	Colour = PIXPACK(0xb2beb5);
	MenuVisible = 1;
	MenuSection = SC_POWDERS;
	Enabled = 1;

	Advection = 0.4f;
	AirDrag = 0.04f * CFDS;
	AirLoss = 0.94f;
	Loss = 0.95f;
	Collision = -0.1f;
	Gravity = 0.3f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 50;

	Temperature = R_TEMP+0.0f	+273.15f;
	HeatConduct = 150;
	Description = "Ash, comes when plants burn";

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = 20;
	HighPressureTransition = PT_BCOL;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITL;
	HighTemperatureTransition = NT;

	Update = NULL;
}

Element_ASHI::~Element_ASHI() {}