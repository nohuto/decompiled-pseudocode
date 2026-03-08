/*
 * XREFs of ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x18023CCB0
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023C874 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 20LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    v4 = *(_DWORD *)(i + 16);
    i += 20LL;
    *(_DWORD *)(a3 + 16) = v4;
  }
  return a3;
}
