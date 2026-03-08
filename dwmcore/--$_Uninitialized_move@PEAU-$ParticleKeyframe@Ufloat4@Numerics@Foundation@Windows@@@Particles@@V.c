/*
 * XREFs of ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x18023CCE0
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023CB44 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 28LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(i + 16);
    v4 = *(_DWORD *)(i + 24);
    i += 28LL;
    *(_DWORD *)(a3 + 24) = v4;
  }
  return a3;
}
