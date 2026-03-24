/*
 * XREFs of CcDecrementOpenCount @ 0x1402937BC
 * Callers:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022CFFC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     CcCompleteAsyncRead @ 0x140277CC0 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     CcGetFlushedValidData @ 0x140311450 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403296D0 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x140329A88 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404EBAB0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140277468 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 Partition; // rax
  __int64 v3; // rdi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // r11
  char v7; // dl
  char v8; // r8

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  Partition = CcGetPartition(a1);
  v3 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 633LL) = 1;
    v4 = *(_DWORD *)(a1 + 152);
    v5 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !v5 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      v7 = 1;
    }
    else
    {
      if ( v5 || (v4 & 0x20) != 0 )
        return Partition;
      CcInsertIntoDirtySharedCacheMapList(a1);
      v7 = v6 != 0;
      v8 = 0;
    }
    LOBYTE(Partition) = CcScheduleLazyWriteScan(v3, v7, v8);
  }
  return Partition;
}
