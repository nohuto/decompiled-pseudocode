bool __fastcall CProjectedShadowScene::IsValidVisual(const struct CVisualTree *a1, struct CVisual *a2)
{
  const struct Windows::Foundation::Numerics::float4x4 *v4; // rdx
  float v5; // xmm0_4
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  if ( !(unsigned __int8)CVisualTree::_IsInTree(a1, a2, 1LL) )
    return 0;
  v8 = 0;
  if ( (int)CVisual::GetWorldTransform(a2, a1, 3LL, v7, 0LL, 0LL) < 0 )
    return 0;
  v5 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v7, v4);
  return CMILMatrix::IsInvertibleDeterminant(v5);
}
