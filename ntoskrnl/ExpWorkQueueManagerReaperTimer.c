/*
 * XREFs of ExpWorkQueueManagerReaperTimer @ 0x140302580
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall ExpWorkQueueManagerReaperTimer(__int64 a1, __int64 a2)
{
  return KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
}
