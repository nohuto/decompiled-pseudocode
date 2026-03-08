/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A8660
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *a7,
        MIX a8)
{
  __int64 v12; // rcx
  MIX mix; // r12d
  LINEATTRS *plineattrs; // r13
  __int64 HDEV; // rax
  Gre::Base *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  _QWORD *i; // rbx
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v24; // [rsp+58h] [rbp-49h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-41h] BYREF
  __int128 v26; // [rsp+68h] [rbp-39h] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h]
  int v28; // [rsp+80h] [rbp-21h]
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  int v30; // [rsp+90h] [rbp-11h]
  int v31; // [rsp+94h] [rbp-Dh]
  __int16 v32; // [rsp+98h] [rbp-9h]
  __int64 v33; // [rsp+A0h] [rbp-1h]
  __int64 v34; // [rsp+A8h] [rbp+7h]
  __int64 v35; // [rsp+E8h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  mix = a8;
  plineattrs = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v12);
      v17 = HDEV;
      if ( HDEV )
      {
        v30 = 0;
        v31 = 0;
        v34 = 0LL;
        v33 = 0LL;
        v29 = 0LL;
        v18 = *(_DWORD *)(HDEV + 40);
        v32 = 256;
        v26 = 0LL;
        v28 = 1;
        if ( (v18 & 1) != 0 )
        {
          Gre::Base::Globals(v16);
          *(_QWORD *)&v26 = *(_QWORD *)(v17 + 48);
          v27 = v17;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
        }
        if ( (*(_DWORD *)(v17 + 40) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v17 + 1768); i; i = (_QWORD *)*i )
          {
            v20 = i[6];
            v35 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v21 + 1760) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
        if ( v29 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v29);
      }
    }
  }
  v22 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v25 )
    bMakeOpaque(v25);
  return v22;
}
