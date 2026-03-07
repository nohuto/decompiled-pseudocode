// attributes: thunk
unsigned int __fastcall CConversionSwapChain::Release(CConversionSwapChain *this)
{
  return CMILCOMBaseWeakRef::InternalRelease(this);
}
