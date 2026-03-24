/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x140349318
 * Callers:
 *     ExSetTimer @ 0x140349080 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x14034927C (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
