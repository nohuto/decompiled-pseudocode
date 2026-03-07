__int64 __fastcall EtwpDelayCreate(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        char a5,
        char a6,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v9; // rcx
  char v10; // r15
  NTSTATUS v11; // ebx
  _WORD *v12; // rdi
  NTSTATUS v13; // eax
  __int16 *v15; // rsi
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 ImpersonationLevel; // [rsp+20h] [rbp-40h]
  int v19; // [rsp+30h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  char v23; // [rsp+98h] [rbp+38h] BYREF

  v23 = 0;
  P = 0LL;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = 0;
  IoStatusBlock = 0LL;
  v11 = EtwpCreateNtFileName(v9, &P, &v23);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( ClientContext )
  {
    v11 = SeImpersonateClientEx(ClientContext, 0LL);
    if ( v11 < 0 )
    {
LABEL_15:
      v12 = P;
      goto LABEL_5;
    }
    v10 = 1;
  }
  ImpersonationLevel = a1;
  v12 = P;
  v13 = EtwpCreateDirectoryFile((PCWSTR)P, ImpersonationLevel, &IoStatusBlock, (unsigned __int8)*a3);
  v11 = v13;
  if ( a6 && v13 == -1073741766 && !v23 )
  {
    v15 = v12 + 12;
    v16 = v12[12];
    if ( v16 != 92 )
    {
      v17 = v12[12];
      do
      {
        v16 = v17;
        if ( !v17 )
          break;
        v16 = *++v15;
        v17 = *v15;
      }
      while ( *v15 != 92 );
    }
    while ( v16 )
    {
      while ( 1 )
      {
        v16 = *++v15;
        if ( *v15 != 92 )
          break;
        v19 = (unsigned __int8)*a3;
        *v15 = 0;
        v11 = EtwpCreateDirectoryFile(v12, 0LL, &IoStatusBlock, v19);
        if ( v11 < 0 )
          goto LABEL_4;
        *v15 = 92;
      }
    }
    v11 = EtwpCreateDirectoryFile(v12, a1, &IoStatusBlock, (unsigned __int8)*a3);
  }
LABEL_4:
  if ( v10 )
  {
    PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
    goto LABEL_15;
  }
LABEL_5:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v11 >= 0 && *a3 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v11;
}
