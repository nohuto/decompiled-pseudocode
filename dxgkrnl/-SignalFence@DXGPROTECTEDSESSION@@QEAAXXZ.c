void __fastcall DXGPROTECTEDSESSION::SignalFence(DXGPROTECTEDSESSION *this)
{
  _BYTE v2[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 15) + 284LL) & 2) != 0 )
  {
    WdLogSingleEntry1(1LL, 1290LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pSyncObject->IsParavirtualized()",
      1290LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGPROTECTEDSESSION *)((char *)this + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
  DXGSYNCOBJECT::SignalFence(*((_QWORD *)this + 15), ++*((_QWORD *)this + 16), 0LL, 0LL);
}
