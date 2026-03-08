/*
 * XREFs of PiDmObjectRelease @ 0x1406D0328
 * Callers:
 *     PiDmRemoveCacheReferenceForObject @ 0x140680BEC (PiDmRemoveCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406CBBDC (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406CCCF8 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406CEB28 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406CFAD4 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D0018 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D019C (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D060C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140746890 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1407776B0 (PiDmGetObjectConstraintList.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14077D414 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14077D554 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataFree @ 0x14078C870 (PiDmCacheDataFree.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140791164 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407975D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmListInitEnumCallback @ 0x1407FE3D0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14083A17C (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14087FABC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1409573B4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1409573F8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140958008 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1406D071C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14078C870 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
