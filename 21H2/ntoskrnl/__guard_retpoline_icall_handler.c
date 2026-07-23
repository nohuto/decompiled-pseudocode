/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140A18060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A18080 @ 0x140A18080 (sub_140A18080.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140A18080();
  __debugbreak();
}
