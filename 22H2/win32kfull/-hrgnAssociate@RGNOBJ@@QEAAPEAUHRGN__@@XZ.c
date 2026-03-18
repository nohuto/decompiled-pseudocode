/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E760
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C007E4F8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     CLIPOBJ_GetRgn @ 0x1C0265540 (CLIPOBJ_GetRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C02A8C00 (NtGdiCreateEllipticRgn.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C02A8DE0 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiPathToRegion @ 0x1C02C1330 (NtGdiPathToRegion.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E7B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C02651D4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
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
