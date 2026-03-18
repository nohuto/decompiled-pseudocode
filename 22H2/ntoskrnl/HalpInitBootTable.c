/*
 * XREFs of HalpInitBootTable @ 0x140B66DDC
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140B66918 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140336E50 (HalpAcpiGetTable.c)
 *     HalReadBootRegister @ 0x140A90CB4 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A90CFC (HalWriteBootRegister.c)
 */

__int64 (*__fastcall HalpInitBootTable(__int64 a1))()
{
  __int64 Table; // rax
  __int64 (*result)(); // rax
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  Table = HalpAcpiGetTable(a1, 1414483778, 0, 0);
  HalpSimpleBootFlagTable = Table;
  if ( Table && *(_DWORD *)(Table + 4) >= 0x28u && *(_BYTE *)(Table + 36) > 9u )
  {
    if ( !(unsigned int)HalReadBootRegister((__int64)&v3) && (v3 & 1) == 0 )
      HalWriteBootRegister(v3 | 1);
  }
  else
  {
    HalpSimpleBootFlagTable = 0LL;
  }
  result = HalpEndOfBoot;
  off_140C02178[0] = HalpEndOfBoot;
  return result;
}
