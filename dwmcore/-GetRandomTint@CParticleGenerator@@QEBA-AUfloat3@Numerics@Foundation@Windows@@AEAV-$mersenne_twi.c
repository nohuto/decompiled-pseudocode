/*
 * XREFs of ?GetRandomTint@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180243F54
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180242DF8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall CParticleGenerator::GetRandomTint(float *a1, float *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm6_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float *result; // rax

  v4 = a1[45];
  v7 = a1[41];
  v8 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
     * (float)(v4 - v7);
  v9 = a1[44];
  v10 = v8 + v7;
  v11 = a1[40];
  v12 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
      * (float)(v9 - v11);
  v13 = a1[43];
  v14 = v12 + v11;
  v15 = a1[39];
  v16 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  a2[1] = v14;
  result = a2;
  a2[2] = v10;
  *a2 = (float)(v16 * (float)(v13 - v15)) + v15;
  return result;
}
