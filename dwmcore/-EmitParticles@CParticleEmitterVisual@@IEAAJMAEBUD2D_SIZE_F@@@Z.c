__int64 __fastcall CParticleEmitterVisual::EmitParticles(
        CParticleEmitterVisual *this,
        float a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm2_4
  int v5; // eax
  float v7; // xmm7_4
  char *v8; // rbx
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx

  v3 = *((float *)this + 1598) - a2;
  v5 = 0;
  *((float *)this + 1598) = v3;
  if ( v3 < 0.0 )
  {
    v7 = *((float *)this + 182);
    v8 = (char *)this + 1388;
    v9 = *((float *)this + 183);
    v10 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1388)
        * (float)(v9 - v7);
    v11 = *((float *)this + 185);
    v12 = v10 + v7;
    v13 = *((float *)this + 184);
    *((float *)this + 1598) = v12 + *((float *)this + 1598);
    v5 = (int)(float)((float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)v8)
                            * (float)(v11 - v13))
                    + v13);
    *((_DWORD *)this + 1599) += v5;
  }
  v14 = CParticleEmitterVisual::SpawnParticles(this, v5, a3);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x24Fu, 0LL);
  return v16;
}
