/*
 * XREFs of IoSetActivityIdThread @ 0x140203940
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall IoSetActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
