/*
 * XREFs of ?GetRandomSize@CParticleGenerator@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243E78
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall CParticleGenerator::GetRandomSize(__int64 a1, float *a2, __int64 a3)
{
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float *result; // rax

  if ( *(_BYTE *)(a1 + 220) )
  {
    v6 = *(float *)(a1 + 196);
    v7 = *(float *)(a1 + 208);
    v8 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
               * (float)(v7 - v6))
       + v6;
    a2[1] = v8;
  }
  else
  {
    v9 = *(float *)(a1 + 200);
    v10 = *(float *)(a1 + 212);
    v11 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
        * (float)(v10 - v9);
    v12 = *(float *)(a1 + 208);
    v13 = v11 + v9;
    v14 = *(float *)(a1 + 196);
    v15 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
    a2[1] = v13;
    v8 = (float)(v15 * (float)(v12 - v14)) + v14;
  }
  result = a2;
  *a2 = v8;
  return result;
}
