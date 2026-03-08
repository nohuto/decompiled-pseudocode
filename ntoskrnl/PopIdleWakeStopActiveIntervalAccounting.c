/*
 * XREFs of PopIdleWakeStopActiveIntervalAccounting @ 0x14059B80C
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059B664 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059B75C (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopIdleWakeInsertTimeInterval @ 0x14059B3B0 (PopIdleWakeInsertTimeInterval.c)
 */

__int64 __fastcall PopIdleWakeStopActiveIntervalAccounting(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  result = *a1;
  if ( (result & 0x10) != 0 )
  {
    v5 = a2 - *((_QWORD *)a1 + 1);
    if ( (result & 2) != 0 )
    {
      *((_QWORD *)a1 + 2) += v5;
    }
    else if ( (result & 1) != 0 )
    {
      *((_QWORD *)a1 + 3) += v5;
    }
    else
    {
      *((_QWORD *)a1 + 4) += v5;
    }
    if ( (result & 8) == 0 )
    {
      LODWORD(result) = result | 4;
      *a1 = result;
    }
    v6 = *((_QWORD *)a1 + 5);
    v7 = v6 + ((result & 4) != 0 ? 800LL : 416LL);
    ++*(_DWORD *)v7;
    *(_QWORD *)(v7 + 24) += *((_QWORD *)a1 + 7);
    v8 = *((_QWORD *)a1 + 7);
    if ( v8 < *(_QWORD *)(v7 + 8) )
      *(_QWORD *)(v7 + 8) = v8;
    v9 = *((_QWORD *)a1 + 7);
    if ( v9 > *(_QWORD *)(v7 + 16) )
      *(_QWORD *)(v7 + 16) = v9;
    PopIdleWakeInsertTimeInterval(*((_QWORD *)a1 + 7), 9u, v7 + 32, 0LL, PopIdleWakeIdleAccountingBucketLimitsQpc);
    if ( *(_DWORD *)v7 > 1u )
      PopIdleWakeInsertTimeInterval(
        a2 - *(_QWORD *)(v7 + 112),
        0xBu,
        v7 + 68,
        0LL,
        PopIdleWakePeriodAccountingBucketLimitsQpc);
    *(_QWORD *)(v7 + 112) = a2;
    KeAddProcessorAffinityEx((unsigned __int16 *)(v6 + 144), a1[16]);
    v10 = *((_QWORD *)a1 + 3) + *((_QWORD *)a1 + 4) + *((_QWORD *)a1 + 2);
    *(_QWORD *)(v7 + 120) += v10;
    PopIdleWakeInsertTimeInterval(v10, 5u, v7 + 128, v7 + 152, PopIdleWakeSourceActiveBucketLimitsQpc);
    *(_QWORD *)(v7 + 192) += *((_QWORD *)a1 + 2);
    PopIdleWakeInsertTimeInterval(
      *((_QWORD *)a1 + 2),
      v11,
      v7 + 200,
      v7 + 224,
      PopIdleWakeSourceActivatorBucketLimitsQpc);
    *(_QWORD *)(v7 + 264) += *((_QWORD *)a1 + 3);
    PopIdleWakeInsertTimeInterval(*((_QWORD *)a1 + 3), v12, v7 + 272, v7 + 296, PopIdleWakeSourceDeviceBucketLimitsQpc);
    *(_QWORD *)(v7 + 336) += *((_QWORD *)a1 + 4);
    PopIdleWakeInsertTimeInterval(*((_QWORD *)a1 + 4), v13, v7 + 344, v7 + 360, PopIdleWakeSourceDeviceBucketLimitsQpc);
    return (__int64)memset(a1, 0, 0x48uLL);
  }
  return result;
}
