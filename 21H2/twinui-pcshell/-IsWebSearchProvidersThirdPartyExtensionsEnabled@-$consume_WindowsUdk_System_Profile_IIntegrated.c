/*
 * XREFs of ?IsWebSearchProvidersThirdPartyExtensionsEnabled@?$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A802C
 * Callers:
 *     ??$call@AEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@?$factory_cache_entry@UIntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@UIIntegratedServicesGeographicRegionPoliciesStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@Z @ 0x18009E190 (--$call@AEAV_lambda_26dbc5293813faad3dad412cd200fc56_@@@-$factory_cache_entry@UIntegratedService.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

char __fastcall winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsWebSearchProvidersThirdPartyExtensionsEnabled(
        _QWORD *a1)
{
  unsigned int v1; // eax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 72LL))(*a1, &v3);
  winrt::check_hresult(v1);
  return v3;
}
