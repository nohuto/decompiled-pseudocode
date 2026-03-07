__int64 __fastcall CCpuClipAntialiasSink::CalcBoundingRect(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  int v6; // r12d
  __int64 result; // rax
  unsigned int v8; // edi
  float v9; // xmm0_4
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  float v13; // xmm5_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  unsigned __int64 v22; // rax
  float v23; // xmm4_4
  unsigned int v24; // ecx
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  unsigned int v28; // edx
  float v29; // xmm3_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  unsigned __int64 v43; // [rsp+20h] [rbp-40h] BYREF
  __int64 v44; // [rsp+28h] [rbp-38h]
  __int64 v45; // [rsp+30h] [rbp-30h]
  __int64 v46; // [rsp+38h] [rbp-28h]
  __int64 v47; // [rsp+40h] [rbp-20h]
  __int64 v48; // [rsp+48h] [rbp-18h]
  __int64 v49; // [rsp+50h] [rbp-10h]
  __int64 v50; // [rsp+58h] [rbp-8h]
  float Y; // [rsp+A0h] [rbp+40h] BYREF

  *a4 = 3.4028235e38;
  a4[1] = 3.4028235e38;
  v6 = a2;
  result = 4286578687LL;
  a4[2] = -3.4028235e38;
  a4[3] = -3.4028235e38;
  if ( *(float *)(a3 + 4) < *(float *)(a3 + 8) )
  {
    v8 = 0;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(a1, a2, a3, &v43);
    v9 = modff(*(float *)(a3 + 4), &Y);
    v10 = v44;
    v11 = 2LL;
    v12 = v43;
    v13 = v9;
    if ( v9 <= 0.000081380211 )
    {
      while ( 1 )
      {
        v14 = v8;
        if ( v8 >= v12 )
          break;
        ++v8;
        v15 = a4[1];
        v16 = a4[2];
        v17 = a4[3];
        v18 = fminf(*a4, *(float *)(v10 + 8 * v14));
        *a4 = v18;
        v19 = fminf(v15, *(float *)(v10 + 8 * v14 + 4));
        a4[1] = v19;
        v20 = fmaxf(v16, *(float *)(v10 + 8 * v14));
        a4[2] = v20;
        v21 = fmaxf(v17, *(float *)(v10 + 8 * v14 + 4));
        a4[3] = v21;
        if ( v8 >= 2 )
          goto LABEL_5;
      }
LABEL_25:
      gsl::details::terminate((gsl::details *)v11);
      JUMPOUT(0x18007C56ELL);
    }
    v36 = 0LL;
    do
    {
      if ( v36 >= v12 )
        goto LABEL_25;
      v37 = v8 + 2;
      if ( v37 >= v12 )
        goto LABEL_25;
      ++v8;
      v38 = (float)(1.0 - v13) * *(float *)(v10 + 8 * v36 + 4);
      v39 = (float)(1.0 - v13) * *(float *)(v10 + 8 * v36++);
      v40 = v39 + (float)(v13 * *(float *)(v10 + 8 * v37));
      v41 = v38 + (float)(v13 * *(float *)(v10 + 8 * v37 + 4));
      v18 = fminf(*a4, v40);
      v20 = fmaxf(a4[2], v40);
      v42 = a4[3];
      v19 = fminf(a4[1], v41);
      *a4 = v18;
      v21 = fmaxf(v42, v41);
      a4[2] = v20;
      a4[1] = v19;
      a4[3] = v21;
    }
    while ( v8 < 2 );
LABEL_5:
    if ( v6 != 1 && v12 - 2 > 2 )
    {
      v22 = 2LL;
      while ( v22 < v12 )
      {
        v18 = fminf(v18, *(float *)(v10 + 8 * v22));
        v11 = (unsigned int)(v11 + 1);
        *a4 = v18;
        v19 = fminf(v19, *(float *)(v10 + 8 * v22 + 4));
        a4[1] = v19;
        v20 = fmaxf(v20, *(float *)(v10 + 8 * v22));
        a4[2] = v20;
        v21 = fmaxf(v21, *(float *)(v10 + 8 * v22 + 4));
        v22 = (unsigned int)v11;
        a4[3] = v21;
        if ( (unsigned int)v11 >= v12 - 2 )
          goto LABEL_10;
      }
      goto LABEL_25;
    }
LABEL_10:
    v23 = modff(*(float *)(a3 + 8), &Y);
    if ( v23 > 0.000081380211 )
    {
      v11 = (unsigned int)(v43 - 4);
      v28 = v11 + 2;
      while ( 1 )
      {
        result = v28;
        if ( v28 >= v12 )
          break;
        if ( (unsigned int)v11 >= v12 || v28 >= v12 )
          goto LABEL_25;
        v29 = (float)(1.0 - v23) * *(float *)(v10 + 8 * v11 + 4);
        v30 = (float)(1.0 - v23) * *(float *)(v10 + 8 * v11);
        v11 = (unsigned int)(v11 + 1);
        ++v28;
        v31 = (float)(v23 * *(float *)(v10 + 8 * result)) + v30;
        v32 = v29 + (float)(v23 * *(float *)(v10 + 8 * result + 4));
        v33 = fminf(a4[1], v32);
        *a4 = fminf(*a4, v31);
        v34 = fmaxf(a4[2], v31);
        a4[1] = v33;
        v35 = fmaxf(a4[3], v32);
        a4[2] = v34;
        a4[3] = v35;
      }
    }
    else
    {
      v24 = v43 - 2;
      while ( 1 )
      {
        result = v24;
        if ( v24 >= v12 )
          break;
        ++v24;
        v25 = a4[1];
        *a4 = fminf(*a4, *(float *)(v10 + 8 * result));
        v26 = a4[2];
        a4[1] = fminf(v25, *(float *)(v10 + 8 * result + 4));
        v27 = a4[3];
        a4[2] = fmaxf(v26, *(float *)(v10 + 8 * result));
        a4[3] = fmaxf(v27, *(float *)(v10 + 8 * result + 4));
      }
    }
  }
  return result;
}
