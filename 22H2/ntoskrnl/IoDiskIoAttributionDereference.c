/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1402E06F4
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140252E40 (IoSetDiskIoAttributionOnProcess.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x140277CC0 (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140279098 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     CcCopyReadEx @ 0x1402A0DB0 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     MmUpdateSectionIoAttribution @ 0x1402E00D8 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x1402E0360 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402E0504 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402E0580 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1402E06F4 (IoDiskIoAttributionDereference.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405D82B8 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x140635830 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14065DBD4 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1402E06F4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
