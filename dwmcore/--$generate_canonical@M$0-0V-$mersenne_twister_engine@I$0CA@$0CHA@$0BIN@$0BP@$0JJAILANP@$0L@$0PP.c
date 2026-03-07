float __fastcall std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(
        __int64 a1)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  int v4; // eax
  __int64 v5; // rbx
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4

  v2 = 24.0 / log2f(4294967300.0);
  v3 = *(float *)&FLOAT_1_0;
  v4 = (int)ceilf_0(v2);
  if ( v4 < 1 )
    v4 = 1;
  v5 = (unsigned int)v4;
  do
  {
    v6 = std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::operator()(a1);
    v8 = (float)((float)v7 - 0.0) * v3;
    v3 = v3 * 4294967300.0;
    v9 = v6 + v8;
    --v5;
  }
  while ( v5 );
  return v9 / v3;
}
