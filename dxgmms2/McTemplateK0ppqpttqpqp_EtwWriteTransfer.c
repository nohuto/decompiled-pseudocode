NTSTATUS McTemplateK0ppqpttqpqp_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-B0h] BYREF
  va_list v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  va_list v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  int *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  va_list v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  va_list v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  va_list v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  va_list v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  va_list v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 v28; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v30; // [rsp+140h] [rbp+40h] BYREF
  va_list va1; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  __int64 v33; // [rsp+150h] [rbp+50h] BYREF
  va_list va2; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+158h] [rbp+58h] BYREF
  va_list va3; // [rsp+158h] [rbp+58h]
  __int64 v37; // [rsp+160h] [rbp+60h] BYREF
  va_list va4; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h]
  __int64 v40; // [rsp+170h] [rbp+70h] BYREF
  va_list va5; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h]
  va_list va6; // [rsp+180h] [rbp+80h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
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
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v37 = va_arg(va5, _QWORD);
  v39 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v40 = va_arg(va6, _QWORD);
  v42 = va_arg(va6, _QWORD);
  v4 = -1;
  va_copy(v8, va);
  v9 = 8LL;
  v6 = 0;
  va_copy(v10, va1);
  v12 = &v4;
  va_copy(v14, va2);
  va_copy(v16, va3);
  va_copy(v18, va4);
  v20 = &v5;
  va_copy(v22, va5);
  v24 = &v6;
  va_copy(v26, va6);
  v5 = 0;
  v11 = 8LL;
  v13 = 4LL;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 0xBu, &v7);
}
