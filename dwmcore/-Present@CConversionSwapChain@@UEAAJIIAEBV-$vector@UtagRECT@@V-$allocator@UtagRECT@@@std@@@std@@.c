/*
 * XREFs of ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18029F040
 * Callers:
 *     ?Present@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18011D090 (-Present@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180109EA0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18029E1E4 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 */

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
