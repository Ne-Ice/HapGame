/******************************************************************************/
struct Tree : Game::Static
{
	virtual Bool update();

	void save(File &f);
	Bool load(File &f);
};
/******************************************************************************/