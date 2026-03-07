void __fastcall CParticleEmitterVisual::UpdateParticles(CParticleEmitterVisual *this, float a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  float v9; // xmm7_4
  unsigned int v10; // r15d
  float v11; // xmm8_4
  float v12; // xmm9_4
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm2_4
  unsigned int v21; // r8d
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rbp
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm2_4
  __int64 v36; // rbp
  __int64 v37; // rax
  float v38; // xmm2_4
  __int64 v39; // [rsp+20h] [rbp-78h]

  v3 = *((_QWORD *)this + 133);
  v4 = 0;
  v6 = (*((_QWORD *)this + 134) - v3) >> 2;
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 136);
    do
    {
      --v6;
      *(float *)(v3 + 4 * v6) = (float)(a2 / *(float *)(v7 + 4 * v6)) + *(float *)(v3 + 4 * v6);
    }
    while ( v6 );
  }
  v8 = *((_QWORD *)this + 115);
  v9 = a2 * *((float *)this + 192);
  v10 = 0;
  v11 = a2 * *((float *)this + 193);
  v12 = a2 * *((float *)this + 194);
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 116) - v8) >> 2);
  if ( v13 )
  {
    v14 = 0LL;
    do
    {
      v15 = 3 * v14;
      v16 = v11 + *(float *)(v8 + 12 * v14 + 4);
      v17 = v12 + *(float *)(v8 + 12 * v14 + 8);
      *(float *)(v8 + 4 * v15) = v9 + *(float *)(v8 + 12 * v14);
      *(float *)(v8 + 4 * v15 + 4) = v16;
      *(float *)(v8 + 4 * v15 + 8) = v17;
      v39 = *(_QWORD *)((char *)this + 748);
      v18 = *((_QWORD *)this + 115);
      v19 = (float)(1.0 - (float)(*((float *)&v39 + 1) * a2)) * *(float *)(v18 + 12 * v14 + 4);
      v20 = (float)(1.0 - (float)(*((float *)this + 189) * a2)) * *(float *)(v18 + 12 * v14 + 8);
      *(float *)(v18 + 4 * v15) = (float)(1.0 - (float)(*(float *)&v39 * a2)) * *(float *)(v18 + 12 * v14);
      *(float *)(v18 + 4 * v15 + 4) = v19;
      *(float *)(v18 + 4 * v15 + 8) = v20;
      v8 = *((_QWORD *)this + 115);
      ++v10;
      *(float *)(*((_QWORD *)this + 121) + 4 * v14) = sqrtf_0(
                                                        (float)((float)(*(float *)(v8 + 12 * v14)
                                                                      * *(float *)(v8 + 12 * v14))
                                                              + (float)(*(float *)(v8 + 12 * v14 + 4)
                                                                      * *(float *)(v8 + 12 * v14 + 4)))
                                                      + (float)(*(float *)(v8 + 12 * v14 + 8)
                                                              * *(float *)(v8 + 12 * v14 + 8)));
      v14 = v10;
    }
    while ( v10 < v13 );
  }
  v21 = 0;
  v22 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 116) - v8) >> 2);
  if ( v22 )
  {
    v23 = 0LL;
    do
    {
      v24 = *((_QWORD *)this + 109);
      v25 = 3 * v23;
      v26 = *((_QWORD *)this + 115);
      ++v21;
      v27 = a2 * *(float *)(v26 + 4 * v25);
      v28 = a2 * *(float *)(v26 + 4 * v25 + 4);
      v29 = a2 * *(float *)(v26 + 4 * v25 + 8);
      v23 = v21;
      v30 = v28 + *(float *)(v24 + 4 * v25 + 4);
      v31 = v29 + *(float *)(v24 + 4 * v25 + 8);
      *(float *)(v24 + 4 * v25) = v27 + *(float *)(v24 + 4 * v25);
      *(float *)(v24 + 4 * v25 + 4) = v30;
      *(float *)(v24 + 4 * v25 + 8) = v31;
    }
    while ( v21 < v22 );
    v32 = 0LL;
    do
    {
      v33 = *((_QWORD *)this + 118);
      v34 = (float)(a2 * *((float *)this + 191)) + *(float *)(v33 + 4 * v32);
      *(float *)(v33 + 4 * v32) = v34;
      v35 = (float)(1.0 - (float)(a2 * *((float *)this + 190))) * v34;
      *(float *)(v33 + 4 * v32) = v35;
      v36 = 2 * v32;
      v37 = *((_QWORD *)this + 112);
      v38 = (float)(v35 * a2) + *(float *)(v37 + 8 * v36 + 12);
      *(float *)(v37 + 8 * v36 + 12) = v38;
      ++v4;
      *(float *)(*((_QWORD *)this + 112) + 8 * v36 + 12) = remainderf(v38, 6.2800002);
      v32 = v4;
    }
    while ( v4 < v22 );
  }
}
