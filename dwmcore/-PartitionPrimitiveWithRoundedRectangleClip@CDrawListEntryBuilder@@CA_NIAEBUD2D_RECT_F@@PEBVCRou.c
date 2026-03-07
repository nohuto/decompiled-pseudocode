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
