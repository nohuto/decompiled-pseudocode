/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@1@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x180024914
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180024A50 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0?$unordered_set@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@V?$allocator@PEAVCBaseExpression@@@3@@std@@QEAA@XZ @ 0x180024C5C (--0-$unordered_set@PEAVCBaseExpression@@U-$hash@PEAVCBaseExpression@@@std@@U-$equal_to@PEAVCBase.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVIBatchProcessingCompleteListener@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800245B4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1800245B4.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  SIZE_T size_of; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IBatchProcessingCompleteListener *>>,std::_Iterator_base0>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  return a1;
}
