struct CProcessAttributionObserver **__fastcall anonymous_namespace_::State::State(
        struct CProcessAttributionObserver **a1)
{
  __int64 *v1; // rdi
  _QWORD *v2; // rsi
  void *v4; // rax
  void *v5; // rbp
  __int64 v6; // rax
  CProcessAttributionManager *v7; // rcx
  struct CProcessAttributionObserver *Observer; // rax
  struct CProcessAttributionObserver *v9; // rdx
  PTP_WORK ThreadpoolWork; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v14; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  *a1 = 0LL;
  v2 = a1 + 4;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v4 = operator new(0xC0uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xC0uLL);
    v6 = anonymous_namespace_::FramesReport::FramesReport(v5);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = qword_1803E2C88;
  a1[5] = (struct CProcessAttributionObserver *)v6;
  Observer = CProcessAttributionManager::CreateObserver(v7);
  v9 = *a1;
  *a1 = Observer;
  if ( v9 )
    std::default_delete<CProcessAttributionObserver>::operator()();
  InitializeSListHead((PSLIST_HEADER)a1 + 3);
  ThreadpoolWork = CreateThreadpoolWork(anonymous_namespace_::SendFramesReports, 0LL, 0LL);
  a1[1] = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  v1[1] = (__int64)anonymous_namespace_::OnScreenOnStudySessionStateChange;
  *(_BYTE *)v1 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          v2,
          WNF_SRUM_SCREENONSTUDY_SESSION,
          0LL,
          anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
          v1,
          0LL,
          0,
          0) | 0x10000000;
  if ( v11 < 0 )
  {
    *v2 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x13Au, 0LL);
    if ( *(_BYTE *)v1 )
    {
      *(_BYTE *)v1 = 0;
      if ( *v2 )
      {
        v14 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
        if ( v14 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
        *v2 = 0LL;
      }
    }
  }
  return a1;
}
