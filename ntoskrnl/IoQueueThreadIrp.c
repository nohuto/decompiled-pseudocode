/*
 * XREFs of IoQueueThreadIrp @ 0x1403C1860
 * Callers:
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14096C094 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
