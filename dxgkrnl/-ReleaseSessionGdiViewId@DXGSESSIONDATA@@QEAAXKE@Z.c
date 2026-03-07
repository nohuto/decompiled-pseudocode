void __fastcall DXGSESSIONDATA::ReleaseSessionGdiViewId(DXGSESSIONDATA *this, signed __int32 a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 4785) + *((_DWORD *)this + 4784);
  if ( !v7 )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2394) + 4 * v6) == a2 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < v7 );
  if ( (unsigned int)v6 >= v7 )
  {
LABEL_5:
    WdLogSingleEntry1(1LL, 4749LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i < m_NumSessionViewIds + m_NumPendingSessionViewIds",
      4749LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + 4785);
  v9 = *((_DWORD *)this + 4784);
  if ( (unsigned int)v6 < v9 + v8 )
  {
    if ( (unsigned int)v6 >= v9 )
      *((_DWORD *)this + 4785) = --v8;
    else
      *((_DWORD *)this + 4784) = --v9;
    if ( (unsigned int)v6 < v9 + v8 )
      memmove(
        (void *)(*((_QWORD *)this + 2394) + 4 * v6),
        (const void *)(*((_QWORD *)this + 2394) + 4LL * (unsigned int)(v6 + 1)),
        4LL * (v9 + v8 - (unsigned int)v6));
  }
  if ( a3 )
    _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, a2 - 1, a2);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
