/*
 * XREFs of McTemplateK0juhbr2_EtwWriteTransfer @ 0x1C004D804
 * Callers:
 *     DxgLogEtwEventCb @ 0x1C004D550 (DxgLogEtwEventCb.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0juhbr2_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int16 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  unsigned __int16 *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+7Ch] [rbp+2Bh]

  v9 = a4;
  v17 = 0;
  v11 = &a5;
  v10 = 16LL;
  v13 = &a6;
  v15 = a7;
  v16 = a6;
  v12 = 1LL;
  v14 = 2LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventExternalEvent, a3, 5u, &v8);
}
