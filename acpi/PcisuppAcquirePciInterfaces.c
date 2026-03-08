/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C0099894
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00814F0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C002F068 (ACPIInternalSetFlags.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0045E28 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C0099E6C (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C009A1B4 (PcisuppReleasePciRouting.c)
 */

__int64 __fastcall PcisuppAcquirePciInterfaces(PDEVICE_OBJECT DeviceObject)
{
  __int64 DeviceExtension; // rsi
  int v3; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  v3 = PcisuppInitializePciRouting(DeviceObject);
  if ( v3 >= 0 )
  {
    v3 = ACPIWakeInitializePmeRouting(DeviceObject);
    if ( v3 >= 0 )
    {
      if ( (*(_BYTE *)(DeviceExtension + 1008) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 1008), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
