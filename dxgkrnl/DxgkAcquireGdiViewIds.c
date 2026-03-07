__int64 __fastcall DxgkAcquireGdiViewIds(char a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  struct DXGGLOBAL *Global; // rax

  SessionDataForSpecifiedSession = 0LL;
  if ( !a1
    || (Global = DXGGLOBAL::GetGlobal(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                            *((DXGSESSIONMGR **)Global + 118),
                                            a2)) != 0LL) )
  {
    v9 = 0LL;
    if ( *a3 )
    {
      while ( 1 )
      {
        v10 = a1
            ? DXGSESSIONDATA::AcquireSessionGdiViewId(SessionDataForSpecifiedSession, (unsigned int *)(a4 + 4 * v9))
            : DMgrAcquireGdiViewId(a4 + 4 * v9);
        v11 = v10;
        if ( v10 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *a3 )
          return 0LL;
      }
      if ( !(_DWORD)v9 )
      {
        WdLogSingleEntry1(2LL, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot reserve any GDI Id, (Status = 0x%I64x)",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v11;
      }
      *a3 = v9;
      WdLogSingleEntry2(2LL, (unsigned int)v9, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot reserve GDI Id for VidPn number 0x%I64x, (Status = 0x%I64x)",
        (unsigned int)v9,
        v11,
        0LL,
        0LL,
        0LL);
    }
    return 0LL;
  }
  v11 = -1073741811;
  WdLogSingleEntry2(2LL, a2, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
    a2,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v11;
}
