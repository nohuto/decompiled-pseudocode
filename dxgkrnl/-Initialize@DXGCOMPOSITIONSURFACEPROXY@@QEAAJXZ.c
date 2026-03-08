/*
 * XREFs of ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DD184
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DCCAC (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C035DE24 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Initialize(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned int v2; // ebx
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v12; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  _BYTE v19[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v7
          && (v10 = PsGetCurrentProcessSessionId(v6, v5, v8, v9),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v10)) != 0LL) )
        {
          v12 = DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(SessionDataForSpecifiedSession, this);
          v2 = v12;
          if ( v12 < 0 )
            WdLogSingleEntry2(3LL, v12, this);
        }
        else
        {
          v2 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v18 = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v18,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v2 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    return v2;
  }
  else
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
}
