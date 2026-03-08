/*
 * XREFs of EtwpCoverageEnsureContext @ 0x1408537B4
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140871478 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140203D80 (KeInitializeTimer2.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1402F9F5C (TelemetryCoverageStringHashInternal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140711DC0 (MmCreateSection.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x140853BB8 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1409E55C0 (EtwpCoverageFreeStringBuffers.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  unsigned int v0; // edx
  __int64 *Pool2; // rax
  __int64 v2; // rdi
  __int64 *v3; // r15
  void *v4; // rax
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r12
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  int v10; // esi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v17; // rax
  char v18; // bl
  char v20; // cl
  ULONG_PTR v21; // rcx
  void *v22; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+60h] BYREF

  if ( (unsigned __int8)EtwpBootPhase <= 1u || (v0 = EtwpCoverageEntryCount) == 0 )
    return (unsigned int)-1073741637;
  if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
    v0 = 0x80000;
  if ( v0 <= 0x40 )
    v0 = 64;
  if ( ((v0 - 1) & v0) != 0 )
  {
    v20 = -1;
    do
    {
      ++v20;
      v0 >>= 1;
    }
    while ( v0 );
    v0 = 1 << v20;
  }
  EtwpCoverageEntryCount = v0;
  if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
    EtwpCoverageFlushPeriod = 1000;
  if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
    EtwpCoverageResetPeriod = 3600000;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 72LL, 1450669125LL);
  v2 = (__int64)Pool2;
  v3 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset(Pool2, 0, 0x48uLL);
  v4 = (void *)ExAllocatePool2(64LL, 440LL, 1450669125LL);
  *v3 = (__int64)v4;
  if ( !v4 )
  {
    v10 = -1073741670;
LABEL_43:
    v21 = *(_QWORD *)(v2 + 16);
    if ( v21 )
    {
      MiRemoveFromSystemSpace(v21, 1);
      *(_QWORD *)(v2 + 16) = 0LL;
    }
    v22 = *(void **)(v2 + 8);
    if ( v22 )
    {
      ObfDereferenceObject(v22);
      *(_QWORD *)(v2 + 8) = 0LL;
    }
    if ( *(_QWORD *)v2 )
      ExFreePoolWithTag(*(PVOID *)v2, 0x56777445u);
    EtwpCoverageFreeStringBuffers(v2, 0LL);
    ExFreePoolWithTag((PVOID)v2, 0x56777445u);
    return (unsigned int)v10;
  }
  memset(v4, 0, 0x1B8uLL);
  v5 = (_QWORD *)*v3;
  v5[3] = 0LL;
  v5[6] = v5 + 5;
  v5[5] = v5 + 5;
  v5[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
  v5[10] = v3;
  v5[7] = 0LL;
  v3[7] = (__int64)(v3 + 6);
  v3[6] = (__int64)(v3 + 6);
  *((_DWORD *)v3 + 7) = EtwpCoverageFlushPeriod;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(*v3 + 16) = v6;
  v7 = *v3;
  *((_DWORD *)v3 + 6) = v6;
  KeInitializeTimer2(v7 + 104, (__int64)EtwpCoverageResetTimerCallback, v7, 8LL);
  KeInitializeTimer2(*v3 + 240, (__int64)EtwpCoverageFlushTimerCallback, *v3, 8LL);
  v8 = (_QWORD *)*v3;
  v8[53] = EtwpCoverageResetWorkItemCallback;
  v8[54] = v3;
  v8[51] = 0LL;
  v9 = (_QWORD *)*v3;
  v9[49] = EtwpCoverageFlushWorkItemCallback;
  v9[50] = v3;
  v9[47] = 0LL;
  v10 = EtwpCoverageEnsureStringBuffer(v3);
  if ( v10 < 0 )
    goto LABEL_43;
  v11 = 4 * EtwpCoverageEntryCount;
  v25 = 4LL * (unsigned int)EtwpCoverageEntryCount;
  v10 = MmCreateSection((int)v3 + 8, 983071LL, 0, &v25, 4, 0x8000000, 0LL, 0LL);
  if ( v10 < 0 )
    goto LABEL_43;
  v12 = v3[1];
  v13 = v3 + 2;
  v27 = 0LL;
  v26 = 0LL;
  v10 = MiMapViewInSystemSpace(v12, v3 + 2, &v27, &v26, 0LL, 0LL);
  if ( v10 < 0 )
    goto LABEL_43;
  v14 = 2LL;
  *(_BYTE *)*v13 = 2;
  *(_BYTE *)(*v13 + 1) = 1;
  *(_DWORD *)(*v13 + 24) = 1;
  *(_DWORD *)*v3 = *(_DWORD *)(*v13 + 24);
  *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*v13 + 24);
  *(_DWORD *)(*v13 + 20) = v6;
  *(_DWORD *)(*v3 + 20) = *(_DWORD *)(*v13 + 20);
  *(_DWORD *)(*v13 + 8) = EtwpCoverageEntryCount - 1;
  do
  {
    *(_DWORD *)(*v13 + 4) = (unsigned int)(v11 - 52) >> 2;
    --v14;
  }
  while ( v14 );
  v15 = *v13;
  *(_DWORD *)(v2 + 32) = 3 * ((unsigned int)(v11 - 52) >> 4);
  *(_DWORD *)(v15 + 16) = 4 * *(_DWORD *)(v15 + 4) + 52;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( !EtwpCoverageContext )
  {
    v17 = *(PVOID *)v2;
    EtwpCoverageContext = v2;
    v2 = 0LL;
    EtwpCoverageNonPagedContext = (__int64)v17;
    if ( EtwpCoverageCoreTracingEnabled )
    {
      *(_WORD *)(v3[2] + 2) |= 1u;
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
    }
    v23[0] = 0LL;
    v23[1] = -1LL;
    KeSetTimer2(
      *(_QWORD *)EtwpCoverageContext + 104LL,
      -10000LL * (unsigned int)EtwpCoverageResetPeriod,
      10000LL * (unsigned int)EtwpCoverageResetPeriod,
      (__int64)v23);
  }
  EtwpCoverageLockOwner = 0LL;
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140C066D4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C066D0 )
    {
      v24 = 0;
      dword_140C066D0 = TelemetryCoverageStringHashInternal(off_140C066C8, &v24);
    }
    EtwTelemetryCoverageReport((__int64 *)&off_140C066C8);
  }
  if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C093D4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C093D0 )
    {
      v24 = 0;
      dword_140C093D0 = TelemetryCoverageStringHashInternal(off_140C093C8, &v24);
    }
    EtwTelemetryCoverageReport((__int64 *)&off_140C093C8);
  }
  v10 = 0;
  if ( v2 )
    goto LABEL_43;
  return (unsigned int)v10;
}
