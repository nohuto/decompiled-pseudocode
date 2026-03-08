/*
 * XREFs of HalpIommuDomainMapLogical @ 0x1405158BC
 * Callers:
 *     IommuMapLogicalRange @ 0x140523C80 (IommuMapLogicalRange.c)
 *     IommuMapLogicalRangeEx @ 0x140523D00 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x140523E20 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x140522DF4 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x140524B74 (HalpIommuMapLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
