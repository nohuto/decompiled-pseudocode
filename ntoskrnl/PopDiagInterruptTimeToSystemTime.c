/*
 * XREFs of PopDiagInterruptTimeToSystemTime @ 0x140A85B30
 * Callers:
 *     PopDiagTraceRtcWakeInfo @ 0x140592130 (PopDiagTraceRtcWakeInfo.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14098FCB8 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 *     PopDiagTraceDirtyTransition @ 0x140B32210 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagInterruptTimeToSystemTime(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MEMORY[0xFFFFF78000000014];
  v3 = -a1;
  if ( a1 >= 0 )
    v3 = a1 - MEMORY[0xFFFFF78000000008];
  *a2 = MEMORY[0xFFFFF78000000014] + v3;
  return result;
}
