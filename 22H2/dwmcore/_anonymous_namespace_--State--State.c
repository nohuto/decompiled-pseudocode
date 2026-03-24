/*
 * XREFs of _anonymous_namespace_::State::State @ 0x1800282DC
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800267EC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180029110 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180029330 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::State::State(__int64 a1)
{
  _BYTE *v2; // rbx
  void *v3; // rax
  void *v4; // rsi
  PTP_WORK ThreadpoolWork; // rax
  int v6; // eax
  unsigned int v7; // ecx
  int v9; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)a1 = CProcessAttributionManager::CreateObserver(lpMem);
  v2 = (_BYTE *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  v3 = operator new(0xC0uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0xC0uLL);
    v3 = (void *)anonymous_namespace_::FramesReport::FramesReport(v4);
  }
  *(_QWORD *)(a1 + 40) = v3;
  InitializeSListHead((PSLIST_HEADER)(a1 + 48));
  ThreadpoolWork = CreateThreadpoolWork(anonymous_namespace_::SendFramesReports, 0LL, 0LL);
  *(_QWORD *)(a1 + 8) = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  *(_QWORD *)(a1 + 24) = anonymous_namespace_::OnScreenOnStudySessionStateChange;
  *v2 = 1;
  v6 = RtlSubscribeWnfStateChangeNotification(
         a1 + 32,
         WNF_SRUM_SCREENONSTUDY_SESSION,
         0LL,
         anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
         a1 + 16,
         0LL,
         0,
         0) | 0x10000000;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x126u, 0LL);
    if ( *v2 )
    {
      *v2 = 0;
      if ( *(_QWORD *)(a1 + 32) )
      {
        v9 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
        if ( v9 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
  }
  return a1;
}
