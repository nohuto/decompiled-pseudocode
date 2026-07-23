/*
 * XREFs of ZwContinue @ 0x1403FADE0
 * Callers:
 *     RtlRestoreContext @ 0x140407EE0 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
