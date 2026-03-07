__int64 __fastcall EtwRegisterEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v7; // r9d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdi
  _QWORD *Pool2; // rax

  v4 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  if ( !v5 || v5 != qword_140D1F268 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v7, 0);
  if ( v9 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1131902021LL);
    if ( Pool2 )
    {
      Pool2[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 161, (signed __int64)Pool2, 0LL) )
      {
        v4 = -1073741811;
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v4 = -1073741670;
    }
    EtwpReleaseLoggerContext(v9, 0);
  }
  else
  {
    v4 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
