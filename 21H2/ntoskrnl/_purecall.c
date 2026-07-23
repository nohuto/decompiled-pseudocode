/*
 * XREFs of _purecall @ 0x1405B7430
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
