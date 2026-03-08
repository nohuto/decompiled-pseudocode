/*
 * XREFs of HalTranslateBusAddress @ 0x1403707F0
 * Callers:
 *     IopTranslateBusAddress @ 0x140808DE8 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x140808F68 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140B35B2C (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
