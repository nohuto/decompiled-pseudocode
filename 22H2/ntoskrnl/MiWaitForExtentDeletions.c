/*
 * XREFs of MiWaitForExtentDeletions @ 0x140542620
 * Callers:
 *     MiDeleteExtentPfns @ 0x1405406C0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x1402E3DB0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x1402ED0C4 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiWaitForExtentDeletions(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  char result; // al
  ULONG_PTR v13; // [rsp+20h] [rbp-20h] BYREF
  __int16 v14; // [rsp+28h] [rbp-18h] BYREF
  char v15; // [rsp+2Ah] [rbp-16h]
  char v16; // [rsp+2Bh] [rbp-15h]
  int v17; // [rsp+2Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF

  v16 = 0;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_140C4CB10, 0LL, 0LL);
  v5 = v2;
  if ( v2 )
    KeAbPreWait(v2, v3, v4);
  v17 = 0;
  v18[1] = v18;
  v14 = 263;
  v18[0] = v18;
  v13 = qword_140C4CB10;
  qword_140C4CB10 = (ULONG_PTR)&v13;
  v15 = 6;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = KeWaitForGate((__int64)&v14, 18);
  if ( v5 )
  {
    KeAbPreAcquire((ULONG_PTR)&qword_140C4CB10, v5, 0LL);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140C4CB10, v5);
  }
  return result;
}
