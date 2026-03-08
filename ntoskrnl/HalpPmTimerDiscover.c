/*
 * XREFs of HalpPmTimerDiscover @ 0x14037604C
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     HalpPmTimerConfigure @ 0x1403AFFE8 (HalpPmTimerConfigure.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 HalpPmTimerDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rbx
  bool v2; // zf
  _QWORD v4[18]; // [rsp+20h] [rbp-69h] BYREF
  _OWORD v5[2]; // [rsp+B0h] [rbp+27h] BYREF

  AcpiTable = HalSocGetAcpiTable(1346584902);
  v1 = AcpiTable;
  if ( AcpiTable && (*(_BYTE *)(AcpiTable + 8) < 5u || (*(_DWORD *)(AcpiTable + 112) & 0x100000) == 0) )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 0x9000000001LL;
    memset(v5, 0, sizeof(v5));
    if ( !(unsigned int)HalpPmTimerConfigure(v1, v5, v4) )
    {
      v2 = (*(_DWORD *)(v1 + 112) & 0x100) == 0;
      HIDWORD(v4[12]) = 24;
      if ( !v2 )
      {
        LOBYTE(v5[0]) = 1;
        HIDWORD(v4[12]) = 32;
      }
      LODWORD(v4[12]) = 32;
      v4[11] = v5;
      v4[13] = 3579545LL;
      v4[1] = HalpPmTimerInitialize;
      HIDWORD(v4[14]) = 2;
      LODWORD(v4[17]) = 1;
      HalpTimerRegister((__int64)v4, 0LL);
    }
  }
  return 0LL;
}
