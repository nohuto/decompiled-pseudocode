/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x140776D08
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1407769C0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776AA8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776C08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     memset @ 0x140413800 (memset.c)
 */

LARGE_INTEGER *__fastcall PopPowerAggregatorAllocateLogEntry(LARGE_INTEGER *a1, ULONG a2)
{
  __int64 LowPart; // r8
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  LowPart = a1[39].LowPart;
  a1[39].LowPart = ((_BYTE)LowPart + 1) & 0x1F;
  v5 = &a1[18 * LowPart];
  memset((char *)&a1[18 * LowPart + 40].QuadPart + 4, 0, 0x8CuLL);
  v5[40].LowPart = a2;
  v5[41] = KeQueryInterruptTimePrecise(&v7);
  result = v5 + 40;
  v5[42] = *a1;
  return result;
}
