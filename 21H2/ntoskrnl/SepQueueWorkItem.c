/*
 * XREFs of SepQueueWorkItem @ 0x14023C470
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x14060342C (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetServerSiloState @ 0x14023C5EC (PsGetServerSiloState.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // r14
  char v7; // r12
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rax
  _QWORD *v15; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = 0;
  if ( (unsigned int)PsGetServerSiloState(*(_QWORD *)(a2 + 56)) == 1 )
  {
    if ( v8 )
      *v8 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v11 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v11 = *(_QWORD *)(a1 + 192);
    }
    if ( v11 )
    {
      if ( a3 )
        *a3 = 1;
      goto LABEL_15;
    }
    v12 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
    if ( v12 )
      v6 = v12(a2);
    else
      v6 = 1;
    if ( !v6 )
    {
LABEL_15:
      if ( CurrentIrql == 2 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v21 = (v20 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v20;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
      else
      {
        ExReleaseResourceLite((PERESOURCE)(a1 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v7 )
      {
        *(_QWORD *)(a1 + 144) = 0LL;
        *(_QWORD *)(a1 + 160) = SepRmCallLsa;
        *(_QWORD *)(a1 + 168) = a1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
      }
      return v6;
    }
    *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
    if ( CurrentIrql == 2 )
    {
      v15 = *(_QWORD **)(a1 + 24);
      if ( *v15 == a1 + 16 )
      {
        *(_QWORD *)a2 = a1 + 16;
        *(_QWORD *)(a2 + 8) = v15;
        *v15 = a2;
        *(_QWORD *)(a1 + 24) = a2;
LABEL_13:
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = *(_QWORD **)(a1 + 8);
      if ( *v13 == a1 )
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = v13;
        *v13 = a2;
        *(_QWORD *)(a1 + 8) = a2;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
  if ( a3 )
    *v8 = 1;
  return 0;
}
