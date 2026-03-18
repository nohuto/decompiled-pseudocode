/*
 * XREFs of UsbhNumberOfPorts @ 0x1C0028F40
 * Callers:
 *     UsbhQueryBusRelations @ 0x1C000B7A0 (UsbhQueryBusRelations.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002A8DC (UsbhGetAcpiPortAttributes.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002B4EC (UsbhGetExtendedHubInformation.c)
 *     UsbhBusPnpStart @ 0x1C0035FB0 (UsbhBusPnpStart.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

__int64 __fastcall UsbhNumberOfPorts(__int64 a1)
{
  return *((unsigned __int8 *)FdoExt(a1) + 2938);
}
