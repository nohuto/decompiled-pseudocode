/*
 * XREFs of HalpIommuDomainFreeLogicalAddressRange @ 0x1404560EE
 * Callers:
 *     IommuUnmapLogicalRange @ 0x140456550 (IommuUnmapLogicalRange.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405239F0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuMapIdentityRangeEx @ 0x140523AE0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140523D00 (IommuMapLogicalRangeEx.c)
 *     IommuReserveLogicalAddressRange @ 0x140524080 (IommuReserveLogicalAddressRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x1405243D0 (IommuUnmapIdentityRangeEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuDomainFreeLogicalAddressRange(__int64 a1, __int16 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  else
    return (a2 & 0xFFF) != 0LL ? 0xC000000D : 0;
}
