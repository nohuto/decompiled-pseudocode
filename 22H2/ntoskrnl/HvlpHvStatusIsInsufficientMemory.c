/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1404FA958
 * Callers:
 *     HvlDmaAllocateDeviceDomain @ 0x1404F40B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1404F4160 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4710 (HvlDmaMapDeviceSparsePages.c)
 *     HvlMapDeviceInterrupt @ 0x1404F5670 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1404F5DC0 (HvlRegisterDeviceId.c)
 *     HvlSetHpetConfig @ 0x1404F61E0 (HvlSetHpetConfig.c)
 *     HvlSvmAttachPasidSpace @ 0x1404F66F0 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmCreatePasidSpace @ 0x1404F6840 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1404F68C0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmEnablePasid @ 0x1404F6AD0 (HvlSvmEnablePasid.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1404F6F40 (HvlSvmSetPasidAddressSpace.c)
 *     HvlpAttachRootSvmDevice @ 0x1404F70D8 (HvlpAttachRootSvmDevice.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  return a1 == 11 || a1 == 117;
}
