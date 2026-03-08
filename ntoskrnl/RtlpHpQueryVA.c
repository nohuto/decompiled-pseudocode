/*
 * XREFs of RtlpHpQueryVA @ 0x140309578
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     RtlpHpLargeAlloc @ 0x1402B6D70 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x140308F28 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140309340 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegSegmentInitialize @ 0x1403094C8 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14030C1E4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14030C2C4 (RtlpHpSegMgrVaCtxInitialize.c)
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     RtlpHpSegContextInitialize @ 0x140375540 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1403095E0 (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140C70DD8, a1, &v7);
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = DWORD2(v8);
  return v7;
}
