/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C0002AF0
 * Callers:
 *     ACPIDeviceIrpForwardRequest @ 0x1C00027E0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0028770 (ACPIFilterIrpQueryPower.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C003D0E0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C003D4C0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 776) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  }
  return 259LL;
}
