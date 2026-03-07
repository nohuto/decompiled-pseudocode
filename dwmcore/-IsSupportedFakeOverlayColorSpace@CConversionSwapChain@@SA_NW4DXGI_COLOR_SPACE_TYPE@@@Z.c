unsigned __int8 __fastcall CConversionSwapChain::IsSupportedFakeOverlayColorSpace(unsigned int a1)
{
  unsigned __int8 result; // al
  int v2; // edx

  result = 0;
  if ( a1 <= 0xE )
  {
    v2 = 20483;
    return _bittest(&v2, a1);
  }
  return result;
}
