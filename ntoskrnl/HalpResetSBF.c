/*
 * XREFs of HalpResetSBF @ 0x140A8D7E8
 * Callers:
 *     HalpEndOfBoot @ 0x140847FA0 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140A8D824 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A8D86C (HalWriteBootRegister.c)
 */

void HalpResetSBF()
{
  __int64 v0; // rcx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( HalpSimpleBootFlagTable )
  {
    if ( !(unsigned int)HalReadBootRegister(&v1) )
    {
      LOBYTE(v0) = v1 & 0xF9;
      HalWriteBootRegister(v0);
    }
  }
}
