/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18029D6B0
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@$4PPPPPPPM@DFI@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18011CCD0 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@$4PPPPPPPM@DFI@EBA_NPEBUDXGI_CHECK_MULTIPLA.c)
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800E4910 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x18029EE48 (-IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18029EEB0 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall CConversionSwapChain::CheckMultiplaneOverlaySupport(
        CConversionSwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  char v4; // di
  bool v7; // zf
  _DWORD *v8; // rcx
  char *i; // rbx
  int v10; // r8d

  v4 = 0;
  *a4 = 0;
  if ( a3 == 1 )
  {
    if ( !CConversionSwapChain::IsDesktopRect(this, (const struct tagRECT *)((char *)a2 + 52))
      || !operator==((_DWORD *)a2 + 9, (_DWORD *)a2 + 13)
      || !operator==(v8, (_DWORD *)a2 + 17) )
    {
      return v4;
    }
    v7 = *((_DWORD *)a2 + 21) == 1;
  }
  else
  {
    if ( a3 != 2
      || *(_DWORD *)a2
      || *((_DWORD *)a2 + 5) != g_luidZero.LowPart
      || *((_DWORD *)a2 + 6) != g_luidZero.HighPart
      || !CConversionSwapChain::IsDesktopRect(this, (const struct tagRECT *)((char *)a2 + 52))
      || !operator==((_DWORD *)a2 + 9, (_DWORD *)a2 + 13)
      || *((_DWORD *)a2 + 21) != 1 )
    {
      return v4;
    }
    v7 = *((_DWORD *)a2 + 22) == 1;
  }
  if ( v7 )
  {
    v4 = 1;
    for ( i = (char *)a2 + 108;
          !*((_DWORD *)i - 19)
       && CConversionSwapChain::IsSupportedFakeOverlayColorSpace(*(enum DXGI_COLOR_SPACE_TYPE *)i)
       && !*((_DWORD *)i + 1);
          i += 144 )
    {
      if ( v10 + 1 >= a3 )
        return v4;
    }
    return 0;
  }
  return v4;
}
