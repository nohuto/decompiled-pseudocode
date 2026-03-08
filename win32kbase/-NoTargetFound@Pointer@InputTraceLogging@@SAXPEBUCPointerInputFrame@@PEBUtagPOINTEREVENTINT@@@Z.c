/*
 * XREFs of ?NoTargetFound@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01FC334
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01FCDE4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::NoTargetFound(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int64 v2; // r8
  __int16 *v3; // r9
  __int16 v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  __int64 *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int16 *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v4 = *v3;
    v5 = *(_QWORD *)(v2 + 72);
    v6 = *(_QWORD *)(v2 + 216);
    v12 = &v4;
    v10 = &v5;
    v8 = &v6;
    v13 = 2LL;
    v11 = 8LL;
    v9 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029B111, 0LL, 0LL, 5u, &v7);
  }
}
