/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1405A55A8
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1405A53E0 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // esi
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  void **i; // rdi
  struct _EX_RUNDOWN_REF *v7; // r14
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  void **v14; // rdx
  void **v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v3 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v5) = 4096;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v5;
  }
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (void **)RtlpDebugPrintCallbackList; ; i = (void **)*i )
  {
    if ( i == (void **)&RtlpDebugPrintCallbackList )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
      if ( KiIrqlFlags )
      {
        v8 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      return (unsigned int)-1073741275;
    }
    v7 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v7);
      if ( (_InterlockedOr((volatile signed __int32 *)v7, 1u) & 1) == 0 )
        break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  ExWaitForRundownProtectionRelease(v7 + 1);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v14 = (void **)*i;
  v15 = (void **)i[1];
  if ( *((void ***)*i + 1) != i || *v15 != i )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  if ( v15 == v14 )
    RtlpDebugPrintCallbacksActive = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v17);
    }
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(i - 3, 0);
  return v3;
}
