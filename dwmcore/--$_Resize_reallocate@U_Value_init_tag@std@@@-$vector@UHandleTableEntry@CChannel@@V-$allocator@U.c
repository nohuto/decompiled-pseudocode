/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800A6AB4
 * Callers:
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x180044220 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUHandleTableEntry@CChannel@@PEAU12@_KAEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800A6BA8 (--$_Uninitialized_value_construct_n@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUH.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1800A827C (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 */

__int64 __fastcall std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rax

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (a1[2] - *a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(v10 + 16 * v7, a2 - v7);
  v11 = a1[1];
  v12 = v10;
  for ( i = *a1; i != v11; i += 16LL )
  {
    *(_DWORD *)v12 = *(_DWORD *)i;
    *(_DWORD *)(v12 + 4) = *(_DWORD *)(i + 4);
    v14 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    *(_QWORD *)(v12 + 8) = v14;
    v12 += 16LL;
  }
  std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v12, v12);
  return std::vector<CChannel::HandleTableEntry>::_Change_array(a1, v10, a2, v2);
}
