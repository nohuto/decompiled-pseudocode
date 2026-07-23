/*
 * XREFs of PopPowerAggregatorRecordIntent @ 0x1407769C0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140776874 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140382D98 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140776D08 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorAreTargetStatesEqual @ 0x1408EE024 (PopPowerAggregatorAreTargetStatesEqual.c)
 */

unsigned __int64 __fastcall PopPowerAggregatorRecordIntent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        int a7)
{
  _OWORD *v7; // rsi
  int v9; // r15d
  _OWORD *v11; // rdi
  char *v13; // rbx
  unsigned __int64 result; // rax
  __int128 v15; // xmm0
  LARGE_INTEGER v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = a5;
  v9 = a7;
  v11 = a6;
  PopPowerAggregatorDiagTraceHandleIntent(a2, a3, a4, (__int64)a5, (__int64)a6, a7);
  v13 = (char *)&unk_140C21920 + 144 * (((unsigned __int8)dword_140C21918 - 1) & 0x1F);
  if ( *(_DWORD *)v13 != 1
    || *((_DWORD *)v13 + 6) != a2
    || *((_DWORD *)v13 + 8) != a4
    || *((_DWORD *)v13 + 34) != v9
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v13 + 40, v7)
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v13 + 88, v11)
    || (result = *(_QWORD *)&KeQueryInterruptTimePrecise(&v16) - *((_QWORD *)v13 + 1), result >= 0x2FAF080) )
  {
    result = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 1LL);
    *(_DWORD *)(result + 24) = a2;
    *(_DWORD *)(result + 28) = a3;
    *(_DWORD *)(result + 32) = a4;
    *(_OWORD *)(result + 40) = *v7;
    *(_OWORD *)(result + 56) = v7[1];
    *(_OWORD *)(result + 72) = v7[2];
    *(_OWORD *)(result + 88) = *v11;
    *(_OWORD *)(result + 104) = v11[1];
    v15 = v11[2];
    *(_DWORD *)(result + 136) = v9;
    *(_OWORD *)(result + 120) = v15;
  }
  return result;
}
