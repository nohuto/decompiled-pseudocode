NTSTATUS __fastcall McTemplateK0cpppqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-89h] BYREF
  __int64 v12; // [rsp+38h] [rbp-81h] BYREF
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-69h] BYREF
  char *v15; // [rsp+60h] [rbp-59h]
  __int64 v16; // [rsp+68h] [rbp-51h]
  char *v17; // [rsp+70h] [rbp-49h]
  __int64 v18; // [rsp+78h] [rbp-41h]
  __int64 *v19; // [rsp+80h] [rbp-39h]
  __int64 v20; // [rsp+88h] [rbp-31h]
  __int64 *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  int *v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  char *v25; // [rsp+B0h] [rbp-9h]
  __int64 v26; // [rsp+B8h] [rbp-1h]
  char *v27; // [rsp+C0h] [rbp+7h]
  __int64 v28; // [rsp+C8h] [rbp+Fh]
  char v29; // [rsp+108h] [rbp+4Fh] BYREF

  v29 = a4;
  v16 = 1LL;
  v11 = 0;
  v15 = &v29;
  v13 = 0LL;
  v17 = &a5;
  v12 = 0LL;
  v19 = &v12;
  v18 = 8LL;
  v21 = &v13;
  v23 = &v11;
  v25 = &a9;
  v27 = &a10;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &RetrieveInputMessage, &W32kControlGuid, 8u, &v14);
}
