/*
 * XREFs of ??$_Get_size_of_n@$0BM@@std@@YA_K_K@Z @ 0x18023CC84
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023CB44 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 *     ??$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@?$vector@UAreaTriangle@CPathEmitterArea@EmitterShapes@@V?$allocator@UAreaTriangle@CPathEmitterArea@EmitterShapes@@@std@@@std@@QEAAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180265140 (--$_Emplace_reallocate@AEBUAreaTriangle@CPathEmitterArea@EmitterShapes@@@-$vector@UAreaTriangle@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<28>(unsigned __int64 a1)
{
  if ( a1 > 0x924924924924924LL )
    std::_Throw_bad_array_new_length();
  return 28 * a1;
}
