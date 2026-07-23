/*
 * XREFs of ZwRaiseException @ 0x1403FC720
 * Callers:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1404077C0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
