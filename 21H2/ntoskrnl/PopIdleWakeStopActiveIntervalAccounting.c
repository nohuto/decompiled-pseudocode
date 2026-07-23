/*
 * XREFs of PopIdleWakeStopActiveIntervalAccounting @ 0x14057C054
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057BC50 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057BF60 (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x14057B72C (PopIdleWakeFindOrAllocateWakeSource.c)
 *     PopIdleWakeInsertTimeInterval @ 0x14057B860 (PopIdleWakeInsertTimeInterval.c)
 */

__int64 __fastcall PopIdleWakeStopActiveIntervalAccounting(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 WakeSource; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned __int64 *v14; // r11

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
    WakeSource = PopIdleWakeFindOrAllocateWakeSource((__int64)a1, a1[10], (__int64)(a1 + 12), (result & 4) != 0);
    v7 = WakeSource;
    ++*(_DWORD *)(WakeSource + 312);
    *(_QWORD *)(WakeSource + 336) += *((_QWORD *)a1 + 24);
    v8 = *((_QWORD *)a1 + 24);
    if ( v8 < *(_QWORD *)(WakeSource + 320) )
    {
      *(_QWORD *)(WakeSource + 320) = v8;
      v8 = *((_QWORD *)a1 + 24);
    }
    if ( v8 > *(_QWORD *)(WakeSource + 328) )
    {
      *(_QWORD *)(WakeSource + 328) = v8;
      v8 = *((_QWORD *)a1 + 24);
    }
    PopIdleWakeInsertTimeInterval(v8, 9u, WakeSource + 344, 0LL, PopIdleWakeIdleAccountingBucketLimitsQpc);
    if ( *(_DWORD *)(v7 + 312) > 1u )
      PopIdleWakeInsertTimeInterval(
        a2 - *(_QWORD *)(v7 + 424),
        v9 + 11,
        v7 + 380,
        v9,
        PopIdleWakePeriodAccountingBucketLimitsQpc);
    *(_QWORD *)(v7 + 424) = a2;
    KeAddProcessorAffinityEx((_WORD *)(v7 + 144), a1[50]);
    v10 = *((_QWORD *)a1 + 2) + *((_QWORD *)a1 + 3) + *((_QWORD *)a1 + 4);
    *(_QWORD *)(v7 + 432) += v10;
    PopIdleWakeInsertTimeInterval(v10, 5u, v7 + 440, v7 + 464, PopIdleWakeSourceActiveBucketLimitsQpc);
    *(_QWORD *)(v7 + 504) += *((_QWORD *)a1 + 2);
    PopIdleWakeInsertTimeInterval(
      *((_QWORD *)a1 + 2),
      v11,
      v7 + 512,
      v7 + 536,
      PopIdleWakeSourceActivatorBucketLimitsQpc);
    *(_QWORD *)(v7 + 576) += *((_QWORD *)a1 + 3);
    PopIdleWakeInsertTimeInterval(*((_QWORD *)a1 + 3), v12, v7 + 584, v7 + 608, PopIdleWakeSourceDeviceBucketLimitsQpc);
    *(_QWORD *)(v7 + 648) += *((_QWORD *)a1 + 4);
    PopIdleWakeInsertTimeInterval(*((_QWORD *)a1 + 4), v13, v7 + 656, v7 + 672, v14);
    return (__int64)memset(a1, 0, 0xD0uLL);
  }
  return result;
}
