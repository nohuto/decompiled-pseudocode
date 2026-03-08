/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0029D50
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0029AE8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     CLIPOBJ_GetRgn @ 0x1C0268090 (CLIPOBJ_GetRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C02AB1E0 (NtGdiCreateEllipticRgn.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C02AB3C0 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiPathToRegion @ 0x1C02C3B60 (NtGdiPathToRegion.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0029D88 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rdx
  struct HOBJ__ *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0LL;
  result = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v3, v1, 4u, 0);
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  return result;
}
