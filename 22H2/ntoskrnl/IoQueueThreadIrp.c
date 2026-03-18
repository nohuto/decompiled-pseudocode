/*
 * XREFs of IoQueueThreadIrp @ 0x1403C7120
 * Callers:
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14096F0B4 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
