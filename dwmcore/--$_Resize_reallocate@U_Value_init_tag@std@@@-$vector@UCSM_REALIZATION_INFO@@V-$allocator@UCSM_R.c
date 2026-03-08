/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EAD2C
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EACCC (--$_Resize@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_REALIZATION_INFO@@PEAU1@_KAEAV?$allocator@UCSM_REALIZATION_INFO@@@0@@Z @ 0x1800EAE20 (--$_Uninitialized_value_construct_n@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_RE.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

__int64 __fastcall std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  SIZE_T size_of; // rax
  char *v10; // r14
  __int64 result; // rax

  v2 = 0x666666666666666LL;
  if ( a2 > 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v7 = v6 >> 1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * (v5 >> 3);
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<40>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CSM_REALIZATION_INFO>>(&v10[40 * v8], a2 - v8);
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  result = 5 * v2;
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = &v10[40 * a2];
  *(_QWORD *)(a1 + 16) = &v10[40 * v2];
  return result;
}
