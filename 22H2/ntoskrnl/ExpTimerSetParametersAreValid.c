/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14031E014
 * Callers:
 *     ExSetTimer @ 0x14031DC10 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
