NTSTATUS __fastcall EtwpEventWriteCaptureState(__int64 a1, __int64 a2, ULONGLONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+40h] [rbp-9h]
  __int64 v6; // [rsp+48h] [rbp-1h]
  __int64 v7; // [rsp+50h] [rbp+7h]
  __int64 v8; // [rsp+58h] [rbp+Fh]
  __int64 v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  __int64 v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  v5 = a2 + 6;
  UserData.Ptr = a3;
  v7 = a2 + 16;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = a2 + 24;
  v11 = a2 + 4;
  v13 = a2 + 8;
  v6 = 2LL;
  v8 = 8LL;
  v10 = 8LL;
  v12 = 1LL;
  v14 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE, 0LL, 6u, &UserData);
}
