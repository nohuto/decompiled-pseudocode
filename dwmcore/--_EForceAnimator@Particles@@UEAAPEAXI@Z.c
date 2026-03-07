Particles::ForceAnimator *__fastcall Particles::ForceAnimator::`vector deleting destructor'(
        Particles::ForceAnimator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
