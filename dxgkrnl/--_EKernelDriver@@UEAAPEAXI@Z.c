KernelDriver *__fastcall KernelDriver::`vector deleting destructor'(KernelDriver *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
