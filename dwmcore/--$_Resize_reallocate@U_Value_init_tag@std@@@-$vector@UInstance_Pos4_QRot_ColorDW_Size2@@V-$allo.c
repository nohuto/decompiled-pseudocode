/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BCA34
 * Callers:
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801C1C18 (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@_KAEAV?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@0@@Z @ 0x1801BCB28 (--$_Uninitialized_value_construct_n@V-$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@.c)
 */

__int64 __fastcall std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // rbx

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4);
  v7 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
  v8 = v6 >> 1;
  if ( v6 <= 0x555555555555555LL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<48>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Instance_Pos4_QRot_ColorDW_Size2>>(&v10[48 * v7], a2 - v7);
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Change_array(a1, v10, a2, v2);
}
