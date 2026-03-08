/*
 * XREFs of CcInsertPrivateVolumeCacheMap @ 0x1403BDD18
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x1402DA2F4 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcInsertPrivateVolumeCacheMap(__int64 a1, __int64 a2, _QWORD *a3)
{
  const void *v3; // r12
  char v7; // r15
  _QWORD *v8; // rax
  _QWORD *i; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 OldIrql; // r14
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r14
  const char *v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp+17h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+80h] [rbp+2Fh] BYREF

  v3 = *(const void **)(a2 + 16);
  *a3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v30, 0, sizeof(v30));
  v7 = 0;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx)\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v3,
    (const void *)a2,
    *(_DWORD *)(a2 + 24));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v8 = (_QWORD *)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 32); i != v8; i = (_QWORD *)*i )
  {
    v10 = i - 72;
    if ( (const void *)*(i - 70) == v3 )
    {
      ++*((_DWORD *)v10 + 1);
      *a3 = v10;
      goto LABEL_8;
    }
  }
  v11 = *(_QWORD **)(a1 + 40);
  v12 = (_QWORD *)(a2 + 576);
  if ( (_QWORD *)*v11 != v8 )
    goto LABEL_30;
  *v12 = v8;
  v7 = 1;
  *(_QWORD *)(a2 + 584) = v11;
  *v11 = v12;
  *(_QWORD *)(a1 + 40) = v12;
  *(_BYTE *)(a2 + 1173) = 1;
  if ( ++*(_DWORD *)(a1 + 48) == 1 )
    KeResetEvent((PRKEVENT)(a1 + 56));
LABEL_8:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v24 = (v23 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( !v7 )
  {
    v18 = "NO";
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(a2 + 40);
  if ( v14 )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v30);
    v15 = *(_QWORD **)(v14 + 216);
    v16 = (_QWORD *)(a2 + 592);
    if ( *v15 == v14 + 208 )
    {
      *v16 = v14 + 208;
      *(_QWORD *)(a2 + 600) = v15;
      *v15 = v16;
      *(_QWORD *)(v14 + 216) = v16;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
      v17 = v30.OldIrql;
      if ( KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v30.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v30.OldIrql + 1));
          v24 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      __writecr8(v17);
      goto LABEL_14;
    }
LABEL_30:
    __fastfail(3u);
  }
LABEL_14:
  v18 = "YES";
LABEL_15:
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx), PVCMCount:%lu, Inserted:%s\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v3,
    (const void *)a2,
    *(_DWORD *)(a2 + 24),
    *(_DWORD *)(a1 + 48),
    v18);
  return v7;
}
