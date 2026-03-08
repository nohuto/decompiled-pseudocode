/*
 * XREFs of ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A44B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3984 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5660 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v22; // [rsp+60h] [rbp-38h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v22, a1);
  if ( a1 )
  {
    v13 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
    HDEV = UserGetHDEV(v14);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v17 = i[6];
          v20 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1760) + 312LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v21,
                  (struct PDEVOBJ *)&v20,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v18 + 1760) + 312LL))(
                  a1,
                  pco,
                  pbo,
                  x1,
                  y1,
                  x2,
                  y2,
                  prclBounds,
                  mix);
                if ( v21 )
                  *(_WORD *)(v21 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v22 )
    bBmpMakeOpaque(v22);
  return v13;
}
