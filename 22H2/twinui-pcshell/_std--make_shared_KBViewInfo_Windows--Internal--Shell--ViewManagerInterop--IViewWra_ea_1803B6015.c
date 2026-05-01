/*
 * XREFs of _std::make_shared_KBViewInfo_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___&__::_1_::dtor$2 @ 0x1803B6015
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::make_shared_KBViewInfo_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper______::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    (struct IServiceProvider *)a2,
    a3);
}
