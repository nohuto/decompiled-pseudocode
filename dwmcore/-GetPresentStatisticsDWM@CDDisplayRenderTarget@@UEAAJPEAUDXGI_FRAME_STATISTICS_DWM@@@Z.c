/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1801C1500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802870E0 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentStatisticsDWM(
        CDDisplayRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  CDDisplaySwapChain *v2; // rcx
  int PresentStatisticsDWM; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = (CDDisplaySwapChain *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    PresentStatisticsDWM = CDDisplaySwapChain::GetPresentStatisticsDWM(v2, a2);
    v5 = PresentStatisticsDWM;
    if ( PresentStatisticsDWM < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, PresentStatisticsDWM, 0xFEu, 0LL);
  }
  else
  {
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x102u, 0LL);
  }
  return v5;
}
