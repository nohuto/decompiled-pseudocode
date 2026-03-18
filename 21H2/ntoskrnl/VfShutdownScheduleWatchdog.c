/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x140601514
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x140A95A04 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  result = (unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 0x10) != 0 )
    return ViShutdownScheduleWatchdog();
  return result;
}
