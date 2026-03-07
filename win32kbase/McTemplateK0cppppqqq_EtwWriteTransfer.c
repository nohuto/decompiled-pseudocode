NTSTATUS __fastcall McTemplateK0cppppqqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v13; // [rsp+38h] [rbp-99h] BYREF
  __int64 v14; // [rsp+40h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-81h] BYREF
  char *v16; // [rsp+60h] [rbp-71h]
  __int64 v17; // [rsp+68h] [rbp-69h]
  char *v18; // [rsp+70h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  char *v20; // [rsp+80h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-49h]
  __int64 *v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  __int64 *v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  int *v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  char *v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  char *v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  char v32; // [rsp+118h] [rbp+47h] BYREF

  v32 = a4;
  v17 = 1LL;
  v12 = 0;
  v16 = &v32;
  v18 = &a5;
  v20 = &a6;
  v14 = 0LL;
  v22 = &v13;
  v24 = &v14;
  v26 = &v12;
  v28 = &a10;
  v30 = &a11;
  v13 = 0LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 9u, &v15);
}
