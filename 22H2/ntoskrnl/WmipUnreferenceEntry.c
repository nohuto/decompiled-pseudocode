/*
 * XREFs of WmipUnreferenceEntry @ 0x1406B23F8
 * Callers:
 *     WmipSendEnableRequest @ 0x1406A3C24 (WmipSendEnableRequest.c)
 *     WmipQueryAllData @ 0x1406B1EB4 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x1406B2300 (WmipDeleteMethod.c)
 *     WmipAddProviderIdToPIList @ 0x1406B6F68 (WmipAddProviderIdToPIList.c)
 *     WmipRemoveDS @ 0x140754A8C (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x140756098 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140756868 (WmipDetermineInstanceBaseIndex.c)
 *     WmipQuerySetExecuteSI @ 0x140756A60 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757110 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x1407572BC (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140757570 (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140757904 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipMangleInstanceName @ 0x140757A58 (WmipMangleInstanceName.c)
 *     WmipDSCleanup @ 0x14076C400 (WmipDSCleanup.c)
 *     WmipSendEnableDisableRequest @ 0x14077DF00 (WmipSendEnableDisableRequest.c)
 *     WmipAddMofResource @ 0x1407BEADC (WmipAddMofResource.c)
 *     WmipUpdateDataSource @ 0x1407C4788 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407C48E0 (WmipUpdateModifyGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C5780 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x14093243C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140933780 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x140933868 (WmipUpdateAddGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
