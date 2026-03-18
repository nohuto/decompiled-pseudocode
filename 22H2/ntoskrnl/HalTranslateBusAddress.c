/*
 * XREFs of HalTranslateBusAddress @ 0x140375AA0
 * Callers:
 *     IopTranslateBusAddress @ 0x14081DA28 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x14081DBA8 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140B4423C (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return ((__int64 (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _QWORD))off_140C019D8[0])(
             5LL,
             BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace,
             TranslatedAddress);
  *TranslatedAddress = BusAddress;
  return 1;
}
