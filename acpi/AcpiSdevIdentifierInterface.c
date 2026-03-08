/*
 * XREFs of AcpiSdevIdentifierInterface @ 0x1C0094D70
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086160 (ACPIFilterIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     AcpiCheckSecureDevice @ 0x1C0094C08 (AcpiCheckSecureDevice.c)
 */

__int64 __fastcall AcpiSdevIdentifierInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edx
  __int64 DeviceExtension; // rax
  bool v6; // al
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_WORD *)(a2 + 16) >= 0x28u )
  {
    if ( *(_WORD *)(a2 + 18)
      && (DeviceExtension = ACPIInternalGetDeviceExtension(a1), v6 = AcpiCheckSecureDevice(DeviceExtension), v4 = 0, v6) )
    {
      *(_WORD *)v2 = 40;
      v7 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(v2 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v2 + 24) = PciConfigPinToLine;
      *(_QWORD *)(v2 + 32) = AcpiSdevIdentifierInterface_GetIdentifier;
      *(_QWORD *)(v2 + 8) = v7;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
