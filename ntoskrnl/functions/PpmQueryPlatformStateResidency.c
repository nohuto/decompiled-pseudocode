__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v4; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _PPM_IDLE_STATES *IdleStates; // rcx

  v1 = -1LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v4 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v4 )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * v4 + 8, 1766674512LL);
        v6 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v4;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates
            && (*(int (__fastcall **)(void *, unsigned int *))(PpmPlatformStates + 40))(
                 IdleStates->PrepareInfo.Context,
                 v6) >= 0 )
          {
            v1 = *(_QWORD *)&v6[4 * v2 + 2];
          }
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v6, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
