/*
 * XREFs of CcMapAndCopyInToCache @ 0x1402B2300
 * Callers:
 *     CcCopyWriteEx @ 0x14022B920 (CcCopyWriteEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     PsGetBaseIoPriorityThread @ 0x14022BA70 (PsGetBaseIoPriorityThread.c)
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022CF70 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     CcFreeWorkQueueEntry @ 0x14027733C (CcFreeWorkQueueEntry.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MmGetControlAreaPartition @ 0x1402B31A0 (MmGetControlAreaPartition.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MmUpdateSectionIoAttribution @ 0x1402E00D8 (MmUpdateSectionIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1402E06F4 (IoDiskIoAttributionDereference.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x14031B530 (FsRtlIsNtstatusExpected.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1404E9F14 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA3E8 (CcLockSystemCacheBuffer.c)
 *     RtlWriteNonVolatileMemory @ 0x14058CD90 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemory @ 0x14059451C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594598 (HviCopyMemoryNonTemporal.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  __int64 v9; // r12
  char v10; // r10
  void *v11; // r15
  bool v12; // bl
  unsigned int v13; // r13d
  _SLIST_ENTRY *v14; // rdi
  char v15; // si
  unsigned __int64 *v16; // rbx
  int BaseIoPriorityThread; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rsi
  struct _KTHREAD *v21; // r14
  _QWORD *Object; // rdi
  _KPROCESS *Process; // rbx
  NTSTATUS v24; // ebx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rsi
  int v27; // r14d
  __int64 VirtualAddress; // rax
  unsigned int v29; // esi
  unsigned int v30; // edx
  ULONG_PTR v31; // r10
  unsigned int v32; // esi
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // ecx
  BOOL v36; // edi
  int v37; // eax
  int v38; // r12d
  unsigned int v39; // r12d
  unsigned int v40; // esi
  NTSTATUS v41; // edi
  unsigned int v42; // r14d
  NTSTATUS v43; // eax
  __int64 v44; // rbx
  struct _KEVENT *v45; // rcx
  NTSTATUS v46; // eax
  struct _MDL *v47; // r14
  __int64 v48; // rcx
  bool v49; // r8
  void *v50; // r10
  int v51; // ecx
  unsigned int v52; // ecx
  signed int v53; // esi
  bool v54; // di
  unsigned int v55; // ecx
  struct _KTHREAD *v56; // rdx
  struct _KTHREAD *v57; // rax
  char v58; // al
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v60; // ecx
  __int64 v61; // r8
  NTSTATUS v62; // edi
  BOOLEAN v63; // al
  NTSTATUS v64; // ecx
  unsigned int v65; // ecx
  struct _KTHREAD *v66; // rdx
  unsigned int v68; // r8d
  unsigned __int64 v69; // rbx
  __int64 v70; // r8
  unsigned __int64 v71; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbx
  __int64 v76; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v78; // rax
  struct _KEVENT *v79; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v83; // edx
  bool v84; // zf
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r9
  _DWORD *v99; // r8
  int v100; // eax
  BOOLEAN v101; // al
  NTSTATUS v102; // ecx
  char v103; // [rsp+68h] [rbp-168h]
  bool v104; // [rsp+69h] [rbp-167h]
  char v105; // [rsp+6Ah] [rbp-166h]
  char v106; // [rsp+6Bh] [rbp-165h]
  bool v107; // [rsp+6Ch] [rbp-164h]
  char v108; // [rsp+6Dh] [rbp-163h]
  unsigned int v109; // [rsp+70h] [rbp-160h]
  char v110; // [rsp+74h] [rbp-15Ch] BYREF
  bool v111; // [rsp+75h] [rbp-15Bh]
  char v112; // [rsp+76h] [rbp-15Ah]
  char v113; // [rsp+77h] [rbp-159h]
  char v114; // [rsp+78h] [rbp-158h]
  char v115; // [rsp+79h] [rbp-157h]
  unsigned int v116; // [rsp+7Ch] [rbp-154h]
  unsigned int v117; // [rsp+84h] [rbp-14Ch]
  NTSTATUS Exception; // [rsp+88h] [rbp-148h]
  unsigned int v119; // [rsp+8Ch] [rbp-144h] BYREF
  __int64 v120; // [rsp+90h] [rbp-140h] BYREF
  int v121; // [rsp+9Ch] [rbp-134h]
  ULONG_PTR v122; // [rsp+A0h] [rbp-130h]
  volatile signed __int32 *v123; // [rsp+A8h] [rbp-128h] BYREF
  unsigned int v124; // [rsp+B0h] [rbp-120h]
  int v125; // [rsp+B4h] [rbp-11Ch]
  unsigned int v126; // [rsp+B8h] [rbp-118h]
  int v127; // [rsp+BCh] [rbp-114h]
  NTSTATUS Status; // [rsp+C0h] [rbp-110h] BYREF
  signed int v129; // [rsp+C4h] [rbp-10Ch]
  NTSTATUS v130[4]; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E8h] BYREF
  int v134; // [rsp+100h] [rbp-D0h]
  BOOL v135; // [rsp+104h] [rbp-CCh]
  int v136; // [rsp+108h] [rbp-C8h]
  unsigned int v137; // [rsp+10Ch] [rbp-C4h]
  NTSTATUS v138; // [rsp+110h] [rbp-C0h]
  unsigned int v139; // [rsp+118h] [rbp-B8h]
  int v140; // [rsp+120h] [rbp-B0h]
  struct _MDL *v141; // [rsp+128h] [rbp-A8h] BYREF
  unsigned __int64 v142; // [rsp+130h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v143; // [rsp+138h] [rbp-98h] BYREF
  BOOL v144; // [rsp+150h] [rbp-80h]
  NTSTATUS v145; // [rsp+154h] [rbp-7Ch]
  __int64 v146; // [rsp+158h] [rbp-78h]
  __int64 v147; // [rsp+160h] [rbp-70h]
  __int64 v148; // [rsp+168h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v149; // [rsp+170h] [rbp-60h] BYREF
  unsigned int v153; // [rsp+1F0h] [rbp+20h]

  v153 = a4;
  v126 = a4;
  v9 = a1;
  v10 = a8;
  v11 = 0LL;
  v119 = 0;
  v116 = 0;
  v131 = 0LL;
  *(_OWORD *)v130 = 0LL;
  v12 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v103 = v12;
  v137 = a4;
  v117 = *a3 & 0xFFF;
  v123 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v109 = 0;
  v113 = 0;
  v106 = 0;
  v14 = 0LL;
  v142 = 0LL;
  v110 = 1;
  v105 = 0;
  v108 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v143, 0, sizeof(v143));
  v107 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v120 = *(_QWORD *)a3;
  v125 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v136 = v125;
  v15 = v12;
  v112 = v12;
  v115 = v12;
  if ( !v12 )
  {
    v112 = 0;
    memset(&v149, 0, sizeof(v149));
    v16 = *(unsigned __int64 **)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168)
      && v16 != *(unsigned __int64 **)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                           + 0x28))
                                     + 8) )
    {
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) == 0 || CcCanIWriteStreamEx(v16, a6, v153, 0, 0, 0LL) )
    {
      BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
      if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v18 == KeGetCurrentThread() && *(_DWORD *)(v18 + 1360)
        || BaseIoPriorityThread > 0
        || (*(_DWORD *)(a6 + 80) & 0x8000) != 0 )
      {
        v13 = 0;
LABEL_8:
        v115 = v15;
        v12 = v103;
        v10 = a8;
        goto LABEL_9;
      }
      v13 = 0;
    }
    v15 = 1;
    v112 = 1;
    if ( (*(_DWORD *)(v9 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(v16 + 16, &v149);
      *(_DWORD *)(v9 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v149);
      OldIrql = v149.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v149.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v83 = ~(unsigned __int16)(-1LL << (v149.OldIrql + 1));
            v84 = (v83 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v83;
            if ( v84 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v13 = 0;
          }
        }
      }
      __writecr8(OldIrql);
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( v15 && !v10 )
    return 0;
  v19 = 6;
  if ( v10 )
    v19 = 4;
  v134 = v19;
  v20 = *(_QWORD *)(v9 + 528);
  v147 = v20;
  if ( *(_QWORD *)(v9 + 168)
    && v20 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v148 = v20;
  if ( v12 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 128), &LockHandle);
    if ( (*(_DWORD *)(v9 + 152) & 0x20) != 0 )
    {
      v143.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 192);
      v143.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v143, v20 + 192, v70);
      v14 = *(_SLIST_ENTRY **)(v9 + 496);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v78 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v78 != v14 )
        __fastfail(3u);
      *v78 = Next;
      *((_QWORD *)&Next->Next + 1) = v78;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(v9 + 496) = 0LL;
      *(_DWORD *)(v9 + 152) &= ~0x20u;
      v106 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
    }
    ++*(_DWORD *)(v9 + 516);
    v113 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v71 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v85 = KeGetCurrentIrql();
        if ( v85 <= 0xFu && LockHandle.OldIrql <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v88 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v84 = (v88 & v87[5]) == 0;
          v87[5] &= v88;
          if ( v84 )
            KiRemoveSystemWorkPriorityKick(v86);
          v13 = 0;
        }
      }
    }
    __writecr8(v71);
  }
  if ( v14 )
    CcFreeWorkQueueEntry(v14);
  v21 = a9;
  if ( !a9 )
  {
    v21 = KeGetCurrentThread();
    a9 = v21;
    v13 = 0;
  }
  Object = v21[1].WaitBlock[1].Object;
  v127 = 0;
  if ( !Object )
    goto LABEL_20;
  if ( v21 != KeGetCurrentThread() )
  {
    v75 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v21[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v21[1].WaitBlock[1].Object, 0x746C6644u);
      v127 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v89 = KeGetCurrentIrql();
        if ( v89 <= 0xFu && (unsigned __int8)v75 <= 0xFu && v89 >= 2u )
        {
          v90 = KeGetCurrentPrcb();
          v91 = v90->SchedulerAssist;
          v92 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v75 + 1));
          v84 = (v92 & v91[5]) == 0;
          v91[5] &= v92;
          if ( v84 )
            KiRemoveSystemWorkPriorityKick(v90);
        }
      }
    }
    __writecr8(v75);
  }
  v13 = 0;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_20:
    Process = v21->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    v73 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v74 = Process[2].Affinity.Bitmap[18];
    if ( v74 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v74 + 32)) <= 1 )
        __fastfail(0xEu);
      v142 = v74;
      v13 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v93 = KeGetCurrentIrql();
        if ( v93 <= 0xFu && (unsigned __int8)v73 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->SchedulerAssist;
          v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v73 + 1));
          v84 = (v96 & v95[5]) == 0;
          v95[5] &= v96;
          if ( v84 )
            KiRemoveSystemWorkPriorityKick(v94);
          v13 = 0;
        }
      }
    }
    __writecr8(v73);
    if ( v74 )
      v24 = 0;
    else
      v24 = -1073741275;
  }
  else
  {
    v24 = -1073741275;
  }
  if ( v127 )
    ObDereferenceObjectDeferDelete(Object);
  Exception = v24;
  if ( v24 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v142);
    IoDiskIoAttributionDereference(v142);
  }
  v25 = v123;
  LODWORD(v26) = v116;
  while ( v153 )
  {
    if ( v107 )
    {
      v27 = 0;
      a5 = 0;
    }
    else
    {
      v27 = a5;
    }
    v116 = 0;
    VirtualAddress = CcGetVirtualAddress(v9, v120, &v123, &v119, 0, 0);
    v122 = VirtualAddress;
    v29 = v119;
    if ( v119 > v153 )
    {
      v29 = v153;
      v119 = v153;
    }
    v116 = v29;
    v153 -= v29;
    v30 = v117;
    v31 = VirtualAddress - v117;
    v122 = v31;
    v32 = v117 + v29;
    v124 = v32;
    v119 = v32;
    v33 = 1;
    v121 = 1;
    HIDWORD(v131) = HIDWORD(v120);
    v34 = v120 - v117;
    LODWORD(v131) = v120 - v117;
    v105 = 0;
    v104 = 0;
    v35 = v32;
    while ( 1 )
    {
      v110 = 1;
      v36 = v35 > 0x1000;
      v135 = v36;
      v144 = v36;
      Exception = 0;
      if ( (v33 & v27) != 0 )
      {
        if ( v131 >= *a7 )
        {
          v13 |= 1u;
          v109 = v13;
        }
        v37 = *(_DWORD *)(v9 + 152);
        if ( (v37 & 0x40) != 0 )
        {
          v13 |= 2u;
          v109 = v13;
        }
        if ( (v37 & 0x40000000) != 0 )
        {
          v58 = 0;
          if ( v35 <= 0x1000 )
            v58 = v32;
          if ( (((unsigned __int8)v30 | (unsigned __int8)(v58 - v30)) & 0x3F) != 0 )
          {
            v13 &= 0xFFFFFFF3;
            v109 = v13;
            v104 = 1;
          }
          else
          {
            v13 |= 4u;
            v109 = v13;
            if ( v103 )
            {
              v13 |= 8u;
              v109 = v13;
            }
          }
        }
        v38 = 4096;
        if ( v35 <= 0x1000 )
          v38 = v32;
        v39 = v38 - v30;
        v40 = v13;
        v139 = v13;
        v41 = 0;
        v138 = 0;
        v42 = 1;
        v140 = 1;
        while ( v42 <= 2 )
        {
          v43 = MmCopyToCachedPage(v31, a2, v30, v39, v40);
          v41 = v43;
          v138 = v43;
          if ( (v40 & 8) == 0 || v43 != -1073741670 )
          {
            v30 = v117;
            break;
          }
          v40 &= 0xFFFFFFF3;
          v139 = v40;
          v140 = ++v42;
          v30 = v117;
          v31 = v122;
        }
        v111 = (v40 & 4) == 0;
        Exception = v41;
        if ( v41 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v41);
          v60 = -1073741592;
          if ( IsNtstatusExpected )
            v60 = v41;
          RtlRaiseStatus(v60);
        }
        v105 = 1;
        if ( !v104 )
          v104 = (v40 & 4) == 0;
        v9 = a1;
      }
      else
      {
        if ( v35 > 0x1000 && (v27 & 4) != 0 )
        {
          v57 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v57[1].WaitListEntry.Flink) )
            LODWORD(v57[1].WaitListEntry.Flink) = 1;
        }
        v46 = MmCheckCachedPageStates(v31, 1LL, v134, &v110);
        v145 = v46;
        if ( !v110 && !a8 )
        {
          v114 = 0;
          v25 = v123;
          v21 = a9;
          LODWORD(v26) = v116;
          goto LABEL_122;
        }
        v47 = 0LL;
        v141 = 0LL;
        v48 = 0LL;
        v146 = 0LL;
        Status = 0;
        if ( v46 < 0 )
          RtlRaiseStatus(v46);
        v49 = v107;
        if ( v107 )
        {
          v61 = v32;
          if ( v36 )
            v61 = 4096LL;
          v48 = CcLockSystemCacheBuffer(v122, &v141, v61, 1LL, &Status);
          v146 = v48;
          if ( !v48 )
            RtlRaiseStatus(Status);
          v47 = v141;
          v49 = v107;
        }
        if ( v49 )
          v50 = (void *)(v117 + v48);
        else
          v50 = (void *)(v117 + v122);
        if ( v36 )
          v51 = 4096;
        else
          v51 = v32;
        v52 = v51 - v117;
        v53 = 0;
        v129 = 0;
        v54 = (*(_DWORD *)(v9 + 152) & 0x40000000) != 0;
        if ( v49 )
        {
          if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
          {
            v53 = HviCopyMemoryNonTemporal(v50, a2, v52);
            v129 = v53;
          }
          else
          {
            HviCopyMemory(v50, a2, v52);
          }
        }
        else if ( (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 )
        {
          v53 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v50, a2, v52, 2u);
          v129 = v53;
        }
        else
        {
          memmove(v50, a2, v52);
        }
        if ( v53 < 0 )
          RtlRaiseStatus(v53);
        v111 = !v54;
        v105 = 1;
        if ( !v104 )
          v104 = !v54;
        if ( v47 )
        {
          MmUnlockPages(v47);
          IoFreeMdl(v47);
          v141 = 0LL;
        }
        v55 = v125;
        v56 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v125 & 3;
        LODWORD(v56[1].WaitListEntry.Flink) = v55 >> 2;
        v30 = v117;
      }
      a2 += 4096 - v30;
      v30 = 0;
      v117 = 0;
      if ( !v135 )
        break;
      v31 = v122 + 4096;
      v122 += 4096LL;
      v32 = v124 - 4096;
      v124 = v32;
      v35 = v32;
      v119 = v32;
      v34 += 4096;
      LODWORD(v131) = v34;
      if ( v153 )
      {
        v33 = 2;
      }
      else if ( v32 <= 0x1000 )
      {
        v33 = 4;
      }
      else
      {
        v33 = 2;
      }
      v121 = v33;
      v27 = a5;
    }
    v105 = 0;
    v44 = *((_QWORD *)v123 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v123 + 4) )
    {
      v45 = *(struct _KEVENT **)(v44 + 184);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v44 + 544));
    }
    v25 = 0LL;
    v123 = 0LL;
    v21 = a9;
    v26 = v116;
    CcSetDirtyInMask(v9, &v120, v116, a9);
    if ( (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 && v126 - v153 > 0x1000000
      || (*(_DWORD *)(v9 + 152) & 0x40000000) != 0 && v104 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v120, v26, 0LL, v103, (__int128 *)v130);
      v62 = v130[0];
      if ( v130[0] < 0 )
      {
        v63 = FsRtlIsNtstatusExpected(v130[0]);
        v64 = -1073741591;
        if ( v63 )
          v64 = v62;
        RtlRaiseStatus(v64);
      }
    }
    if ( v153 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v120 += v26;
    v13 = v109;
  }
  v114 = 1;
LABEL_122:
  v65 = v125;
  v66 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v125 & 3;
  LODWORD(v66[1].WaitListEntry.Flink) = v65 >> 2;
  if ( v25 )
  {
    v76 = *((_QWORD *)v25 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v25 + 4) )
    {
      v79 = *(struct _KEVENT **)(v76 + 184);
      if ( v79 )
        KeSetEvent(v79, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v76 + 544));
    }
    LODWORD(v26) = v116;
  }
  if ( v105 && (_DWORD)v26 )
    CcSetDirtyInMask(v9, &v120, (unsigned int)v26, v21);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v103
    && *(_DWORD *)(v9 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v106 = 1;
    v108 = 1;
  }
  if ( v112 || v108 )
  {
    v130[0] = 0;
    if ( !v103 || (*(_DWORD *)(v9 + 152) & 0x40000000) == 0 )
    {
      v68 = 0;
      if ( !v106 )
      {
        v68 = v126;
        v11 = a3;
      }
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v11, v68, 0LL, v103, (__int128 *)v130);
      LODWORD(v11) = v130[0];
    }
    if ( v113 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v147 + 128), &LockHandle);
      --*(_DWORD *)(v9 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v69 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v97 = KeGetCurrentIrql();
          if ( v97 <= 0xFu && LockHandle.OldIrql <= 0xFu && v97 >= 2u )
          {
            v98 = KeGetCurrentPrcb();
            v99 = v98->SchedulerAssist;
            v100 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v84 = (v100 & v99[5]) == 0;
            v99[5] &= v100;
            if ( v84 )
              KiRemoveSystemWorkPriorityKick(v98);
          }
        }
      }
      __writecr8(v69);
      LODWORD(v11) = v130[0];
    }
    if ( (int)v11 < 0 )
    {
      v101 = FsRtlIsNtstatusExpected((NTSTATUS)v11);
      v102 = -1073741591;
      if ( v101 )
        v102 = (int)v11;
      RtlRaiseStatus(v102);
    }
  }
  return v114;
}
