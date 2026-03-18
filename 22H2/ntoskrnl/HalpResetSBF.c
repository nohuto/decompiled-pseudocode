/*
 * XREFs of HalpResetSBF @ 0x140A90C78
 * Callers:
 *     HalpEndOfBoot @ 0x14084A610 (HalpEndOfBoot.c)
 *     HalpAcpiPostSleep @ 0x140A966C0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalReadBootRegister @ 0x140A90CB4 (HalReadBootRegister.c)
 *     HalWriteBootRegister @ 0x140A90CFC (HalWriteBootRegister.c)
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
