CFlipExSwapchainStatistics *__fastcall CFlipExSwapchainStatistics::`vector deleting destructor'(
        CFlipExSwapchainStatistics *this,
        char a2)
{
  *(_QWORD *)this = &CFlipExSwapchainStatistics::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x20uLL);
    else
      operator delete(this);
  }
  return this;
}
