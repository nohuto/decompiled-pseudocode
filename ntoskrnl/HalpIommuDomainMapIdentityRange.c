/*
 * XREFs of HalpIommuDomainMapIdentityRange @ 0x140515774
 * Callers:
 *     IommuMapIdentityRange @ 0x140523A70 (IommuMapIdentityRange.c)
 *     IommuMapIdentityRangeEx @ 0x140523AE0 (IommuMapIdentityRangeEx.c)
 * Callees:
 *     HalpIommuMapLogicalRange @ 0x14037A478 (HalpIommuMapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x140515C24 (HalpIommuFlushDomainTbs.c)
 *     IommupHvMapDeviceIdentityRange @ 0x140522D48 (IommupHvMapDeviceIdentityRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x140524F80 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapIdentityRange(ULONG_PTR a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 i; // rax
  unsigned __int64 v13; // r14
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  result = 0LL;
  if ( HalpHvIommu && !*(_BYTE *)(a1 + 52) )
    return IommupHvMapDeviceIdentityRange(a1);
  v10 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = v10 + 1;
      for ( i = *(_QWORD *)(a3 + 8 * v10); v11 < a4 && *(_QWORD *)(a3 + 8 * v11) == i + 1; i = *(_QWORD *)(a3 + 8 * v11++) )
        ;
      result = HalpIommuMapLogicalRange(
                 0LL,
                 *(_QWORD *)(a1 + 40),
                 a2,
                 *(_QWORD *)(a3 + 8 * v10) << 12,
                 (v11 - v10) << 12,
                 *(_QWORD *)(a3 + 8 * v10) << 12);
      v17 = result;
      if ( (int)result < 0 )
        break;
      v10 = v11;
      if ( v11 >= a4 )
        return result;
    }
    if ( v10 )
    {
      do
      {
        v13 = v4 + 1;
        for ( j = *(_QWORD *)(a3 + 8 * v4); v13 < a4 && *(_QWORD *)(a3 + 8 * v13) == j + 1; j = *(_QWORD *)(a3 + 8 * v13++) )
          ;
        v15 = *(_QWORD *)(a1 + 40);
        v16 = *(_QWORD *)(a3 + 8 * v4) << 12;
        v18 = (v13 - v4) << 12;
        HalpIommuUnmapLogicalRange(v15, &v18, v16);
        HalpIommuFlushDomainTbs(a1, v16, (v13 - v4) << 12);
        v4 = v13;
      }
      while ( v13 < v10 );
      return v17;
    }
  }
  return result;
}
