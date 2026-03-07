void __fastcall CCpuClipAntialiasDrawListEntry::FillLightingData(
        __int64 a1,
        __int64 a2,
        char a3,
        CMILMatrix *a4,
        __int64 *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  float v10; // xmm0_4
  int *v11; // r15
  float v12; // xmm6_4
  unsigned int v13; // r12d
  float *v14; // rbx
  float *v15; // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm1_4
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  float v23; // xmm0_4
  float v24; // xmm7_4
  unsigned int v25; // eax
  unsigned int v26; // r13d
  float v27; // xmm6_4
  float *v28; // rbx
  float *v29; // rax
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  __int64 v34; // rcx
  __int64 v35; // rax
  __m128 v36; // xmm6
  __int64 v37; // rax
  __m128 v38; // xmm1
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int i; // edx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  CMILMatrix *v45; // r13
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r9d
  int v54; // xmm6_4
  int v55; // xmm7_4
  float v56; // xmm9_4
  float v57; // xmm10_4
  __int64 v58; // rbx
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  unsigned int v63; // [rsp+3Ch] [rbp-CCh]
  float Y; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Y_8[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v66; // [rsp+88h] [rbp-80h]
  _QWORD v67[3]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v68[3]; // [rsp+B0h] [rbp-58h] BYREF
  CMILMatrix *v69; // [rsp+C8h] [rbp-40h] BYREF
  float v70; // [rsp+D0h] [rbp-38h]
  float v71; // [rsp+D4h] [rbp-34h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = 0;
  v69 = a4;
  memset(Y_8, 0, sizeof(Y_8));
  CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(v5, 0, a2, (__int64)Y_8);
  v8 = *((_DWORD *)a5 + 3);
  v9 = 0;
  v63 = v8;
  v10 = modff(*(float *)(a2 + 4), &Y);
  v11 = (int *)(a5 + 1);
  if ( v10 > 0.000081380211 )
  {
    v9 = 2;
    v12 = 1.0 - v10;
    v13 = 0;
    do
    {
      v14 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v13 + 2);
      v15 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v13);
      v16 = v12 * *v15;
      v17 = v12 * v15[1];
      LODWORD(v15) = v13++;
      v18 = *v11 * (int)v15;
      v19 = *a5;
      v20 = v17 + (float)(v10 * v14[1]);
      *(float *)(v18 + v19 + 16) = v16 + (float)(v10 * *v14);
      *(float *)(v18 + v19 + 20) = v20;
      *(_DWORD *)(v18 + v19 + 24) = 0;
    }
    while ( v13 < 2 );
    v8 = v63;
  }
  v23 = modff(*(float *)(a2 + 8), &Y);
  v24 = v23;
  if ( v23 > 0.000081380211 )
  {
    v25 = *((_DWORD *)a5 + 3);
    v26 = v25 - 2;
    if ( v25 >= 2 )
    {
      v27 = 1.0 - v23;
      do
      {
        v28 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v26);
        v29 = (float *)gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v26 - 2);
        v30 = v27 * *v29;
        v31 = v27 * v29[1];
        LODWORD(v29) = v26++;
        v32 = (float)(v24 * *v28) + v30;
        v33 = v24 * v28[1];
        v34 = *v11 * (int)v29;
        v35 = *a5;
        *(float *)(v34 + v35 + 16) = v32;
        *(float *)(v34 + v35 + 20) = v31 + v33;
        *(_DWORD *)(v34 + v35 + 24) = 0;
      }
      while ( v26 < *((_DWORD *)a5 + 3) );
    }
    v8 -= 2;
  }
  while ( v9 < v8 )
  {
    v36 = (__m128)*(unsigned int *)gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v9);
    v37 = gsl::span<D2D_POINT_2F const,-1>::operator[]((gsl::details *)Y_8, v9);
    v21 = 0LL;
    v38 = (__m128)*(unsigned int *)(v37 + 4);
    LODWORD(v37) = *v11 * v9++;
    v39 = (int)v37;
    v40 = *a5;
    *(_QWORD *)(v39 + v40 + 16) = _mm_unpacklo_ps(v36, v38).m128_u64[0];
    *(_DWORD *)(v39 + v40 + 24) = 0;
  }
  if ( a3 )
  {
    for ( i = 0; i < *((_DWORD *)a5 + 3); *(_DWORD *)(v43 + v44 + 44) = 1065353216 )
    {
      v42 = i++;
      v43 = *v11 * v42;
      v44 = *a5;
      *(_QWORD *)(v43 + v44 + 32) = 0LL;
      *(_DWORD *)(v43 + v44 + 40) = 0;
    }
  }
  else
  {
    v45 = v69;
    v46 = *(_OWORD *)v69;
    v47 = *((_OWORD *)v69 + 1);
    v66 = *((_DWORD *)v69 + 16);
    Y_8[0] = v46;
    v48 = *((_OWORD *)v69 + 2);
    Y_8[1] = v47;
    v49 = *((_OWORD *)v69 + 3);
    Y_8[2] = v48;
    Y_8[3] = v49;
    CMILMatrix::Invert((CMILMatrix *)Y_8, v21, v22);
    CMILMatrix::Transpose((CMILMatrix *)Y_8);
    v50 = *a5;
    v51 = *v11;
    v68[0] = v50 + 16;
    v68[1] = v51 + v50 + 16;
    v52 = 2 * (int)v51;
    v68[2] = v52 + v50 + 16;
    v67[0] = v50 + 48;
    v67[1] = v51 + v50 + 48;
    v67[2] = v52 + v50 + 48;
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v69, (int)v68, (int)v67, v45, (CMILMatrix *)Y_8);
    if ( *((_DWORD *)a5 + 3) )
    {
      v54 = (int)v69;
      v55 = HIDWORD(v69);
      v56 = v70;
      v57 = v71;
      do
      {
        v58 = *a5 + (int)(*v11 * v6);
        CMILMatrix::TransformIgnoreZW(v45, (const struct D2D_POINT_2F *)(v58 + 16), (struct MilPoint4F *)&v69, v53);
        v59 = *((float *)&v69 + 1);
        v60 = v70;
        *(_DWORD *)(v58 + 16) = (_DWORD)v69;
        *(float *)(v58 + 20) = v59;
        *(float *)(v58 + 24) = v60;
        v61 = v71;
        if ( v71 != 1.0 && v71 != 0.0 )
        {
          *(float *)(v58 + 16) = (float)(1.0 / v71) * *(float *)(v58 + 16);
          *(float *)(v58 + 20) = (float)(1.0 / v61) * v59;
          *(float *)(v58 + 24) = v60 * (float)(1.0 / v61);
        }
        ++v6;
        *(_DWORD *)(v58 + 32) = v54;
        *(_DWORD *)(v58 + 36) = v55;
        *(float *)(v58 + 40) = v56;
        *(float *)(v58 + 44) = v57;
      }
      while ( v6 < *((_DWORD *)a5 + 3) );
    }
  }
}
