__int64 __fastcall DxgkGetWddmRemoteSessionGdiViewRange(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax

  if ( a1 && a2 )
  {
    v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v6 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v7, v8);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
      if ( SessionDataForSpecifiedSession )
      {
        DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(SessionDataForSpecifiedSession, a1, a2);
        return 0LL;
      }
    }
    v12 = PsGetCurrentProcessSessionId(v5, v4, v7, v8);
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    v17 = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified NULL pointer to DxgkGetWddmRemoteSessionGdiViewRange, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
