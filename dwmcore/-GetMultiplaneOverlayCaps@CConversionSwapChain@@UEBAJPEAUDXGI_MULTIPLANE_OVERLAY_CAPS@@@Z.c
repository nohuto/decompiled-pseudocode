/*
 * XREFs of ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18029EC30
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18011CE50 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_C.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180100730 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::GetMultiplaneOverlayCaps(
        CConversionSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int MultiplaneOverlayCaps; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // r8d

  MultiplaneOverlayCaps = CLegacySwapChain::GetMultiplaneOverlayCaps(this, a2);
  v5 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, MultiplaneOverlayCaps, 0xAAu, 0LL);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 3);
    *(_DWORD *)a2 = 2;
    *(_OWORD *)((char *)a2 + 4) = CConversionSwapChain::sc_fakeOverlayCaps;
    *((_DWORD *)a2 + 5) = 998244352;
    if ( (v6 & 0x40000) != 0 )
      *((_DWORD *)a2 + 3) |= 0x40000u;
    *(_OWORD *)((char *)a2 + 24) = 0LL;
    *((_DWORD *)a2 + 10) = 0;
  }
  return v5;
}
