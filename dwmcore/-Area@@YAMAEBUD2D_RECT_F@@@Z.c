/*
 * XREFs of ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x1800B2B80
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B25E8 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801F7E00 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 * Callees:
 *     ?IsWellOrdered@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800B2BB8 (-IsWellOrdered@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

float __fastcall Area(const struct D2D_RECT_F *a1)
{
  float *v1; // rcx

  if ( IsWellOrdered(a1) )
    return (float)(v1[3] - v1[1]) * (float)(v1[2] - *v1);
  else
    return 0.0;
}
