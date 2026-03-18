/*
 * XREFs of HalRequestIpi @ 0x14035BB40
 * Callers:
 *     KiIpiSendRequest @ 0x140253F00 (KiIpiSendRequest.c)
 *     PoIdle @ 0x1402C4B30 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x1403CB450 (PoExecuteIdleCheck.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     PoInitiateProcessorWake @ 0x140583DB0 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1405861F8 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254570 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 0xE1u);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
