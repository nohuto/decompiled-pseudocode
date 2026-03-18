/*
 * XREFs of PiDmGetObject @ 0x1406D81D0
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D4030 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D6444 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406D6908 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D6A8C (PiDmObjectGetCachedObjectProperty.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x140789A18 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140789C4C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D7DC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmCacheDataEncode @ 0x14078D9F0 (PiDmCacheDataEncode.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1407CC584 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC6C4 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1407E6B24 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x1407FC5B8 (PiDmGetObjectConstraintList.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140882C80 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A234 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14095A478 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095A65C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14095A90C (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022CF30 (RtlLookupElementGenericTableAvl.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D82BC (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x1406D8320 (PiDmInitializeComparisonObject.c)
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
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
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
