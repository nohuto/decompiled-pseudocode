CSceneWorld *__fastcall CSceneWorld::`scalar deleting destructor'(CSceneWorld *this, char a2)
{
  CSceneWorld::~CSceneWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
