__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessSessionId; // rsi
  __int64 v6; // rdi
  __int64 v7; // r8
  DXGSESSIONDATA *v8; // rax
  DXGSESSIONDATA *v9; // rcx
  struct DXGGLOBAL *Global; // rax
  int v11; // ebp
  DXGSESSIONMGR *i; // rsi
  __int64 v14; // rax
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 20)
    || (v11 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId), v11 >= 0) )
  {
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
    {
      WdLogSingleEntry1(1LL, 5115LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"SessionId < m_SessionDataArraySize",
        5115LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v6 = CurrentProcessSessionId;
    if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
    {
      WdLogSingleEntry1(1LL, 5116LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pSessionData[SessionId] == NULL",
        5116LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = *((_QWORD *)this[6] + CurrentProcessSessionId);
    if ( v7 )
    {
      WdLogSingleEntry2(3LL, CurrentProcessSessionId, v7);
    }
    else
    {
      v8 = (DXGSESSIONDATA *)operator new[](0x4B20uLL, 0x4B677844u, 64LL);
      if ( v8 )
        v9 = DXGSESSIONDATA::DXGSESSIONDATA(v8, CurrentProcessSessionId);
      else
        v9 = 0LL;
      *((_QWORD *)this[6] + CurrentProcessSessionId) = v9;
      if ( !*((_QWORD *)this[6] + CurrentProcessSessionId) )
      {
        *((_DWORD *)this + 37) |= 1u;
        WdLogSingleEntry1(6LL, CurrentProcessSessionId);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate dxg session data for session 0x%I64x",
          CurrentProcessSessionId,
          0LL,
          0LL,
          0LL,
          0LL);
        v11 = -1073741801;
        goto LABEL_14;
      }
    }
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGVALIDATION::InitializeForSession(
            (struct DXGGLOBAL *)((char *)Global + 1684),
            *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v11 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v14 = *((_QWORD *)i + 4);
        if ( v14 == 0x100000000LL || v14 == v6 )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + v6),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(4LL, v6, *((_QWORD *)this[6] + v6), *((unsigned int *)this + 20));
    }
  }
LABEL_14:
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return (unsigned int)v11;
}
