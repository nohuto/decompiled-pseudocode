/*
 * XREFs of ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01BECF0
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C05F0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::CallInterceptor()
{
  __int64 v0; // r8
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 64LL) )
  {
    v5 = 0;
    v3 = &v1;
    v1 = v0;
    v4 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024AA90, (unsigned __int8 *)dword_1C021FABC, 0LL, 0LL, 3u, &v2);
  }
}
