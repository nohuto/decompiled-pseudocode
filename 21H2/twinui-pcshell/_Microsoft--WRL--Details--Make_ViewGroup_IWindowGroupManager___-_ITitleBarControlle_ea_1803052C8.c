/*
 * XREFs of _Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager___&_ITitleBarController___&_ITabViewManager___&_Windows::Foundation::IEventHandler_IInspectable______&_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&_IPrivilegedForegroundOperations___&__::_1_::dtor$2 @ 0x1803052C8
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager_____ITitleBarController_____ITabViewManager_____Windows::Foundation::IEventHandler_IInspectable________Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const___IPrivilegedForegroundOperations______::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 88),
    *(struct IServiceProvider **)(a2 + 80),
    a3);
}
