/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C005BAA4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C005BAF8 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  char v1; // bl
  unsigned int v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  if ( !GetConfigUlong(a1, L"ManualDimTimeout", &v3) || !v3 )
    return 0;
  v1 = 1;
  if ( (unsigned int)dword_1C0288378 > 5 && tlgKeywordOn((__int64)&dword_1C0288378, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288378, (unsigned __int8 *)dword_1C025B021, 0LL, 0LL, 2u, &v4);
  return v1;
}
