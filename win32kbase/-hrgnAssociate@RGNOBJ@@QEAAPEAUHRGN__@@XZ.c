/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C001C658
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C001C5D0 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0197C30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001C690 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = *this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  }
  return result;
}
