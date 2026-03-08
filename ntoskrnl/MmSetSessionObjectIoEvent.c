/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14075E414
 * Callers:
 *     IopSessionChangeWorker @ 0x1402D2EA0 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 760LL), 0, 0);
}
