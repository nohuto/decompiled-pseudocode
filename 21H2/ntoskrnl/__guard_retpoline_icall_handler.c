/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140AB8060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB8080 @ 0x140AB8080 (sub_140AB8080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140AB8080();
  __debugbreak();
}
