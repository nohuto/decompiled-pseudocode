/*
 * XREFs of ZwContinue @ 0x1403FA280
 * Callers:
 *     RtlRestoreContext @ 0x140407380 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
