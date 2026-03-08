/*
 * XREFs of SepRmCapUpdateWrkr @ 0x1408596D0
 * Callers:
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepBuildCapPolicyTable @ 0x1403A918C (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B5A90 (SepRmDereferenceCapTable.c)
 */

char __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  volatile signed __int64 *v6; // rsi
  char v7; // bl
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v10 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, &v10);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    if ( v10 )
      *(_QWORD *)(v10 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
    v6 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = (PRTL_DYNAMIC_HASH_TABLE)v10;
    SepRmEnforceCap = v10 != 0;
    if ( v10 && (_DWORD)InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v6 )
      result = SepRmDereferenceCapTable(v6);
  }
  *(_DWORD *)(a2 + 40) = v4;
  return result;
}
