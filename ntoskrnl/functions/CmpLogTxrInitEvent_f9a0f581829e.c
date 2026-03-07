NTSTATUS __fastcall CmpLogTxrInitEvent(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v3; // r8
  NTSTATUS result; // eax
  unsigned __int16 v5; // cx
  int v6; // eax
  __int64 v7; // rcx
  __int16 v8; // [rsp+30h] [rbp-39h] BYREF
  NTSTATUS v9; // [rsp+34h] [rbp-35h] BYREF
  __int128 v10; // [rsp+38h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  const wchar_t *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  __int64 v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  int *v19; // [rsp+90h] [rbp+27h]
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  NTSTATUS *v21; // [rsp+A0h] [rbp+37h]
  __int64 v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+E0h] [rbp+77h] BYREF

  v23 = a3;
  v3 = L"\\SystemRoot\\System32\\Config\\SYSTEM";
  result = *(_DWORD *)(a2 + 4160);
  v9 = result;
  v5 = 68;
  if ( EtwKernelProvRegHandle )
  {
    if ( qword_140C028D0 != a2 )
    {
      v10 = *(_OWORD *)(a2 + 1840);
      v3 = (const wchar_t *)*((_QWORD *)&v10 + 1);
      v5 = v10;
    }
    v12 = v3;
    v8 = v5 >> 1;
    UserData.Ptr = (ULONGLONG)&v8;
    v6 = v5;
    v7 = *(_QWORD *)(a2 + 64);
    v13 = v6;
    v14 = 0;
    *(_QWORD *)&UserData.Size = 2LL;
    v16 = 16LL;
    v15 = v7 + 148;
    v17 = v7 + 112;
    v18 = 16LL;
    v19 = &v23;
    v21 = &v9;
    v20 = 4LL;
    v22 = 4LL;
    return EtwWrite(EtwKernelProvRegHandle, &REG_EVENT_TXR_INIT, 0LL, 6u, &UserData);
  }
  return result;
}
