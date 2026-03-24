/*
 * XREFs of ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01C1F50
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C17AC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::RerouteWheel()
{
  __int64 v0; // r8
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 64LL) )
  {
    v5 = 0;
    v3 = &v1;
    v1 = v0;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024BA90, (unsigned __int8 *)dword_1C0220BCD, 0LL, 0LL, 3u, &v2);
  }
}
