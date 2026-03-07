char __fastcall CFilterEffect::InvertTransformToCalc3DBounds(
        __int64 a1,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  char v3; // bl
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  float *v7; // r8
  float *v8; // r9
  _OWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+60h] [rbp-18h]

  v3 = 1;
  v4 = *(_OWORD *)(a1 + 16);
  v10[0] = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  v10[1] = v4;
  v6 = *(_OWORD *)(a1 + 48);
  v10[2] = v5;
  v10[3] = v6;
  v11 = *(_DWORD *)(a1 + 64);
  if ( !CMILMatrix::Invert((CMILMatrix *)v10, a2, a3) )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v10, v8, v7);
  return v3;
}
