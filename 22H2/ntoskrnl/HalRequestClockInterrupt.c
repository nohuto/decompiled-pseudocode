/*
 * XREFs of HalRequestClockInterrupt @ 0x140364AF0
 * Callers:
 *     KiSendClockInterruptToClockOwner @ 0x140364A68 (KiSendClockInterruptToClockOwner.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050B890 (HalpTimerWatchdogTriggerSystemReset.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254570 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestClockInterrupt(int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 0xD2u);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
