float *__fastcall EmitterShapes::CRectangleVolumeSpawner::GetRandomPoint(float *a1, float *a2, __int64 a3)
{
  float v4; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float *result; // rax

  v4 = a1[5];
  v7 = a1[3];
  v8 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
     * (float)(v4 - v7);
  v9 = a1[4];
  v10 = v8 + v7;
  v11 = a1[2];
  v12 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  a2[1] = v10;
  result = a2;
  *a2 = (float)(v12 * (float)(v9 - v11)) + v11;
  return result;
}
