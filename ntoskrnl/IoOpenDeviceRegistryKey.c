/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x140771B00
 * Callers:
 *     DifIoOpenDeviceRegistryKeyWrapper @ 0x1405DDFC0 (DifIoOpenDeviceRegistryKeyWrapper.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140771C20 (IopApplyMutableTagToRegistryKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  _DWORD *DeviceNode; // r9
  int v8; // eax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx

  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (DevInstKeyType & 1) != 0 )
  {
    v8 = 17;
    goto LABEL_7;
  }
  if ( (DevInstKeyType & 2) == 0 )
    return -1073741811;
  v8 = 18;
LABEL_7:
  v9 = v8 | 0x200;
  if ( (DevInstKeyType & 4) == 0 )
    v9 = v8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v11 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v9,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  if ( v11 >= 0 )
  {
    if ( DeviceRegKey )
      IopApplyMutableTagToRegistryKey(*DeviceRegKey);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
