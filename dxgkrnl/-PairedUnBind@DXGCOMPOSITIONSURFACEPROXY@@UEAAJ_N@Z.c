__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, unsigned __int8 a2)
{
  __int64 v2; // r14
  int v3; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  _BYTE v23[16]; // [rsp+50h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 600) )
    {
      v3 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
LABEL_18:
      KeLeaveCriticalRegion();
LABEL_20:
      WdLogSingleEntry2(3LL, v3, this);
      goto LABEL_21;
    }
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v9
      || (v12 = PsGetCurrentProcessSessionId(v8, v7, v10, v11),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v12)) == 0LL) )
    {
      v3 = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v22 = PsGetCurrentProcessSessionId(v19, v18, v20, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v22,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_18;
    }
    v14 = *((unsigned int *)this + 5);
    if ( !(_DWORD)v14 || !*((_BYTE *)this + 41) )
    {
      WdLogSingleEntry4(
        3LL,
        *((unsigned int *)this + 5),
        this,
        *((unsigned __int8 *)this + 40),
        *((unsigned __int8 *)this + 41));
      goto LABEL_16;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v7, v10, v11);
    v15[3] = *((unsigned int *)this + 5);
    v15[4] = this;
    v15[5] = v2;
    v16 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, *((_DWORD *)this + 5), v2);
    v3 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry4(3LL, *((unsigned int *)this + 5), this, v2, v16);
      goto LABEL_18;
    }
    if ( !(_BYTE)v2 )
    {
      *((_BYTE *)this + 41) = 0;
LABEL_16:
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
  }
  KeLeaveCriticalRegion();
  if ( v3 < 0 )
    goto LABEL_20;
LABEL_21:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)v3;
}
