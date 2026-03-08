/*
 * XREFs of WmipUnreferenceEntry @ 0x14069C9D0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x14069C180 (WmipAddProviderIdToPIList.c)
 *     WmipDeleteMethod @ 0x14069C630 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 *     WmipSendEnableRequest @ 0x140786FAC (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407FB638 (WmipUpdateModifyGuid.c)
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1408680E4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x1408682E0 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x140868484 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 *     WmipRemoveDS @ 0x14087DE68 (WmipRemoveDS.c)
 *     WmipDSCleanup @ 0x14087DEB0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14087EB44 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDereferenceEvent @ 0x1409DD790 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409DEC30 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1409DED7C (WmipUpdateAddGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
