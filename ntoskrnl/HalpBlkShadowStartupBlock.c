/*
 * XREFs of HalpBlkShadowStartupBlock @ 0x140B8ED94
 * Callers:
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140B8ECAC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpBlkAddVirtualMapping @ 0x140B8E880 (HalpBlkAddVirtualMapping.c)
 */

__int64 HalpBlkShadowStartupBlock()
{
  __int64 result; // rax

  result = HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, (__int64)HalpLowStubPhysicalAddress, HalpLowStub, 1, 4);
  if ( (int)result >= 0 )
    return HalpBlkAddVirtualMapping(
             HalpBlkTiledMemoryMapPa,
             (__int64)HalpLowStubPhysicalAddress,
             (unsigned __int64)HalpLowStubPhysicalAddress,
             1,
             64);
  return result;
}
