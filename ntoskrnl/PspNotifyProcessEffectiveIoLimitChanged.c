/*
 * XREFs of PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessIoPriorityLimitCallback @ 0x1407DD170 (PspSetProcessIoPriorityLimitCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x140357A24 (KeAbProcessBaseIoPriorityChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PspNotifyProcessEffectiveIoLimitChanged(__int64 a1, __int64 a2, char a3)
{
  signed __int64 *v3; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int8 CurrentIrql; // si
  _QWORD **v8; // rdi
  _QWORD *i; // rbx
  unsigned int IoPriorityThread; // eax
  unsigned int v11; // r9d
  __int64 v12; // r10
  _QWORD *j; // rbx
  unsigned int v15; // eax
  __int64 v16; // r10
  unsigned int v17; // r9d
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf

  v3 = (signed __int64 *)(a1 + 2144);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v19) = 4;
    if ( CurrentIrql != 2 )
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v19;
  }
  v8 = (_QWORD **)(a1 + 1504);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( (*((unsigned __int8 *)i - 544) | *((unsigned __int8 *)i - 466)) != 0x3F )
    {
      IoPriorityThread = PsGetIoPriorityThread((__int64)(i - 167));
      if ( v11 != IoPriorityThread )
        KeAbProcessBaseIoPriorityChange(v12, v11, IoPriorityThread);
    }
  }
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( a3 )
  {
    for ( j = *v8; j != v8; j = (_QWORD *)*j )
    {
      v15 = PsGetIoPriorityThread((__int64)(j - 167));
      if ( v17 < v15 )
        IoBoostThreadIoPriority(v16, v15, 0LL);
    }
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
