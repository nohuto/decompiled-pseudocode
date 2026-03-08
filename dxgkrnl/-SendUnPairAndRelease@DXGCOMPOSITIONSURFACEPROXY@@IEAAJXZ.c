/*
 * XREFs of ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02DF340
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C02DF680 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C035F0A4 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendUnPairAndRelease(DXGCOMPOSITIONSURFACEPROXY *this)
{
  __int64 v2; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  _BYTE v20[16]; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 600) )
    {
      v2 = -2147483611LL;
LABEL_12:
      WdLogSingleEntry1(3LL, v2);
      goto LABEL_15;
    }
    v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v7
      || (v10 = PsGetCurrentProcessSessionId(v6, v5, v8, v9),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v10)) == 0LL) )
    {
      LODWORD(v2) = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v19 = PsGetCurrentProcessSessionId(v16, v15, v17, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v19,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
    v12 = *((_DWORD *)this + 5);
    if ( v12 && *((_BYTE *)this + 40) )
    {
      v13 = DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(SessionDataForSpecifiedSession, v12);
      v2 = v13;
      if ( v13 >= 0 )
      {
        *((_BYTE *)this + 40) = 0;
        goto LABEL_15;
      }
      goto LABEL_12;
    }
  }
LABEL_15:
  KeLeaveCriticalRegion();
  *((_DWORD *)this + 5) = 0;
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v2;
}
