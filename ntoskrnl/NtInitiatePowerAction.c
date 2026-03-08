/*
 * XREFs of NtInitiatePowerAction @ 0x140988360
 * Callers:
 *     IopWarmEjectDevice @ 0x14096C1CC (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058D598 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x14098D81C (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtInitiatePowerAction(__int64 a1, __int64 a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rbx
  int v9; // r15d
  char PreviousMode; // r12
  int v11; // esi
  __int64 Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[4]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+4Ch] [rbp-14h]
  __int128 v27; // [rsp+50h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  v9 = a2;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = a1;
  if ( PreviousMode )
  {
    if ( (_DWORD)a1 == 7 )
      return 3221225485LL;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return 3221225569LL;
  }
  if ( v9 > 7 || v11 > 7 || (a3 & 0x10000000) != 0 || v11 == 2 && v9 >= 5 || (a3 & 0xCFFFFC0) != 0 )
    return 3221225485LL;
  if ( (unsigned int)(v11 - 4) > 2 && PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225659LL;
  v24[2] = 0;
  v24[0] = v11;
  v24[1] = a3;
  v26 = 128;
  v27 = 0LL;
  if ( !PreviousMode && v11 == 6 && (a3 & 0x3000000) != 0 )
  {
    v25 = 15;
  }
  else
  {
    v25 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)v11, (unsigned int)v9);
  }
  if ( !a4 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1466122576LL);
    v6 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v25;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    v26 |= 0x20u;
    *(_QWORD *)&v27 = v6;
  }
  if ( (unsigned int)(v11 - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140C3CD74;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(a1);
  PopExecutePowerAction(&v25, 0, v24, v9, 1u);
  PopReleasePolicyLock(v15, v14, v16);
  PopThermalEventTransitionEnableDeepSleep(v11);
  if ( v6 )
  {
    v17 = v6 + 32;
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_34;
    v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, &Timeout);
    if ( v5 == 258 && (byte_140C3CD61 & 3) != 0 )
      v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock(v18);
    v21 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || (v22 = *(_QWORD **)(v6 + 40), *v22 != v17) )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    PopReleasePolicyLock(v21, v19, v20);
    if ( v5 >= 0 )
    {
LABEL_34:
      v5 = *(_DWORD *)(v6 + 24);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)v5;
}
