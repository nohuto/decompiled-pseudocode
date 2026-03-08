/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1402046A4
 * Callers:
 *     ExSetTimer @ 0x1402042A0 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
