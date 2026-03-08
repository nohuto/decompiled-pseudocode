/*
 * XREFs of ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7F94
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801C2EA0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180266120 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801C7C3C (-_Reallocate_exactly@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float2>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 3;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    return std::vector<Windows::Foundation::Numerics::float2>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
