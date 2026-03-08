/*
 * XREFs of _purecall @ 0x14060AAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
