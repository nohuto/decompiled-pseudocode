/*
 * XREFs of RtlpHpSegSegmentFree @ 0x140389C1C
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x14022117C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCompact @ 0x140311520 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x140334740 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCleanup @ 0x140389BBC (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x140220B54 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegMgrRelease @ 0x140389CA4 (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *HeapManager; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  int v11; // ebx
  unsigned __int64 i; // rcx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
  {
    v13 = *(_OWORD *)(a1 + 40);
    HeapManager = RtlpHpEnvGetHeapManager(&v13);
    RtlCSparseBitmapBitsClear(
      (__int64)(HeapManager + 2),
      2 * ((unsigned __int64)(v9 - HeapManager[1]) >> 20),
      2 * (v8 >> 20));
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    v11 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      v11 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  return RtlpHpSegMgrRelease(a1);
}
