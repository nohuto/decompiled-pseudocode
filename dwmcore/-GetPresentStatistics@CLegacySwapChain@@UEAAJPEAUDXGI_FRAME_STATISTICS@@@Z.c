/*
 * XREFs of ?GetPresentStatistics@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802979D0
 * Callers:
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18011B770 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18011C7F0 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18011CEB0 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@DFI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatistics(CLegacySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)v2 + 112LL))(v2, a2);
    v8 = v3;
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1803BF728, 3u, v3, 0xF0u, 0LL);
    TranslateDXGIorD3DErrorInContext(v5, 0, &v8);
    return v8;
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1803BF728, 3u, -2003304307, 0xF8u, 0LL);
  }
  return v6;
}
