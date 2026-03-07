NTSTATUS __fastcall McTemplateK0qPR0qPR2qxd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  __int64 v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  int *v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  char *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  char *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  char *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+E8h] [rbp+4Fh] BYREF

  v28 = a4;
  v13 = 4LL;
  v16 = 0;
  v12 = &v28;
  v14 = a5;
  v15 = 8 * a4;
  v21 = 0;
  v17 = &a6;
  v19 = a7;
  v20 = 8 * a6;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v18 = 4LL;
  v23 = 4LL;
  v25 = 8LL;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventSignalSynchronizationObject2,
           a3,
           8u,
           &v11);
}
