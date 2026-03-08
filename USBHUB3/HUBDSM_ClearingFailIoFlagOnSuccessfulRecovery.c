/*
 * XREFs of HUBDSM_ClearingFailIoFlagOnSuccessfulRecovery @ 0x1C001F320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ClearingFailIoFlagOnSuccessfulRecovery(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  **(_BYTE **)(v1 + 16) = 0;
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0xFFFFFDFF);
  return 4077LL;
}
