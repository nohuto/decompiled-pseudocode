__int64 __fastcall OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(OUTPUTDUPL_SESSION_MGR *this, unsigned int a2)
{
  struct OUTPUTDUPL_MGR **v4; // rbx
  unsigned int OutputDuplManager; // ebx
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    WdLogSingleEntry1(1LL, 4343LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
      4343LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = (struct OUTPUTDUPL_MGR **)((char *)this + 120);
  if ( *v4 )
    OutputDuplManager = 0;
  else
    OutputDuplManager = CreateOutputDuplManager(a2, 0LL, 0LL, 0LL, v4);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return OutputDuplManager;
}
