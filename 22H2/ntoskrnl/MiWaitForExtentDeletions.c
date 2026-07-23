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
  unsigned __int64 v3; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  char result; // al
  ULONG_PTR v11; // [rsp+20h] [rbp-20h] BYREF
  __int16 v12; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+2Ah] [rbp-16h]
  char v14; // [rsp+2Bh] [rbp-15h]
  int v15; // [rsp+2Ch] [rbp-14h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v14 = 0;
  v2 = KeAbPreAcquire((ULONG_PTR)&qword_140C4CB10, 0LL, 0);
  v3 = v2;
  if ( v2 )
    KeAbPreWait(v2);
  v15 = 0;
  v16[1] = v16;
  v12 = 263;
  v16[0] = v16;
  v11 = qword_140C4CB10;
  qword_140C4CB10 = (ULONG_PTR)&v11;
  v13 = 6;
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
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = KeWaitForGate((__int64)&v12, 18);
  if ( v3 )
  {
    KeAbPreAcquire((ULONG_PTR)&qword_140C4CB10, v3, 0);
    return KeAbPostReleaseEx((ULONG_PTR)&qword_140C4CB10, v3);
  }
  return result;
}
