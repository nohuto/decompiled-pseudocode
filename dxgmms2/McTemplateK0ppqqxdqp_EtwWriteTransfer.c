/*
 * XREFs of McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C0038008
 * Callers:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0016A10 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0ppqqxdqp_EtwWriteTransfer(_DWORD a1, _DWORD a2, _BYTE a3, __int64 a4, ...)
{
  int v5; // [rsp+30h] [rbp-B1h] BYREF
  int v6; // [rsp+38h] [rbp-A9h] BYREF
  int v7; // [rsp+40h] [rbp-A1h] BYREF
  int v8; // [rsp+48h] [rbp-99h] BYREF
  __int64 v9; // [rsp+50h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-81h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-71h]
  __int64 v12; // [rsp+78h] [rbp-69h]
  va_list v13; // [rsp+80h] [rbp-61h]
  __int64 v14; // [rsp+88h] [rbp-59h]
  int *v15; // [rsp+90h] [rbp-51h]
  __int64 v16; // [rsp+98h] [rbp-49h]
  int *v17; // [rsp+A0h] [rbp-41h]
  __int64 v18; // [rsp+A8h] [rbp-39h]
  __int64 *v19; // [rsp+B0h] [rbp-31h]
  __int64 v20; // [rsp+B8h] [rbp-29h]
  int *v21; // [rsp+C0h] [rbp-21h]
  __int64 v22; // [rsp+C8h] [rbp-19h]
  int *v23; // [rsp+D0h] [rbp-11h]
  __int64 v24; // [rsp+D8h] [rbp-9h]
  va_list v25; // [rsp+E0h] [rbp-1h]
  __int64 v26; // [rsp+E8h] [rbp+7h]
  __int64 v27; // [rsp+128h] [rbp+47h] BYREF
  __int64 v28; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va; // [rsp+130h] [rbp+4Fh]
  __int64 v30; // [rsp+138h] [rbp+57h]
  __int64 v31; // [rsp+140h] [rbp+5Fh]
  __int64 v32; // [rsp+148h] [rbp+67h]
  __int64 v33; // [rsp+150h] [rbp+6Fh]
  __int64 v34; // [rsp+158h] [rbp+77h]
  va_list va1; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v27 = a4;
  v12 = 8LL;
  v8 = 0;
  v11 = &v27;
  v7 = 0;
  va_copy(v13, va);
  v9 = 0LL;
  v15 = &v5;
  v6 = 0;
  v17 = &v6;
  v19 = &v9;
  v21 = &v7;
  v23 = &v8;
  va_copy(v25, va1);
  v5 = 0;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventPropagatePresentHistory, 0LL, 9u, &v10);
}
