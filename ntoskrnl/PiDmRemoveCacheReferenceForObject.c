/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x140680BEC
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDmListInitEnumCallback @ 0x1407FE3D0 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14087FABC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmLookupObject @ 0x140680C78 (PiDmLookupObject.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D045C (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v6; // rax
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v6 = (_DWORD *)PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = v6;
  if ( v6 )
  {
    --v6[3];
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
  }
  else
  {
    v3 = -1073741772;
  }
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  KeLeaveCriticalRegion();
  return v3;
}
