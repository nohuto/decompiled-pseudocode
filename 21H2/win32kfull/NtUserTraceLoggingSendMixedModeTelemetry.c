/*
 * XREFs of NtUserTraceLoggingSendMixedModeTelemetry @ 0x1C00CCB00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 NtUserTraceLoggingSendMixedModeTelemetry()
{
  __int64 v0; // rcx
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x200000000000LL) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 0x1000000LL;
    v5 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03263F8, (int)&dword_1C02F0344, 0, 0, 3u, &v3);
  }
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
