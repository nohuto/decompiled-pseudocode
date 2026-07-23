/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x180006258
 * Callers:
 *     RtlpHpSegContextReserve @ 0x1800085F8 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x180006390 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeReserve @ 0x1801082DC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180109E08 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x18010B530 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  _BOOL8 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi

  v3 = a2 + 2;
  v5 = 0;
  v6 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( !v6 )
    return 0LL;
  v8 = (unsigned int)-*(_DWORD *)a1;
  v9 = v8;
  v10 = (_DWORD)v8 != 0x100000;
  v11 = 2 * ((unsigned __int64)(v6 - qword_18016DC28) >> 20);
  v12 = v11 + 2 * (v8 >> 20);
  if ( v11 >= v12 )
  {
LABEL_5:
    v5 = 1;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v9 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_QWORD *)(a1 + 56), v6, v3 << 12, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v14 = 2147353480LL;
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v6, v9);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v15 = v6;
    v6 = 0LL;
  }
  else
  {
    while ( (int)RtlCSparseBitmapBitmaskWrite(&BaseAddress, v11, v7, v10 + 1) >= 0 )
    {
      v11 += 2LL;
      if ( v11 >= v12 )
        goto LABEL_5;
    }
    v15 = 0LL;
  }
  if ( v6 )
    RtlpHpSegSegmentFree(a1, v6, v3, v5);
  return v15;
}
