/*
 * XREFs of _cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$0 @ 0x1802BB228
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@V?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801B6F0C (--1-$com_ptr_t@V-$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Inte.c)
 */

__int64 __fastcall cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>(*(__int64 **)(a2 + 64));
  }
  return result;
}
