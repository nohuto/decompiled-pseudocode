/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A7240
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     EngFillPath @ 0x1C028BC20 (EngFillPath.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 v11; // rcx
  FLONG flOptions; // r12d
  MIX mix; // r13d
  __int64 HDEV; // rax
  Gre::Base *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *i; // rbx
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  struct SURFACE *v24; // [rsp+50h] [rbp-39h] BYREF
  __int128 v25; // [rsp+58h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h]
  int v27; // [rsp+70h] [rbp-19h]
  __int64 v28; // [rsp+78h] [rbp-11h] BYREF
  int v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+84h] [rbp-5h]
  __int16 v31; // [rsp+88h] [rbp-1h]
  __int64 v32; // [rsp+90h] [rbp+7h]
  __int64 v33; // [rsp+98h] [rbp+Fh]
  __int64 v34; // [rsp+D8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  flOptions = a7;
  mix = a6;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v11);
      v16 = HDEV;
      if ( HDEV )
      {
        v29 = 0;
        v30 = 0;
        v33 = 0LL;
        v32 = 0LL;
        v28 = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v31 = 256;
        v25 = 0LL;
        v27 = 1;
        if ( (v17 & 1) != 0 )
        {
          Gre::Base::Globals(v15);
          *(_QWORD *)&v25 = *(_QWORD *)(v16 + 48);
          v26 = v16;
          GreAcquireSemaphore(v25);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v25, 11LL);
        }
        if ( (*(_DWORD *)(v16 + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v16 + 1768); i; i = (_QWORD *)*i )
          {
            v19 = i[6];
            v34 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1760) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v20 + 1760) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
        if ( v28 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v28);
      }
    }
  }
  v21 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v24 )
    bMakeOpaque(v24);
  return v21;
}
