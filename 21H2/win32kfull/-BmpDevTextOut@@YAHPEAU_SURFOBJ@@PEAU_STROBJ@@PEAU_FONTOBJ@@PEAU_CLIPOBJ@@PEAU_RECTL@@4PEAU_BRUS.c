/*
 * XREFs of ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0299370
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0297AF8 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        struct _CLIPOBJ *a4,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  unsigned int v14; // esi
  CLIPOBJ *v15; // r9
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v22; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  if ( a1 )
  {
    v14 = EngTextOut(a1, pstro, pfo, v15, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v18 = i[6];
          v22 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 2096);
              if ( (v19 & 0x1000) != 0 && (v19 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 248LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, struct _CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v20 + 1760) + 248LL))(
                    a1,
                    pstro,
                    pfo,
                    a4,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v14;
}
