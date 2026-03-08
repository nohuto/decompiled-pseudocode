/*
 * XREFs of ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x1801FC680
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18026FF00 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

bool __fastcall CEdgeFlagsMap::CRectangleMapStrategy::IsCompatibleTransform(const struct Matrix3x3 *a1)
{
  const struct D2D_MATRIX_3X2_F *v1; // rdx
  _DWORD *v2; // rcx
  int v3; // xmm1_4
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  _DWORD v9[6]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    goto LABEL_4;
  if ( Matrix3x3::Is2DAffine(a1) )
  {
    v3 = v2[1];
    v9[0] = *v2;
    v4 = v2[3];
    v9[1] = v3;
    v5 = v2[4];
    v9[2] = v4;
    v6 = v2[6];
    v9[3] = v5;
    v7 = v2[7];
    v9[4] = v6;
    v9[5] = v7;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v9, v1) )
LABEL_4:
      LOBYTE(v1) = 1;
  }
  return (char)v1;
}
