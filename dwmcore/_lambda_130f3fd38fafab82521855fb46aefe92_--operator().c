char __fastcall lambda_130f3fd38fafab82521855fb46aefe92_::operator()(
        __int64 a1,
        int *a2,
        CRoundedRectangleGeometryData *a3)
{
  int v4; // xmm2_4
  int v5; // xmm3_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  __int64 v10; // r10
  bool HasAnyRoundedCorners; // r15
  __int64 v12; // rcx
  __int64 v13; // r12
  int v14; // esi
  unsigned int v15; // r11d
  char *v16; // r14
  char *v17; // r13
  __int64 v18; // r11
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm3_4
  const struct CMilPoint2F *v22; // rdi
  float *v23; // r9
  FLOAT v25; // xmm3_4
  float v26; // xmm1_4
  float *v27; // r9
  float v28; // xmm4_4
  float v29; // xmm5_4
  const struct CMilPoint2F *v30; // rcx
  float v31; // xmm4_4
  float v32; // xmm5_4
  unsigned __int64 v33; // xmm1_8
  struct D2D_VECTOR_2F v34; // [rsp+20h] [rbp-79h] BYREF
  float v35[2]; // [rsp+28h] [rbp-71h] BYREF
  float v36[2]; // [rsp+30h] [rbp-69h] BYREF
  _DWORD v37[2]; // [rsp+38h] [rbp-61h] BYREF
  char *v38; // [rsp+40h] [rbp-59h]
  char *v39; // [rsp+48h] [rbp-51h]
  char *v40; // [rsp+50h] [rbp-49h]
  int v41; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v42[7]; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v43; // [rsp+78h] [rbp-21h] BYREF
  int v44; // [rsp+7Ch] [rbp-1Dh]
  int v45; // [rsp+80h] [rbp-19h]
  int v46; // [rsp+84h] [rbp-15h]
  int v47; // [rsp+88h] [rbp-11h]
  int v48; // [rsp+8Ch] [rbp-Dh]
  int v49; // [rsp+90h] [rbp-9h]
  int v50; // [rsp+94h] [rbp-5h]
  _OWORD v51[2]; // [rsp+98h] [rbp-1h] BYREF

  v4 = *a2;
  v5 = *(_DWORD *)a3;
  v51[1] = _xmm;
  v44 = a2[1];
  v46 = v44;
  v48 = a2[3];
  v50 = v48;
  v6 = *((_DWORD *)a3 + 1);
  v51[0] = _xmm_bf8000003f800000bf800000bf800000;
  v7 = a2[2];
  v42[0] = v6;
  v42[2] = v6;
  v8 = *((_DWORD *)a3 + 3);
  v45 = v7;
  v47 = v7;
  v9 = *((_DWORD *)a3 + 2);
  v42[4] = v8;
  v42[6] = v8;
  v43 = v4;
  v49 = v4;
  v41 = v5;
  v42[1] = v9;
  v42[3] = v9;
  v42[5] = v5;
  HasAnyRoundedCorners = CRoundedRectangleGeometryData::HasAnyRoundedCorners(a3);
  v13 = v12 - (_QWORD)v42;
  v14 = 0;
  v38 = (char *)v51 - v12 + 4;
  v15 = 0;
  v16 = (char *)v42 - v12;
  v17 = (char *)v51 - v12;
  v39 = (char *)&v43 - v12;
  v40 = (char *)&v42[-1] - v12;
  do
  {
    if ( !(unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v10, v15) )
      goto LABEL_9;
    v19 = v10;
    if ( !*(_BYTE *)(v10 + 52) )
      v19 = v10 + 8 * v18;
    v20 = *(float *)(v19 + 16);
    v21 = *(float *)(v19 + 20);
    v22 = (const struct CMilPoint2F *)&v42[2 * v18 - 1];
    if ( (unsigned __int8)operator==(&v43 + 2 * v18, v22) )
    {
      if ( v20 >= *v23 )
      {
        if ( v21 >= v23[1] )
        {
          *v23 = v20;
          *(float *)&v16[v13 + 4 + (_QWORD)v23] = v21;
          ++v14;
          goto LABEL_9;
        }
        if ( v20 > *v23 )
          return 0;
      }
      if ( v21 > v23[1] )
        return 0;
    }
    else
    {
      v25 = v21 * *(float *)&v38[(_QWORD)v23 - 16];
      v34.x = *(float *)&v17[(_QWORD)v23 - 16] * v20;
      v26 = *(float *)&v39[(_QWORD)v23 - 16];
      v34.y = v25;
      v35[0] = v26 - v34.x;
      v35[1] = v26 - v25;
      if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(a3, (unsigned int)v18) )
      {
        v31 = v28 * *v27;
        v32 = v29 * v27[1];
        v33 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)&v40[(_QWORD)v27 - 16],
                (__m128)*(unsigned int *)((char *)v27 + (_QWORD)v16 - 16)).m128_u64[0];
        v36[1] = *((float *)&v33 + 1);
        v37[0] = v33;
        v36[0] = *(float *)&v33 - v31;
        *(float *)&v37[1] = *((float *)&v33 + 1) - v32;
        if ( CRoundedRectangleGeometryData::IsPointOutsideCorner(
               (const struct CMilPoint2F *)v36,
               (const struct CMilPoint2F *)v35,
               &v34) )
        {
          return 0;
        }
        v30 = (const struct CMilPoint2F *)v37;
      }
      else
      {
        v30 = v22;
      }
      if ( CRoundedRectangleGeometryData::IsPointOutsideCorner(v30, (const struct CMilPoint2F *)v35, &v34) )
        return 0;
    }
LABEL_9:
    v15 = v18 + 1;
  }
  while ( v15 < 4 );
  if ( v14 && (!HasAnyRoundedCorners || *((float *)a3 + 12) > *(float *)(v10 + 48)) )
    *((_DWORD *)a3 + 12) = *(_DWORD *)(v10 + 48);
  return 1;
}
