/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x140515A38
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A43AC (HalpIommuAllocateDmaDomain.c)
 *     IommuUnmapLogicalRange @ 0x140456550 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405239F0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x1405243D0 (IommuUnmapIdentityRangeEx.c)
 *     IommuUnmapReservedLogicalRange @ 0x1405244D0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x140515C24 (HalpIommuFlushDomainTbs.c)
 *     IommupHvMapDeviceLogicalRange @ 0x140522EB0 (IommupHvMapDeviceLogicalRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x1405230C8 (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x140524F80 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, char a4)
{
  int v8; // edi
  unsigned int v9; // eax

  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
  {
    v8 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    v9 = HalpIommuFlushDomainTbs(a1, a2, *a3);
    if ( v8 >= 0 )
      return v9;
    return (unsigned int)v8;
  }
  else if ( a4 )
  {
    return IommupHvMapDeviceLogicalRange(a1, a2);
  }
  else
  {
    return IommupHvUnmapDeviceLogicalRange(a1, a2);
  }
}
