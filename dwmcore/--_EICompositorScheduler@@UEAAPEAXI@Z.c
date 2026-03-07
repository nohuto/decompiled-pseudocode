ICompositorScheduler *__fastcall ICompositorScheduler::`vector deleting destructor'(
        ICompositorScheduler *this,
        char a2)
{
  *(_QWORD *)this = &ICompositorScheduler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
