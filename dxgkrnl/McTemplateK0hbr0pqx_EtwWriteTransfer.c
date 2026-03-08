/*
 * XREFs of McTemplateK0hbr0pqx_EtwWriteTransfer @ 0x1C0065AC0
 * Callers:
 *     DpiDxgkDdiQueryChildRelations @ 0x1C02093E8 (DpiDxgkDdiQueryChildRelations.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0hbr0pqx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int16 *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  __int64 v12; // [rsp+50h] [rbp-19h]
  int v13; // [rsp+58h] [rbp-11h]
  int v14; // [rsp+5Ch] [rbp-Dh]
  char *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  char *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  char *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  unsigned __int16 v21; // [rsp+C8h] [rbp+5Fh] BYREF

  v21 = a4;
  v11 = 2LL;
  v14 = 0;
  v10 = (__int16 *)&v21;
  v12 = a5;
  v13 = a4;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, 0LL, 6u, &v9);
}
