CGlobalManipulationManager *__fastcall CGlobalManipulationManager::`vector deleting destructor'(
        CGlobalManipulationManager *this,
        char a2)
{
  CGlobalManipulationManager::~CGlobalManipulationManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
