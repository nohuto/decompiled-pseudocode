/*
 * XREFs of __lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor$5 @ 0x1803841E9
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor_5(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 184), 0LL, a3);
}
