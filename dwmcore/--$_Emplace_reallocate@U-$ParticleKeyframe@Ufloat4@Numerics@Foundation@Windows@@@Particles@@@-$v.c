/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023CB44
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18023D2C8 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BM@@std@@YA_K_K@Z @ 0x18023CC84 (--$_Get_size_of_n@$0BM@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@YAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU12@0PEAU12@AEAV?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@0@@Z @ 0x18023CCE0 (--$_Uninitialized_move@PEAU-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x18023E0F8 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r10

  v4 = 0x924924924924924LL;
  v7 = (a2 - *a1) / 28;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 2);
  if ( v8 == 0x924924924924924LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x924924924924924LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<28>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = v13 + 28 * v7;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a3 + 24);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
      v17,
      a2,
      v13);
    v16 = a1[1];
    v14 = v15 + 28;
    v17 = a2;
  }
  std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
    v17,
    v16,
    v14);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Change_array(a1, v18, v9, v4);
  return v15;
}
