ULONG McTemplateU0xxxqqqn_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-59h]
  __int64 v10; // [rsp+48h] [rbp-51h]
  __int64 *v11; // [rsp+50h] [rbp-49h]
  __int64 v12; // [rsp+58h] [rbp-41h]
  char *v13; // [rsp+60h] [rbp-39h]
  __int64 v14; // [rsp+68h] [rbp-31h]
  char *v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  char *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  va_list v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  __int64 v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  __int64 v23; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v25; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va; // [rsp+108h] [rbp+6Fh]
  __int64 v27; // [rsp+110h] [rbp+77h]
  __int64 v28; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v24 = a4;
  v23 = a3;
  v16 = 4LL;
  v10 = 8LL;
  v9 = &v23;
  v12 = 8LL;
  v11 = &v24;
  v14 = 8LL;
  v13 = &a5;
  v15 = &a6;
  v17 = &a7;
  va_copy(v19, va);
  v21 = v28;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 16LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &Windowed_Dx_Blt_Consumed,
           a3,
           8u,
           &v8);
}
