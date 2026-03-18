/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0022804
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0022588 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C00FBB60 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C026B340 (CLIPOBJ_GetRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C029DFA0 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02AC150 (NtGdiPathToRegion.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0022858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct HOBJ__ *v2; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
  v2 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v4, *this, 4u, 0);
  if ( v5 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v4);
  return v2;
}
