void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint2F *a2, struct MilPoint2F *a3, int a4)
{
  __int64 v4; // rsi
  float *v6; // r11
  float v8; // xmm6_4
  float v9; // xmm5_4
  float *v10; // r11
  float v11; // xmm5_4
  float v12; // xmm5_4
  float v13; // xmm1_4

  v4 = a2 - a3;
  v6 = (float *)a3;
  do
  {
    v8 = *(float *)((char *)v6 + v4);
    v9 = *(float *)((char *)v6 + v4 + 4);
    *v6 = (float)((float)(v9 * *((float *)this + 4)) + (float)(v8 * *(float *)this)) + *((float *)this + 12);
    v6[1] = (float)((float)(v9 * *((float *)this + 5)) + (float)(v8 * *((float *)this + 1))) + *((float *)this + 13);
    if ( !CMILMatrix::IsAffine<1>((__int64)this, 1) )
    {
      v12 = (float)((float)(v11 * *((float *)this + 7)) + (float)(v8 * *((float *)this + 3))) + *((float *)this + 15);
      if ( COERCE_FLOAT(LODWORD(v12) & _xmm) >= 0.000081380211 )
      {
        v13 = v10[1] / v12;
        *v10 = *v10 / v12;
        v10[1] = v13;
      }
    }
    v6 = v10 + 2;
    --a4;
  }
  while ( a4 );
}
