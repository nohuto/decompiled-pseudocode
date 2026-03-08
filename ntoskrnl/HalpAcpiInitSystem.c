/*
 * XREFs of HalpAcpiInitSystem @ 0x140A8D770
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaSwapP0NodeToFront @ 0x14039F678 (HalpNumaSwapP0NodeToFront.c)
 *     HalpAcpiInitDiscard @ 0x140B62AD4 (HalpAcpiInitDiscard.c)
 *     HalpAcpiDetectPiix4 @ 0x140B62B08 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B62B7C (HalpAcpiPopulateTableCache.c)
 *     HalpAcpiPrmCacheInit @ 0x140B62BF0 (HalpAcpiPrmCacheInit.c)
 *     HalpAuditAcpiTables @ 0x140B63138 (HalpAuditAcpiTables.c)
 */

__int64 __fastcall HalpAcpiInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax

  v3 = 0;
  v4 = a1 - 7;
  if ( !v4 )
  {
    HalpAcpiLoaderBlock = a3;
    HalpAcpiInitDiscard(a3);
    return v3;
  }
  v5 = v4 - 5;
  if ( !v5 )
  {
    HalpNumaSwapP0NodeToFront();
    return v3;
  }
  v6 = v5 - 5;
  if ( !v6 )
  {
    HalpAuditAcpiTables(a3);
    return v3;
  }
  v7 = v6 - 6;
  if ( !v7 )
  {
    result = HalpAcpiPrmCacheInit();
    if ( (int)result < 0 )
      return result;
    return (unsigned int)HalpAcpiPopulateTableCache();
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 4 )
      return (unsigned int)HalpAcpiDetectPiix4();
  }
  else
  {
    HalpAcpiLoaderBlock = 0LL;
  }
  return v3;
}
