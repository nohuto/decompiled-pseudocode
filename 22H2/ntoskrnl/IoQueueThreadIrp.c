/*
 * XREFs of IoQueueThreadIrp @ 0x140381250
 * Callers:
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B44B0 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
