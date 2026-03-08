/*
 * XREFs of KeInitializeSemaphore @ 0x140343A50
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     AlpcpInitializePort @ 0x140712D08 (AlpcpInitializePort.c)
 *     NtCreateSemaphore @ 0x1407D0F50 (NtCreateSemaphore.c)
 *     MiInitializeSections @ 0x1408385EC (MiInitializeSections.c)
 *     PopFxInitializeWorkPool @ 0x14084D2FC (PopFxInitializeWorkPool.c)
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
