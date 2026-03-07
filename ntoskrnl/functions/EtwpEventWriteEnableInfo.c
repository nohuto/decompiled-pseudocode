NTSTATUS __fastcall EtwpEventWriteEnableInfo(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v6; // [rsp+40h] [rbp-19h]
  __int64 v7; // [rsp+48h] [rbp-11h]
  __int64 v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]
  unsigned __int8 v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a3;
  UserData.Ptr = a2 + 40;
  v3 = 32LL * a3;
  v6 = (char *)&v18;
  *(_QWORD *)&UserData.Size = 16LL;
  v7 = 1LL;
  v8 = v3 + a2 + 134;
  v9 = 2LL;
  v10 = v3 + a2 + 144;
  v11 = 8LL;
  v12 = v3 + a2 + 152;
  v13 = 8LL;
  v14 = v3 + a2 + 132;
  v15 = 1LL;
  v16 = v3 + a2 + 136;
  v17 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO, 0LL, 7u, &UserData);
}
