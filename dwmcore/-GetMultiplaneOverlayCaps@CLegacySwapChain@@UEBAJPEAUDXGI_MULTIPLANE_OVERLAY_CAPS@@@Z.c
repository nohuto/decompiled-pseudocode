/*
 * XREFs of ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180100730
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18011B710 (-GetMultiplaneOverlayCaps@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@.c)
 *     ?GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18029EC30 (-GetMultiplaneOverlayCaps@CConversionSwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetMultiplaneOverlayCaps(
        CLegacySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  void **v9; // r15
  void **i; // r14

  *((_DWORD *)this + 52) = 0;
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB290, 2u, v5, 0x34Du, 0LL);
    }
    else
    {
      v8 = *((_QWORD *)this + 10);
      v9 = *(void ***)(v8 + 1456);
      for ( i = *(void ***)(v8 + 1448); i != v9; ++i )
      {
        if ( *i )
          operator delete(*i, 8uLL);
      }
      *(_QWORD *)(v8 + 1456) = *(_QWORD *)(v8 + 1448);
      if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
      {
        *((_DWORD *)this + 52) = 2;
      }
      else if ( *(_DWORD *)a2 > 1u && (*((_DWORD *)a2 + 1) || *((_DWORD *)a2 + 2)) )
      {
        *((_DWORD *)this + 52) = 1;
      }
    }
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802EB290, 2u, -2003304307, 0x360u, 0LL);
  }
  return v7;
}
