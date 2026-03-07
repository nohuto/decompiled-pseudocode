NTSTATUS __fastcall McTemplateK0qpxxtqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        char a8,
        int a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-A1h] BYREF
  int v12; // [rsp+38h] [rbp-99h] BYREF
  __int64 v13; // [rsp+40h] [rbp-91h] BYREF
  __int64 v14; // [rsp+48h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-81h] BYREF
  int *v16; // [rsp+60h] [rbp-71h]
  __int64 v17; // [rsp+68h] [rbp-69h]
  char *v18; // [rsp+70h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  __int64 *v20; // [rsp+80h] [rbp-51h]
  __int64 v21; // [rsp+88h] [rbp-49h]
  __int64 *v22; // [rsp+90h] [rbp-41h]
  __int64 v23; // [rsp+98h] [rbp-39h]
  char *v24; // [rsp+A0h] [rbp-31h]
  __int64 v25; // [rsp+A8h] [rbp-29h]
  int *v26; // [rsp+B0h] [rbp-21h]
  __int64 v27; // [rsp+B8h] [rbp-19h]
  char *v28; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]
  int *v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  int v32; // [rsp+118h] [rbp+47h] BYREF

  v32 = a4;
  v17 = 4LL;
  v12 = 0;
  v16 = &v32;
  v11 = 0;
  v18 = &a5;
  v14 = 0LL;
  v20 = &v13;
  v13 = 0LL;
  v22 = &v14;
  v24 = &a8;
  v26 = &v11;
  v28 = &a10;
  v30 = &v12;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventStartReserveResource, 0LL, 9u, &v15);
}
