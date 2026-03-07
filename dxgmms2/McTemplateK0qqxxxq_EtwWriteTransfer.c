NTSTATUS __fastcall McTemplateK0qqxxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        int a7,
        char a8,
        char a9)
{
  __int64 v10; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-51h] BYREF
  int *v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  char *v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  char *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int64 *v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  char *v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  char *v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]
  int v24; // [rsp+E8h] [rbp+57h] BYREF

  v24 = a4;
  v13 = 4LL;
  v10 = 0LL;
  v12 = &v24;
  v15 = 4LL;
  v14 = &a5;
  v17 = 8LL;
  v16 = &a6;
  v19 = 8LL;
  v18 = &v10;
  v20 = &a8;
  v22 = &a9;
  v21 = 8LL;
  v23 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           &DxgkControlGuid_Context,
           &EventReprogramVSyncSuppressionForPresent,
           0LL,
           7u,
           &v11);
}
