/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01EAE9C
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01EAD20 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0017314 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01EB010 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C0219A38 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0355358 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this)
{
  __int64 CurrentProcessSessionId; // rsi
  __int64 v3; // rdi
  __int64 v4; // r8
  DXGSESSIONDATA *v5; // rax
  DXGSESSIONDATA *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  int v8; // ebp
  DXGSESSIONMGR *i; // rsi
  __int64 v11; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 20)
    || (v8 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId), v8 >= 0) )
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
    v3 = CurrentProcessSessionId;
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
    v4 = *((_QWORD *)this[6] + CurrentProcessSessionId);
    if ( v4 )
    {
      WdLogSingleEntry2(3LL, CurrentProcessSessionId, v4);
    }
    else
    {
      v5 = (DXGSESSIONDATA *)operator new[](0x4B20uLL, 0x4B677844u, 64LL);
      if ( v5 )
        v6 = DXGSESSIONDATA::DXGSESSIONDATA(v5, CurrentProcessSessionId);
      else
        v6 = 0LL;
      *((_QWORD *)this[6] + CurrentProcessSessionId) = v6;
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
        v8 = -1073741801;
        goto LABEL_14;
      }
    }
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGVALIDATION::InitializeForSession(
           (struct DXGGLOBAL *)((char *)Global + 1684),
           *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v8 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v11 = *((_QWORD *)i + 4);
        if ( v11 == 0x100000000LL || v11 == v3 )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + v3),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(4LL, v3, *((_QWORD *)this[6] + v3), *((unsigned int *)this + 20));
    }
  }
LABEL_14:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v8;
}
