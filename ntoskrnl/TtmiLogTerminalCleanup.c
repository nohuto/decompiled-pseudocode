/*
 * XREFs of TtmiLogTerminalCleanup @ 0x1409A7078
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void TtmiLogTerminalCleanup()
{
  int v0; // r9d
  int v1; // r10d
  __int64 v2; // r11
  int v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int64 *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 1LL) )
    {
      v4 = v0;
      v7 = &v3;
      v3 = v1;
      v9 = &v4;
      v8 = 4LL;
      v11 = &v5;
      v10 = 4LL;
      v5 = v2;
      v12 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D53948, (unsigned __int8 *)byte_140032C73, 0LL, 0LL, 5u, &v6);
    }
  }
}
