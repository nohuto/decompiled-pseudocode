/*
 * XREFs of ?GetRandomPoint@CPathEmitterArea@EmitterShapes@@QEAA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180266B98
 * Callers:
 *     ?GetRandomPoint@CPathAreaSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x180242660 (-GetRandomPoint@CPathAreaSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall EmitterShapes::CPathEmitterArea::GetRandomPoint(__int64 a1, float *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v7; // xmm0_4
  float *i; // rdi
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float *result; // rax
  float v13; // xmm3_4
  float v14; // xmm2_4

  v4 = *(float *)(a1 + 16);
  v7 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  for ( i = *(float **)(a1 + 24); i != *(float **)(a1 + 32) && i[6] < (float)((float)(v7 * (float)(v4 - 0.0)) + 0.0); i += 7 )
    ;
  v9 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
     + 0.0;
  v10 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
      + 0.0;
  v11 = sqrtf_0(v9);
  result = a2;
  v13 = (float)(1.0 - v10) * v11;
  v14 = (float)((float)((float)(1.0 - v11) * *i) + (float)(v13 * i[2])) + (float)((float)(v11 * v10) * i[4]);
  a2[1] = (float)((float)((float)(1.0 - v11) * i[1]) + (float)(v13 * i[3])) + (float)((float)(v11 * v10) * i[5]);
  *a2 = v14;
  return result;
}
