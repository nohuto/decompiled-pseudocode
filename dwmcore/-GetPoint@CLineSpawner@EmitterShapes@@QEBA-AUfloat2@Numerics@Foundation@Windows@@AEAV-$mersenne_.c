float *__fastcall EmitterShapes::CLineSpawner::GetPoint(float *a1, float *a2, __int64 a3, float a4, float a5)
{
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  float v11; // xmm0_4
  float *result; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4

  v7 = a1[2];
  v8 = a1[4];
  v9 = a1[3];
  v10 = a1[5];
  v11 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  result = a2;
  v13 = (float)(v11 * (float)((float)(a5 * 0.5) - COERCE_FLOAT(COERCE_UNSIGNED_INT(a5 * 0.5) ^ _xmm)))
      + COERCE_FLOAT(COERCE_UNSIGNED_INT(a5 * 0.5) ^ _xmm);
  v14 = v13 * a1[7];
  v15 = v13 * a1[6];
  a2[1] = (float)((float)((float)(v10 - v9) * a4) + v9) + v14;
  *a2 = (float)((float)((float)(v8 - v7) * a4) + v7) + v15;
  return result;
}
