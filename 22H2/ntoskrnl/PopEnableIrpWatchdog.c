/*
 * XREFs of PopEnableIrpWatchdog @ 0x140397E0C
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140397A4C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140397C44 (PopQueueQuerySetIrp.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     PopComputeWatchdogTimeout @ 0x140397EAC (PopComputeWatchdogTimeout.c)
 */

__int64 __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  result = PopComputeWatchdogTimeout(v1);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(v1 + 196) = 1;
    *(_DWORD *)(v1 + 120) = 275;
    *(_QWORD *)(v1 + 152) = v1;
    *(_QWORD *)(v1 + 144) = &PopIrpWatchdog;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 136) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 56) = 8;
    *(_QWORD *)(v1 + 72) = v1 + 64;
    *(_QWORD *)(v1 + 64) = v1 + 64;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_DWORD *)(v1 + 116) = 0;
    *(_WORD *)(v1 + 112) = 0;
    KiSetTimerEx(v1 + 56, -10000000LL * (unsigned int)result, 0, 0, v1 + 120);
    result = KiQueryUnbiasedInterruptTime();
    *(_QWORD *)(v1 + 48) = result;
  }
  return result;
}
