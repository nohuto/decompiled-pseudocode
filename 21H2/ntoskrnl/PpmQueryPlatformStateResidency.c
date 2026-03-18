/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x14039A1C4
 * Callers:
 *     PopCalculateIdleInformation @ 0x14039AD4C (PopCalculateIdleInformation.c)
 *     PpmQueryDripsResidency @ 0x1405C8960 (PpmQueryDripsResidency.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1405CA044 (PopQueryBootSessionStandbyActivationInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v4; // ebp
  _DWORD *Pool2; // rax
  _QWORD *v6; // rdi
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
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16 * v4 + 8, 1766674512LL);
        v6 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v4;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates
            && (*(int (__fastcall **)(void *, _QWORD *))(PpmPlatformStates + 40))(IdleStates->PrepareInfo.Context, v6) >= 0 )
          {
            v1 = v6[2 * v2 + 1];
          }
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v6, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
