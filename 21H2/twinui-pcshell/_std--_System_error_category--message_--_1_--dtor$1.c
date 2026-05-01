/*
 * XREFs of _std::_System_error_category::message_::_1_::dtor$1 @ 0x18012876A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_System_error_category::message_::_1_::dtor_1(__int64 a1, __int64 a2, struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 72),
    (struct IServiceProvider *)a2,
    a3);
}
