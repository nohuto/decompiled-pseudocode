/*
 * XREFs of HalpDpPreReplace @ 0x140A94700
 * Callers:
 *     HalpDpReplaceControl @ 0x140A94820 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x1402F76E0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x1402F9250 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14039CF90 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpSetClockBeforeSleep @ 0x140508B74 (HalpSetClockBeforeSleep.c)
 */

void __fastcall HalpDpPreReplace(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bl
  __int16 v5; // [rsp+40h] [rbp+8h] BYREF
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 45) )
  {
    (*(void (__fastcall **)(_QWORD))(PmAcpiDispatchTable + 8))(0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v6, 2u, 0LL);
      v4 = v6;
      v5 = v6;
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v6, 2u, 0LL);
        v4 = v5 | v6;
      }
      v5 = v4 & 0x20;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v5, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140C61CF8 >> 1, (__int64)&v5, 2u, 0LL);
    }
    if ( (HalpPlatformFlags & 4) != 0 )
      HalpSetClockBeforeSleep(v2, v1, v3);
  }
}
