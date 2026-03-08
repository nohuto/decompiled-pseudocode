/*
 * XREFs of ?reserve@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7FD0
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801C2EA0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7CB4 (-_Reallocate_exactly@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  if ( a2 > result )
  {
    if ( a2 > 0x1555555555555555LL )
      std::_Xlength_error("vector too long");
    return std::vector<Windows::Foundation::Numerics::float3>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
