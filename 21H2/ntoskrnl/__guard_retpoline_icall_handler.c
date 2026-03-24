/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140A17060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A17080 @ 0x140A17080 (sub_140A17080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140A17080();
  __debugbreak();
}
