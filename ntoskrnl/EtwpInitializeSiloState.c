/*
 * XREFs of EtwpInitializeSiloState @ 0x14083BE04
 * Callers:
 *     EtwInitializeSiloState @ 0x1409DF038 (EtwInitializeSiloState.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140395114 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x14039537C (EtwpQuerySiloRegistrySettings.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeSiloState(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool IsHostSilo; // si
  _QWORD *v8; // rax
  struct _LIST_ENTRY *v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _WORD *v11; // r10
  __int64 v12; // r8
  unsigned int i; // r9d
  ULONG MaximumProcessorCount; // r14d
  __int64 Pool2; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 108);
  v6 = 0;
  IsHostSilo = PsIsHostSilo(v5);
  if ( !IsHostSilo )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    Pool2 = ExAllocatePool2(72LL, MaximumProcessorCount * (24 * *(_DWORD *)(v4 + 16) + 64), 1635218501LL);
    *(_QWORD *)(v4 + 4144) = Pool2;
    if ( Pool2 )
    {
      v17 = MaximumProcessorCount;
      v18 = Pool2 + ((unsigned __int64)MaximumProcessorCount << 6);
      if ( MaximumProcessorCount )
      {
        v19 = 0LL;
        do
        {
          *(_QWORD *)(v19 + *(_QWORD *)(v4 + 4144)) = v18;
          v19 += 64LL;
          v20 = v18 + 8LL * *(unsigned int *)(v4 + 16);
          *(_QWORD *)(*(_QWORD *)(v4 + 4144) + v19 - 56) = v20;
          v21 = v20 + 8LL * *(unsigned int *)(v4 + 16);
          *(_QWORD *)(*(_QWORD *)(v4 + 4144) + v19 - 48) = v21;
          v18 = v21 + 8LL * *(unsigned int *)(v4 + 16);
          --v17;
        }
        while ( v17 );
      }
      goto LABEL_4;
    }
    return (unsigned int)-1073741801;
  }
  v8 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1467446341LL);
  *(_QWORD *)(v4 + 4168) = v8;
  if ( !v8 )
    return (unsigned int)-1073741801;
  v8[3] = 0LL;
  v8[2] = EtwpUnsubscribeContainerStateWnf;
  *v8 = 0LL;
  *(_DWORD *)(v4 + 4160) = 0;
  ExSubscribeWnfStateChange(
    v4 + 4152,
    (__int64)&WNF_CONT_CONTAINER_STATE,
    1,
    0,
    (__int64)EtwpContainerStateWnfCallback,
    0LL);
LABEL_4:
  v9 = PsAttachSiloToCurrentThread(a1);
  EtwpQuerySiloRegistrySettings(v4);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4176),
    (PVOID *)(v4 + 4216),
    (_WORD *)(v4 + 4224),
    (_DWORD *)(v4 + 4228),
    (_QWORD *)(v4 + 4208),
    (GUID *)(v4 + 4192));
  if ( IsHostSilo )
    qword_140D81788 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers(a2);
  if ( IsHostSilo )
    qword_140D81790 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v9);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 432, 0LL);
  v11 = (_WORD *)(v4 + 4048);
  *(_QWORD *)(v4 + 440) = KeGetCurrentThread();
  v12 = v4 + 156;
  for ( i = 0; i < 8; ++i )
  {
    if ( *v11 )
    {
      *(_WORD *)(v12 + 2) = *v11;
      *(_DWORD *)(v12 - 4) = 1;
      *(_BYTE *)v12 = -1;
      *(_QWORD *)(v12 + 12) = -1LL;
      *(_QWORD *)(v12 + 20) = 0LL;
      *(_DWORD *)(v12 + 4) = 64;
      *(_BYTE *)(v4 + 4064) |= 1 << i;
    }
    ++v11;
    v12 += 32LL;
  }
  *(_QWORD *)(v4 + 440) = 0LL;
  ExReleasePushLockEx((__int64 *)(v4 + 432), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v4 + 4096) = 0LL;
  *(_QWORD *)(v4 + 4080) = 0LL;
  *(_QWORD *)(v4 + 4088) = 0LL;
  return v6;
}
