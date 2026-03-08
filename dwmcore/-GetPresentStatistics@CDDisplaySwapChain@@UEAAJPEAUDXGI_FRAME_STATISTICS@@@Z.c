/*
 * XREFs of ?GetPresentStatistics@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180287060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802870E0 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatistics(CDDisplaySwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int PresentStatisticsDWM; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  PresentStatisticsDWM = CDDisplaySwapChain::GetPresentStatisticsDWM(this, (struct DXGI_FRAME_STATISTICS_DWM *)&v8);
  v5 = PresentStatisticsDWM;
  if ( PresentStatisticsDWM < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, PresentStatisticsDWM, 0x35Eu, 0LL);
  }
  else
  {
    v6 = v8;
    a2->SyncGPUTime.QuadPart = 0LL;
    *(_QWORD *)&a2->PresentCount = __PAIR64__(DWORD1(v8), v6);
    a2->SyncRefreshCount = v9;
    a2->SyncQPCTime.QuadPart = *((_QWORD *)&v9 + 1);
  }
  return v5;
}
