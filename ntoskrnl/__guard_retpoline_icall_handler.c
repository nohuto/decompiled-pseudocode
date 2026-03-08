/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140AF6060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AF6080 @ 0x140AF6080 (sub_140AF6080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140AF6080();
  __debugbreak();
}
