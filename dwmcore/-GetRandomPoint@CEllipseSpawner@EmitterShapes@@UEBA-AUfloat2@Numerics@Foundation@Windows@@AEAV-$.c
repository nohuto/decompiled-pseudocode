/*
 * XREFs of ?GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x180266A60
 * Callers:
 *     <none>
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 */

float *__fastcall EmitterShapes::CEllipseSpawner::GetRandomPoint(__int64 a1, float *a2, __int64 a3, float a4)
{
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float *result; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4

  v7 = *(float *)(a1 + 16);
  v8 = *(float *)(a1 + 20);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v9 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
               * (float)((float)(a4 * 0.5) - COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 * 0.5) ^ _xmm)))
       + COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 * 0.5) ^ _xmm);
    v7 = v7 + v9;
    v8 = v8 + v9;
  }
  v10 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
              * 6.2831855)
      + 0.0;
  v11 = sinf_0(v10);
  v12 = cosf_0(v10);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v14 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
    v13 = sqrtf_0(v14 + 0.0);
  }
  else
  {
    v13 = *(float *)&FLOAT_1_0;
  }
  result = a2;
  v16 = v13 * v12;
  v17 = (float)((float)(v13 * v11) * (float)(v8 * 0.5)) + *(float *)(a1 + 12);
  *a2 = (float)(v16 * (float)(v7 * 0.5)) + *(float *)(a1 + 8);
  a2[1] = v17;
  return result;
}
