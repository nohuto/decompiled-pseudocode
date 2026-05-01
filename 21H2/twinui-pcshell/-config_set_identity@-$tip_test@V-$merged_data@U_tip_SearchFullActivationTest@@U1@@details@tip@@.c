/*
 * XREFs of ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXIPEBD@Z @ 0x1800ABD8C
 * Callers:
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC3F4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AE.c)
 *     ?has_ever_started@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8 (-has_ever_started@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD214 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 *__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::config_set_identity(
        wil::details::in1diag3 *a1,
        int a2,
        __int64 a3)
{
  wil::details::in1diag3 *v5; // r9
  __int64 v6; // rcx
  __int64 *result; // rax
  __int64 v8; // rcx

  v5 = a1;
  if ( !a3 || (v6 = *(_QWORD *)a1) != 0 && (unsigned __int8)tip::details::shared_data<0,0,0>::has_ever_started(v6 + 8) )
    wil::details::in1diag3::FailFastImmediate_Unexpected(a1);
  result = (__int64 *)tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(v5);
  v8 = *result;
  *(_QWORD *)(v8 + 32) = a3;
  *(_DWORD *)(v8 + 24) = a2;
  return result;
}
