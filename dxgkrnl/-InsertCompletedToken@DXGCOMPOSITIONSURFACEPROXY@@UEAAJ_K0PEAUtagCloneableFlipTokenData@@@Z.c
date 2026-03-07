__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::InsertCompletedToken(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  unsigned int v5; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  _BYTE v31[16]; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v13
          && (v16 = PsGetCurrentProcessSessionId(v12, v11, v14, v15),
              DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, v16)) )
        {
          if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 40) && *((_BYTE *)this + 41) )
          {
            v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
            if ( v19 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v20, v21);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v19,
                                                 CurrentProcessSessionId);
            }
            else
            {
              SessionDataForSpecifiedSession = 0LL;
            }
            v24 = DXGSESSIONDATA::VailSendEnqueueFlipExToken(
                    SessionDataForSpecifiedSession,
                    *((_DWORD *)this + 5),
                    a2,
                    a3,
                    a4);
            v5 = v24;
            if ( v24 < 0 )
              WdLogSingleEntry2(3LL, v24, this);
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
          v5 = -1073741811;
          v25 = PsGetCurrentProcessSessionId(v12, v11, v14, v15);
          WdLogSingleEntry2(2LL, v25, -1073741811LL);
          v30 = PsGetCurrentProcessSessionId(v27, v26, v28, v29);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v30,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v5 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v31[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    return v5;
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
