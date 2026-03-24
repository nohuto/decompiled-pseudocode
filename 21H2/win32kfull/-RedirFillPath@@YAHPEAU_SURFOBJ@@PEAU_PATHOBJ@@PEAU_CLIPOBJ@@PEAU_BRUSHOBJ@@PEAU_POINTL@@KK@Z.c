/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029C140
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngFillPath @ 0x1C0147860 (EngFillPath.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX a6,
        FLONG a7)
{
  FLONG flOptions; // r12d
  MIX mix; // r13d
  __int64 HDEV; // rbx
  int v14; // eax
  _QWORD *i; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned int v18; // r8d
  __int64 v20; // [rsp+48h] [rbp-61h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-59h] BYREF
  __int128 v22; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+70h] [rbp-39h]
  _QWORD v25[2]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v26[40]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+7h]
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  __int64 v29; // [rsp+F8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a1);
  flOptions = a7;
  mix = a6;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
        v28 = 0LL;
        v27 = 0LL;
        v25[0] = 0LL;
        v14 = *(_DWORD *)(HDEV + 40);
        v22 = 0LL;
        v24 = 1;
        if ( (v14 & 1) != 0 )
        {
          *(_QWORD *)&v22 = *(_QWORD *)(HDEV + 48);
          v23 = HDEV;
          GreAcquireSemaphore(v22);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
          v14 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v14 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
          {
            v16 = i[6];
            v29 = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1792) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&v29,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v17 + 1792) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v20 )
                    *(_WORD *)(v20 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
        if ( v25[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v25);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
      }
    }
  }
  v18 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v21 )
    bMakeOpaque(v21);
  return v18;
}
