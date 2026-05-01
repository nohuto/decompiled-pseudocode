/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF1BC
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDBC (--$open@V-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA-AV-$ti.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C0F68 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV-$c.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0364 (-Release@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ.c)
 */

void **__fastcall wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::operator=(
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
    tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::Release(v4);
  return a1;
}
