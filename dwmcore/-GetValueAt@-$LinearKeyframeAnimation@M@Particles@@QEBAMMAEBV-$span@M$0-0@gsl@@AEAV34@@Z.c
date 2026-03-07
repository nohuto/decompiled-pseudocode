float __fastcall Particles::LinearKeyframeAnimation<float>::GetValueAt(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  unsigned int FirstFrameIndex; // eax
  __int64 v7; // r10
  float v8; // xmm4_4
  __int64 v9; // r11
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  float *v13; // rax
  float v14; // xmm2_4

  FirstFrameIndex = Particles::LinearKeyframeAnimation<float>::FindFirstFrameIndex(a1, a2);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = FirstFrameIndex + 1;
  if ( v10 >= (*(_QWORD *)(v7 + 16) - v9) >> 4 )
    return *(float *)(*(_QWORD *)(v7 + 16) - 12LL);
  v11 = 2LL * FirstFrameIndex;
  v12 = 2 * v10;
  v13 = *(float **)(a4 + 8);
  v14 = (float)((float)(**(float **)(a3 + 8) * *(float *)(v9 + 8 * v11 + 8)) + *(float *)(v9 + 8 * v11 + 4))
      + (float)(*v13 * *(float *)(v9 + 8 * v11 + 12));
  return (float)((float)((float)((float)((float)(**(float **)(a3 + 8) * *(float *)(v9 + 8 * v12 + 8))
                                       + *(float *)(v9 + 8 * v12 + 4))
                               + (float)(*v13 * *(float *)(v9 + 8 * v12 + 12)))
                       - v14)
               * fmaxf(
                   fminf(
                     (float)(v8 - *(float *)(v9 + 8 * v11))
                   / (float)(*(float *)(v9 + 8 * v12) - *(float *)(v9 + 8 * v11)),
                     1.0),
                   0.0))
       + v14;
}
