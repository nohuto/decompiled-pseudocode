/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14020C898
 * Callers:
 *     IoGetIoRateControl @ 0x14020C430 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14020C5D0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14020C650 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14020C898 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x14020EB08 (MmUpdateSectionIoAttribution.c)
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333960 (MiCheckAndUpdateIoAttribution.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140366F48 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x1403687A0 (IoNotifyQuotaState.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x1407D8B60 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1407D8BEC (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407D8CF8 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C898 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
