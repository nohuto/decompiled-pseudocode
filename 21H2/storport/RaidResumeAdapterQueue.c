/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C0014204
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001281C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002B760 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F98C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C00308D0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0032790 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0038F00 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0039A20 (StorPortPause.c)
 *     StorPortAdapterActiveCondition @ 0x1C00402D0 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     StorResumeIoGateway @ 0x1C004E48C (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = StorResumeIoGateway((PKSPIN_LOCK)(a1 + 832));
  v3 = v2;
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v3;
}
