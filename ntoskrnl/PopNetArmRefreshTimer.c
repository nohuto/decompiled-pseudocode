/*
 * XREFs of PopNetArmRefreshTimer @ 0x1409935C0
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409938F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140993A30 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x14098FA38 (PopTraceNetRefreshTimerArmed.c)
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
