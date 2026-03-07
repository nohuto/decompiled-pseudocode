char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v6; // r14
  char v7; // r13
  _BYTE *v8; // r8
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v11; // r15
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rax
  _QWORD *v16; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
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
      v12 = *(_QWORD *)(a1 + 200);
      v11 = (struct _ERESOURCE *)(a1 + 32);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v11 = (struct _ERESOURCE *)(a1 + 32);
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v12 = *(_QWORD *)(a1 + 192);
    }
    if ( v12 )
    {
      if ( a3 )
        *a3 = 1;
      goto LABEL_15;
    }
    v13 = *(__int64 (__fastcall **)(__int64))(a1 + 208);
    if ( v13 )
    {
      v6 = v13(a2);
      if ( !v6 )
      {
LABEL_15:
        if ( CurrentIrql == 2 )
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v18 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v22 = (v21 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v21;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
        }
        else
        {
          ExReleaseResourceLite(v11);
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
    }
    else
    {
      v6 = 1;
    }
    *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
    if ( CurrentIrql == 2 )
    {
      v16 = *(_QWORD **)(a1 + 24);
      if ( *v16 == a1 + 16 )
      {
        *(_QWORD *)a2 = a1 + 16;
        *(_QWORD *)(a2 + 8) = v16;
        *v16 = a2;
        *(_QWORD *)(a1 + 24) = a2;
LABEL_13:
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v7 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 8);
      if ( *v14 == a1 )
      {
        *(_QWORD *)a2 = a1;
        *(_QWORD *)(a2 + 8) = v14;
        *v14 = a2;
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
