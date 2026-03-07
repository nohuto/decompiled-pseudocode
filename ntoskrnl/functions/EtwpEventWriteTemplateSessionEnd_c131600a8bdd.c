NTSTATUS __fastcall EtwpEventWriteTemplateSessionEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-39h]
  __int64 v11; // [rsp+48h] [rbp-31h]
  __int64 v12; // [rsp+50h] [rbp-29h]
  int v13; // [rsp+58h] [rbp-21h]
  int v14; // [rsp+5Ch] [rbp-1Dh]
  __int64 *v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  char *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  char *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  char *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v12 = *((_QWORD *)a5 + 1);
  v13 = *a5;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  UserData.Reserved = 0;
  v10 = &EtwpNull;
  v14 = 0;
  v15 = &EtwpNull;
  v11 = 2LL;
  v16 = 2LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED, 0LL, 7u, &UserData);
}
