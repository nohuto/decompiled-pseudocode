/*
 * XREFs of TtmiLogQueueHandleOpened @ 0x1409A60DC
 * Callers:
 *     TtmpOpenQueueHandle @ 0x1409A9550 (TtmpOpenQueueHandle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void TtmiLogQueueHandleOpened()
{
  int v0; // r9d
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  int *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 1LL) )
    {
      v3 = v0;
      v7 = &v4;
      v4 = v2;
      v9 = &v5;
      v8 = 8LL;
      v11 = &v3;
      v5 = v1;
      v10 = 8LL;
      v12 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53948,
        (unsigned __int8 *)&byte_14003300F,
        0LL,
        0LL,
        5u,
        &v6);
    }
  }
}
