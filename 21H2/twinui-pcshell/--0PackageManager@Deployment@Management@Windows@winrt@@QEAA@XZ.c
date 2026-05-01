/*
 * XREFs of ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1800A0F1C
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FF8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180125AD8 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 * Callees:
 *     ??$call@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUPackageManager@Deployment@Management@Windows@2@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@Z @ 0x18009E2F4 (--$call@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@-$factory_cache_entry@UPackageManager@De.c)
 */

struct IUnknown *__fastcall winrt::Windows::Management::Deployment::PackageManager::PackageManager(
        struct IUnknown *this)
{
  winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_6aff509e5d472f5d0ad2f00951d0eacf_ &>(
    (__int64)this,
    this);
  return this;
}
