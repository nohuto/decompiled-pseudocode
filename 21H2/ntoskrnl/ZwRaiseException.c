/*
 * XREFs of ZwRaiseException @ 0x1403FD280
 * Callers:
 *     RtlRaiseException @ 0x1402621C0 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402639D0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x140408320 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
