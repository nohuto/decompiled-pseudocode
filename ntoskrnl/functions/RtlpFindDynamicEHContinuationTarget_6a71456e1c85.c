bool __fastcall RtlpFindDynamicEHContinuationTarget(unsigned __int64 a1)
{
  _KPROCESS *Process; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  _QWORD *v5; // rbx
  int VsmEnclaveThread; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)&Process[2].ThreadSeed[22];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[2].ThreadSeed[22], 0LL);
  v5 = *(_QWORD **)&Process[2].ThreadSeed[18];
  while ( v5 )
  {
    VsmEnclaveThread = PspFindVsmEnclaveThread(a1, (__int64)v5);
    if ( VsmEnclaveThread >= 0 )
    {
      if ( VsmEnclaveThread <= 0 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5 != 0LL;
}
