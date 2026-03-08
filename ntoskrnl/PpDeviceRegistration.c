/*
 * XREFs of PpDeviceRegistration @ 0x140680F5C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088039C (PnpCleanupDeviceRegistryValues.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDeviceRegistration @ 0x140680FE4 (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v9;
}
