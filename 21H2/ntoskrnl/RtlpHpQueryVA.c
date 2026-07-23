/*
 * XREFs of RtlpHpQueryVA @ 0x1402230E4
 * Callers:
 *     RtlpHpSegMgrVaCtxInsert @ 0x140222704 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402227F4 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegSegmentInitialize @ 0x140222860 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140222AE0 (RtlpHpLargeAlloc.c)
 *     RtlpHpGetOwnerHeap @ 0x140305A34 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrRelease @ 0x140389CA4 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140594E60 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14031419C (RtlpHpVaMgrCtxQuery.c)
 */

__int64 __fastcall RtlpHpQueryVA(__int64 a1, __int128 *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 HeapManager; // rax
  __int64 v7; // r10
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9, a2);
  RtlpHpVaMgrCtxQuery(HeapManager + 88, v7, &v10);
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = DWORD2(v11);
  return v10;
}
