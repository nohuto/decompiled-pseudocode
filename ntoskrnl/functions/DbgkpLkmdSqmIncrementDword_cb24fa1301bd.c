NTSTATUS __fastcall DbgkpLkmdSqmIncrementDword(REGHANDLE a1, int a2)
{
  int v3; // [rsp+40h] [rbp-9h] BYREF
  int v4; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  v4 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v11 = 4LL;
  v6 = qword_14003EB58;
  v8 = &v12;
  v10 = &v4;
  v3 = 6;
  v7 = 16LL;
  return EtwWriteEx(a1, &SQM_INCREMENT_DWORD, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
