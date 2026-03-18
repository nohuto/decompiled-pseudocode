/*
 * XREFs of ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02E40D0
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C02E4410 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0363B34 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendUnPairAndRelease(DXGCOMPOSITIONSURFACEPROXY *this)
{
  __int64 v2; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  unsigned int v7; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 600) )
    {
      v2 = -2147483611LL;
LABEL_12:
      WdLogSingleEntry1(3LL, v2);
      goto LABEL_15;
    }
    v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v6
      || (v7 = PsGetCurrentProcessSessionId(v5),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, v7)) == 0LL) )
    {
      LODWORD(v2) = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v13 = PsGetCurrentProcessSessionId(v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v13,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
    v9 = *((_DWORD *)this + 5);
    if ( v9 && *((_BYTE *)this + 40) )
    {
      v10 = DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(SessionDataForSpecifiedSession, v9);
      v2 = v10;
      if ( v10 >= 0 )
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
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return (unsigned int)v2;
}
