/*
 * XREFs of HalpRtcDiscover @ 0x140374398
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 HalpRtcDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD v4[18]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v5; // [rsp+C0h] [rbp+37h] BYREF

  AcpiTable = HalSocGetAcpiTable(1346584902LL);
  if ( AcpiTable
    && (*(_BYTE *)(AcpiTable + 8) < 5u || (*(_BYTE *)(AcpiTable + 109) & 0x20) == 0)
    && (int)HalSocRequestApi(v1, 0LL, 1, 16LL, &HalpTimerRtcApi) >= 0
    && (int)HalSocRequestApi(v2, 0LL, 7, 16LL, &HalpRtcSkipApi) >= 0 )
  {
    v5 = 0LL;
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[16]) = 0;
    v4[11] = &v5;
    v4[0] = 0x9000000001LL;
    v4[1] = HalpRtcInitialize;
    v4[3] = HalpRtcAcknowledgeInterrupt;
    v4[4] = HalpRtcArmTimer;
    v4[10] = HalpRtcFixedStall;
    v4[5] = HalpRtcStop;
    v4[13] = 2048LL;
    v4[12] = 0x4000000010LL;
    HIDWORD(v4[14]) = 2097456;
    LODWORD(v4[17]) = 2;
    LODWORD(v4[15]) = 8;
    HalpTimerRegister((__int64)v4, 0LL);
  }
  return 0LL;
}
