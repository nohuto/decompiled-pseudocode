CRadialGradientEffect *__fastcall CRadialGradientEffect::`scalar deleting destructor'(
        CRadialGradientEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
