/*
 * XREFs of _lambda_2ae32e13828e5ee4f6a411d44b960e49_::__lambda_2ae32e13828e5ee4f6a411d44b960e49_ @ 0x1800A12B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::_scalar_deleting_destructor_ @ 0x1800A1DC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___--_scala.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA658 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     _SearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$6 @ 0x1800AAAA8 (_SearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$6.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A1394 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returnco.c)
 */

__int64 __fastcall lambda_2ae32e13828e5ee4f6a411d44b960e49_::__lambda_2ae32e13828e5ee4f6a411d44b960e49_(_QWORD *a1)
{
  wil::com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(a1 + 8);
  std::wstring::_Tidy_deallocate(a1 + 4);
  return std::wstring::_Tidy_deallocate(a1);
}
