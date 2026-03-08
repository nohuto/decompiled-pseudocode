/*
 * XREFs of McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer @ 0x1C004B318
 * Callers:
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x1C0048C34 (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, ...)
{
  int v6; // [rsp+30h] [rbp-A9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-99h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-89h]
  __int64 v9; // [rsp+58h] [rbp-81h]
  char *v10; // [rsp+60h] [rbp-79h]
  __int64 v11; // [rsp+68h] [rbp-71h]
  va_list v12; // [rsp+70h] [rbp-69h]
  __int64 v13; // [rsp+78h] [rbp-61h]
  int *v14; // [rsp+80h] [rbp-59h]
  __int64 v15; // [rsp+88h] [rbp-51h]
  __int64 v16; // [rsp+90h] [rbp-49h]
  __int64 v17; // [rsp+98h] [rbp-41h]
  __int64 v18; // [rsp+A0h] [rbp-39h]
  __int64 v19; // [rsp+A8h] [rbp-31h]
  __int64 v20; // [rsp+B0h] [rbp-29h]
  __int64 v21; // [rsp+B8h] [rbp-21h]
  __int64 v22; // [rsp+C0h] [rbp-19h]
  __int64 v23; // [rsp+C8h] [rbp-11h]
  va_list v24; // [rsp+D0h] [rbp-9h]
  __int64 v25; // [rsp+D8h] [rbp-1h]
  __int64 v26; // [rsp+118h] [rbp+3Fh] BYREF
  __int64 v27; // [rsp+128h] [rbp+4Fh] BYREF
  va_list va; // [rsp+128h] [rbp+4Fh]
  __int64 v29; // [rsp+130h] [rbp+57h]
  __int64 v30; // [rsp+138h] [rbp+5Fh]
  __int64 v31; // [rsp+140h] [rbp+67h]
  __int64 v32; // [rsp+148h] [rbp+6Fh]
  __int64 v33; // [rsp+150h] [rbp+77h]
  va_list va1; // [rsp+158h] [rbp+7Fh] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v26 = a4;
  v6 = 1;
  v8 = &v26;
  v9 = 8LL;
  v10 = &a5;
  v11 = 4LL;
  va_copy(v12, va);
  v13 = 4LL;
  v14 = &v6;
  v16 = v30;
  v18 = v31;
  v20 = v32;
  v22 = v33;
  va_copy(v24, va1);
  v15 = 4LL;
  v17 = 4LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventCancelHwQueuedFlips, a3, 0xAu, &v7);
}
