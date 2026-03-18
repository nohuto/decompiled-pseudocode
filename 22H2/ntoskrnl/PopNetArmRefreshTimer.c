/*
 * XREFs of PopNetArmRefreshTimer @ 0x140996670
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409969A0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996AE0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x140992AE8 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx

  v4 = 0LL;
  v5 = -a1;
  if ( a2 )
    v5 = a1;
  KeSetTimer2((__int64)&PopNetRefreshTimer, v5, 0LL, 0LL);
  if ( a2 )
  {
    if ( MEMORY[0xFFFFF78000000014] < a1 )
      v4 = a1 - MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v4 = a1;
  }
  PopTraceNetRefreshTimerArmed(v4);
}
