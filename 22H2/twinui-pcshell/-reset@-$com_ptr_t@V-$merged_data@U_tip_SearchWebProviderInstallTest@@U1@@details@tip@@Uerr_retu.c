/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800ADF90
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A1464 (--1-$test_data_control@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A86B8 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(result);
  return result;
}
