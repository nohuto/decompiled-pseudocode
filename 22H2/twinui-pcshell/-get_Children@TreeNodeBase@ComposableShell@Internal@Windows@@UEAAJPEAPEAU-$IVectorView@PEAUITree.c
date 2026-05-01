/*
 * XREFs of ?get_Children@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@4@@Z @ 0x1802C5940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$make_agile_vector_view@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@U?$select_from_tuple@$00@cshell@@@cshell@@YA?AV?$com_ptr_t@U?$IVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@0$$QEAU?$select_from_tuple@$00@0@@Z @ 0x1802BAFE8 (--$make_agile_vector_view@PEAUITreeNode@ComposableShell@Internal@Windows@@V-$_Tree_iterator@V-$_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::get_Children(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  v11 = v4;
  try
  {
    v5 = cshell::make_agile_vector_view<Windows::Internal::ComposableShell::ITreeNode *,std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>>,cshell::select_from_tuple<1>>(
           &v10,
           **(_QWORD **)(a1 + 40),
           *(_QWORD *)(a1 + 40));
    v7 = *v5;
    *v5 = 0LL;
    *a2 = v7;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB,
                           (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
                           v6);
  }
  return result;
}
