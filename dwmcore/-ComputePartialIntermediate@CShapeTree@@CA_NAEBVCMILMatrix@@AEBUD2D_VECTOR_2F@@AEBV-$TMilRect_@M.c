char __fastcall CShapeTree::ComputePartialIntermediate(struct CMILMatrix *a1, float *a2, float *a3, int *a4, float *a5)
{
  int v6; // xmm2_4
  int v8; // xmm0_4
  const struct CMILMatrix *v9; // rdx
  int v10; // xmm1_4
  signed int v11; // r9d
  int v12; // r9d
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  char result; // al
  unsigned __int64 v22[2]; // [rsp+28h] [rbp-31h] BYREF
  __int128 v23; // [rsp+38h] [rbp-21h] BYREF
  int v24; // [rsp+48h] [rbp-11h] BYREF
  int v25; // [rsp+4Ch] [rbp-Dh]
  int v26; // [rsp+50h] [rbp-9h]
  int v27; // [rsp+54h] [rbp-5h]
  int v28; // [rsp+58h] [rbp-1h]
  int v29; // [rsp+5Ch] [rbp+3h]
  int v30; // [rsp+60h] [rbp+7h]
  int v31; // [rsp+64h] [rbp+Bh]

  v6 = *a4;
  v8 = a4[2];
  v9 = a1;
  v25 = a4[1];
  v27 = v25;
  v10 = a4[3];
  v11 = 0;
  v29 = v10;
  v31 = v10;
  v24 = v6;
  v26 = v8;
  v28 = v8;
  v30 = v6;
  do
  {
    if ( !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)&v24 + v11,
            v9,
            (struct D2D_POINT_2F *)&v24 + v11) )
      return 0;
    v11 = v12 + 1;
  }
  while ( (unsigned int)v11 < 4 );
  v22[0] = 4LL;
  v22[1] = (unsigned __int64)&v24;
  v23 = 0LL;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
    (float *)&v23,
    v22);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v23, 1.0, 1.0);
  v13 = *(float *)&v23;
  v14 = *a3;
  if ( *a3 > *(float *)&v23 )
    v13 = *a3;
  v15 = *((float *)&v23 + 1);
  v16 = a3[1];
  v17 = *((float *)&v23 + 1);
  if ( v16 > *((float *)&v23 + 1) )
  {
    v15 = a3[1];
    v17 = v15;
  }
  v18 = *((float *)&v23 + 2);
  v19 = *((float *)&v23 + 2);
  if ( *((float *)&v23 + 2) > a3[2] )
  {
    v18 = a3[2];
    v19 = v18;
  }
  v20 = *((float *)&v23 + 3);
  if ( *((float *)&v23 + 3) > a3[3] )
    v20 = a3[3];
  if ( v19 <= v13 || v20 <= v17 )
  {
    v13 = 0.0;
    v18 = 0.0;
    v15 = 0.0;
    v20 = 0.0;
  }
  result = 1;
  *a5 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v13) * *a2;
  a5[1] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) + v15) * a2[1];
  a5[2] = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v18) * *a2;
  a5[3] = (float)(v20 + COERCE_FLOAT(LODWORD(v16) ^ _xmm)) * a2[1];
  return result;
}
