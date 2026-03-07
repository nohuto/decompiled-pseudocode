CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::`vector deleting destructor'(
        CProjectedShadowApproxBlurEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
