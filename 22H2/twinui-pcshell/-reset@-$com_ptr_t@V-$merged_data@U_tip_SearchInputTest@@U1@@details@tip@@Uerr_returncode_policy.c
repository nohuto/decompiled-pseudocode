/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C1250
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF178 (--1-$test_data_control@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ?CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800BF534 (-CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1318 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0364 (-Release@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::Release(result);
  return result;
}
