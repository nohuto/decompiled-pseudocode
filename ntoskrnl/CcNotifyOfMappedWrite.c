/*
 * XREFs of CcNotifyOfMappedWrite @ 0x140215670
 * Callers:
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 * Callees:
 *     CcPostWorkQueue @ 0x1402191C4 (CcPostWorkQueue.c)
 *     CcGetNodeForLazyWrite @ 0x1402191F0 (CcGetNodeForLazyWrite.c)
 *     CcAllocateWorkQueueEntry @ 0x140219880 (CcAllocateWorkQueueEntry.c)
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  _DWORD *v6; // r14
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r10
  _BYTE *v10; // rax
  char v11; // r8
  _DWORD *v12; // r13
  unsigned __int8 v13; // r11
  unsigned int v14; // r15d
  unsigned __int8 v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rbx
  int v21; // eax
  unsigned __int8 v22; // r11
  int v23; // eax
  KSPIN_LOCK *v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // r13
  unsigned int v29; // ecx
  bool v30; // zf
  unsigned __int64 OldIrql; // r14
  signed __int64 v32; // rax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  struct _KPRCB *v57; // rcx
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // edx
  __int64 v62; // [rsp+50h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v64; // [rsp+70h] [rbp-39h]
  __int64 v65; // [rsp+78h] [rbp-31h]
  __int64 v66; // [rsp+80h] [rbp-29h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-21h]
  ULONG_PTR v68; // [rsp+90h] [rbp-19h] BYREF
  _BYTE *v69; // [rsp+98h] [rbp-11h]
  __int64 v70; // [rsp+A0h] [rbp-9h] BYREF
  ULONG_PTR i; // [rsp+A8h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v73[7]; // [rsp+C8h] [rbp+1Fh] BYREF
  unsigned __int8 v74; // [rsp+110h] [rbp+67h]
  unsigned __int8 v75; // [rsp+110h] [rbp+67h]
  unsigned __int8 v76; // [rsp+110h] [rbp+67h]
  unsigned int v78; // [rsp+128h] [rbp+7Fh] BYREF

  v70 = 0LL;
  v68 = 0LL;
  v73[0] = 0LL;
  v62 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v63, 0, sizeof(v63));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 || (v6 = (_DWORD *)(v5 + 152), (*(_DWORD *)(v5 + 152) & 0x100) != 0) )
  {
    v14 = 1;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v48 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v48;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v6 = (_DWORD *)(v5 + 152);
    v12 = (_DWORD *)(v5 + 544);
    goto LABEL_16;
  }
  v7 = 0LL;
  v62 = *(_QWORD *)(v5 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v7 = *(_QWORD *)(v5 + 600);
  v65 = v7;
  v66 = CcGetNodeForLazyWrite(v5);
  v10 = (_BYTE *)(v9 + 1172);
  if ( !v11 )
    v10 = (_BYTE *)(v8 + 1292);
  v69 = v10;
  SpinLock = (PKSPIN_LOCK)(v8 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 768), &v63);
  ++*(_DWORD *)(v5 + 4);
  v12 = (_DWORD *)(v5 + 544);
  ++*(_DWORD *)(v5 + 544);
  v64 = (_DWORD *)(v5 + 4);
  KxReleaseQueuedSpinLock(&v63);
  v13 = v63.OldIrql;
  v14 = 2;
  v74 = v63.OldIrql;
  if ( KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v63.OldIrql <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v63.OldIrql + 1));
      v30 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v30 )
      {
        KiRemoveSystemWorkPriorityKick(v34);
        v13 = v74;
      }
    }
  }
  __writecr8(v13);
  KxReleaseQueuedSpinLock(&LockHandle);
  v15 = LockHandle.OldIrql;
  v75 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v30 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v30 )
      {
        KiRemoveSystemWorkPriorityKick(v38);
        v15 = v75;
      }
    }
  }
  __writecr8(v15);
  KeAcquireInStackQueuedSpinLock(SpinLock, &v63);
  CcDecrementOpenCount(v5);
  if ( (*v6 & 0x20) != 0 || *(_DWORD *)(v5 + 524) )
  {
LABEL_30:
    v14 = 0;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v5 + 112) )
  {
    v18 = (_DWORD *)(v5 + 4);
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_DWORD *)(v16 + 0x50) & 0x8000) == 0
    && (unsigned __int8)CcCanIWriteStreamEx(v62, v65, v16, 0x1000000, 0, 8, 0LL) )
  {
    v14 = 0;
    if ( *v69 )
    {
      LOBYTE(v17) = 1;
      CcScheduleLazyWriteScan(v62, v65, v17, 0LL);
    }
    goto LABEL_16;
  }
  v32 = *(_QWORD *)(v5 + 40);
  if ( a2 > v32 && *(_QWORD *)(v5 + 48) > v32 )
  {
    v21 = *(_DWORD *)(v5 + 112);
    *(_DWORD *)(v5 + 200) = v21;
    *(_DWORD *)(v62 + 976) += v21;
    *(_DWORD *)(v62 + 1072) += *(_DWORD *)(v5 + 200);
    *v6 |= 0x20u;
    ++*(_DWORD *)(v5 + 112);
    KxReleaseQueuedSpinLock(&v63);
    v22 = v63.OldIrql;
    v76 = v63.OldIrql;
    if ( KiIrqlFlags )
    {
      v41 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v63.OldIrql <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (v63.OldIrql + 1));
        v30 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v30 )
        {
          KiRemoveSystemWorkPriorityKick(v42);
          v22 = v76;
        }
      }
    }
    __writecr8(v22);
    v23 = CcAllocateWorkQueueEntry(v62, v65, v66, &v70);
    v24 = SpinLock;
    if ( v23 < 0 )
    {
      KeAcquireInStackQueuedSpinLock(SpinLock, &v63);
      *v6 &= ~0x20u;
      --*(_DWORD *)(v5 + 112);
      goto LABEL_16;
    }
    v25 = v70;
    *(_DWORD *)(v70 + 128) = 2;
    *(_QWORD *)(v25 + 16) = v5;
    KeAcquireInStackQueuedSpinLock(v24, &v63);
    --*(_DWORD *)(v5 + 112);
    v26 = v66;
    if ( (*v6 & 0x10000) != 0 )
    {
      *(_QWORD *)(v5 + 504) = v25 | 1;
      v27 = v26 + 72;
    }
    else
    {
      *(_QWORD *)(v5 + 504) = v25;
      v27 = v26 + 104;
    }
    CcPostWorkQueue(v25, v27);
    goto LABEL_30;
  }
LABEL_16:
  v18 = (_DWORD *)(v5 + 4);
  v64 = (_DWORD *)(v5 + 4);
LABEL_17:
  if ( v14 == 2 && !a3 )
  {
    v14 = 1;
  }
  else if ( v14 > 1 )
  {
    *v6 |= 0x400400u;
    ++*v18;
    ++*v12;
    ++*(_DWORD *)(v5 + 524);
    KxReleaseQueuedSpinLock(&v63);
    v28 = v63.OldIrql;
    if ( KiIrqlFlags )
    {
      v49 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && v63.OldIrql <= 0xFu && v49 >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        v52 = ~(unsigned __int16)(-1LL << (v63.OldIrql + 1));
        v30 = (v52 & v51[5]) == 0;
        v51[5] &= v52;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v50);
      }
    }
    __writecr8(v28);
    v29 = a3;
    v30 = a3 == 0;
    for ( i = a2; ; i = v68 )
    {
      v78 = v29;
      if ( v30 || !*(_QWORD *)(v5 + 8) && (*v6 & 4) == 0 )
        break;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v5,
                               (unsigned int)&i,
                               v29,
                               0,
                               (__int64)&v68,
                               (__int64)&v78,
                               (__int64)v73,
                               0,
                               0LL) )
        break;
      v68 += v78;
      v30 = a3 + (_DWORD)a2 - (_DWORD)v68 == 0;
      v29 = a3 + a2 - v68;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v62 + 768), &v63);
    if ( !*v64 )
      KeBugCheckEx(0x34u, 0x146DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *v6 &= ~0x400000u;
    KxReleaseQueuedSpinLock(&v63);
    v19 = v63.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_22;
    v53 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_22;
    if ( v53 > 0xFu )
      goto LABEL_22;
    if ( v63.OldIrql > 0xFu )
      goto LABEL_22;
    if ( v53 < 2u )
      goto LABEL_22;
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    v56 = ~(unsigned __int16)(-1LL << (v63.OldIrql + 1));
    v30 = (v56 & v55[5]) == 0;
    v55[5] &= v56;
    if ( !v30 )
      goto LABEL_22;
    v57 = v54;
    goto LABEL_93;
  }
  if ( v62 )
  {
    KxReleaseQueuedSpinLock(&v63);
    v19 = v63.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_22;
    v58 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_22;
    if ( v58 > 0xFu )
      goto LABEL_22;
    if ( v63.OldIrql > 0xFu )
      goto LABEL_22;
    if ( v58 < 2u )
      goto LABEL_22;
    v59 = KeGetCurrentPrcb();
    v60 = v59->SchedulerAssist;
    v61 = ~(unsigned __int16)(-1LL << (v63.OldIrql + 1));
    v30 = (v61 & v60[5]) == 0;
    v60[5] &= v61;
    if ( !v30 )
      goto LABEL_22;
    v57 = v59;
LABEL_93:
    KiRemoveSystemWorkPriorityKick(v57);
LABEL_22:
    __writecr8(v19);
  }
  return v14;
}
