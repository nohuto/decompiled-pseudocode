/*
 * XREFs of PsThawProcess @ 0x1409B31CC
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 * Callees:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 */

__int64 __fastcall PsThawProcess(__int64 a1, __int64 a2)
{
  return PsThawMultiProcess(a1, a2, 1u);
}
