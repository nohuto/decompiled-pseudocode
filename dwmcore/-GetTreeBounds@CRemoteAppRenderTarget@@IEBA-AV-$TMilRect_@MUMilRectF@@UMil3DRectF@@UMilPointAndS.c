__int64 __fastcall CRemoteAppRenderTarget::GetTreeBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  _BYTE v9[64]; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-38h]
  float v11[4]; // [rsp+70h] [rbp-28h] BYREF

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v10 = 0;
  CVisual::GetRootTransform(*(CVisual **)(v5 + 64), (struct CMILMatrix *)v9, 0);
  CMILMatrix::Invert((CMILMatrix *)v9, v6, v7);
  do
  {
    v11[v2] = (float)*(int *)(a1 + 4 * v2 + 264);
    ++v2;
  }
  while ( v2 < 4 );
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v9, (struct MilRectF *)v11, (float *)a2);
  return a2;
}
