/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140577778
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(unsigned __int16 *a1)
{
  KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
}
