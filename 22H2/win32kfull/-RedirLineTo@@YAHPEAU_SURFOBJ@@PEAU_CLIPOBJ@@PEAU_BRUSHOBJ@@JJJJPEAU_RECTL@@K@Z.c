/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A4F80
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015AD8E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     EngLineTo @ 0x1C028D530 (EngLineTo.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A40D4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A6678 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX a9)
{
  __int64 v13; // rcx
  MIX mix; // r12d
  RECTL *prclBounds; // r13
  __int64 HDEV; // rbx
  __int64 v17; // rdx
  Gre::Base *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  _QWORD *i; // rbx
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v26; // [rsp+58h] [rbp-71h] BYREF
  struct SURFACE *v27; // [rsp+60h] [rbp-69h] BYREF
  __int128 v28; // [rsp+68h] [rbp-61h] BYREF
  __int64 v29; // [rsp+78h] [rbp-51h]
  int v30; // [rsp+80h] [rbp-49h]
  _QWORD v31[2]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v32[40]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]
  __int64 v35; // [rsp+108h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  mix = a9;
  prclBounds = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v31);
        v34 = 0LL;
        v33 = 0LL;
        v31[0] = 0LL;
        v21 = *(_DWORD *)(HDEV + 40);
        v28 = 0LL;
        v30 = 1;
        if ( (v21 & 1) != 0 )
        {
          Gre::Base::Globals(v18);
          *(_QWORD *)&v28 = *(_QWORD *)(HDEV + 48);
          v29 = HDEV;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
          {
            v20 = i[6];
            v35 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v23 + 1760) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28, v17, v19, v20);
        if ( v31[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v31);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v32);
      }
    }
  }
  v24 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v27 )
    bMakeOpaque(v27);
  return v24;
}
