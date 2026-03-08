/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x140757580
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x140757470 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PopPowerAggregatorAllocateLogEntry(__int64 a1, int a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned __int64)*(unsigned int *)(a1 + 296) << 7;
  *(_DWORD *)(a1 + 296) = ((unsigned __int8)*(_DWORD *)(a1 + 296) + 1) & 0x1F;
  v5 = v4 + a1;
  memset((void *)(v4 + a1 + 308), 0, 0x7CuLL);
  *(_DWORD *)(v5 + 304) = a2;
  *(_QWORD *)(v5 + 312) = RtlGetInterruptTimePrecise(&v7);
  result = v5 + 304;
  *(_QWORD *)(v5 + 320) = *(_QWORD *)a1;
  return result;
}
