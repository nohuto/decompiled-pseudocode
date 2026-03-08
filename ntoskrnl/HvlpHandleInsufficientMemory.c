/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x14053DA58
 * Callers:
 *     HvlAttachPasidSpace @ 0x140540510 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405405C0 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x1405406D0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140540790 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140540A00 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140540AD0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140541020 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405412E0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405414F0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140541910 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x1405427C0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140542EC0 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x140543430 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405435A0 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x1405437D0 (HvlSetPasidAddressSpace.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = 1LL;
  if ( a1 != 117 && a1 != 130 )
    LOBYTE(v4) = 0;
  LOBYTE(a3) = v4;
  LOBYTE(a4) = (unsigned __int16)(a1 - 129) <= 1u;
  return HvlpDepositPages(0LL, v4, a3, a4);
}
