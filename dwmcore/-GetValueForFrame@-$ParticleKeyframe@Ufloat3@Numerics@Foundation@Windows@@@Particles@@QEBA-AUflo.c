float *__fastcall Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>::GetValueForFrame(
        float *a1,
        float *a2,
        __int64 a3,
        __int64 a4)
{
  float *v4; // rax
  float v5; // xmm4_4
  float *v6; // r8
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float *result; // rax
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4

  v4 = *(float **)(a3 + 8);
  v5 = a1[4];
  v6 = *(float **)(a4 + 8);
  v7 = v5 * *v4;
  v8 = v5 * v4[1];
  v9 = v5 * v4[2];
  result = a2;
  v11 = v9 + a1[3];
  v12 = a1[5] * v6[2];
  v13 = (float)(v8 + a1[2]) + (float)(a1[5] * v6[1]);
  *a2 = (float)(v7 + a1[1]) + (float)(a1[5] * *v6);
  a2[1] = v13;
  a2[2] = v11 + v12;
  return result;
}
