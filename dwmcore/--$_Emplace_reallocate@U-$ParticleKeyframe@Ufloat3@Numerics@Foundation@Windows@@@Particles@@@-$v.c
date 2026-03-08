/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x18023C9B4
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x18023D200 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x18023E070 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

char *__fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rdx
  char *v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // xmm1_8
  __int64 v19; // xmm1_8
  __int64 v20; // r9
  char *v21; // rcx

  v3 = a2;
  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (char *)v13 + 24 * v7;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
  v16 = a1[1];
  v17 = *a1;
  if ( v3 == v16 )
  {
    while ( v17 != v16 )
    {
      *v13 = *(_OWORD *)v17;
      v13 = (_OWORD *)((char *)v13 + 24);
      v18 = *(_QWORD *)(v17 + 16);
      v17 += 24LL;
      *((_QWORD *)v13 - 1) = v18;
    }
  }
  else
  {
    while ( v17 != v3 )
    {
      *v13 = *(_OWORD *)v17;
      v13 = (_OWORD *)((char *)v13 + 24);
      v19 = *(_QWORD *)(v17 + 16);
      v17 += 24LL;
      *((_QWORD *)v13 - 1) = v19;
    }
    v20 = a1[1];
    if ( v3 != v20 )
    {
      v21 = &v15[-v3];
      do
      {
        *(_OWORD *)&v21[v3 + 24] = *(_OWORD *)v3;
        *(_QWORD *)&v21[v3 + 40] = *(_QWORD *)(v3 + 16);
        v3 += 24LL;
      }
      while ( v3 != v20 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(a1, v14, v9, v4);
  return v15;
}
