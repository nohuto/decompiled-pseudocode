/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00EDE70
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0090A60 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C0299B70 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v6; // [rsp+20h] [rbp-19h] BYREF
  __int64 v7; // [rsp+30h] [rbp-9h]
  int v8; // [rsp+38h] [rbp-1h]
  _QWORD v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v11; // [rsp+78h] [rbp+3Fh]
  __int64 v12; // [rsp+80h] [rbp+47h]

  if ( !gpBmpDev && !gpRedirDev )
    return;
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
      return;
    if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
      return;
    v5 = *(_DWORD *)(v4 + 112);
    if ( (v5 & 0x40000) != 0 || (v5 & 0x4000000) == 0 )
      return;
LABEL_23:
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
    return;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v9);
  v12 = 0LL;
  v11 = 0LL;
  v9[0] = 0LL;
  v3 = *(_DWORD *)(v2 + 40);
  v6 = 0LL;
  v8 = 1;
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(v2 + 48);
    v7 = v2;
    GreAcquireSemaphore(v6);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v6, 11LL);
    v3 = *(_DWORD *)(v2 + 40);
  }
  if ( (v3 & 0x20000000) == 0 && !_bittest((const signed __int32 *)(v2 + 2096), 0xFu) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v6);
    return;
  }
  if ( (v3 & 0x20000) != 0
    || !_bittest((const signed __int32 *)(v2 + 2096), 0xFu)
    || (*(_DWORD *)(a1 + 112) & 0x400000) == 0
    || !*(_QWORD *)(a1 + 24) )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v6);
    if ( v9[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
    goto LABEL_23;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v6);
  if ( v9[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
}
