/*
 * XREFs of ?Release@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x180125310
 * Callers:
 *     ?Release@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1801716D0 (-Release@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winr_ea_1801716D0.c)
 *     ?Release@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x1801716E0 (-Release@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winr_ea_1801716E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(a1 + 32);
}
