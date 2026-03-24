/*
 * XREFs of ?SetMinDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180171210
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?SetProperty@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172260 (-SetProperty@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMinDirection(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm3

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 80) = v2;
  v3 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 72), (__m128)*(unsigned int *)(a1 + 80));
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 102);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_div_ps(v3, _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0)));
  *(_QWORD *)(a1 + 72) = _mm_unpacklo_ps(v6, _mm_shuffle_ps(v6, v6, 85)).m128_u64[0];
  *(_DWORD *)(a1 + 80) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  return 0LL;
}
