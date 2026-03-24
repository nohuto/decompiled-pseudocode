/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C000CE50
 * Callers:
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CEC0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D790 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0055790 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C005ECB0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C005F0A0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 736) || (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 736), a2);
  }
  return 259LL;
}
