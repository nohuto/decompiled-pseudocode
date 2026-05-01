/*
 * XREFs of ??1?$com_ptr_t@V?$AgileVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801B6D5C
 * Callers:
 *     _cshell::make_agile_vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::dtor$0 @ 0x1801B5AE7 (_cshell--make_agile_vector_Windows--Internal--Shell--ViewManagerInterop--IViewWrapper____--_1_--.c)
 *     __lambda_98ae2f8acbcd0270b071efd378e5a46f_::operator()_::_1_::dtor$4 @ 0x18029FD0B (__lambda_98ae2f8acbcd0270b071efd378e5a46f_--operator()_--_1_--dtor$4.c)
 *     _cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode____::_1_::dtor$0 @ 0x1802BAEFB (_cshell--make_agile_vector_Windows--Internal--ComposableShell--ITreeNode____--_1_--dtor$0.c)
 *     _cshell::make_agile_vector_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$0 @ 0x1802BAFB8 (_cshell--make_agile_vector_Windows--Internal--ComposableShell--ITreeNode___std--_Tree_iterator_s.c)
 *     _cshell::make_agile_vector_view_Windows::Internal::ComposableShell::ITreeNode___std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_Windows::Internal::ComposableShell::ITreeNode_wil::err_exception_policy__________cshell::select_from_tuple_1____::_1_::dtor$0 @ 0x1802BB059 (_cshell--make_agile_vector_view_Windows--Internal--ComposableShell--ITreeNode___std--_Tree_itera.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$3 @ 0x18030CC47 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--WindowSnapStateChanged_--_1_--dtor$3.c)
 *     _cshell::make_agile_vector_unsigned_int__::_1_::dtor$0 @ 0x180320B23 (_cshell--make_agile_vector_unsigned_int__--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x18032A4FA (_WindowingEnvironmentSettings--get_RequestedDisplayRegionIds_--_1_--dtor$0.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1804C3710 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$0 @ 0x1804C38F3 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUITreeNode@ComposableShell@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BF380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAUITr.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,0>,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::ITreeNode *>,Microsoft::WRL::FtmBase>::Release(v1);
  return result;
}
