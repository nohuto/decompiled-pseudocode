/*
 * XREFs of ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@AEBV01@@Z @ 0x1800A0EB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::Run @ 0x1800A98E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___--Run.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA658 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC434 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip.c)
 */

__int64 *__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx

  v3 = (__int64 *)tip::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(a2);
  v4 = *v3;
  *a1 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 424));
  return a1;
}
