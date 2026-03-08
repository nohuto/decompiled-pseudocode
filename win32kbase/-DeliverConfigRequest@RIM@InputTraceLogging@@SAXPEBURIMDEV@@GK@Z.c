/*
 * XREFs of ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C01ABAF8
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C01AD678 (RIMDeliverConfigRequest.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverConfigRequest(const struct RIMDEV *a1)
{
  int v1; // r8d
  __int16 v2; // r9
  __int64 v3; // r10
  __int16 v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int16 *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v5 = v1;
    v12 = &v5;
    v4 = v2;
    v10 = &v4;
    v6 = v3;
    v8 = &v6;
    v13 = 4LL;
    v11 = 2LL;
    v9 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C0296BA1, 0LL, 0LL, 5u, &v7);
  }
}
