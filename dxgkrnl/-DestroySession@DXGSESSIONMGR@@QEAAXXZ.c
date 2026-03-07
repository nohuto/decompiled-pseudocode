void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v8; // rdi
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  DXGSESSIONDATA *v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  v6 = CurrentProcessSessionId;
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, CurrentProcessSessionId);
  v8 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession == *((struct DXGSESSIONDATA **)this + 17) )
    {
      WdLogSingleEntry1(1LL, 5199LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData != pSessionData",
        5199LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v8 == *((struct DXGSESSIONDATA **)this + 17) )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSESSIONMGR::SetConsoleSession(*((CTTMDEVICE ***)Global + 118), 0LL, v14, v15);
      }
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v9 = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v9,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v10 = *((unsigned int *)this + 20);
  if ( (unsigned int)v6 >= (unsigned int)v10 )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
  WdLogSingleEntry3(4LL, v6, v11, v10);
  if ( (unsigned int)v6 < *((_DWORD *)this + 20) )
  {
    v12 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v6);
    if ( v12 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v12);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6) = 0LL;
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
