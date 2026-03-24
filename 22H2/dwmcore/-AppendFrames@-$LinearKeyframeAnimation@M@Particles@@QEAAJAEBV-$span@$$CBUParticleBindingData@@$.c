/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801DB340
 * Callers:
 *     ?OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ @ 0x1801E26B0 (-OnBindingsChanged@CParticleScalarBehavior@@MEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DA9B0 (--$_Emplace_reallocate@U-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Particle.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AppendFrames(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rdi
  bool v5; // zf
  __int128 *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  v3 = v2 + 24LL * *a2;
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = *(_DWORD *)(v2 + 20) == 1;
      *(_QWORD *)&v8 = *(_QWORD *)v2;
      if ( v5 )
      {
        DWORD2(v8) = 1065353216;
      }
      else
      {
        DWORD2(v8) = 0;
        if ( *(_DWORD *)(v2 + 20) == 2 )
        {
          HIDWORD(v8) = 1065353216;
          goto LABEL_6;
        }
      }
      HIDWORD(v8) = 0;
LABEL_6:
      v6 = (__int128 *)v4[1];
      if ( (__int128 *)v4[2] == v6 )
      {
        std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float>>(
          v4,
          v6,
          &v8);
      }
      else
      {
        *v6 = v8;
        v4[1] += 16LL;
      }
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
