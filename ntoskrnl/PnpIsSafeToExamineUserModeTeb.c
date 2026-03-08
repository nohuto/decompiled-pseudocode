/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140203EC4
 * Callers:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x140553324 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rdi

  v0 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v0;
}
