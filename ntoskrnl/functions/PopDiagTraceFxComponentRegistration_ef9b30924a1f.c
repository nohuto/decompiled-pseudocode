NTSTATUS __fastcall PopDiagTraceFxComponentRegistration(
        PCEVENT_DESCRIPTOR EventDescriptor,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        int a6,
        __int64 a7)
{
  int v8; // [rsp+30h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-31h] BYREF
  int *v10; // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  int *v12; // [rsp+60h] [rbp-11h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  char *v14; // [rsp+70h] [rbp-1h]
  __int64 v15; // [rsp+78h] [rbp+7h]
  int *v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+9Ch] [rbp+2Bh]
  __int64 v21; // [rsp+C8h] [rbp+57h] BYREF
  int v22; // [rsp+D0h] [rbp+5Fh] BYREF

  v22 = a3;
  v21 = a2;
  v8 = a4;
  *(_QWORD *)&UserData.Size = 8LL;
  UserData.Ptr = (ULONGLONG)&v21;
  v10 = &v22;
  v12 = &v8;
  v11 = 4LL;
  v14 = &a5;
  v16 = &a6;
  v18 = a7;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v20 = 0;
  v19 = 24 * a6;
  return EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 6u, &UserData);
}
