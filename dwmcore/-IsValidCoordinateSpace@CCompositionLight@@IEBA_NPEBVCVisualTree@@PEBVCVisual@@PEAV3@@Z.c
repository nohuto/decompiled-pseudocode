bool __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  const struct Windows::Foundation::Numerics::float4x4 *v6; // rdx
  float v7; // xmm0_4
  _BYTE v9[64]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+70h] [rbp-18h]

  if ( !CVisualTree::_IsInTree(a2, (__int64)a4, 1) )
    return 0;
  v10 = 0;
  if ( (int)CVisual::GetWorldTransform(a4, a2, 3, (struct CMILMatrix *)v9, 0LL, 0LL) < 0 )
    return 0;
  v7 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v9, v6);
  return CMILMatrix::IsInvertibleDeterminant(v7);
}
