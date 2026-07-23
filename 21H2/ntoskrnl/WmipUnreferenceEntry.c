/*
 * XREFs of WmipUnreferenceEntry @ 0x14062E428
 * Callers:
 *     WmipSendEnableRequest @ 0x14061FF94 (WmipSendEnableRequest.c)
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x14062E330 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x140632F98 (WmipAddProviderIdToPIList.c)
 *     WmipRemoveDS @ 0x14075545C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140757238 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x140757430 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757AE0 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757C8C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757F40 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407582D4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x140758428 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x14076CDF0 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x14077E1C0 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407BEAAC (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407C44E8 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407C4640 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x14093254C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140933900 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1409339E8 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void (__fastcall *v8)(volatile signed __int64 *); // rax
  void **v9; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v9 = (void **)*((_QWORD *)a2 + 1), *v9 != a2) )
        __fastfail(3u);
      *v9 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v9;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v8 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v8 )
      v8(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
