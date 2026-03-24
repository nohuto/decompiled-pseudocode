/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028CF00
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B6310 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B9600 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028D374 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028E524 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C02B7C64 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(struct IPairedSurfaceObject **a1, void **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGSESSIONMGR *v23; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  void *v35; // rax
  _BYTE v36[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v37; // [rsp+70h] [rbp+18h] BYREF
  void *v38; // [rsp+78h] [rbp+20h] BYREF

  v37 = 0;
  v38 = 0LL;
  v6 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool);
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    *((_WORD *)v6 + 6) = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_WORD *)v6 + 12) = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    v6[10] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -1073741801LL;
LABEL_7:
    v11 = WdLogNewEntry5_WdWarning(v5, v4, v7);
    *(_QWORD *)(v11 + 24) = v8;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_8;
  }
  v9 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v6);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_7;
  Current = DXGPROCESS::GetCurrent(v5, v4, v7, v10);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      if ( !*((_BYTE *)Current + 488) )
      {
        LODWORD(v8) = -2147483611;
        v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v20 + 24) = -2147483611LL;
        WdLogEvent5_WdWarning(v20);
      }
      if ( (int)v8 >= 0 )
      {
        v23 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 102);
        if ( v23 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v23,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( !SessionDataForSpecifiedSession )
        {
          LODWORD(v8) = -1073741811;
          v26 = WdLogNewEntry5_WdError(v22, v21);
          *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v28, v27);
          *(_QWORD *)(v26 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v26);
        }
        if ( (int)v8 >= 0 )
        {
          v29 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v37, &v38);
          v8 = v29;
          if ( v29 < 0 )
          {
            v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
            *(_QWORD *)(v33 + 24) = v8;
            WdLogEvent5_WdWarning(v33);
          }
        }
      }
    }
    KeLeaveCriticalRegion();
    if ( v36[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v34);
    if ( (int)v8 >= 0 )
    {
      v6[5] = v37;
      v35 = v38;
      *a1 = (struct IPairedSurfaceObject *)v6;
      *a2 = v35;
      return (unsigned int)v8;
    }
LABEL_8:
    *a2 = 0LL;
    if ( v6 )
      DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v6);
    return (unsigned int)v8;
  }
  v16 = WdLogNewEntry5_WdError(v14, v13);
  *(_QWORD *)(v16 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return 3221225485LL;
}
