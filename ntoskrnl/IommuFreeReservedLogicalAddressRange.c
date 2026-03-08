/*
 * XREFs of IommuFreeReservedLogicalAddressRange @ 0x1405239F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1404560EE (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x140515A38 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall IommuFreeReservedLogicalAddressRange(__int64 a1)
{
  int v2; // edi
  ULONG_PTR v3; // rdx
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 0x40000000, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v3 = *(_QWORD *)a1;
    v4 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v2 = HalpIommuDomainUnmapLogicalRange(v4, v3, &v7, 0);
    if ( v2 >= 0 )
    {
      v2 = HalpIommuDomainFreeLogicalAddressRange(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
      if ( v2 >= 0 )
        HalpMmAllocCtxFree(v5, a1);
    }
  }
  return (unsigned int)v2;
}
