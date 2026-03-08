/*
 * XREFs of ?GetRandomPoint@CRectangleEdgeSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x180266CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18023F9D0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?GetPoint@CLineSpawner@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@MM@Z @ 0x1802423A0 (-GetPoint@CLineSpawner@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mersenne_.c)
 */

float *__fastcall EmitterShapes::CRectangleEdgeSpawner::GetRandomPoint(__int64 a1, float *a2, __int64 a3, float a4)
{
  float v5; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm9_4
  float v12; // xmm9_4
  __int64 v13; // rbx
  float v14; // xmm2_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm6_4
  float *Point; // rax
  float v22; // xmm6_4
  float v23; // xmm8_4
  float *result; // rax
  float v25; // [rsp+A0h] [rbp+8h] BYREF

  v5 = *(float *)(a1 + 140);
  v8 = *(float *)(a1 + 136);
  v9 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  v10 = *(float *)(a1 + 140);
  v11 = (float)(v9 * (float)((float)((float)(v8 + v8) + (float)(v5 + v5)) - 0.0)) + 0.0;
  if ( v10 <= v11 )
  {
    v14 = *(float *)(a1 + 136);
    if ( (float)(v14 + v10) <= v11 )
    {
      v16 = (float)(v10 + v10) + v14;
      if ( v16 > v11 )
      {
        v13 = 72LL;
        v12 = (float)(v11 - (float)(v14 + v10)) / v10;
        goto LABEL_9;
      }
      v15 = v11 - v16;
      v13 = 104LL;
    }
    else
    {
      v15 = v11 - v10;
      v13 = 40LL;
    }
    v12 = v15 / v14;
    goto LABEL_9;
  }
  v12 = v11 / v10;
  v13 = 8LL;
LABEL_9:
  LODWORD(v17) = COERCE_UNSIGNED_INT(a4 * 0.5) ^ _xmm;
  v18 = (float)(a4 * 0.5) - v17;
  v19 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
              * v18)
      + v17;
  v20 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
              * v18)
      + v17;
  Point = EmitterShapes::CLineSpawner::GetPoint((float *)(v13 + a1), &v25, a3, v12, 0.0);
  v22 = v20 + *Point;
  v23 = v19 + Point[1];
  result = a2;
  *a2 = v22;
  a2[1] = v23;
  return result;
}
