/*
 * XREFs of UsbhNumberOfPorts @ 0x1C0029904
 * Callers:
 *     UsbhQueryBusRelations @ 0x1C0008DD0 (UsbhQueryBusRelations.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002B2AC (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002BEBC (UsbhGetExtendedHubInformation.c)
 *     UsbhBusPnpStart @ 0x1C00369F0 (UsbhBusPnpStart.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

__int64 __fastcall UsbhNumberOfPorts(__int64 a1)
{
  return *((unsigned __int8 *)FdoExt(a1) + 2938);
}
