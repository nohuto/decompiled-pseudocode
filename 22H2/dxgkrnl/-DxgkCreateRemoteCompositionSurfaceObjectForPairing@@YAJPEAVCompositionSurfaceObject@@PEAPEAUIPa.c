/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02E1A3C
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02E1F14 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02E374C (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C03631F8 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(
        struct CompositionSurfaceObject *a1,
        struct IPairedSurfaceObject **a2,
        void **a3)
{
  void *v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rsi
  struct DXGPROCESS *Current; // rbp
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  unsigned int v16; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v18; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  void *v22; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp+20h] BYREF

  v24 = 0;
  v22 = 0LL;
  v6 = 0LL;
  v7 = operator new[](0x40uLL, 0x4B677844u, 256LL);
  if ( !v7 )
  {
    v10 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    *a3 = 0LL;
    return v10;
  }
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)v7 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
  *(_WORD *)(v7 + 12) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_WORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 56) = 0;
  v8 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(3LL, v8);
    *a3 = 0LL;
    v11 = v7;
LABEL_21:
    DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v11);
    return v10;
  }
  Current = DXGPROCESS::GetCurrent(v9);
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v11 = v7;
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( *((_BYTE *)Current + 600) )
    {
      v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v15
        && (v16 = PsGetCurrentProcessSessionId(v14),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, v16)) != 0LL) )
      {
        v18 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v24, &v22);
        v10 = v18;
        if ( v18 < 0 )
          WdLogSingleEntry1(3LL, v18);
        v6 = v22;
      }
      else
      {
        v10 = -1073741811;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
        WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
        v21 = PsGetCurrentProcessSessionId(v20);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v21,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        v11 = v7;
      }
    }
    else
    {
      v10 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
    }
  }
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  if ( (v10 & 0x80000000) != 0 )
  {
    *a3 = 0LL;
    goto LABEL_21;
  }
  *(_DWORD *)(v11 + 20) = v24;
  *(_QWORD *)(v11 + 32) = v6;
  *(_QWORD *)(v11 + 24) = a1;
  *a2 = (struct IPairedSurfaceObject *)v11;
  *a3 = v6;
  return v10;
}
