/*
 * XREFs of HalpCheckPowerButton @ 0x140409BC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x14039CF90 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x140504C74 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x14054C130 (InbvCheckDisplayOwnership.c)
 */

void HalpCheckPowerButton()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)KiBugCheckData || (unsigned __int8)InbvCheckDisplayOwnership()) && HalpShutdownContext && PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v1, 2u, 0LL);
    v0 = v1;
    if ( byte_140C60190 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
