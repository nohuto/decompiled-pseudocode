/*
 * XREFs of std::_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800EAC00
 * Callers:
 *     <none>
 * Callees:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180036374 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@Q.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
        __int64 a1,
        __int64 a2,
        int *a3,
        void **a4,
        __int64 *a5,
        int *a6,
        __int64 a7)
{
  int v7; // esi
  int v8; // ebx
  __int64 v9; // rdi
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  void *v11; // [rsp+58h] [rbp+10h]

  v7 = *a3;
  v8 = *a6;
  v9 = *a5;
  v11 = *a4;
  if ( (*a6 & 0x1A) != 0 )
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::insert<0,0>(
      (__int64)&unk_1803E2B28,
      (__int64)v10);
  if ( (v8 & 4) != 0 )
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::insert<0,0>(
      (__int64)&unk_1803E2B38,
      (__int64)v10);
  anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(*((_QWORD *)qword_1803E2C80 + 5), v7, v11, a7, v9);
}
