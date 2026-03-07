unsigned int __fastcall CExternalEffectGraph::CGraphRenderingContext::MakeHalfSizeTargetFromSource(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int128 *v3; // r8
  __int128 *v4; // rdx
  CExternalEffectGraph::CGraphRenderingContext *v5; // rax
  unsigned int v6; // r9d
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  float v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]

  v14 = 0;
  LODWORD(v11) = 0;
  if ( a3 == 1 )
  {
    v3 = &v10;
    v13 = 0.0;
    v4 = &v12;
    v12 = _xmm;
    *((float *)&v11 + 1) = FLOAT_0_25;
    v10 = *(_OWORD *)&_xmm;
  }
  else
  {
    v3 = &v12;
    HIDWORD(v11) = 0;
    v4 = &v10;
    v10 = _xmm;
    v13 = FLOAT_0_25;
    v12 = *(_OWORD *)&_xmm;
  }
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v8,
    (const struct D2D1::Matrix3x2F *)v4,
    (const struct D2D1::Matrix3x2F *)v3);
  v10 = v8;
  v11 = v9;
  return CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
           v5,
           v6,
           (const struct D2D1::Matrix3x2F *)&v10);
}
