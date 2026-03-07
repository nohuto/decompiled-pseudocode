void __fastcall CMILMatrix::Scale(CMILMatrix *this, float a2, float a3, float a4)
{
  __int64 v4; // rdx
  float *v5; // rax
  __int64 v6; // r8
  float *v7; // rax
  __int64 v8; // r8
  float *v9; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v4 = 4LL;
    v5 = (float *)this;
    v6 = 4LL;
    do
    {
      *v5 = a2 * *v5;
      v5 += 4;
      --v6;
    }
    while ( v6 );
    v7 = (float *)((char *)this + 4);
    v8 = 4LL;
    do
    {
      *v7 = a3 * *v7;
      v7 += 4;
      --v8;
    }
    while ( v8 );
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v9 = (float *)((char *)this + 8);
      do
      {
        *v9 = a4 * *v9;
        v9 += 4;
        --v4;
      }
      while ( v4 );
    }
    *((_BYTE *)this + 64) &= 0xCCu;
  }
}
