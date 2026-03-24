/*
 * XREFs of HalRequestIpi @ 0x140343EB0
 * Callers:
 *     PoIdle @ 0x140221E90 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x140227E10 (PoExecuteIdleCheck.c)
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 *     PoInitiateProcessorWake @ 0x140565450 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567C38 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1403443F0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 225LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
