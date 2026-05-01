/*
 * XREFs of ?IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@SA@XZ @ 0x1800A803C
 * Callers:
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x180265970 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265C44 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies::IsWebSearchProvidersThirdPartyExtensionsEnabled(
        void)
{
  return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::call<_lambda_26dbc5293813faad3dad412cd200fc56_ &>();
}
