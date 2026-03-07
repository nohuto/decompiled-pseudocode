__int64 __fastcall OffStrokePath(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX),
        int *a2,
        SURFOBJ *a3,
        struct _PATHOBJ *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *a8,
        LINEATTRS *a9,
        MIX mix)
{
  int v10; // edi
  LONG v12; // ebx
  POINTL *pptlBrushOrg; // rsi
  LINEATTRS *plineattrs; // r15
  unsigned int v17; // r12d
  int v18; // edi
  int v19; // ebx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v10 = a2[1];
  v12 = *a2;
  PATHOBJ_vOffset(a4, *a2, v10);
  CLIPOBJ_vOffset(pco, v12, v10);
  v21 = 0LL;
  pptlBrushOrg = a8;
  if ( a8 )
  {
    LODWORD(v21) = v12 + a8->x;
    pptlBrushOrg = (POINTL *)&v21;
    HIDWORD(v21) = v10 + a8->y;
  }
  plineattrs = a9;
  v17 = a1(a3, a4, pco, pxo, pbo, pptlBrushOrg, a9, mix);
  if ( !v17 && ((plineattrs->fl & 1) != 0 || (a4->fl & 1) != 0) )
    v17 = EngStrokePath(a3, a4, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  v18 = -v10;
  v19 = -v12;
  PATHOBJ_vOffset(a4, v19, v18);
  CLIPOBJ_vOffset(pco, v19, v18);
  return v17;
}
