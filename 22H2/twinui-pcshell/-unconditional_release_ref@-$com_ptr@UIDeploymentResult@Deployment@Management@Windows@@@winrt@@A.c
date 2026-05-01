/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8
 * Callers:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1338 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@@Z @ 0x1800A6FD8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E82C4 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x1800EB350 (-GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEA.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800F05C8 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1800F08C0 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITestTabProxyWindowFactoryInternal@345@@Z @ 0x1800F1040 (-SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Window.c)
 *     ??4?$com_ptr@UIStream@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F47A8 (--4-$com_ptr@UIStream@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180106970 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ??R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ @ 0x180136684 (--R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ.c)
 *     ??R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ @ 0x180136730 (--R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ.c)
 *     ??R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ @ 0x180136A40 (--R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ.c)
 *     ??R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ @ 0x180136B58 (--R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ.c)
 *     _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator() @ 0x180136DF8 (_lambda_d2b9f9141b354d7aab2c271df0a099ad_--operator().c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139D6C (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139EE0 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x18013AE0C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013AF10 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180142FF0 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x180144054 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
