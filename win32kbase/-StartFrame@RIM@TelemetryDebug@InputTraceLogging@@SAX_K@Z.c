/*
 * XREFs of ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C00F0312
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1C01CDC44 (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::RIM::StartFrame()
{
  __int64 v0; // r8
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C02CA7E0 > 7 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x10000LL) )
  {
    v5 = 0;
    v3 = &v1;
    v1 = v0;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C0297B58, 0LL, 0LL, 3u, &v2);
  }
}
