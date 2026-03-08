/*
 * XREFs of McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C006D754
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CB880 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqxqqipqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp-A0h] BYREF
  va_list v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  va_list v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  __int64 *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  va_list v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  va_list v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  __int64 *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 v28; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v30; // [rsp+140h] [rbp+40h] BYREF
  va_list va1; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  __int64 v33; // [rsp+150h] [rbp+50h] BYREF
  va_list va2; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+158h] [rbp+58h]
  va_list va3; // [rsp+160h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  v35 = va_arg(va3, _QWORD);
  v11 = 8LL;
  v8 = 0LL;
  va_copy(v10, va);
  v5 = 0;
  va_copy(v12, va1);
  v7 = 0LL;
  v14 = &v6;
  v4 = 0;
  va_copy(v16, va2);
  v18 = &v4;
  va_copy(v20, va3);
  v22 = &v7;
  v24 = &v5;
  v26 = &v8;
  v6 = 0LL;
  v13 = 4LL;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventVSyncDPC, 0LL, 0xAu, &v9);
}
