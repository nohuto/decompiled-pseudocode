/*
 * XREFs of ?IsEdgeUninstallable@?$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A7C44
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A1A04 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ??$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@Z @ 0x180106F3C (--$call@AEAV_lambda_809d23d5339c6d099369bd39e6bd0e4f_@@@-$factory_cache_entry@UIntegratedService.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

char __fastcall winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsEdgeUninstallable(
        _QWORD *a1)
{
  unsigned int v1; // eax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 48LL))(*a1, &v3);
  winrt::check_hresult(v1);
  return v3;
}
