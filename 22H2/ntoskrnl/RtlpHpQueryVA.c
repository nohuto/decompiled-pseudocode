/*
 * XREFs of RtlpHpQueryVA @ 0x140315738
 * Callers:
 *     ExGetHeapFromVA @ 0x1402AC3C0 (ExGetHeapFromVA.c)
 *     RtlpHpSegMgrRelease @ 0x1403150E8 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140315500 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegSegmentInitialize @ 0x140315688 (RtlpHpSegSegmentInitialize.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpLargeAlloc @ 0x140323EBC (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140355BA8 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14035B508 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1403979B0 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x14024FA60 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery((__int64)&unk_140C71218, a1, (__int64)&v7);
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = DWORD2(v8);
  return v7;
}
