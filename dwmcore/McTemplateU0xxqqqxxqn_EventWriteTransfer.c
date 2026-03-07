ULONG McTemplateU0xxqqqxxqn_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-99h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-89h]
  __int64 v12; // [rsp+48h] [rbp-81h]
  __int64 *v13; // [rsp+50h] [rbp-79h]
  __int64 v14; // [rsp+58h] [rbp-71h]
  char *v15; // [rsp+60h] [rbp-69h]
  __int64 v16; // [rsp+68h] [rbp-61h]
  char *v17; // [rsp+70h] [rbp-59h]
  __int64 v18; // [rsp+78h] [rbp-51h]
  char *v19; // [rsp+80h] [rbp-49h]
  __int64 v20; // [rsp+88h] [rbp-41h]
  char *v21; // [rsp+90h] [rbp-39h]
  __int64 v22; // [rsp+98h] [rbp-31h]
  char *v23; // [rsp+A0h] [rbp-29h]
  __int64 v24; // [rsp+A8h] [rbp-21h]
  va_list v25; // [rsp+B0h] [rbp-19h]
  __int64 v26; // [rsp+B8h] [rbp-11h]
  __int64 v27; // [rsp+C0h] [rbp-9h]
  __int64 v28; // [rsp+C8h] [rbp-1h]
  __int64 v29; // [rsp+100h] [rbp+37h] BYREF
  __int64 v30; // [rsp+108h] [rbp+3Fh] BYREF
  __int64 v31; // [rsp+138h] [rbp+6Fh] BYREF
  va_list va; // [rsp+138h] [rbp+6Fh]
  __int64 v33; // [rsp+140h] [rbp+77h]
  __int64 v34; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v31 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v30 = a4;
  v29 = a3;
  v12 = 8LL;
  v11 = &v29;
  v14 = 8LL;
  v13 = &v30;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  va_copy(v25, va);
  v27 = v34;
  v20 = 4LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 4LL;
  v28 = 16LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &Dx_Flip_Consumed,
           a3,
           0xAu,
           &v10);
}
