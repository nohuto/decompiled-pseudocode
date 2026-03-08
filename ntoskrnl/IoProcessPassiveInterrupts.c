/*
 * XREFs of IoProcessPassiveInterrupts @ 0x14039E784
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     KiDispatchPassiveInterrupts @ 0x14045A370 (KiDispatchPassiveInterrupts.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14039E744 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x14039E808 (IopFindPassiveInterruptBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int8 v3; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      ((void (__fastcall *)(_QWORD, __int64))off_140C01B80[0])(*(unsigned int *)(result + 24), 1LL);
    IopAcquirePassiveInterruptBlockLock(v1, &v8);
    v2 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v1 + 56));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v3 = v8;
      if ( v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = v8;
        v7 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v2 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v2 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v3 = v8;
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
