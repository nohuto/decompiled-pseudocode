/*
 * XREFs of RtlpHpQueryVA @ 0x1402FE5C0
 * Callers:
 *     RtlpHpGetOwnerHeap @ 0x14027B364 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FDBE0 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402FDCD0 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402FDD3C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x1402FDFBC (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrRelease @ 0x140389454 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594B70 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxQuery @ 0x140289ACC (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  void *HeapManager; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9);
  RtlpHpVaMgrCtxQuery((__int64)HeapManager + 88, v7, (__int64)&v10);
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = DWORD2(v11);
  return v10;
}
