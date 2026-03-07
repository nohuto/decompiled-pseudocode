float *__fastcall EmitterShapes::CLineSpawner::GetRandomPoint(float *a1, float *a2, __int64 a3, float a4)
{
  float v7; // xmm0_4

  v7 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3);
  EmitterShapes::CLineSpawner::GetPoint(a1, a2, a3, v7 + 0.0, a4);
  return a2;
}
