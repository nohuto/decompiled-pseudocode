__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  float *v12; // rax
  float *v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm6_4

  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::FindFirstFrameIndex(
                      a1,
                      a3);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = FirstFrameIndex + 1;
  if ( v10 >= 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(v7 + 16) - v9) >> 2) )
  {
    *(_QWORD *)v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) - 16LL);
  }
  else
  {
    v11 = 5LL * FirstFrameIndex;
    v12 = *(float **)(a4 + 8);
    v13 = *(float **)(a5 + 8);
    v14 = (float)((float)(*v12 * *(float *)(v9 + 4 * v11 + 12)) + *(float *)(v9 + 4 * v11 + 4))
        + (float)(*v13 * *(float *)(v9 + 4 * v11 + 16));
    v15 = fmaxf(
            fminf(
              (float)(a3 - *(float *)(v9 + 4 * v11)) / (float)(*(float *)(v9 + 20 * v10) - *(float *)(v9 + 4 * v11)),
              1.0),
            0.0);
    v16 = (float)((float)(v12[1] * *(float *)(v9 + 4 * v11 + 12)) + *(float *)(v9 + 4 * v11 + 8))
        + (float)(v13[1] * *(float *)(v9 + 4 * v11 + 16));
    v17 = (float)((float)((float)((float)(v12[1] * *(float *)(v9 + 20 * v10 + 12)) + *(float *)(v9 + 20 * v10 + 8))
                        + (float)(v13[1] * *(float *)(v9 + 20 * v10 + 16)))
                - v16)
        * v15;
    *(float *)v8 = (float)((float)((float)((float)((float)(*v12 * *(float *)(v9 + 20 * v10 + 12))
                                                 + *(float *)(v9 + 20 * v10 + 4))
                                         + (float)(*v13 * *(float *)(v9 + 20 * v10 + 16)))
                                 - v14)
                         * v15)
                 + v14;
    *(float *)(v8 + 4) = v17 + v16;
  }
  return v8;
}
