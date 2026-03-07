__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedQueryStats(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct CSM_BUFFER_STATISTICS *a2)
{
  unsigned int v3; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int Stats; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  _BYTE v27[16]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v9
          && (v12 = PsGetCurrentProcessSessionId(v8, v7, v10, v11),
              DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v12)) )
        {
          if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 40) && *((_BYTE *)this + 41) )
          {
            v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
            if ( v15 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v16, v17);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v15,
                                                 CurrentProcessSessionId);
            }
            else
            {
              SessionDataForSpecifiedSession = 0LL;
            }
            Stats = DXGSESSIONDATA::VailSendQueryStats(SessionDataForSpecifiedSession, *((_DWORD *)this + 5), a2);
            v3 = Stats;
            if ( Stats < 0 )
              WdLogSingleEntry2(3LL, Stats, this);
          }
          else
          {
            WdLogSingleEntry4(
              3LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              *((unsigned __int8 *)this + 41),
              this);
          }
        }
        else
        {
          v3 = -1073741811;
          v21 = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
          WdLogSingleEntry2(2LL, v21, -1073741811LL);
          v26 = PsGetCurrentProcessSessionId(v23, v22, v24, v25);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v26,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v3 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
