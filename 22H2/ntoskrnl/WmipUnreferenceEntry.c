/*
 * XREFs of WmipUnreferenceEntry @ 0x1406C7090
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x1406C6840 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x1406C6CF0 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x1406C6DEC (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1406C7B2C (WmipQueryAllData.c)
 *     WmipSendEnableRequest @ 0x1407D640C (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6510 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x140800178 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408002C8 (WmipUpdateModifyGuid.c)
 *     WmipAddMofResource @ 0x1408111EC (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140850D90 (WmipLegacyEtwWorker.c)
 *     WmipAddDataSource @ 0x14086A5B0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14086AD1C (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x14086AF18 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086B0BC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x14086B2E0 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x14086B424 (WmipMangleInstanceName.c)
 *     WmipRemoveDS @ 0x140882AD8 (WmipRemoveDS.c)
 *     WmipDSCleanup @ 0x140882B20 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1408838E4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409E0630 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0A34 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409E1AD0 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1409E1C1C (WmipUpdateAddGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
    ExFreeToNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
