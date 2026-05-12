/*
 * XREFs of RaidXrbSignalCompletion @ 0x1C0011810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall RaidXrbSignalCompletion(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(a1 + 664), 0, 0);
}
