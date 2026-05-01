/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800C0F68
 * Callers:
 *     ??4?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF20C (--4-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@2@XZ @ 0x1800C0EC8 (-data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AV-$test_data.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AU_GUID@@XZ @ 0x1800C1318 (-start@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@XZ @ 0x1800BF088 (--0-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF158 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF1BC (--4-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD064 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void **__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x128uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>((__int64)v2);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
