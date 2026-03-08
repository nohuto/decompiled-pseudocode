/*
 * XREFs of ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C8028
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801C2EA0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7D3C (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 */

void __fastcall std::vector<Windows::Foundation::Numerics::float4>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly((__int64)a1, a2);
  }
}
