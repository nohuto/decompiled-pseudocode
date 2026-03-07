__int64 __fastcall anonymous_namespace_::ReverseAndLeftShift(__int64 a1, int *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  unsigned __int64 v7; // xmm6_8
  int v8; // xmm0_4
  int v9; // xmm1_4
  unsigned __int64 v10; // xmm8_8
  int v11; // r9d
  char v12; // dl
  __int64 v13; // r8
  int v14; // r10d
  __int64 v15; // r8
  unsigned __int64 v17; // [rsp+48h] [rbp-9h] BYREF
  int v18; // [rsp+50h] [rbp-1h]
  unsigned __int64 v19; // [rsp+54h] [rbp+3h] BYREF
  int v20; // [rsp+5Ch] [rbp+Bh]
  unsigned __int64 v21; // [rsp+60h] [rbp+Fh] BYREF
  int v22; // [rsp+68h] [rbp+17h]

  v2 = a2[6];
  LODWORD(v17) = a2[2];
  v18 = a2[10];
  v3 = a2[5];
  HIDWORD(v17) = v2;
  v4 = a2[1];
  HIDWORD(v19) = v3;
  v5 = *a2;
  LODWORD(v19) = v4;
  v6 = a2[9];
  v7 = v19;
  LODWORD(v21) = v5;
  v8 = a2[8];
  v20 = v6;
  v9 = a2[4];
  v22 = v8;
  HIDWORD(v21) = v9;
  v10 = v21;
  do
  {
    while ( 1 )
    {
      if ( (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v17)
        && !(unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v19) )
      {
        v18 = v11;
        v17 = v7;
        v7 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v19 = v7;
        v20 = 0;
      }
      if ( !(unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v19)
        || (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v21) )
      {
        break;
      }
      v7 = v10;
      v19 = v10;
      v20 = v14;
      v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v21 = v10;
      v22 = 0;
    }
  }
  while ( v12 );
  anonymous_namespace_::ConvertVectorArrayToMatrix(v13, (int *)&v17);
  return v15;
}
