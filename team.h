#include <vector>
#include "player.h" //<string>
class team {

	public:
		team();
		std::string name;
		int totalRunsScored;
		int wicketsLost;
		int totalBallsBowled;
		std::vector<Player>players;
};
