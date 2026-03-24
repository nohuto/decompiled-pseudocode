/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C0101AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0018F78 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C029B294 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // eax
  __int128 v5; // [rsp+20h] [rbp-19h] BYREF
  __int64 v6; // [rsp+30h] [rbp-9h]
  int v7; // [rsp+38h] [rbp-1h]
  _QWORD v8[2]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v9[40]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v10; // [rsp+78h] [rbp+3Fh]
  __int64 v11; // [rsp+80h] [rbp+47h]

  if ( !gpBmpDev && !gpRedirDev )
    return;
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    if ( (struct SURFACE *)a1 == SURFACE::pdibDefault )
      return;
    if ( (unsigned int)SURFACE::bStockSurface((SURFACE *)a1) )
      return;
    v4 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 0x40000) != 0 || (v4 & 0x4000000) == 0 )
      return;
LABEL_23:
    vAccNotify((struct _SURFOBJ *)(a1 + 24), 8u, 0LL);
    return;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v8);
  v11 = 0LL;
  v10 = 0LL;
  v8[0] = 0LL;
  v3 = *(_DWORD *)(v2 + 40);
  v5 = 0LL;
  v7 = 1;
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(v2 + 48);
    v6 = v2;
    GreAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v5, 11LL);
    v3 = *(_DWORD *)(v2 + 40);
  }
  if ( (v3 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2128) & 0x8000) == 0 )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v5);
    return;
  }
  if ( (v3 & 0x20000) != 0
    || (*(_DWORD *)(v2 + 2128) & 0x8000) == 0
    || (*(_DWORD *)(a1 + 112) & 0x400000) == 0
    || !*(_QWORD *)(a1 + 24) )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v5);
    if ( v8[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v8);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
    goto LABEL_23;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v5);
  if ( v8[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
}
