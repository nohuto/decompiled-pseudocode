/*
 * XREFs of HalpIommuRegisterBuiltinPlugins @ 0x1403B0648
 * Callers:
 *     HalpIommuInitDiscard @ 0x140A44FE8 (HalpIommuInitDiscard.c)
 * Callees:
 *     HalSocGetAcpiTable @ 0x1403B32D4 (HalSocGetAcpiTable.c)
 *     HalpIvtProcessDmarTable @ 0x1404E72A0 (HalpIvtProcessDmarTable.c)
 *     HalpIommuHsaDiscover @ 0x140A45214 (HalpIommuHsaDiscover.c)
 */

__int64 HalpIommuRegisterBuiltinPlugins()
{
  int v0; // edi
  unsigned __int64 v1; // rbx
  __int64 AcpiTable; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( HalpHvIommu && !HalpHvCpuManager )
    return 0LL;
  v0 = HalpIommuHsaDiscover(&v4);
  if ( v0 >= 0 )
  {
    if ( (v4 & 2) != 0 )
      HalpIommuDmaGuardTableOptIn = 1;
    LOBYTE(v4) = 0;
    v0 = 0;
    v1 = 0LL;
    AcpiTable = HalSocGetAcpiTable(1380011332LL);
    if ( AcpiTable )
    {
      v0 = HalpIvtProcessDmarTable(AcpiTable, &v4);
      if ( v0 >= 0 )
      {
        if ( (_BYTE)v4 )
          v1 = 2LL;
      }
    }
    if ( v0 >= 0 && v1 >= 2 )
      HalpIommuDmaGuardTableOptIn = 1;
  }
  return (unsigned int)v0;
}
