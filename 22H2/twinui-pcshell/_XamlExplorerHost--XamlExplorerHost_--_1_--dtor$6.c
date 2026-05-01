/*
 * XREFs of _XamlExplorerHost::XamlExplorerHost_::_1_::dtor$6 @ 0x18035C7DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XamlExplorerHost::XamlExplorerHost_::_1_::dtor_6(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    (winrt::immersive_shell_component *)&a2[6].lpVtbl[3].AddRef,
    a2,
    a3);
}
