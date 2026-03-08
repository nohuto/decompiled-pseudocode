/*
 * XREFs of ?_Change_array@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@M@Particles@@_K1@Z @ 0x18023DF78
 * Callers:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023C740 (--$_Emplace_reallocate@U-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Particle.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Particles::ParticleKeyframe<float>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
