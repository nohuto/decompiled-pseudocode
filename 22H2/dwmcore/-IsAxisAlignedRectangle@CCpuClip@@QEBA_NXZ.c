/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180044E38
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CDC0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801FB180 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800094E0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180046168 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B2900 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CShape **this)
{
  char v2; // bl
  CShape **v3; // rcx

  v2 = 0;
  v3 = this + 10;
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( (!*this || CShape::IsAxisAlignedRectangle(*this))
    && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(this + 1)) )
  {
    return 1;
  }
  return v2;
}
