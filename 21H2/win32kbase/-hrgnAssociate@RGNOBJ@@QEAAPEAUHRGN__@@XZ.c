/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0032610
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z @ 0x1C0032580 (-GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
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
