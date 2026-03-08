/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DCCAC
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0360780 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DD184 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DE9BC (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C035E768 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGSESSIONMGR *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v21; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  void *v28; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+20h] BYREF

  v30 = 0;
  v28 = 0LL;
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v11 = v7;
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( *((_BYTE *)Current + 600) )
    {
      v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v16
        && (v19 = PsGetCurrentProcessSessionId(v15, v14, v17, v18),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v16, v19)) != 0LL) )
      {
        v21 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v30, &v28);
        v10 = v21;
        if ( v21 < 0 )
          WdLogSingleEntry1(3LL, v21);
        v6 = v28;
      }
      else
      {
        v10 = -1073741811;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14, v17, v18);
        WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
        v27 = PsGetCurrentProcessSessionId(v24, v23, v25, v26);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v27,
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
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  if ( (v10 & 0x80000000) != 0 )
  {
    *a3 = 0LL;
    goto LABEL_21;
  }
  *(_DWORD *)(v11 + 20) = v30;
  *(_QWORD *)(v11 + 32) = v6;
  *(_QWORD *)(v11 + 24) = a1;
  *a2 = (struct IPairedSurfaceObject *)v11;
  *a3 = v6;
  return v10;
}
