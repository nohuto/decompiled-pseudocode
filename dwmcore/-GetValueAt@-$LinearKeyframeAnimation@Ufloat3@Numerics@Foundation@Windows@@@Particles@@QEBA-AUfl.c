__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::GetValueAt(
        __int64 a1,
        __int64 a2,
        float a3,
        __int64 a4,
        __int64 a5)
{
  int FirstFrameIndex; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r11
  float *ValueForFrame; // rbx
  __int64 v12; // r9
  __int64 v13; // r10
  float *v14; // rax
  float *v15; // r10
  float v16; // xmm5_4
  float *v17; // r11
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  _BYTE v24[12]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v25[28]; // [rsp+2Ch] [rbp-1Ch] BYREF

  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::FindFirstFrameIndex(
                      a1,
                      a3);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = (unsigned int)(FirstFrameIndex + 1);
  if ( v10 >= 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(v8 + 16) - v9) >> 3) )
  {
    v21 = *(_QWORD *)(v8 + 16);
    v22 = *(_QWORD *)(v21 - 20);
    LODWORD(v21) = *(_DWORD *)(v21 - 12);
    *(_QWORD *)a2 = v22;
    *(_DWORD *)(a2 + 8) = v21;
  }
  else
  {
    ValueForFrame = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(
                               v9 + 24 * v10,
                               v24,
                               a4,
                               a5);
    v14 = (float *)Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(
                     v13,
                     v25,
                     a4,
                     v12);
    v18 = fmaxf(fminf((float)(v16 - *v15) / (float)(*v17 - *v15), 1.0), 0.0);
    v19 = (float)((float)(ValueForFrame[1] - v14[1]) * v18) + v14[1];
    *(float *)a2 = (float)((float)(*ValueForFrame - *v14) * v18) + *v14;
    v20 = ValueForFrame[2] - v14[2];
    *(float *)(a2 + 4) = v19;
    *(float *)(a2 + 8) = (float)(v20 * v18) + v14[2];
  }
  return a2;
}
