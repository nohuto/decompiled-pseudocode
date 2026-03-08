/*
 * XREFs of HalpCheckFixedWakeSources @ 0x140A93A7C
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterAvailable @ 0x1402F9250 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14039CF90 (HalpAcpiPmRegisterRead.c)
 */

bool HalpCheckFixedWakeSources()
{
  int v0; // edi
  char v1; // si
  __int16 v2; // bx
  int v3; // r8d
  bool result; // al
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = dword_140C61D10;
  v1 = byte_140C61CA8;
  v5 = 0;
  v2 = 0;
  if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v5, 2u, 0LL);
    v2 = v5;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v5, 2u, 0LL);
      v2 |= v5;
    }
  }
  v3 = ((v2 & 0x100) != 0 && (v0 & 0x10) == 0) | 2;
  if ( (v2 & 0x200) == 0 || (v0 & 0x20) != 0 )
    v3 = (v2 & 0x100) != 0 && (v0 & 0x10) == 0;
  result = (v0 & 0x40) == 0;
  if ( (v2 & 0x400) != 0 && result )
  {
    v3 |= 4u;
    if ( HalpResumeFromHibernate )
    {
      if ( (v0 & 0x80u) == 0 || (unsigned __int8)v1 >= 4u && (v0 & 0x10000) == 0 )
        v3 &= ~4u;
    }
  }
  PopFixedWakeSourceMask |= v3;
  return result;
}
