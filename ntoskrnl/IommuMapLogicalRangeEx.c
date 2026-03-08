/*
 * XREFs of IommuMapLogicalRangeEx @ 0x140523D00
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1404560EE (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x140456126 (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpIommuDomainMapLogical @ 0x1405158BC (HalpIommuDomainMapLogical.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140515914 (HalpIommuDomainMapLogicalRange.c)
 *     IommupProcessPhysicalAddress @ 0x140524798 (IommupProcessPhysicalAddress.c)
 */

__int64 __fastcall IommuMapLogicalRangeEx(
        ULONG_PTR a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  int v10; // eax
  int LogicalAddressRange; // ebx
  unsigned __int64 v12; // rsi
  int v13; // eax
  ULONG_PTR v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  char v19; // [rsp+70h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v10 = *(_DWORD *)(a1 + 8);
  v19 = 0;
  if ( !v10 || v10 == 3 )
  {
    if ( (int)IommupProcessPhysicalAddress(
                a3,
                (unsigned int)&v16,
                (unsigned int)&v19,
                (unsigned int)&v17,
                (__int64)&v18) >= 0 )
    {
      v12 = v16;
      LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, a4, v16, a5, a6, &v15);
      if ( LogicalAddressRange >= 0 )
      {
        if ( v19 )
          v13 = HalpIommuDomainMapLogicalRange(a1, a2, v18, v12, v15);
        else
          v13 = HalpIommuDomainMapLogical(a1, a2, v17, v12 >> 12, v15);
        LogicalAddressRange = v13;
        if ( v13 < 0 )
          HalpIommuDomainFreeLogicalAddressRange(a1, v15);
        else
          *a7 = v15;
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)LogicalAddressRange;
}
