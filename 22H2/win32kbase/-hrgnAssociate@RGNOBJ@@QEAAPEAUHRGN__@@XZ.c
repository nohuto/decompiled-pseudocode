/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007D19C
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C007D110 (-GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C016AE70 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v2; // rdi
  struct HOBJ__ *v3; // rbx
  struct HOBJ__ *inserted; // rax
  struct OBJECT *v5; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v8; // [rsp+40h] [rbp-18h]

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
  v2 = *this;
  v3 = 0LL;
  if ( !v8 )
  {
    inserted = HmgInsertObjectInternal(v2, 1u, 4);
    v5 = v8;
    v3 = inserted;
    if ( inserted )
      v5 = v2;
    v8 = v5;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
  return v3;
}
