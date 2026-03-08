/*
 * XREFs of PopPowerAggregatorRecordIntent @ 0x140757470
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140757580 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140757608 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorAreTargetStatesEqual @ 0x1409904F0 (PopPowerAggregatorAreTargetStatesEqual.c)
 */

unsigned __int64 __fastcall PopPowerAggregatorRecordIntent(
        __int64 a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rsi
  int v10; // r15d
  __int64 v12; // rdi
  int v14; // r12d
  char *v15; // rbx
  unsigned __int64 result; // rax
  LARGE_INTEGER v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = a6;
  v10 = a8;
  v12 = a7;
  v14 = a5;
  PopPowerAggregatorDiagTraceHandleIntent(a2, a4, a5, a6, a7, a8);
  v15 = (char *)&unk_140C3A830 + 128 * (unsigned __int64)(((_BYTE)dword_140C3A828 - 1) & 0x1F);
  if ( *(_DWORD *)v15 != 1
    || *((_DWORD *)v15 + 6) != a2
    || *((_DWORD *)v15 + 9) != v14
    || *((_DWORD *)v15 + 30) != v10
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v15 + 40, v8)
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v15 + 80, v12)
    || (result = RtlGetInterruptTimePrecise(&v17) - *((_QWORD *)v15 + 1), result >= 0x2FAF080) )
  {
    result = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 1LL);
    *(_DWORD *)(result + 24) = a2;
    if ( a3 )
      *(_DWORD *)(result + 28) = *a3;
    *(_DWORD *)(result + 32) = a4;
    *(_DWORD *)(result + 36) = v14;
    *(_OWORD *)(result + 40) = *(_OWORD *)v8;
    *(_OWORD *)(result + 56) = *(_OWORD *)(v8 + 16);
    *(_QWORD *)(result + 72) = *(_QWORD *)(v8 + 32);
    *(_OWORD *)(result + 80) = *(_OWORD *)v12;
    *(_OWORD *)(result + 96) = *(_OWORD *)(v12 + 16);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v12 + 32);
    *(_DWORD *)(result + 120) = v10;
  }
  return result;
}
