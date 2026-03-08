/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18023D200
 * Callers:
 *     ?OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ @ 0x18023E1E0 (-OnBindingsChanged@CParticleVector3Behavior@@MEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023C9B4 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AppendFrames(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // xmm1_8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = a2[1];
  v4 = v2 + 24LL * *a2;
  while ( v2 != v4 )
  {
    v5 = *(_DWORD *)(v2 + 20) == 1;
    v6 = *(_QWORD *)(v2 + 4);
    v7 = *(_DWORD *)(v2 + 12);
    LODWORD(v11) = *(_DWORD *)v2;
    *(_QWORD *)((char *)&v11 + 4) = v6;
    HIDWORD(v11) = v7;
    if ( v5 )
    {
      LODWORD(v12) = 1065353216;
LABEL_4:
      HIDWORD(v12) = 0;
      goto LABEL_5;
    }
    LODWORD(v12) = 0;
    if ( *(_DWORD *)(v2 + 20) != 2 )
      goto LABEL_4;
    HIDWORD(v12) = 1065353216;
LABEL_5:
    v8 = a1[2];
    if ( v8 == a1[3] )
    {
      std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        a1 + 1,
        v8,
        (__int64)&v11);
    }
    else
    {
      v9 = v12;
      *(_OWORD *)v8 = v11;
      *(_QWORD *)(v8 + 16) = v9;
      a1[2] += 24LL;
    }
    v2 += 24LL;
  }
  return 0LL;
}
