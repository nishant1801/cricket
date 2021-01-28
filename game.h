#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <vector>
#include "team.h"   //<string>, <vector>, "player.h"

class game {

	public:
		game();
		int playersPerteam;
		int maxballs;
		int totalPlayers;
		std::string Player[11];

		bool isFirstInnings;
		team teamA, teamB;
		team *batingTeam, *bowlingTeam;
		Player *batsman, *bowler;

};

void welcome();
