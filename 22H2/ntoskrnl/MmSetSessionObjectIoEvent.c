/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14078D804
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A6120 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
