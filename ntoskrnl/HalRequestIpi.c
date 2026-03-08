/*
 * XREFs of HalRequestIpi @ 0x1402EF7C0
 * Callers:
 *     PoIdle @ 0x14022D240 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KiIpiSendRequest @ 0x140233230 (KiIpiSendRequest.c)
 *     PoExecuteIdleCheck @ 0x1403C65A0 (PoExecuteIdleCheck.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     PoInitiateProcessorWake @ 0x140581880 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140583CC8 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
