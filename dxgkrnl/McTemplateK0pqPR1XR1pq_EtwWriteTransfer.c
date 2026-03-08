/*
 * XREFs of McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x1C0057D14
 * Callers:
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD490 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqPR1XR1pq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  __int64 v9; // [rsp+60h] [rbp-21h]
  int v10; // [rsp+68h] [rbp-19h]
  int v11; // [rsp+6Ch] [rbp-15h]
  __int64 v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+7Ch] [rbp-5h]
  va_list v15; // [rsp+80h] [rbp-1h]
  __int64 v16; // [rsp+88h] [rbp+7h]
  va_list v17; // [rsp+90h] [rbp+Fh]
  __int64 v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v21; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v23; // [rsp+E8h] [rbp+67h]
  __int64 v24; // [rsp+F0h] [rbp+6Fh]
  __int64 v25; // [rsp+F8h] [rbp+77h] BYREF
  va_list va2; // [rsp+F8h] [rbp+77h]
  va_list va3; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, _QWORD);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v11 = 0;
  va_copy(v5, va);
  v14 = 0;
  va_copy(v7, va1);
  v9 = v23;
  v8 = 4LL;
  v16 = 8LL;
  v18 = 4LL;
  v12 = v24;
  va_copy(v15, va2);
  va_copy(v17, va3);
  v10 = 8 * v21;
  v13 = 8 * v21;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventWaitForSynchronizationObjectFromCpu,
           a3,
           7u,
           &v4);
}
