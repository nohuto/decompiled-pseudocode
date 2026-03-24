/*
 * XREFs of McTemplateK0c_EtwWriteTransfer @ 0x1C01245C4
 * Callers:
 *     EtwTraceConvertTimeOutToBlocking @ 0x1C0121B60 (EtwTraceConvertTimeOutToBlocking.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00554F0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0c_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  char *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  char v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 1;
  return McGenEventWrite_EtwWriteTransfer(a1, &ConvertTimeOutToBlocking, &W32kControlGuid, 2u, &v5);
}
