/*
 * XREFs of PspEnforceLimits @ 0x1407B67A0
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1406CD9E0 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspGetNextJob @ 0x14068A6EC (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

LONG_PTR __fastcall PspEnforceLimits(char a1)
{
  LONG_PTR result; // rax
  LONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  _DWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9[8]; // [rsp+50h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    v8[0] = 0;
    ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)v8);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  result = (LONG_PTR)PspGetNextJob(0LL);
  v3 = result;
  if ( result )
  {
    do
    {
      if ( !*(_QWORD *)(v3 + 1264) && (!a1 || (*(_DWORD *)(v3 + 1512) & 0x100000) != 0) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 1512), 0xFFEFFFFF);
        memset(v9, 0, sizeof(v9));
        PspEnumJobsAndProcessesInJobHierarchy(
          (_QWORD *)v3,
          (int)PspEnforceLimitsJobPreCallback,
          (int)PspEnforceLimitsJobPostCallback,
          (int)PspEnforceLimitsProcessCallback,
          (__int64)v9,
          6);
      }
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
      v6 = *(__int64 **)(v3 + 24);
      if ( v6 != &PspJobList )
      {
        while ( !ObReferenceObjectSafeWithTag((__int64)(v6 - 3)) )
        {
          v6 = (__int64 *)*v6;
          if ( v6 == &PspJobList )
            goto LABEL_9;
        }
        v5 = v6 - 3;
      }
LABEL_9:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
      KeAbPostRelease((ULONG_PTR)&PspJobListLock);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      result = ObfDereferenceObjectWithTag((PVOID)v3, 0x6E457350u);
      v3 = (LONG_PTR)v5;
    }
    while ( v5 );
  }
  return result;
}
