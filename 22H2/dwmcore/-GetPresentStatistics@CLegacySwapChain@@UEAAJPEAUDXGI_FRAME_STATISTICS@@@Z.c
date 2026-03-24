/*
 * XREFs of ?GetPresentStatistics@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800C46B8
 * Callers:
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800F6DB0 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800F7250 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800F75C0 (-GetPresentStatistics@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007A274 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatistics(CLegacySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this - 35);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)v2 + 112LL))(v2, a2);
    v8 = v3;
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802CFAA0, 3u, v3, 0xC6u, 0LL);
    TranslateDXGIorD3DErrorInContext(v5, 0, &v8);
    return v8;
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802CFAA0, 3u, -2003304307, 0xCEu, 0LL);
  }
  return v6;
}
