CPassthroughEffect *__fastcall CPassthroughEffect::`vector deleting destructor'(CPassthroughEffect *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
