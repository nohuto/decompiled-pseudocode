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
