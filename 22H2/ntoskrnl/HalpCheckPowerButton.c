/*
 * XREFs of HalpCheckPowerButton @ 0x14040F120
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterRead @ 0x1403A1570 (HalpAcpiPmRegisterRead.c)
 *     HalpShutdown @ 0x140506D54 (HalpShutdown.c)
 *     InbvCheckDisplayOwnership @ 0x14054E5D0 (InbvCheckDisplayOwnership.c)
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
    if ( byte_140C605F0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x8100) == 0x100 )
      HalpShutdown();
  }
}
