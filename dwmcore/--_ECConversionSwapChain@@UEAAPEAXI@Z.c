void **__fastcall CConversionSwapChain::`vector deleting destructor'(void **this, char a2)
{
  CConversionSwapChain::~CConversionSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
