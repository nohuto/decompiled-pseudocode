/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener_Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter___&__::_1_::dtor$1 @ 0x1802A7F38
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener_Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener_Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter______::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 88),
    *(struct IServiceProvider **)(a2 + 64),
    a3);
}
