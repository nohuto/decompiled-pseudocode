ULONG McTemplateU0xxxqqqxxqn_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-B1h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-A1h]
  __int64 v13; // [rsp+48h] [rbp-99h]
  __int64 *v14; // [rsp+50h] [rbp-91h]
  __int64 v15; // [rsp+58h] [rbp-89h]
  char *v16; // [rsp+60h] [rbp-81h]
  __int64 v17; // [rsp+68h] [rbp-79h]
  char *v18; // [rsp+70h] [rbp-71h]
  __int64 v19; // [rsp+78h] [rbp-69h]
  char *v20; // [rsp+80h] [rbp-61h]
  __int64 v21; // [rsp+88h] [rbp-59h]
  char *v22; // [rsp+90h] [rbp-51h]
  __int64 v23; // [rsp+98h] [rbp-49h]
  char *v24; // [rsp+A0h] [rbp-41h]
  __int64 v25; // [rsp+A8h] [rbp-39h]
  char *v26; // [rsp+B0h] [rbp-31h]
  __int64 v27; // [rsp+B8h] [rbp-29h]
  va_list v28; // [rsp+C0h] [rbp-21h]
  __int64 v29; // [rsp+C8h] [rbp-19h]
  __int64 v30; // [rsp+D0h] [rbp-11h]
  __int64 v31; // [rsp+D8h] [rbp-9h]
  __int64 v32; // [rsp+110h] [rbp+2Fh] BYREF
  __int64 v33; // [rsp+118h] [rbp+37h] BYREF
  __int64 v34; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va; // [rsp+150h] [rbp+6Fh]
  __int64 v36; // [rsp+158h] [rbp+77h]
  __int64 v37; // [rsp+160h] [rbp+7Fh]
  va_list va1; // [rsp+168h] [rbp+87h] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v34 = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v37 = va_arg(va1, _QWORD);
  v33 = a4;
  v32 = a3;
  v13 = 8LL;
  v12 = &v32;
  v15 = 8LL;
  v14 = &v33;
  v17 = 8LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  va_copy(v28, va);
  v30 = v37;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 4LL;
  v31 = 16LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &Windowed_Dx_Flip_Consumed,
           a3,
           0xBu,
           &v11);
}
