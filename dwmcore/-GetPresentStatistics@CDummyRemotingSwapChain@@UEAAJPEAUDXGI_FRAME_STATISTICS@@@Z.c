/*
 * XREFs of ?GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180295EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180295F30 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::GetPresentStatistics(
        CDummyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  int PresentStatisticsDWM; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  UINT v6; // ecx
  _DWORD v8[6]; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER v9; // [rsp+48h] [rbp-20h]

  PresentStatisticsDWM = CDummyRemotingSwapChain::GetPresentStatisticsDWM(this, (struct DXGI_FRAME_STATISTICS_DWM *)v8);
  v5 = PresentStatisticsDWM;
  if ( PresentStatisticsDWM < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, PresentStatisticsDWM, 0x9Du, 0LL);
  }
  else
  {
    v6 = v8[0];
    a2->SyncGPUTime.QuadPart = 0LL;
    a2->PresentCount = v6;
    a2->PresentRefreshCount = v8[1];
    a2->SyncRefreshCount = v8[4];
    a2->SyncQPCTime = v9;
  }
  return v5;
}
