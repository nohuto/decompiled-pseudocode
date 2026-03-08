/*
 * XREFs of ??$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x18023E568
 * Callers:
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x180241F14 (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
        __int64 a1,
        _QWORD *a2,
        int **a3)
{
  int *v3; // r10
  int *i; // r9
  __int64 v5; // rcx
  __m128i *result; // rax
  __m128i v7; // xmm1

  v3 = a3[1];
  for ( i = *a3; i != v3; ++i )
  {
    v5 = a2[1];
    result = (__m128i *)(*a2 + 16LL * *i);
    v7 = _mm_loadu_si128(result);
    *result = *(__m128i *)(v5 - 16);
    *(__m128i *)(v5 - 16) = v7;
    a2[1] -= 16LL;
  }
  return result;
}
