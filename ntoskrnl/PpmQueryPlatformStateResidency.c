/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x1403D1420
 * Callers:
 *     PopCalculateIdleInformation @ 0x1403C2C3C (PopCalculateIdleInformation.c)
 *     PpmQueryDripsResidency @ 0x140583550 (PpmQueryDripsResidency.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140584D84 (PopQueryBootSessionStandbyActivationInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

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
