void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r13
  char v4; // r14
  __int64 v5; // rbx
  unsigned __int8 OldIrql; // r12
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-B8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-B0h] BYREF
  char v32; // [rsp+3Ah] [rbp-AEh]
  char v33; // [rsp+3Bh] [rbp-ADh]
  int v34; // [rsp+3Ch] [rbp-ACh]
  _QWORD v35[2]; // [rsp+40h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+50h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  __int128 v38; // [rsp+80h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+90h] [rbp-58h] BYREF
  char v41; // [rsp+F8h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp+10h]
  char v43; // [rsp+100h] [rbp+18h]
  LARGE_INTEGER Timeout; // [rsp+108h] [rbp+20h] BYREF

  v30 = 0LL;
  v33 = 0;
  v43 = 0;
  v41 = 0;
  v2 = 0LL;
  v38 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v36, 0, sizeof(v36));
  memset(&v39, 0, sizeof(v39));
  v3 = 0LL;
  v4 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v32 = 6;
    v34 = 0;
    v35[1] = v35;
    v35[0] = v35;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v5 )
    {
      v3 = *(_QWORD *)(v5 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 768), &v36);
      v4 = 1;
      if ( *(_QWORD *)(v5 + 232) == v5 + 232 )
      {
        v7 = *(_DWORD *)(v5 + 152);
        if ( (v7 & 0x100) == 0 )
        {
          v43 = 1;
          *(_DWORD *)(v5 + 152) = v7 | 0x10000;
          v30 = *(_QWORD *)(v5 + 280);
          *(_QWORD *)(v5 + 280) = (char *)&v30 + 1;
          v8 = *(_DWORD *)(v5 + 152);
          if ( (v8 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v5 + 504) )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 832), &v39);
              v9 = *(_QWORD *)(v5 + 504);
              if ( v9 )
              {
                v2 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
                v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
                v11 = *(_QWORD **)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v10 + 8) != v2 || *v11 != v2 )
                  __fastfail(3u);
                *v11 = v10;
                *(_QWORD *)(v10 + 8) = v11;
                *(_QWORD *)(v2 + 8) = 0LL;
                *(_QWORD *)v2 = 0LL;
                *(_QWORD *)(v5 + 504) = 0LL;
                v41 = 1;
              }
              KxReleaseQueuedSpinLock(&v39);
            }
          }
          else
          {
            *(_DWORD *)(v5 + 152) = v8 | 0x20;
            v41 = 1;
          }
        }
      }
    }
    if ( v4 )
      KxReleaseQueuedSpinLock(&v36);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v41 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      *((_QWORD *)&v38 + 1) = v2;
      CcWriteBehind(v5, (__int64)&v38, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v2 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v2);
    if ( v43 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &v36);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v17 )
        {
          v18 = (_QWORD *)(v17 + 280);
          v19 = *(_QWORD *)(v17 + 280);
          if ( v19 )
          {
            while ( (__int64 *)v19 != (__int64 *)((char *)&v30 + 1) )
            {
              v18 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v19 )
                goto LABEL_38;
            }
            *v18 = v30;
          }
LABEL_38:
          *(_DWORD *)(v17 + 152) &= ~0x10000u;
          KxReleaseQueuedSpinLock(&v36);
          v20 = v36.OldIrql;
          if ( KiIrqlFlags )
          {
            v21 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && v36.OldIrql <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = v22->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v36.OldIrql + 1));
              v16 = (v24 & v23[5]) == 0;
              v23[5] &= v24;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          __writecr8(v20);
        }
        else
        {
          KxReleaseQueuedSpinLock(&v36);
          v25 = v36.OldIrql;
          if ( KiIrqlFlags )
          {
            v26 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && v36.OldIrql <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (v36.OldIrql + 1));
              v16 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          __writecr8(v25);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
