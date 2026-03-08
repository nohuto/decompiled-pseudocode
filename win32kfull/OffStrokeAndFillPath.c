/*
 * XREFs of OffStrokeAndFillPath @ 0x1C02EAC6C
 * Callers:
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027F3A0 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02B3560 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     EngStrokeAndFillPath @ 0x1C028BFF0 (EngStrokeAndFillPath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C02EA1C8 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 */

__int64 __fastcall OffStrokeAndFillPath(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG),
        int *a2,
        SURFOBJ *a3,
        struct _PATHOBJ *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *a10,
        MIX mixFill,
        FLONG a12)
{
  int v12; // edi
  LONG v14; // ebx
  POINTL *pptlBrushOrg; // rsi
  FLONG flOptions; // r13d
  unsigned int v19; // r15d
  int v20; // edi
  int v21; // ebx
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF

  v12 = a2[1];
  v14 = *a2;
  PATHOBJ_vOffset(a4, *a2, v12);
  CLIPOBJ_vOffset(pco, v14, v12);
  v23 = 0LL;
  pptlBrushOrg = a10;
  if ( a10 )
  {
    LODWORD(v23) = v14 + a10->x;
    pptlBrushOrg = (POINTL *)&v23;
    HIDWORD(v23) = v12 + a10->y;
  }
  flOptions = a12;
  v19 = a1(a3, a4, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, a12);
  if ( !v19 )
    v19 = EngStrokeAndFillPath(a3, a4, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
  v20 = -v12;
  v21 = -v14;
  PATHOBJ_vOffset(a4, v21, v20);
  CLIPOBJ_vOffset(pco, v21, v20);
  return v19;
}
