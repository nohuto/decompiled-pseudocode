/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14030C4DC
 * Callers:
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     IoGetIoRateControl @ 0x140294410 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402945B0 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140295634 (IoSetDiskIoAttributionOnProcess.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C9700 (MiCheckAndUpdateIoAttribution.c)
 *     MmUpdateSectionIoAttribution @ 0x1402F4F04 (MmUpdateSectionIoAttribution.c)
 *     IoNotifyQuotaState @ 0x1402FD260 (IoNotifyQuotaState.c)
 *     IoRecordIoAttribution @ 0x14030BC80 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14075339C (PspRemoveIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407552BC (PspIoRateEntryDeactivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
