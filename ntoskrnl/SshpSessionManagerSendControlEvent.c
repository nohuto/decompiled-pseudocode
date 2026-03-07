signed __int32 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 SystemTimePrecise; // r13
  int v7; // ebp
  __int64 v8; // rsi
  _DWORD *v9; // rcx
  __int64 v10; // rax
  const void **v11; // rdi
  char *v12; // rbx
  char *v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rcx
  _DWORD *v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8

  SystemTimePrecise = RtlGetSystemTimePrecise();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  v7 = 8;
  v8 = a2;
  if ( a2 )
  {
    v9 = (_DWORD *)(a3 + 8);
    v10 = a2;
    do
    {
      v7 += *v9;
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  v11 = (const void **)(a3 + 8);
  if ( (unsigned int)(v7 + 12 + dword_140C38360) <= 0x400 )
  {
    KeResetEvent(&stru_140C38348);
    v12 = (char *)&unk_140C38364 + (unsigned int)dword_140C38360;
    *(_DWORD *)v12 = v7;
    *(_QWORD *)(v12 + 4) = a1;
    *(_QWORD *)(v12 + 12) = SystemTimePrecise;
    v13 = v12 + 20;
    if ( a2 )
    {
      do
      {
        memmove(v13, *(v11 - 1), *(unsigned int *)v11);
        v14 = *(unsigned int *)v11;
        v11 += 2;
        v13 += v14;
        --v8;
      }
      while ( v8 );
    }
    dword_140C38360 += v7 + 12;
    if ( !byte_140C38340 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38148, 0LL);
      v18 = SshpAlpcOpenTraceSessionUnsafe(v16, 0, SshpSessionManagerContext, v17);
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38148);
      if ( v18 )
        byte_140C38340 = 1;
      else
        SshpSessionManagerFlushControlEventBuffer(v20, v19, v21);
    }
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
