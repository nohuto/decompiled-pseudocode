/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1804D3704
 * Callers:
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800EB550 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWind.c)
 *     ?GetTrustLevel@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800EB570 (-GetTrustLevel@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@_ea_1800EB570.c)
 *     ?GetTrustLevel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800EB5A0 (-GetTrustLevel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@.c)
 *     ?GetTrustLevel@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x180102810 (-GetTrustLevel@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJP.c)
 *     ?GetTrustLevel@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180122410 (-GetTrustLevel@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell.c)
 *     ?GetTrustLevel@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x18013A6A0 (-GetTrustLevel@-$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinMana.c)
 *     ?GetTrustLevel@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1804D3020 (-GetTrustLevel@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 32LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  return 0LL;
}
