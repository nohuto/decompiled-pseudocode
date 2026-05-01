/*
 * XREFs of _Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItemDataViewImpl::[Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource]::CreateView_::_1_::dtor$0 @ 0x180370BF4
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Internal::ComposableShell::Multitasking::ISwitchItemDataSource::SwitchItemDataViewImpl::_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_::CreateView_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    (struct IServiceProvider *)0x90,
    a3);
}
