/*
 * XREFs of RtlpHpLargeAllocSize @ 0x1405B4CF4
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x1405B4430 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405B4F54 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // edx
  _DWORD *SchedulerAssist; // r9
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v8 = (unsigned __int8)RtlpHpLargeLockAcquireShared(a1, a3);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v9 )
    v9 ^= a1 + 72;
  while ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v10 )
    {
      if ( a2 <= v10 )
        break;
      v11 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( v9 )
  {
    if ( a4 )
    {
      if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
      {
        _InterlockedOr(v21, 0);
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      *a4 = v12;
    }
    v13 = (*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v9 + 24);
  }
  else
  {
    v13 = -1LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v13;
}
