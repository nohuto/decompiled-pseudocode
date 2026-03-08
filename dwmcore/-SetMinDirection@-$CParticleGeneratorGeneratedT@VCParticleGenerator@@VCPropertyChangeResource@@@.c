/*
 * XREFs of ?SetMinDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C44E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?SetProperty@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C5970 (-SetProperty@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMinDirection(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 v2; // xmm3
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm0

  v2 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v3 = _mm_mul_ps(v2, v2);
  v4 = _mm_shuffle_ps(v3, v3, 102);
  v3.m128_f32[0] = (float)(v3.m128_f32[0] + v4.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v5 = _mm_div_ps(v2, _mm_sqrt_ps(_mm_shuffle_ps(v3, v3, 0)));
  *(_QWORD *)(a1 + 80) = v5.m128_u64[0];
  *(_DWORD *)(a1 + 88) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  return 0LL;
}
