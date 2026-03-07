char __fastcall CMILMatrix::Get2DBoundsUsing2DInverse(CMILMatrix *a1, float *a2)
{
  float v2; // xmm2_4
  int v3; // r9d
  int v4; // xmm0_4
  int v5; // r9d
  float *v6; // r10
  float v7; // xmm1_4
  float *v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  __int64 v12; // rdx
  char result; // al
  float v14; // [rsp+20h] [rbp-30h] BYREF
  float v15; // [rsp+24h] [rbp-2Ch]
  int v16; // [rsp+28h] [rbp-28h]
  _DWORD v17[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v18; // [rsp+34h] [rbp-1Ch]
  float v19; // [rsp+38h] [rbp-18h]
  int v20; // [rsp+3Ch] [rbp-14h]

  v2 = *a2;
  v3 = 0;
  v4 = *((_DWORD *)a2 + 2);
  v15 = a2[1];
  *(float *)v17 = v15;
  v18 = *((_DWORD *)a2 + 3);
  v20 = v18;
  v14 = v2;
  v16 = v4;
  v17[1] = v4;
  v19 = v2;
  do
  {
    if ( !CMILMatrix::Get2DPointUsing2DInverse(
            a1,
            (const struct D2D_POINT_2F *)&v14 + v3,
            (struct D2D_POINT_2F *)&v14 + v3) )
      return 0;
    v3 = v5 + 1;
  }
  while ( v3 < 4 );
  v7 = v14;
  v8 = (float *)v17;
  v9 = v15;
  v10 = v14;
  v11 = v15;
  v12 = 3LL;
  do
  {
    v7 = fminf(v7, *(v8 - 1));
    v9 = fminf(v9, *v8);
    v10 = fmaxf(v10, *(v8 - 1));
    v11 = fmaxf(v11, *v8);
    v8 += 2;
    *v6 = v7;
    --v12;
  }
  while ( v12 );
  v6[1] = v9;
  result = 1;
  v6[2] = v10;
  v6[3] = v11;
  return result;
}
