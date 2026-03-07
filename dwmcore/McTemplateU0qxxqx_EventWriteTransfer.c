ULONG McTemplateU0qxxqx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-31h] BYREF
  int *v5; // [rsp+40h] [rbp-21h]
  __int64 v6; // [rsp+48h] [rbp-19h]
  va_list v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  va_list v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  va_list v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  __int64 v18; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D0h] [rbp+6Fh]
  __int64 v20; // [rsp+D8h] [rbp+77h] BYREF
  va_list va2; // [rsp+D8h] [rbp+77h]
  va_list va3; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v15 = a3;
  v6 = 4LL;
  v5 = &v15;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 8LL;
  va_copy(v9, va1);
  v12 = 4LL;
  va_copy(v11, va2);
  va_copy(v13, va3);
  v14 = 8LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &BeginFrame, a3, 6u, &v4);
}
