NTSTATUS __fastcall EtwpEventWriteRegEntry(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  ULONGLONG v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  int v8; // [rsp+30h] [rbp-39h] BYREF
  char v9; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  char *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  int *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  v2 = (*(_BYTE *)(a2 + 98) & 2) == 0;
  v8 = 0;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a2 + 80);
    if ( v3 )
      v8 = *(_DWORD *)(v3 + 1088);
  }
  v4 = *(_QWORD *)(a2 + 32) + 40LL;
  *(_QWORD *)&UserData.Size = 16LL;
  UserData.Ptr = v4;
  v5 = *(_QWORD *)(a2 + 40);
  v12 = 16LL;
  if ( v5 )
    v6 = (char *)(v5 + 40);
  else
    v6 = &v9;
  v11 = v6;
  v13 = a2 + 98;
  v15 = a2 + 100;
  v14 = 2LL;
  v17 = a2 + 101;
  v16 = 1LL;
  v19 = &v8;
  v18 = 1LL;
  v20 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO, 0LL, 6u, &UserData);
}
