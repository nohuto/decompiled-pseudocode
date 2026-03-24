/*
 * XREFs of ??$_Insert_range@PEBUParticleBindingData@@@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1Uforward_iterator_tag@1@@Z @ 0x180169308
 * Callers:
 *     ??$insert@PEBUParticleBindingData@@X@?$vector@UParticleBindingData@@V?$allocator@UParticleBindingData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UParticleBindingData@@@std@@@std@@@1@PEBUParticleBindingData@@1@Z @ 0x1801697D0 (--$insert@PEBUParticleBindingData@@X@-$vector@UParticleBindingData@@V-$allocator@UParticleBindin.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x180173814 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

void *__fastcall std::vector<ParticleBindingData>::_Insert_range<ParticleBindingData const *>(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v5; // r13
  __int64 v7; // rcx
  unsigned __int64 v9; // r14
  void *result; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  SIZE_T v18; // rcx
  char *v19; // r15
  char *v20; // rcx
  char *v21; // rdx
  size_t v22; // r8
  __int64 v23; // r12
  char v24; // [rsp+60h] [rbp+8h]

  v5 = a4 - (_QWORD)a3;
  v7 = (__int64)&a2[-*(_QWORD *)a1];
  v24 = 1;
  v9 = (a4 - (__int64)a3) / 24;
  result = (void *)((unsigned __int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
  v11 = v7 / 24;
  if ( v9 == 1 && a2 == *(char **)(a1 + 8) || (v24 = 0, v9) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v9 <= (*(_QWORD *)(a1 + 16) - v12) / 24 )
    {
      v23 = 24 * v9;
      if ( v9 >= (v12 - (__int64)a2) / 24 )
      {
        memmove_0(&a2[v23], a2, v12 - (_QWORD)a2);
        *(_QWORD *)(a1 + 8) = v12 + v23;
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v12 - v23), 24 * v9);
        *(_QWORD *)(a1 + 8) = v23 + v12;
        memmove_0(&a2[24 * v9], a2, v12 + -24LL * v9 - (_QWORD)a2);
      }
      return memmove_0(a2, a3, v5);
    }
    else
    {
      v13 = (v12 - *(_QWORD *)a1) / 24;
      if ( v9 > 0xAAAAAAAAAAAAAAALL - v13 )
        std::_Xlength_error("vector<T> too long");
      v14 = v13 + v9;
      v15 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL;
      v16 = v15 >> 1;
      if ( v15 <= 0xAAAAAAAAAAAAAAALL - (v15 >> 1) )
      {
        v17 = v16 + v15;
        if ( v16 + v15 < v14 )
          v17 = v14;
      }
      else
      {
        v17 = v14;
      }
      v18 = 24 * v17;
      if ( v17 > 0xAAAAAAAAAAAAAAALL )
        v18 = -1LL;
      v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v18);
      memmove_0(&v19[24 * v11], a3, v5);
      v20 = v19;
      v21 = *(char **)a1;
      if ( v24 )
      {
        v22 = *(_QWORD *)(a1 + 8) - (_QWORD)v21;
      }
      else
      {
        memmove_0(v19, v21, (size_t)&a2[-*(_QWORD *)a1]);
        v22 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v20 = &v19[24 * v11 + 24 * v9];
        v21 = a2;
      }
      memmove_0(v20, v21, v22);
      return (void *)std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
                       a1,
                       v19,
                       v14,
                       v17);
    }
  }
  return result;
}
