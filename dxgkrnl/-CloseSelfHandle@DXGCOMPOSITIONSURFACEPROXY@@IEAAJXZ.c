__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::CloseSelfHandle(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned int v1; // ebx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v12; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  _BYTE v19[24]; // [rsp+50h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( !Current )
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
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v7
          && (v10 = PsGetCurrentProcessSessionId(v6, v5, v8, v9),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v10)) != 0LL) )
        {
          v12 = DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
          v1 = v12;
          if ( v12 < 0 )
            WdLogSingleEntry2(3LL, v12, this);
        }
        else
        {
          v1 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v18 = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v18,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v1 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  return v1;
}
