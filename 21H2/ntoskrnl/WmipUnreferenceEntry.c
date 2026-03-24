/*
 * XREFs of WmipUnreferenceEntry @ 0x140639618
 * Callers:
 *     WmipQueryAllData @ 0x1406390D4 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x140639520 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x14063E188 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1406C1214 (WmipSendEnableRequest.c)
 *     WmipRemoveDS @ 0x14075529C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x1407568A8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140757078 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x140757270 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757920 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757ACC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757D80 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140758114 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x140758268 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x14076CC30 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x14077E000 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407BE31C (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407C3FC8 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407C4120 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C4FC0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1409323EC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409327DC (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140933730 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x140933818 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
