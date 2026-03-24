/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C0134000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1C24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C032A3D8 > 5
    && (qword_1C032A3E8 & 0x200000000000LL) != 0
    && (qword_1C032A3F0 & 0x200000000000LL) == qword_1C032A3F0 )
  {
    v5 = 0;
    v3 = &v1;
    v1 = 0x1000000LL;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A3D8, (int)&dword_1C02F20FD, 0, 0, 3u, &v2);
  }
  return 1LL;
}
