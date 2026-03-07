CAnimationController *__fastcall CAnimationController::`scalar deleting destructor'(
        CAnimationController *this,
        char a2)
{
  CAnimationController::~CAnimationController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x80uLL);
    else
      operator delete(this);
  }
  return this;
}
