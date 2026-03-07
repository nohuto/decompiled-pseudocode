__int64 __fastcall CParticleGenerator::GetRandomOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // xmm1_4
  float v6; // xmm6_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  float v9; // xmm7_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  float v12; // xmm8_4
  __int64 RandomUnitDir; // rax
  __int64 v14; // xmm0_8
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+38h] [rbp-9h] BYREF
  int v17; // [rsp+40h] [rbp-1h]
  _DWORD v18[4]; // [rsp+48h] [rbp+7h] BYREF
  char v19; // [rsp+58h] [rbp+17h] BYREF

  v3 = a3;
  v4 = *(_DWORD *)(a1 + 128);
  v6 = *(float *)(a1 + 152);
  v18[0] = *(_DWORD *)(a1 + 124);
  v7 = *(_DWORD *)(a1 + 132);
  v18[1] = v4;
  v8 = *(_DWORD *)(a1 + 140);
  v9 = *(float *)(a1 + 136);
  v18[2] = v7;
  v10 = *(_DWORD *)(a1 + 144);
  v16[0] = v8;
  v11 = *(_DWORD *)(a1 + 148);
  v16[1] = v10;
  v17 = v11;
  v12 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
              * (float)(v6 - v9))
      + v9;
  RandomUnitDir = GetRandomUnitDir((unsigned int)&v19, v3, (unsigned int)v18, (unsigned int)v16, 1);
  v14 = *(_QWORD *)RandomUnitDir;
  LODWORD(RandomUnitDir) = *(_DWORD *)(RandomUnitDir + 8);
  *(_DWORD *)a2 = v14;
  v17 = RandomUnitDir;
  result = a2;
  LODWORD(v14) = v17;
  *(float *)(a2 + 12) = v12;
  *(_DWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 4) = HIDWORD(v14);
  return result;
}
