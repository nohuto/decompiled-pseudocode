/*
 * XREFs of CcSetLogHandleForFile @ 0x1405357A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  char *SharedCacheMap; // rbx
  _QWORD *v6; // rdi
  bool v7; // zf
  char **v8; // rdx
  PVOID *v9; // rcx
  char **v10; // rdx
  PVOID *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  _QWORD *v22; // rdx
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+30h] [rbp-28h] BYREF

  memset(&v23, 0, sizeof(v23));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x27BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x281uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (_QWORD *)*((_QWORD *)SharedCacheMap + 67);
  KeAcquireInStackQueuedSpinLock(v6 + 96, &v23);
  v7 = *((_QWORD *)SharedCacheMap + 31) == 0LL;
  *((_QWORD *)SharedCacheMap + 32) = FlushToLsnRoutine;
  if ( !v7 )
  {
    v8 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v9 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v8[1] != SharedCacheMap + 120 || *v9 != SharedCacheMap + 120 )
      goto LABEL_28;
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *v9 = v8;
    v8[1] = (char *)v9;
    if ( !v7 )
    {
      v10 = (char **)*((_QWORD *)SharedCacheMap + 73);
      v11 = (PVOID *)*((_QWORD *)SharedCacheMap + 74);
      if ( v10[1] != SharedCacheMap + 584 || *v11 != SharedCacheMap + 584 )
        goto LABEL_28;
      *v11 = v10;
      v10[1] = (char *)v11;
    }
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v12 = SharedCacheMap + 120;
    if ( !*((_DWORD *)SharedCacheMap + 28) )
    {
      v22 = (_QWORD *)v6[81];
      if ( (_QWORD *)*v22 != v6 + 80 )
        goto LABEL_28;
      v7 = CcEnablePerVolumeLazyWriter == 0;
      *v12 = v6 + 80;
      *((_QWORD *)SharedCacheMap + 16) = v22;
      *v22 = v12;
      v6[81] = v12;
      if ( v7 )
        goto LABEL_17;
      v14 = *((_QWORD *)SharedCacheMap + 75) + 624LL;
      goto LABEL_15;
    }
    v13 = (_QWORD *)v6[89];
    if ( (_QWORD *)*v13 != v6 + 88 )
      goto LABEL_28;
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *v12 = v6 + 88;
    *((_QWORD *)SharedCacheMap + 16) = v13;
    *v13 = v12;
    v6[89] = v12;
    if ( !v7 )
    {
      v14 = *((_QWORD *)SharedCacheMap + 75) + 688LL;
LABEL_15:
      v15 = *(__int64 ***)(v14 + 8);
      v16 = (__int64 *)(SharedCacheMap + 584);
      if ( *v15 == (__int64 *)v14 )
      {
        *v16 = v14;
        *((_QWORD *)SharedCacheMap + 74) = v15;
        *v15 = v16;
        *(_QWORD *)(v14 + 8) = v16;
        goto LABEL_17;
      }
LABEL_28:
      __fastfail(3u);
    }
  }
LABEL_17:
  *((_QWORD *)SharedCacheMap + 31) = LogHandle;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v23);
  OldIrql = v23.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v23.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v23.OldIrql + 1));
      v7 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}
