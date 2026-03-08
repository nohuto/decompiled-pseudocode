/*
 * XREFs of ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x180241934
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 */

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
