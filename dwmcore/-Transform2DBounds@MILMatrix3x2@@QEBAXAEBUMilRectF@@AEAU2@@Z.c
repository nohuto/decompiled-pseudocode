void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct MilRectF *a2, struct MilRectF *a3)
{
  float v3; // xmm2_4
  int v4; // xmm1_4
  float *v5; // rax
  float v6; // xmm1_4
  float *v7; // rcx
  float v8; // xmm4_4
  unsigned int v9; // edx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // [rsp+20h] [rbp-30h] BYREF
  float v13; // [rsp+24h] [rbp-2Ch]
  int v14; // [rsp+28h] [rbp-28h]
  _DWORD v15[2]; // [rsp+2Ch] [rbp-24h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+3Ch] [rbp-14h]

  v3 = *(float *)a2;
  v4 = *((_DWORD *)a2 + 2);
  v13 = *((float *)a2 + 1);
  *(float *)v15 = v13;
  v16 = *((_DWORD *)a2 + 3);
  v18 = v16;
  v12 = v3;
  v14 = v4;
  *(float *)&v15[1] = v3;
  v17 = v4;
  MILMatrix3x2::TransformPoints(this, (const struct MilPoint2F *)&v12, (struct MilPoint2F *)&v12, 4u);
  v6 = v13;
  v7 = (float *)v15;
  v8 = v12;
  v9 = 1;
  v5[1] = v13;
  v5[3] = v6;
  *v5 = v8;
  v5[2] = v8;
  do
  {
    v10 = *(v7 - 1);
    if ( v8 > v10 )
    {
      *v5 = v10;
      v8 = v10;
    }
    else if ( v10 > v5[2] )
    {
      v5[2] = v10;
    }
    v11 = *v7;
    if ( v6 > *v7 )
    {
      v5[1] = v11;
      v6 = v11;
    }
    else if ( v11 > v5[3] )
    {
      v5[3] = v11;
    }
    ++v9;
    v7 += 2;
  }
  while ( v9 < 4 );
}
