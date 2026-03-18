/*
 * XREFs of PiDmRemoveCacheReferenceForObject @ 0x1407C2788
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x140830DD0 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14088485C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031E7F0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D82BC (PiDmGetObjectManagerForObjectType.c)
 *     PiDmLookupObject @ 0x1407C2814 (PiDmLookupObject.c)
 */

__int64 __fastcall PiDmRemoveCacheReferenceForObject(int a1, __int64 a2)
{
  unsigned int v3; // edi
  void *ObjectManagerForObjectType; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  char *Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  v6 = PiDmLookupObject(ObjectManagerForObjectType, a2);
  Buffer = (char *)v6;
  if ( v6 )
  {
    --*(_DWORD *)(v6 + 12);
    if ( !*((_DWORD *)Buffer + 3) )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)ObjectManagerForObjectType + 1, &Buffer);
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
