/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x140907C44
 * Callers:
 *     KeStartDynamicProcessor @ 0x1408BB920 (KeStartDynamicProcessor.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140581BDC (PspUnlockAffinityUpdateExclusive.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x140908930 (PspUpdateSingleProcessAffinity.c)
 */

_QWORD *PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  _QWORD *v10; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v12; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspAffinityUpdateLock, 0LL);
  if ( !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)KeActiveProcessors, PspLastUpdateAffinityMask) )
  {
    v1 = *(_OWORD *)&KeActiveProcessors[8];
    *(_OWORD *)PspLastUpdateAffinityMask = *(_OWORD *)KeActiveProcessors;
    v2 = *(_OWORD *)&KeActiveProcessors[16];
    *(_OWORD *)&PspLastUpdateAffinityMask[8] = v1;
    v3 = *(_OWORD *)&KeActiveProcessors[24];
    *(_OWORD *)&PspLastUpdateAffinityMask[16] = v2;
    v4 = *(_OWORD *)&KeActiveProcessors[32];
    *(_OWORD *)&PspLastUpdateAffinityMask[24] = v3;
    v5 = *(_OWORD *)&KeActiveProcessors[40];
    *(_OWORD *)&PspLastUpdateAffinityMask[32] = v4;
    v6 = *(_OWORD *)&KeActiveProcessors[48];
    *(_OWORD *)&PspLastUpdateAffinityMask[40] = v5;
    v7 = *(_OWORD *)&KeActiveProcessors[64];
    *(_OWORD *)&PspLastUpdateAffinityMask[48] = v6;
    *(_OWORD *)&PspLastUpdateAffinityMask[56] = *(_OWORD *)&KeActiveProcessors[56];
    v8 = *(_OWORD *)&KeActiveProcessors[72];
    v9 = *(_QWORD *)&KeActiveProcessors[80];
    v10 = 0LL;
    *(_OWORD *)&PspLastUpdateAffinityMask[64] = v7;
    *(_OWORD *)&PspLastUpdateAffinityMask[72] = v8;
    *(_QWORD *)&PspLastUpdateAffinityMask[80] = v9;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v10);
      v12 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, KeActiveProcessors);
      v10 = v12;
    }
  }
  return PspUnlockAffinityUpdateExclusive((__int64)CurrentThread);
}
