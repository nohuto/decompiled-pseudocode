/*
 * XREFs of _purecall @ 0x1405B7200
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(0xC0000002);
}
