/*
 * XREFs of KeInitializeQueue @ 0x1402A8580
 * Callers:
 *     NtCreateIoCompletion @ 0x140729910 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 *     FsRtlInitializeWorkerThread @ 0x140B65C4C (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140B67854 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140B6F290 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->Header.SignalState = 0;
  Queue->CurrentCount = 0;
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
