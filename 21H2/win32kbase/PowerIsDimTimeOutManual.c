/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C00679E4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C0067A38 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_1C0246378 > 5 && tlgKeywordOn((__int64)&dword_1C0246378, 0x400000000000LL) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246378, (int)&dword_1C021929F, 0, 0, 2u, &v4);
  return v1;
}
