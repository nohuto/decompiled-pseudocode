/*
 * XREFs of HalpIommuDomainMapLogical @ 0x140517DEC
 * Callers:
 *     IommuMapLogicalRange @ 0x1405261B0 (IommuMapLogicalRange.c)
 *     IommuMapLogicalRangeEx @ 0x140526230 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x140526350 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x140525324 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x1405270A4 (HalpIommuMapLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
