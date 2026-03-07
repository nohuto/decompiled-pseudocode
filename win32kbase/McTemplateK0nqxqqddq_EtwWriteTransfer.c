NTSTATUS __fastcall McTemplateK0nqxqqddq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-89h] BYREF
  __int64 v14; // [rsp+40h] [rbp-79h]
  __int64 v15; // [rsp+48h] [rbp-71h]
  char *v16; // [rsp+50h] [rbp-69h]
  __int64 v17; // [rsp+58h] [rbp-61h]
  char *v18; // [rsp+60h] [rbp-59h]
  __int64 v19; // [rsp+68h] [rbp-51h]
  char *v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h]
  char *v22; // [rsp+80h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-31h]
  char *v24; // [rsp+90h] [rbp-29h]
  __int64 v25; // [rsp+98h] [rbp-21h]
  char *v26; // [rsp+A0h] [rbp-19h]
  __int64 v27; // [rsp+A8h] [rbp-11h]
  char *v28; // [rsp+B0h] [rbp-9h]
  __int64 v29; // [rsp+B8h] [rbp-1h]

  v14 = a5;
  v15 = 36LL;
  v16 = &a6;
  v17 = 4LL;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  v26 = &a11;
  v28 = &a12;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &UIPIEventHookEvent, &W32kControlGuid, 9u, &v13);
}
