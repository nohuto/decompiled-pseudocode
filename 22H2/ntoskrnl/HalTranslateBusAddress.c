/*
 * XREFs of HalTranslateBusAddress @ 0x1403A5360
 * Callers:
 *     HeadlessTerminalAddResources @ 0x140790520 (HeadlessTerminalAddResources.c)
 *     IopTranslateBusAddress @ 0x1407BE878 (IopTranslateBusAddress.c)
 *     HalpReportResourceUsage @ 0x140A391C0 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return ((__int64 (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _QWORD))off_140C005C8[0])(
             5LL,
             BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace,
             TranslatedAddress);
  *TranslatedAddress = BusAddress;
  return 1;
}
