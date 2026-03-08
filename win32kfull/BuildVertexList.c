/*
 * XREFs of BuildVertexList @ 0x1C0144D14
 * Callers:
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01446E8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     D3DXVec4Transform @ 0x1C0144E20 (D3DXVec4Transform.c)
 */

__int64 __fastcall BuildVertexList(__int64 a1, __int64 a2)
{
  int *v2; // r9
  int v3; // r11d
  float v4; // xmm0_4
  __m128i v5; // xmm1
  float v6; // xmm0_4
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10

  v2 = (int *)(a1 + 12);
  v3 = 1065353216;
  *(float *)a1 = (float)*(int *)a2;
  v4 = (float)*(int *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)(a1 + 4) = v4;
  *(float *)(a1 + 32) = (float)*(int *)(a2 + 8);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 4));
  *(_QWORD *)(a1 + 56) = 1065353216LL;
  *(_DWORD *)(a1 + 36) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)(a1 + 64) = (float)*(int *)a2;
  v6 = (float)*(int *)(a2 + 12);
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(float *)(a1 + 68) = v6;
  *(float *)(a1 + 96) = (float)*(int *)(a2 + 8);
  *(float *)v5.m128i_i32 = (float)*(int *)(a2 + 12);
  *(_DWORD *)(a1 + 120) = 1065353216;
  *(_DWORD *)(a1 + 124) = 1065353216;
  *(_DWORD *)(a1 + 100) = v5.m128i_i32[0];
  *(float *)(a1 + 128) = (float)*(int *)a2;
  *(float *)v5.m128i_i32 = (float)*(int *)(a2 + 12);
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 1065353216;
  *(_DWORD *)(a1 + 132) = v5.m128i_i32[0];
  *(float *)(a1 + 160) = (float)*(int *)(a2 + 8);
  *(float *)v5.m128i_i32 = (float)*(int *)(a2 + 4);
  *(_QWORD *)(a1 + 184) = 1065353216LL;
  *(_DWORD *)(a1 + 164) = v5.m128i_i32[0];
  do
  {
    *(v2 - 1) = v3;
    *v2 = v3;
    result = D3DXVec4Transform(a1, a1);
    a1 = v8 + 32;
    v2 = (int *)(v9 + 32);
  }
  while ( v10 != 1 );
  return result;
}
