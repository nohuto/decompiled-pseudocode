/*
 * XREFs of ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A4110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     EngFillPath @ 0x1C028BC20 (EngFillPath.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3984 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5660 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v20; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v20, a1);
  if ( a1 )
  {
    v11 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    HDEV = UserGetHDEV(v12);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v15 = i[6];
          v18 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v15 + 1760) + 184LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v19,
                  (struct PDEVOBJ *)&v18,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v16 + 1760) + 184LL))(
                  a1,
                  ppo,
                  pco,
                  pbo,
                  pptlBrushOrg,
                  mix,
                  flOptions);
                if ( v19 )
                  *(_WORD *)(v19 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v20 )
    bBmpMakeOpaque(v20);
  return v11;
}
