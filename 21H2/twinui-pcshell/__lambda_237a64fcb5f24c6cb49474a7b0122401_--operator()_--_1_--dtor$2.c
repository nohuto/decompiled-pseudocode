/*
 * XREFs of __lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor$2 @ 0x180384483
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 176), 0LL, a3);
}
