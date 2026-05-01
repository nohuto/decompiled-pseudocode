/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC414
 * Callers:
 *     ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@AEBV01@@Z @ 0x1800A0E98 (--0-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA@AEB.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@1@XZ @ 0x1800A18C8 (--C-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA-AV-.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@2@XZ @ 0x1800AF19C (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@ti.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0C40 (--0-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A1374 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returnco.c)
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A86B8 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD064 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip::tip_test<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x1B0uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v5);
    wil::com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
