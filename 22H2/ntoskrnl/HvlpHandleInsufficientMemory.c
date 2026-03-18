/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x14053FEF8
 * Callers:
 *     HvlAttachPasidSpace @ 0x1405429B0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140542A60 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140542B70 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542C30 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542EA0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1405434C0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543780 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543990 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543DB0 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140544C60 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140545360 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x1405458D0 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x140545A40 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x140545C70 (HvlSetPasidAddressSpace.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941648 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140540C44 (HvlpDepositPages.c)
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
