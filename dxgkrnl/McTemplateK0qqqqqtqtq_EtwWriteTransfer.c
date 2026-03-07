NTSTATUS __fastcall McTemplateK0qqqqqtqtq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-99h] BYREF
  int *v14; // [rsp+40h] [rbp-89h]
  __int64 v15; // [rsp+48h] [rbp-81h]
  char *v16; // [rsp+50h] [rbp-79h]
  __int64 v17; // [rsp+58h] [rbp-71h]
  char *v18; // [rsp+60h] [rbp-69h]
  __int64 v19; // [rsp+68h] [rbp-61h]
  char *v20; // [rsp+70h] [rbp-59h]
  __int64 v21; // [rsp+78h] [rbp-51h]
  char *v22; // [rsp+80h] [rbp-49h]
  __int64 v23; // [rsp+88h] [rbp-41h]
  char *v24; // [rsp+90h] [rbp-39h]
  __int64 v25; // [rsp+98h] [rbp-31h]
  char *v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  char *v28; // [rsp+B0h] [rbp-19h]
  __int64 v29; // [rsp+B8h] [rbp-11h]
  char *v30; // [rsp+C0h] [rbp-9h]
  __int64 v31; // [rsp+C8h] [rbp-1h]
  int v32; // [rsp+108h] [rbp+3Fh] BYREF

  v32 = a4;
  v15 = 4LL;
  v14 = &v32;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &Dxgk_Diag_OutputDupl_High_Level_Update_Stop,
           a3,
           0xAu,
           &v13);
}
