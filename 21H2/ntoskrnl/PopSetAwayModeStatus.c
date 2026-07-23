/*
 * XREFs of PopSetAwayModeStatus @ 0x1408E78B4
 * Callers:
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x14066D5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopBroadcastSessionInfo @ 0x1407969A4 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopSetAwayModeStatus(char a1)
{
  __int64 result; // rax
  BOOL v3; // [rsp+20h] [rbp-38h] BYREF
  GUID v4; // [rsp+28h] [rbp-30h] BYREF
  BOOL v5; // [rsp+38h] [rbp-20h]

  v3 = a1 != 0;
  v5 = v3;
  v4 = GUID_SYSTEM_AWAYMODE;
  PopBroadcastSessionInfo(0, 20, (__int64)&v4);
  result = PopSetPowerSettingValueAcDc(&GUID_SYSTEM_AWAYMODE, 4LL, &v3);
  byte_140C23331 = a1;
  return result;
}
