/*
 * XREFs of KeInitializeSemaphore @ 0x1402D6DB0
 * Callers:
 *     AlpcpInitializePort @ 0x1405E0D98 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1406526A0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     MiInitializeSections @ 0x140797A24 (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x1407CB394 (PopFxInitializeWorkPool.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  Semaphore->Header.Type = 5;
  Semaphore->Header.WaitListHead.Blink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.WaitListHead.Flink = &Semaphore->Header.WaitListHead;
  Semaphore->Header.Size = 8;
  Semaphore->Header.SignalState = Count;
  Semaphore->Limit = Limit;
}
