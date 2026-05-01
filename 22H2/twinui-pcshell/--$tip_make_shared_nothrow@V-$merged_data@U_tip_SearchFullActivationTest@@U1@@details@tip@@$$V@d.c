/*
 * XREFs of ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@$$V@details@tip@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800A06C0
 * Callers:
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T@Z @ 0x1800A0E28 (--0-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC3D4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AE.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0B40 (--0-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD064 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

_QWORD *__fastcall tip::details::tip_make_shared_nothrow<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,>(
        _QWORD *a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx

  v2 = CoTaskMemAlloc(0x150uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  *a1 = tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>(v2);
  return a1;
}
