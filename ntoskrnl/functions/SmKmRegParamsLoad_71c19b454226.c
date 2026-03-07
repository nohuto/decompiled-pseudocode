__int64 __fastcall SmKmRegParamsLoad(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-75h] BYREF
  __int64 v5; // [rsp+40h] [rbp-69h] BYREF
  int v6; // [rsp+48h] [rbp-61h]
  const wchar_t *v7; // [rsp+50h] [rbp-59h]
  int *v8; // [rsp+58h] [rbp-51h]
  int v9; // [rsp+60h] [rbp-49h]
  __int64 v10; // [rsp+68h] [rbp-41h]
  int v11; // [rsp+70h] [rbp-39h]
  __int64 v12; // [rsp+78h] [rbp-31h]
  int v13; // [rsp+80h] [rbp-29h]
  const wchar_t *v14; // [rsp+88h] [rbp-21h]
  unsigned int *v15; // [rsp+90h] [rbp-19h]
  int v16; // [rsp+98h] [rbp-11h]
  __int64 v17; // [rsp+A0h] [rbp-9h]
  int v18; // [rsp+A8h] [rbp-1h]
  __int64 v19; // [rsp+B0h] [rbp+7h]
  int v20; // [rsp+B8h] [rbp+Fh]
  __int128 v21; // [rsp+C0h] [rbp+17h]
  int v22; // [rsp+D0h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+2Fh]
  int v24; // [rsp+E0h] [rbp+37h]

  v5 = 0LL;
  v10 = 0LL;
  v9 = 0x4000000;
  v6 = 288;
  v7 = L"EncryptionMode";
  v13 = 288;
  v8 = &v3;
  v16 = 0x4000000;
  v14 = L"EncryptionScope";
  v11 = 0;
  v15 = &v4;
  v12 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 4) &= 0xFFFFFFFC;
  *(_DWORD *)a1 = 16;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v3 = 0;
  v4 = 0;
  result = RtlpQueryRegistryValues(
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
             &v5,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( v3 == 1 )
      *(_DWORD *)a1 *= 2;
    if ( v4 < 3 )
      *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ v4) & 3;
  }
  else if ( (_DWORD)result != -1073741772 )
  {
    return result;
  }
  return 0LL;
}
