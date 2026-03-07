__int64 __fastcall PhysicalToLogicalInPlaceRect(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rax
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  int v9; // ecx
  int v10; // edx
  int v11; // r10d
  unsigned int v12; // ecx
  __m128i v13; // xmm0
  int v14; // r9d
  int v15; // ecx
  float *v16; // rax
  float v17; // xmm2_4
  float v18; // xmm3_4

  v2 = 0;
  if ( *(_QWORD *)(a1 + 216) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v6 = *(_QWORD *)(a1 + 216);
    v2 = 1;
    v7 = a2[2];
    v8 = a2[3];
    v9 = (int)*(float *)(v6 + 48);
    v10 = (int)*(float *)(v6 + 52);
    *a2 -= v9;
    v11 = v7 - v9;
    v12 = a2[1];
    a2[2] = v11;
    v13 = _mm_cvtsi32_si128(*a2);
    v14 = v8 - v10;
    a2[3] = v14;
    v15 = v12 - v10;
    a2[1] = v15;
    v16 = *(float **)(a1 + 216);
    v17 = 1.0 / *v16;
    v18 = 1.0 / v16[5];
    *a2 = (int)(float)(_mm_cvtepi32_ps(v13).m128_f32[0] * v17);
    a2[1] = (int)(float)((float)v15 * v18);
    a2[2] = (int)(float)((float)v11 * v17);
    a2[3] = (int)(float)((float)v14 * v18);
  }
  return v2;
}
