#include "simulation/ToolCommon.h"
#include "simulation/ElementCommon.h"

//#TPT-Directive ToolClass Tool_CRCK TOOL_CRCK 1
Tool_CRCK::Tool_CRCK()
{
	Identifier = "DEFAULT_TOOL_CRCK";
	Name = "RESET";
	Colour = PIXPACK(0xDB2020);
	Description = "Reset tool, resets element's properties to default.";
}

int Tool_CRCK::Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)

{
	int i = sim->pmap[y][x];
	if (!i)
	{
		return 0;
	}
	sim->create_part (i, x, y, cpart->type);
	return 0;
}

Tool_CRCK::~Tool_CRCK() {}