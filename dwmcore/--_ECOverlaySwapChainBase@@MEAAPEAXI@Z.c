COverlaySwapChainBase *__fastcall COverlaySwapChainBase::`vector deleting destructor'(
        COverlaySwapChainBase *this,
        char a2)
{
  COverlaySwapChainBase::~COverlaySwapChainBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
