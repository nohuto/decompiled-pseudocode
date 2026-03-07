__int64 __fastcall DxgkGetCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        char a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_ADAPTER *SessionAdapterFromLuid; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax

  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v11
    && (v14 = PsGetCurrentProcessSessionId(v10, v9, v12, v13),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, v14)) != 0LL) )
  {
    if ( *((_QWORD *)SessionDataForSpecifiedSession + 2332) )
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
      if ( SessionAdapterFromLuid )
        return SESSION_ADAPTER::GetCddDeviceAndContext(SessionAdapterFromLuid, a2, a3, a4, a5);
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
        a1->HighPart,
        a1->LowPart,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v12, v13);
      WdLogSingleEntry3(2LL, CurrentProcessSessionId, -1073741811LL, 2LL);
      v23 = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x does not have DXGPROCESS for CSRSS.exe, returning 0x%I64x.",
        v23,
        -1073741811LL,
        2LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v24 = PsGetCurrentProcessSessionId(v10, v9, v12, v13);
    WdLogSingleEntry3(2LL, v24, -1073741811LL, 1LL);
    v29 = PsGetCurrentProcessSessionId(v26, v25, v27, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v29,
      -1073741811LL,
      1LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
