/*
 * XREFs of _purecall @ 0x1405B7140
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
