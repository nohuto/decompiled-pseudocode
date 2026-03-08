/*
 * XREFs of GetInertiaRegionInVirtualizedScreen @ 0x1C01F8A64
 * Callers:
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C01E95B8 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     D3DXVec4Transform @ 0x1C0144E20 (D3DXVec4Transform.c)
 */

__int64 __fastcall GetInertiaRegionInVirtualizedScreen(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v6; // rsi
  int *v7; // rcx
  float *v8; // r8
  __m128i v9; // xmm1
  float v10; // xmm0_4
  float v11; // [rsp+20h] [rbp-18h] BYREF
  float v12; // [rsp+24h] [rbp-14h]
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v2 = *(_DWORD *)(a1 + 184);
  if ( (v2 & 1) == 0 )
    return 0LL;
  v6 = 4LL;
  if ( (v2 & 4) != 0 )
    v7 = (int *)(a1 + 40);
  else
    v7 = (int *)(*(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)(a1 + 120)) + 40) + 88LL);
  *a2 = *v7;
  a2[1] = v7[1];
  a2[2] = v7[2];
  a2[3] = v7[1];
  a2[4] = v7[2];
  a2[5] = v7[3];
  a2[6] = *v7;
  a2[7] = v7[3];
  if ( (*(_DWORD *)(a1 + 184) & 4) != 0 )
  {
    v8 = (float *)(a1 + 56);
    do
    {
      v9 = _mm_cvtsi32_si128(a2[1]);
      v10 = (float)*a2;
      v13 = 1065353216;
      v14 = 1065353216;
      v11 = v10;
      LODWORD(v12) = _mm_cvtepi32_ps(v9).m128_u32[0];
      D3DXVec4Transform(&v11, &v11, v8);
      *a2 = (int)v11;
      a2 += 2;
      *(a2 - 1) = (int)v12;
      --v6;
    }
    while ( v6 );
  }
  return 1LL;
}
