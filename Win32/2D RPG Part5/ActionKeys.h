#ifndef _ACTIONKEYS_H
#define _ACTIONKEYS_H


// These are the special action keys for our game
const int kMaxActionKeys	= 1000;		// This stores the max amount of keys for our array
const int kShopKeeperKey	= 555;		// This is the key assigned for shop keepers	
const int kPotionKey		= 499;		// This key is for when the player picks up the potion
const int kSageSceneKey		= 500;		// This is the sage cut scene key
const int kLastItemKey		= 200;		// This stores the last item action key we allow
const int kItemsKey			= 100;		// This is the first action key we use for items on maps
const int kAddTrendorKey	= 25;		// This key is set when we add Trendor to our party
const int kPermissionKey	= 20;		// This is the key that tells if we have permission or not
const int kGovernorSceneKey = 10;		// This tells us that we are talking to the Governor
const int kBridgeGuardKey	= 15;		// This tells us if we are talking to bridge guard
const int kTrendorSceneKey	= 5;		// This tells us that we are talking to Trendor

const int kPermissionExpNeeded = 100;	// This is the experience needed to impress the Governor
									
// The bitmap image for the potion.  Notice that we don't put this in the items
// directory because we don't want shop keepers selling our saving potion! :)
const char kPotionImage[]  = "Tiles\\Potion.bmp";

// This is our action key class for handling special events
class CAction
{
public:
	
	// Our constructor
	CAction();
	
	// This takes a action key and a tile, default is NULL
	void HandleKey(int actionKey, CTile *pTile = NULL);

	// This is called every time a map loads to check for special events/cut scenes
	void HandleMaps();

	// This sets and gets the action key array
	int *GetActionKeys()					{ return m_actionKeys; }
	void SetActionKeys(int *pActionKeys)	{ memcpy(m_actionKeys, pActionKeys, sizeof(m_actionKeys)); }

	// This sets and gets action keys from the array
	int GetActionKey(int index)						{ return m_actionKeys[index]; }
	void SetActionKey(int index, int value = 1)		{ m_actionKeys[index] = value; }

	// This resets the action key array to 0
	void ResetActionKeys()	{ memset(m_actionKeys, 0, sizeof(m_actionKeys)); }

private:

	// This is our action key array which stores all the game event keys
	int m_actionKeys[kMaxActionKeys];

};

#endif


////////////////////////////////////////////////////////////////////
//
// *Quick Notes*
//  
// Nothing new was added to this file.
//
//
// Ben Humphrey (DigiBen)
// Game Programmer
// DigiBen@GameTutorials.com
// Co-Web Host of www.GameTutorials.com
//
// � 2000-2005 GameTutorials   

