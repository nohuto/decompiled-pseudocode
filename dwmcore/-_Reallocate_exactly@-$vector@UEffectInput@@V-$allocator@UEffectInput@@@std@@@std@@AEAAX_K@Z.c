/*
 * XREFs of ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x1800E1264
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800E121C (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x1800E12E8 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_copy@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1800E1314 (--$_Uninitialized_copy@PEAUEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rbx

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<104>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_copy<EffectInput *>(*(struct EffectInput **)a1);
  return std::vector<EffectInput>::_Change_array(a1, v6, v3, a2);
}
