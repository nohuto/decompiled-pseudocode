/*
 * XREFs of RtlpHpSegSegmentFree @ 0x14036808C
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x1403633A0 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14036DD30 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextCleanup @ 0x14036EDA8 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitsClear @ 0x140368170 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x14036843C (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *HeapManager; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
  {
    v12 = *(_OWORD *)(a1 + 40);
    HeapManager = RtlpHpEnvGetHeapManager(&v12);
    RtlCSparseBitmapBitsClear(HeapManager + 2, 2 * ((unsigned __int64)(v9 - HeapManager[1]) >> 20), 2 * (v8 >> 20));
  }
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(result + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  return result;
}
