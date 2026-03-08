/*
 * XREFs of ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B24C4
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x18005CBF0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801F7E00 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18007F8A8 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B25E8 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  FLOAT v9; // xmm1_4
  unsigned int v10; // xmm0_4
  _BYTE v12[48]; // [rsp+30h] [rbp-81h] BYREF
  int v13; // [rsp+60h] [rbp-51h]
  _BYTE v14[72]; // [rsp+68h] [rbp-49h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+B0h] [rbp-1h] BYREF

  if ( !CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)a4) )
    return 0;
  v15.m11 = *(FLOAT *)a4;
  v9 = *(float *)(a4 + 16);
  v13 = 0;
  v15.m12 = *(FLOAT *)(a4 + 4);
  v15.m22 = *(FLOAT *)(a4 + 20);
  v10 = *(_DWORD *)(a4 + 52);
  v15.m21 = v9;
  *(_QWORD *)&v15.m[2][0] = __PAIR64__(v10, *(_DWORD *)(a4 + 48));
  CMILMatrix::CMILMatrix((CMILMatrix *)v14, &v15);
  CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
    (const struct CRoundedRectangleGeometryData *)(*(_QWORD *)(a3 + 16) + 16LL),
    (const struct CMILMatrix *)v14,
    (struct CRoundedRectangleGeometryData *)v12);
  return CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(a1, a2, 50529027, (unsigned int)v12, a5);
}
