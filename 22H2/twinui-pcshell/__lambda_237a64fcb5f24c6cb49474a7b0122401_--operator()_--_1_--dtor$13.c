/*
 * XREFs of __lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor$13 @ 0x18038426A
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor_13(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    (struct IServiceProvider *)0x130,
    a3);
}
