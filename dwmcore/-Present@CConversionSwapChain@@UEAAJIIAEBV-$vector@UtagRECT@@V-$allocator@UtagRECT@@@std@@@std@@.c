__int64 __fastcall CConversionSwapChain::Present(
        CLegacySwapChain *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  char v9; // si
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi

  if ( (a3 & 2) != 0 )
  {
    v9 = 1;
  }
  else
  {
    *((_DWORD *)this + 99) = 0;
    v9 = 0;
    CConversionSwapChain::ConvertSingleDesktopPlane(this);
  }
  v10 = CLegacySwapChain::Present((CD3DDevice **)this, a2, a3, a4, a5);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x11Bu, 0LL);
  if ( !v9 )
    **((_DWORD **)this + 84) = 0;
  return v12;
}
