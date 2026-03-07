__int64 __fastcall CalcFrustumOutline(CMILMatrix *a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  float *v5; // rbx
  unsigned int v6; // xmm1_4
  char v11; // r14
  float v12; // xmm7_4
  float v13; // xmm8_4
  __int64 v14; // rsi
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float *v20; // rdx
  float v21; // xmm3_4
  __int64 v22; // rcx
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int64 result; // rax
  _OWORD *v33; // rcx
  _QWORD v34[3]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD *v35; // [rsp+38h] [rbp-D0h]
  _BYTE v36[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v38[8]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v39[8]; // [rsp+E8h] [rbp-20h] BYREF

  v5 = (float *)&v37;
  v6 = *((_DWORD *)a1 + 7);
  LODWORD(v37) = *((_DWORD *)a1 + 3);
  *(_QWORD *)((char *)&v37 + 4) = __PAIR64__(*((_DWORD *)a1 + 11), v6);
  v11 = 0;
  v12 = 0.0;
  v13 = 0.0;
  HIDWORD(v37) = *((_DWORD *)a1 + 15);
  v14 = 4LL;
  v35 = a5;
  do
  {
    if ( *v5 == 0.0 )
      goto LABEL_9;
    v15 = log10f_0(COERCE_FLOAT(*(_DWORD *)v5 & _xmm));
    v16 = v15 / log10f_0(2.0);
    *v5 = v16;
    if ( v11 )
    {
      if ( v16 > v12 )
      {
        v12 = v16;
        goto LABEL_9;
      }
      v16 = fminf(v16, v13);
    }
    else
    {
      v11 = 1;
      v12 = v16;
    }
    v13 = v16;
LABEL_9:
    ++v5;
    --v14;
  }
  while ( v14 );
  v17 = sqrtf_0(v12 - v13);
  v18 = floorf_0(v17);
  v19 = powf_0(2.0, v18);
  v20 = (float *)v38 + 2;
  v38[0] = _xmm;
  v21 = v19;
  v22 = 8LL;
  v38[2] = _xmm;
  v38[1] = _xmm;
  v38[4] = _xmm;
  v38[3] = _xmm;
  v38[6] = _xmm;
  v38[5] = _xmm;
  v38[7] = _xmm;
  do
  {
    v23 = v21 * *(v20 - 2);
    v20[1] = v20[1];
    v24 = v21 * *(v20 - 1);
    *(v20 - 2) = v23;
    v25 = v21 * *v20;
    *(v20 - 1) = v24;
    *v20 = v25;
    v20 += 4;
    --v22;
  }
  while ( v22 );
  CMILMatrix::Transform(a1, (const struct MilPoint4F *)v38, (struct MilPoint4F *)v39, 8);
  v37 = v39[4];
  *(_OWORD *)&v34[1] = v39[0];
  v26 = Line3D::Line3D((__int64)v36, (float *)&v34[1], (float *)&v37);
  *(_OWORD *)a2 = *(_OWORD *)v26;
  v27 = v39[5];
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v26 + 16);
  v37 = v39[1];
  *(_OWORD *)&v34[1] = v27;
  v28 = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  *(_OWORD *)a3 = *(_OWORD *)v28;
  v29 = v39[6];
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v28 + 16);
  v37 = v39[2];
  *(_OWORD *)&v34[1] = v29;
  v30 = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  *(_OWORD *)a4 = *(_OWORD *)v30;
  v31 = v39[7];
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v30 + 16);
  v37 = v39[3];
  *(_OWORD *)&v34[1] = v31;
  result = Line3D::Line3D((__int64)v36, (float *)&v37, (float *)&v34[1]);
  v33 = v35;
  *v35 = *(_OWORD *)result;
  *((_QWORD *)v33 + 2) = *(_QWORD *)(result + 16);
  return result;
}
