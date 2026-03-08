/*
 * XREFs of ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x1C000ECE4
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Keyboard::HotkeyInvoked()
{
  int v0; // r9d
  char v1; // r10
  int v2; // r11d
  char v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  int v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  char *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 0x4000LL) )
    {
      v3 = v1;
      v4 = v0 ^ 1;
      v11 = &v4;
      v5 = v2;
      v9 = &v3;
      v12 = 4LL;
      v7 = &v5;
      v10 = 1LL;
      v8 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C035C080, (int)&dword_1C031CF92, 0, 0, 5u, &v6);
    }
  }
}
