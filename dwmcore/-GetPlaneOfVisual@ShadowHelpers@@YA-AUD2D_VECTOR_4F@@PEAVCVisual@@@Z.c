struct D2D_VECTOR_4F *__fastcall ShadowHelpers::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a3)
{
  FLOAT v4; // xmm3_4
  FLOAT v5; // xmm1_4
  FLOAT v7; // [rsp+20h] [rbp-40h] BYREF
  FLOAT v8; // [rsp+24h] [rbp-3Ch] BYREF
  struct D2D_VECTOR_4F v9; // [rsp+28h] [rbp-38h] BYREF
  struct D2D_VECTOR_4F v10; // [rsp+38h] [rbp-28h] BYREF
  struct D2D_VECTOR_4F v11; // [rsp+48h] [rbp-18h] BYREF

  CVisual::GetEffectiveSize((CVisual *)retstr, &v7, &v8);
  v4 = v7;
  if ( v7 == 0.0 )
    v4 = *(float *)&FLOAT_1_0;
  v5 = v8;
  if ( v8 == 0.0 )
    v5 = *(float *)&FLOAT_1_0;
  v10.x = 0.0;
  v10.z = 0.0;
  v11.z = 0.0;
  v9 = (struct D2D_VECTOR_4F)_xmm;
  v10.w = 1.0;
  v10.y = v5;
  v11.x = v4;
  v11.y = v5;
  v11.w = 1.0;
  D2DVectorHelper::CalculatePlane(this, &v9, &v10, &v11);
  return this;
}
