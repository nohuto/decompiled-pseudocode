__int64 __fastcall CLegacySwapChain::InternalPresentDFlip(__int64 a1, char a2, char a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  if ( a2 || a3 )
  {
    v6 = CD3DDevice::PresentMPO(*(CD3DDevice **)(a1 + 80), *(struct IDXGISwapChainDWM1 **)(a1 + 224));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x429u, 0LL);
  }
  else
  {
    v3 = CD3DDevice::Present(*(CD3DDevice **)(a1 + 80), *(struct IDXGISwapChainDWM1 **)(a1 + 224));
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x433u, 0LL);
  }
  return v5;
}
