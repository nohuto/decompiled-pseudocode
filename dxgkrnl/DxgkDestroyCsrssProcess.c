void DxgkDestroyCsrssProcess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  SESSION_ADAPTER *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax

  SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !SessionDataForSpecifiedSession
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1, v0, v3, v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                            SessionDataForSpecifiedSession,
                                            CurrentProcessSessionId)) == 0LL) )
  {
    WdLogSingleEntry1(1LL, 625LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 625LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)SessionDataForSpecifiedSession + 2331) != PsGetCurrentProcess(v6) )
  {
    WdLogSingleEntry1(1LL, 626LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      626LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionDataForSpecifiedSession);
  v7 = (_QWORD *)*((_QWORD *)SessionDataForSpecifiedSession + 2322);
  while ( v7 != (_QWORD *)((char *)SessionDataForSpecifiedSession + 18576) )
  {
    v8 = (SESSION_ADAPTER *)(v7 - 4);
    v9 = v7;
    v7 = (_QWORD *)*v7;
    SESSION_ADAPTER::Cleanup(v8);
    v10 = *v9;
    v11 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( v8 )
      SESSION_ADAPTER::`scalar deleting destructor'(v8);
  }
  *((_QWORD *)SessionDataForSpecifiedSession + 2332) = 0LL;
}
