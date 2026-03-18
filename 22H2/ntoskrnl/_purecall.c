/*
 * XREFs of _purecall @ 0x14060CF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
