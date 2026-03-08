/*
 * XREFs of PiDmGetObject @ 0x1406D0370
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     PiUEventHandleRegistration @ 0x14068E738 (PiUEventHandleRegistration.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406CEB28 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D0018 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D019C (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D060C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1407776B0 (PiDmGetObjectConstraintList.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14077D414 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14077D554 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataEncode @ 0x14077DC74 (PiDmCacheDataEncode.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407975D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408731D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140957458 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095763C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1409578EC (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D045C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x1406D04C0 (PiDmInitializeComparisonObject.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  __int64 ObjectManagerForObjectType; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[112]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  memset(v12, 0, sizeof(v12));
  Buffer = v12;
  if ( !a2
    || (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(ObjectManagerForObjectType + 208), v12) < 0
    || (v8 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer)) == 0LL )
  {
    *a3 = 0LL;
    goto LABEL_8;
  }
  v9 = *v8;
  *a3 = v9;
  if ( !v9 )
  {
LABEL_8:
    v5 = -1073741772;
    goto LABEL_6;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegion();
  return v5;
}
