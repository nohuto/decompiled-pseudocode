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
