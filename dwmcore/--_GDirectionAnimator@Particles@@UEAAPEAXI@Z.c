Particles::DirectionAnimator *__fastcall Particles::DirectionAnimator::`scalar deleting destructor'(
        Particles::DirectionAnimator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
