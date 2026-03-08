/*
 * XREFs of ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180036374
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EAC00 (std--_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??$_Emplace@AEB_K@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@_KPEAX@std@@_N@1@AEB_K@Z @ 0x1800363A8 (--$_Emplace@AEB_K@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@IE.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::insert<0,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Emplace<unsigned __int64 const &>(
    a1,
    &v4);
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 8) = v5;
  return a2;
}
