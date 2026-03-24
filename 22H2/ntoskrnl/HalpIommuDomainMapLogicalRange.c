/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x1404C9214
 * Callers:
 *     IoMapTransfer @ 0x140388570 (IoMapTransfer.c)
 *     HalMapTransferEx @ 0x14039EFE0 (HalMapTransferEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A5C80 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C6AE0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B6CC0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4950 (HalpDmaAddReservedRangesToDomain.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1404DA1C4 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC14C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  if ( !HalpHvIommu )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 24), a2, a3, a4, a5);
  if ( HalpHvIommuDeviceDomain )
    return IommupHvMapDeviceLogicalRange(*(_DWORD *)(a1 + 32), a2, a3, a4, a5);
  return 3221225659LL;
}
