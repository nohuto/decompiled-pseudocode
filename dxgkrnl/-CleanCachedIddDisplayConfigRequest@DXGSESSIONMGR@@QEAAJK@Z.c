__int64 __fastcall DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  ReferenceCounted **v5; // rcx
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = (unsigned int)v2;
  if ( (unsigned int)v2 < *((_DWORD *)this + 20)
    && (v5 = *(ReferenceCounted ***)(*((_QWORD *)this + 6) + 8 * v2)) != 0LL )
  {
    DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(v5);
    v6 = 0;
  }
  else
  {
    v6 = -1073741275;
    WdLogSingleEntry2(2LL, v4, -1073741275LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get session data for session 0x%I64x, returning 0x%I64x.",
      v4,
      -1073741275LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
