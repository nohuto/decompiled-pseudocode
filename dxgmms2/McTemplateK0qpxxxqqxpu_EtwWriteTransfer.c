NTSTATUS __fastcall McTemplateK0qpxxxqqxpu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-C1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-B1h] BYREF
  int *v16; // [rsp+50h] [rbp-A1h]
  __int64 v17; // [rsp+58h] [rbp-99h]
  char *v18; // [rsp+60h] [rbp-91h]
  __int64 v19; // [rsp+68h] [rbp-89h]
  char *v20; // [rsp+70h] [rbp-81h]
  __int64 v21; // [rsp+78h] [rbp-79h]
  char *v22; // [rsp+80h] [rbp-71h]
  __int64 v23; // [rsp+88h] [rbp-69h]
  char *v24; // [rsp+90h] [rbp-61h]
  __int64 v25; // [rsp+98h] [rbp-59h]
  int *v26; // [rsp+A0h] [rbp-51h]
  __int64 v27; // [rsp+A8h] [rbp-49h]
  char *v28; // [rsp+B0h] [rbp-41h]
  __int64 v29; // [rsp+B8h] [rbp-39h]
  char *v30; // [rsp+C0h] [rbp-31h]
  __int64 v31; // [rsp+C8h] [rbp-29h]
  char *v32; // [rsp+D0h] [rbp-21h]
  __int64 v33; // [rsp+D8h] [rbp-19h]
  char *v34; // [rsp+E0h] [rbp-11h]
  __int64 v35; // [rsp+E8h] [rbp-9h]
  int v36; // [rsp+128h] [rbp+37h] BYREF

  v36 = a4;
  v17 = 4LL;
  v14 = 0;
  v16 = &v36;
  v19 = 8LL;
  v18 = &a5;
  v21 = 8LL;
  v20 = &a6;
  v23 = 8LL;
  v22 = &a7;
  v24 = &a8;
  v26 = &v14;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 1LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventReportSegment, 0LL, 0xBu, &v15);
}
