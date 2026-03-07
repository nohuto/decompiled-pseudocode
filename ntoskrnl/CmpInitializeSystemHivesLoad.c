NTSTATUS CmpInitializeSystemHivesLoad()
{
  __int64 v0; // rdx
  _DWORD *v1; // rsi
  unsigned int i; // ebx
  ULONG_PTR v3; // rdi
  int v4; // eax
  NTSTATUS result; // eax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  BYTE1(NlsMbOemCodePageTag) = 0;
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v1 = &unk_140C026B0;
  if ( CmpShareSystemHives )
  {
    v6 = &unk_140C026B0;
    v7 = 7LL;
    do
    {
      if ( *((_QWORD *)v6 - 4) )
        *v6 |= 0x8000u;
      v6 += 46;
      --v7;
    }
    while ( v7 );
  }
  CmpSpecialBootCondition = 1;
  for ( i = 0; i < 7; ++i )
  {
    if ( (*v1 & 1) != 0 || CmpInitRmLogOnLoad || CmpForceSynchronousMachineHiveLoad || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      v3 = i;
      KeSetEvent((struct _KEVENT *)((char *)&stru_140C026D0 + 184 * i), 0, 0);
    }
    else
    {
      v3 = i;
    }
    v4 = CmpCreateRegistryThread(&Handle, v0, CmpLoadHiveThread, v3);
    if ( v4 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, v3, v4);
    result = ZwClose(Handle);
    v1 += 46;
  }
  return result;
}
