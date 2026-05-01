/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A1744
 * Callers:
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T@Z @ 0x1800A0E48 (--0-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC3F4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@AE.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A8664 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ.c)
 */

void **__fastcall wil::com_ptr_t<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v4);
  return a1;
}
