NTSTATUS __fastcall McTemplateK0hzr0qqhzr4_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        int a7,
        unsigned __int16 a8,
        __int64 a9)
{
  int v10; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-51h] BYREF
  __int16 *v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  __int64 v14; // [rsp+60h] [rbp-31h]
  int v15; // [rsp+68h] [rbp-29h]
  int v16; // [rsp+6Ch] [rbp-25h]
  char *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  int *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  unsigned __int16 *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  __int64 v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+ACh] [rbp+1Bh]
  unsigned __int16 v26; // [rsp+E8h] [rbp+57h] BYREF

  v26 = a4;
  v13 = 2LL;
  v10 = 0;
  v12 = (__int16 *)&v26;
  v14 = a5;
  v16 = 0;
  v15 = 2 * a4;
  v17 = &a6;
  v19 = &v10;
  v21 = &a8;
  v23 = a9;
  v18 = 4LL;
  v24 = 2 * a8;
  v20 = 4LL;
  v22 = 2LL;
  v25 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceReset_DevMgnt_Stop,
           0LL,
           7u,
           &v11);
}
