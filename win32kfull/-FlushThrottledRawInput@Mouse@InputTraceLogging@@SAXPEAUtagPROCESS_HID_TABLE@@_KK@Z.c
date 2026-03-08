/*
 * XREFs of ?FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUtagPROCESS_HID_TABLE@@_KK@Z @ 0x1C01ABFC4
 * Callers:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1C01AC08C (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::FlushThrottledRawInput(struct tagPROCESS_HID_TABLE *a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  __int64 *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 64LL) )
    {
      v4 = v1;
      v12 = &v4;
      v5 = v3;
      v10 = &v5;
      v6 = v2;
      v8 = &v6;
      v13 = 4LL;
      v11 = 8LL;
      v9 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C035C080,
        (unsigned __int8 *)dword_1C031BA9C,
        0LL,
        0LL,
        5u,
        &v7);
    }
  }
}
