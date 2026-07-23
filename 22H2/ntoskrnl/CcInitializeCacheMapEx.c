/*
 * XREFs of CcInitializeCacheMapEx @ 0x14022DF30
 * Callers:
 *     CcInitializeCacheMap @ 0x14032B680 (CcInitializeCacheMap.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140272EF8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     CcInitializeVolumeCacheMap @ 0x14030C890 (CcInitializeVolumeCacheMap.c)
 *     CcGetPartitionWithCreate @ 0x140313D10 (CcGetPartitionWithCreate.c)
 *     FsRtlIsNtstatusExpected @ 0x14031B530 (FsRtlIsNtstatusExpected.c)
 *     MmDisableModifiedWriteOfSection @ 0x14033AA50 (MmDisableModifiedWriteOfSection.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     CcCreateVacbArray @ 0x14067F460 (CcCreateVacbArray.c)
 *     MmCreateCacheManagerSection @ 0x1406813E8 (MmCreateCacheManagerSection.c)
 *     ObDeleteCapturedInsertInfo @ 0x1406EAD40 (ObDeleteCapturedInsertInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  PVOID v8; // r14
  __int64 Partition; // r13
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // rbx
  __int64 v16; // r9
  _QWORD *FileObjectExtension; // rdx
  _KSPIN_LOCK_QUEUE *v18; // r8
  int v19; // eax
  int v20; // eax
  KSPIN_LOCK *v21; // r15
  unsigned int v22; // eax
  __int16 v23; // cx
  int v24; // ecx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  _WORD *v27; // rdi
  int v28; // r14d
  PVOID v29; // r15
  int PagePriorityThread; // ecx
  _QWORD *v31; // rax
  int v32; // ecx
  _QWORD *v33; // rdx
  int v34; // edi
  int v35; // esi
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  NTSTATUS v39; // edi
  _DWORD *v40; // rax
  unsigned int v41; // eax
  NTSTATUS v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdi
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // r8
  struct _KEVENT *v57; // rcx
  __int64 v58; // r8
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rbx
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  __int64 v66; // rdx
  int v67; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v72; // eax
  _QWORD *v73; // rax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r10
  _DWORD *v84; // r9
  int v85; // eax
  __int64 v86; // r8
  unsigned __int64 v87; // rdi
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  int v96; // esi
  char *PoolWithTag; // rax
  unsigned __int64 v98; // rdi
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  unsigned __int64 v103; // rdi
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  _QWORD *v108; // rax
  unsigned __int64 v109; // rdi
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // eax
  unsigned __int64 v114; // rdi
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r10
  _DWORD *v117; // r9
  int v118; // eax
  NTSTATUS v119; // edi
  BOOLEAN IsNtstatusExpected; // al
  int v121; // ecx
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  _DWORD *v124; // r9
  int v125; // eax
  unsigned __int8 v126; // al
  _DWORD *v127; // r9
  int v128; // eax
  unsigned __int64 v129; // r14
  unsigned __int8 v130; // al
  struct _KPRCB *v131; // r10
  _DWORD *v132; // r9
  int v133; // eax
  unsigned __int64 v134; // r14
  unsigned __int8 v135; // al
  struct _KPRCB *v136; // r10
  _DWORD *v137; // r9
  int v138; // eax
  unsigned int v139; // eax
  int v140; // eax
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r10
  _DWORD *v143; // r9
  int v144; // eax
  int v145; // ecx
  unsigned __int8 v146; // al
  _DWORD *v147; // r9
  int v148; // eax
  struct _KEVENT *v149; // rcx
  unsigned __int64 v150; // rbx
  unsigned __int8 v151; // al
  struct _KPRCB *v152; // r10
  _DWORD *v153; // r9
  int v154; // eax
  unsigned __int64 v155; // rbx
  unsigned __int8 v156; // al
  struct _KPRCB *v157; // r9
  _DWORD *v158; // r8
  int v159; // eax
  unsigned __int64 v160; // rcx
  __int64 v161; // rdi
  unsigned __int8 v162; // al
  struct _KPRCB *v163; // r10
  _DWORD *v164; // r9
  int v165; // eax
  unsigned __int8 v166; // al
  struct _KPRCB *v167; // r9
  _DWORD *v168; // r8
  int v169; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE v171; // [rsp+48h] [rbp-61h] BYREF
  int v172; // [rsp+60h] [rbp-49h]
  int v173; // [rsp+64h] [rbp-45h]
  unsigned int v174; // [rsp+68h] [rbp-41h]
  unsigned int v175; // [rsp+6Ch] [rbp-3Dh]
  PVOID v176; // [rsp+70h] [rbp-39h]
  PVOID P; // [rsp+78h] [rbp-31h]
  int v178; // [rsp+80h] [rbp-29h]
  PVOID Objecta; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int128 v180; // [rsp+90h] [rbp-19h]
  __int64 v181; // [rsp+A0h] [rbp-9h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-1h]
  char v183; // [rsp+100h] [rbp+57h]
  NTSTATUS Status; // [rsp+108h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v174 = 0;
  v8 = 0LL;
  P = 0LL;
  Partition = 0LL;
  Process = CurrentThread->ApcState.Process;
  v183 = 0;
  v173 = 0;
  v172 = 0;
  v178 = 0;
  v176 = 0LL;
  Status = 0;
  Objecta = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v171, 0, sizeof(v171));
  if ( CcDbgDisableDAX )
    v175 = a6 & 0xFFFFFFFE;
  else
    v175 = a6;
  v10 = *a2;
  v11 = *(_QWORD *)a2;
  v181 = *((_QWORD *)a2 + 2);
  v180 = __PAIR128__(*((unsigned __int64 *)&v10 + 1), v11);
  if ( !v11 )
  {
    LODWORD(v180) = 1;
    v11 = v180;
  }
  v12 = CurrentThread->MiscFlags & 0x400;
  if ( Object[75] )
  {
    *(_QWORD *)&v180 = v11 + 0xFFFFF;
    v13 = (v11 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v180 = v11 + 0x3FFFF;
    v13 = (v11 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v180) = v13;
  if ( !*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_59;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *((_QWORD *)Object + 6) )
      break;
    v15 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v15 )
    {
      Partition = CcGetPartition(*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(Object, 8LL, 0LL, v16);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(Partition + 8) )
      {
        v171.LockQueue.Next = v18;
        v171.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock(&v171, Partition + 128, v18);
        v67 = v15[1];
        if ( !v67 || v67 == v15[134] )
        {
          Status = -1073741608;
          LOBYTE(v66) = 1;
          CcScheduleLazyWriteScan(Partition, v66, 0LL);
          v183 = 1;
        }
        else
        {
          Status = -1073740277;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_244;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_244;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 0xFu )
          goto LABEL_244;
        if ( LockHandle.OldIrql > 0xFu )
          goto LABEL_244;
        if ( CurrentIrql < 2u )
          goto LABEL_244;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v54 = (v72 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v72;
        if ( !v54 )
          goto LABEL_244;
        goto LABEL_121;
      }
      v171.LockQueue.Next = v18;
      v171.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      KxAcquireQueuedSpinLock(&v171, Partition + 128, v18);
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        v15[38] &= ~0x40u;
      v19 = v15[38];
      if ( (v19 & 0x200000) != 0 && v12 )
        v15[38] = v19 & 0xFFDFFFFF;
      v20 = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
      if ( v20 )
        v15[128] = v20;
LABEL_18:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
      Partition = CcGetPartition(v15);
      v21 = (KSPIN_LOCK *)(Partition + 128);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v171);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v15[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v22 = v15[38] & 0xFFFFFFEF;
      v23 = v15[38] & 0xFFEF;
      v15[38] = v22;
      v24 = v23 & 0x100;
      if ( *((_QWORD *)v15 + 11) )
      {
        if ( !v24 )
        {
          ++v15[1];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
          v25 = v171.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v122 = KeGetCurrentIrql();
              if ( v122 <= 0xFu && v171.OldIrql <= 0xFu && v122 >= 2u )
              {
                v123 = KeGetCurrentPrcb();
                v124 = v123->SchedulerAssist;
                v125 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
                v54 = (v125 & v124[5]) == 0;
                v124[5] &= v125;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v123);
              }
            }
          }
          __writecr8(v25);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v26 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v126 = KeGetCurrentIrql();
              if ( v126 <= 0xFu && LockHandle.OldIrql <= 0xFu && v126 >= 2u )
              {
                v93 = KeGetCurrentPrcb();
                v127 = v93->SchedulerAssist;
                v128 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v54 = (v128 & v127[5]) == 0;
                v127[5] &= v128;
                if ( v54 )
                  goto LABEL_207;
              }
            }
          }
          goto LABEL_23;
        }
LABEL_160:
        if ( !*((_QWORD *)v15 + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)v15 + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
            v98 = v171.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v99 = KeGetCurrentIrql();
                if ( v99 <= 0xFu && v171.OldIrql <= 0xFu && v99 >= 2u )
                {
                  v100 = KeGetCurrentPrcb();
                  v101 = v100->SchedulerAssist;
                  v102 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
                  v54 = (v102 & v101[5]) == 0;
                  v101[5] &= v102;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick(v100);
                }
              }
            }
            __writecr8(v98);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v103 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v104 = KeGetCurrentIrql();
                if ( v104 <= 0xFu && LockHandle.OldIrql <= 0xFu && v104 >= 2u )
                {
                  v105 = KeGetCurrentPrcb();
                  v106 = v105->SchedulerAssist;
                  v107 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v54 = (v107 & v106[5]) == 0;
                  v106[5] &= v107;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick(v105);
                }
              }
            }
            __writecr8(v103);
            v39 = -1073741670;
            Status = -1073741670;
LABEL_245:
            v140 = v172;
LABEL_246:
            v96 = 0;
            v28 = 0;
            if ( v140 )
            {
              v8 = P;
              goto LABEL_248;
            }
            v29 = v176;
LABEL_32:
            v34 = v28;
            v35 = v28;
            if ( v15 )
            {
              if ( !v28 )
              {
                KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
                v28 = 1;
              }
              if ( Partition && !v34 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v171);
                v35 = 1;
              }
              if ( !v178 && !v15[28] && v15[1] )
                CcInsertIntoCleanSharedCacheMapList(v15);
              v36 = *((_QWORD *)v15 + 34);
              if ( v36 )
              {
                do
                {
                  v160 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
                  v161 = *(_QWORD *)v160;
                  KeSetEvent((PRKEVENT)(v160 + 8), 0, 0);
                  v36 = v161;
                }
                while ( v161 );
              }
              v15[38] &= ~0x10000u;
              *((_QWORD *)v15 + 34) = 0LL;
            }
            if ( v35 )
            {
LABEL_45:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
              v37 = v171.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v162 = KeGetCurrentIrql();
                  if ( v162 <= 0xFu && v171.OldIrql <= 0xFu && v162 >= 2u )
                  {
                    v163 = KeGetCurrentPrcb();
                    v164 = v163->SchedulerAssist;
                    v165 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
                    v54 = (v165 & v164[5]) == 0;
                    v164[5] &= v165;
                    if ( v54 )
                      KiRemoveSystemWorkPriorityKick(v163);
                  }
                }
              }
              __writecr8(v37);
            }
            if ( v28 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v38 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v166 = KeGetCurrentIrql();
                  if ( v166 <= 0xFu && LockHandle.OldIrql <= 0xFu && v166 >= 2u )
                  {
                    v167 = KeGetCurrentPrcb();
                    v168 = v167->SchedulerAssist;
                    v169 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v54 = (v169 & v168[5]) == 0;
                    v168[5] &= v169;
                    if ( v54 )
                      KiRemoveSystemWorkPriorityKick(v167);
                  }
                }
              }
              __writecr8(v38);
            }
            v39 = Status;
            v8 = P;
LABEL_51:
            if ( v8 )
              ExFreePoolWithTag(v8, 0x63536343u);
            if ( v29 )
              ExFreePoolWithTag(v29, 0x63506343u);
            if ( Objecta )
              ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
            if ( v39 < 0 )
            {
              if ( v183 )
                KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
              RtlRaiseStatus(v39);
            }
            return;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v108 = PoolWithTag + 8;
          v108[1] = v108;
          *v108 = v108;
        }
        ++v15[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
        v109 = v171.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v110 = KeGetCurrentIrql();
            if ( v110 <= 0xFu && v171.OldIrql <= 0xFu && v110 >= 2u )
            {
              v111 = KeGetCurrentPrcb();
              v112 = v111->SchedulerAssist;
              v113 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
              v54 = (v113 & v112[5]) == 0;
              v112[5] &= v113;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v111);
            }
          }
        }
        __writecr8(v109);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v114 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v115 = KeGetCurrentIrql();
            if ( v115 <= 0xFu && LockHandle.OldIrql <= 0xFu && v115 >= 2u )
            {
              v116 = KeGetCurrentPrcb();
              v117 = v116->SchedulerAssist;
              v118 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v54 = (v118 & v117[5]) == 0;
              v117[5] &= v118;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v116);
            }
          }
        }
        __writecr8(v114);
        KeWaitForSingleObject(*((PVOID *)v15 + 22), Executive, 0, 0, 0LL);
        v119 = v15[39];
        if ( v119 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v119);
          v96 = v173;
          v121 = -1073741590;
          if ( IsNtstatusExpected )
            v121 = v119;
          v39 = v121;
LABEL_248:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v171);
          if ( v96 )
          {
            v149 = (struct _KEVENT *)*((_QWORD *)v15 + 22);
            if ( v149 )
              KeSetEvent(v149, 0, 0);
            v15[38] &= ~0x100u;
          }
          v54 = v15[1]-- == 1;
          if ( !v54 || (v15[38] & 0x20) != 0 || v15[28] )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
            v150 = v171.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v151 = KeGetCurrentIrql();
                if ( v151 <= 0xFu && v171.OldIrql <= 0xFu && v151 >= 2u )
                {
                  v152 = KeGetCurrentPrcb();
                  v153 = v152->SchedulerAssist;
                  v154 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
                  v54 = (v154 & v153[5]) == 0;
                  v153[5] &= v154;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick(v152);
                }
              }
            }
            __writecr8(v150);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v155 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v156 = KeGetCurrentIrql();
                if ( v156 <= 0xFu && LockHandle.OldIrql <= 0xFu && v156 >= 2u )
                {
                  v157 = KeGetCurrentPrcb();
                  v158 = v157->SchedulerAssist;
                  v159 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v54 = (v159 & v158[5]) == 0;
                  v158[5] &= v159;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick(v157);
                }
              }
            }
            __writecr8(v155);
            v29 = v176;
          }
          else
          {
            CcDeleteSharedCacheMap(v15, &LockHandle, &v171, 0LL);
            v29 = v176;
          }
          goto LABEL_51;
        }
LABEL_24:
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x63536343u);
          P = 0LL;
        }
        v27 = v15 + 94;
        if ( *((_WORD *)v15 + 188) )
          goto LABEL_94;
        while ( 1 )
        {
          v28 = 1;
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock(v21, &v171);
          if ( *((_QWORD *)Object + 6) )
            break;
          if ( !*v27 )
          {
            v29 = v176;
            goto LABEL_30;
          }
          if ( v176 )
          {
            v27 = v176;
            v29 = 0LL;
LABEL_30:
            memset(v27, 0, 0x78uLL);
            *((_QWORD *)v27 + 1) = Object;
            *v27 = 766;
            *((_DWORD *)v27 + 1) = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(CurrentThread);
            v31 = v27 + 48;
            v32 = (*(_DWORD *)v27 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v27 + 10) = 0LL;
            *(_DWORD *)v27 ^= v32;
            v33 = (_QWORD *)*((_QWORD *)v15 + 29);
            if ( (_DWORD *)*v33 == v15 + 56 )
            {
              *v31 = v15 + 56;
              *((_QWORD *)v27 + 13) = v33;
              *v33 = v31;
              *((_QWORD *)v15 + 29) = v31;
              *((_QWORD *)Object + 6) = v27;
              goto LABEL_32;
            }
LABEL_223:
            __fastfail(3u);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
          v129 = v171.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v130 = KeGetCurrentIrql();
              if ( v130 <= 0xFu && v171.OldIrql <= 0xFu && v130 >= 2u )
              {
                v131 = KeGetCurrentPrcb();
                v132 = v131->SchedulerAssist;
                v133 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
                v54 = (v133 & v132[5]) == 0;
                v132[5] &= v133;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v131);
              }
            }
          }
          __writecr8(v129);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v134 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v135 = KeGetCurrentIrql();
              if ( v135 <= 0xFu && LockHandle.OldIrql <= 0xFu && v135 >= 2u )
              {
                v136 = KeGetCurrentPrcb();
                v137 = v136->SchedulerAssist;
                v138 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v54 = (v138 & v137[5]) == 0;
                v137[5] &= v138;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v136);
              }
            }
          }
          __writecr8(v134);
LABEL_94:
          v176 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !v176 )
          {
            v39 = -1073741670;
            v140 = 1;
            Status = -1073741670;
            goto LABEL_246;
          }
        }
        v139 = v15[1];
        if ( v139 <= 1 )
          KeBugCheckEx(0x34u, 0x7DCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v29 = v176;
        v15[1] = v139 - 1;
        goto LABEL_45;
      }
      if ( v24 )
        goto LABEL_160;
      ++v15[1];
      v15[38] = v22 | 0x100;
      v51 = *((_QWORD *)v15 + 22);
      if ( v51 )
      {
        *(_WORD *)v51 = 0;
        *(_BYTE *)(v51 + 2) = 6;
        *(_DWORD *)(v51 + 4) = 0;
        v73 = (_QWORD *)(v51 + 8);
        v73[1] = v73;
        *v73 = v73;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
      v52 = v171.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && v171.OldIrql <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << (v171.OldIrql + 1));
            v54 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
      }
      __writecr8(v52);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v53 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && LockHandle.OldIrql <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = v79->SchedulerAssist;
            v81 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v54 = (v81 & v80[5]) == 0;
            v80[5] &= v81;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v79);
          }
        }
      }
      __writecr8(v53);
      v54 = *((_QWORD *)v15 + 21) == 0LL;
      v173 = 1;
      if ( v54 )
      {
        if ( !Objecta )
          KeBugCheckEx(0x34u, 0x68CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *((_QWORD *)v15 + 21) = Objecta;
        v55 = *((_QWORD *)Object + 3);
        Objecta = 0LL;
        if ( (*(_BYTE *)(v55 + 6) & 1) == 0 && !*((_QWORD *)Object + 4) )
        {
          MmDisableModifiedWriteOfSection(*((_QWORD *)Object + 5));
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v171.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v171.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock(&v171, v21, v58);
          v15[38] |= 0x200u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v59 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v82 = KeGetCurrentIrql();
              if ( v82 <= 0xFu && LockHandle.OldIrql <= 0xFu && v82 >= 2u )
              {
                v83 = KeGetCurrentPrcb();
                v84 = v83->SchedulerAssist;
                v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v54 = (v85 & v84[5]) == 0;
                v84[5] &= v85;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v83);
              }
            }
          }
          __writecr8(v59);
        }
        Status = CcCreateVacbArray(v15, v180);
        v39 = Status;
        if ( Status >= 0 )
        {
          if ( (v175 & 1) != 0 )
          {
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            v171.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
            v171.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v171, v21, v86);
            v15[38] |= 0x40000000u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v87 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v88 = KeGetCurrentIrql();
                if ( v88 <= 0xFu && LockHandle.OldIrql <= 0xFu && v88 >= 2u )
                {
                  v89 = KeGetCurrentPrcb();
                  v90 = v89->SchedulerAssist;
                  v91 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v54 = (v91 & v90[5]) == 0;
                  v90[5] &= v91;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick(v89);
                }
              }
            }
            __writecr8(v87);
          }
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v171.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v171.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock(&v171, v21, v56);
          v57 = (struct _KEVENT *)*((_QWORD *)v15 + 22);
          v15[38] &= ~0x100u;
          if ( v57 )
            KeSetEvent(v57, 0, 0);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v171);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v26 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v92 = KeGetCurrentIrql();
              if ( v92 <= 0xFu && LockHandle.OldIrql <= 0xFu && v92 >= 2u )
              {
                v93 = KeGetCurrentPrcb();
                v94 = v93->SchedulerAssist;
                v95 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v54 = (v95 & v94[5]) == 0;
                v94[5] &= v95;
                if ( v54 )
LABEL_207:
                  KiRemoveSystemWorkPriorityKick(v93);
              }
            }
          }
LABEL_23:
          __writecr8(v26);
          goto LABEL_24;
        }
      }
      else
      {
        v39 = -1073741811;
      }
      v96 = v173;
      goto LABEL_248;
    }
    if ( v8 )
    {
      v15 = v8;
      v8 = 0LL;
      P = 0LL;
      v46 = *((_QWORD *)v15 + 66);
      v171.LockQueue.Next = 0LL;
      v171.LockQueue.Lock = (unsigned __int64 *volatile)(v46 + 128);
      KxAcquireQueuedSpinLock(&v171, v46 + 128, v14);
      v47 = *(_QWORD **)(v46 + 24);
      v48 = v15 + 34;
      v49 = v46 + 16;
      if ( *v47 != v49 )
        goto LABEL_223;
      *((_QWORD *)v15 + 18) = v47;
      *v48 = v49;
      *v47 = v48;
      *(_QWORD *)(v49 + 8) = v48;
      v50 = *((_QWORD *)Object + 5);
      v178 = 1;
      *(_QWORD *)(v50 + 8) = v15;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      goto LABEL_18;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v61 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v54 = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v63);
        }
      }
    }
    __writecr8(v61);
LABEL_59:
    v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x228uLL, 0x63536343u);
    v15 = v40;
    if ( !v40 )
LABEL_289:
      RtlRaiseStatus(-1073741670);
    memset(v40, 0, 0x228uLL);
    v8 = v15;
    v41 = v174;
    P = v15;
    if ( (v175 & 1) != 0 )
    {
      v41 = v174 | 1;
      v174 |= 1u;
    }
    v42 = MmCreateCacheManagerSection(&Objecta, v180, v41, Object);
    Status = v42;
    if ( v42 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v145 = -1073740277;
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        v145 = -1073700856;
      Status = v145;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (v146 = KeGetCurrentIrql(), v146 > 0xFu)
        || LockHandle.OldIrql > 0xFu
        || v146 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v147 = CurrentPrcb->SchedulerAssist,
            v148 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)),
            v54 = (v148 & v147[5]) == 0,
            v147[5] &= v148,
            !v54) )
      {
LABEL_244:
        __writecr8(OldIrql);
        v39 = Status;
        goto LABEL_245;
      }
LABEL_121:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_244;
    }
    if ( v42 < 0 )
    {
      v39 = v42;
      v54 = FsRtlIsNtstatusExpected(v42) == 0;
      v140 = v172;
      if ( v54 )
      {
        v39 = -1073741590;
        Status = -1073741590;
      }
      goto LABEL_246;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    Partition = CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(qword_140C4E648
                                                               + 8LL
                                                               * (*(_WORD *)(**((_QWORD **)Object + 5) + 60LL) & 0x3FF))
                                                   + 176LL));
    if ( !Partition )
    {
      v39 = -1073741670;
      Status = -1073741670;
      goto LABEL_245;
    }
    v43 = *((_QWORD *)&v180 + 1);
    *v15 = 36176639;
    *((_QWORD *)v15 + 12) = Object;
    *((_QWORD *)v15 + 1) = v43;
    v44 = v181;
    *((_QWORD *)v15 + 5) = v181;
    *((_QWORD *)v15 + 6) = v44;
    v15[128] = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
    *((_QWORD *)v15 + 66) = Partition;
    Status = CcInitializeVolumeCacheMap(Object, v15 + 126);
    if ( Status < 0 )
      goto LABEL_289;
    v15[70] = 1;
    *((_QWORD *)v15 + 36) = 0LL;
    v15[74] = 0;
    *((_WORD *)v15 + 152) = 1;
    *((_BYTE *)v15 + 306) = 6;
    v15[77] = 0;
    *((_QWORD *)v15 + 40) = v15 + 78;
    *((_QWORD *)v15 + 39) = v15 + 78;
    *((_QWORD *)v15 + 13) = 0LL;
    if ( a3 )
      v15[38] |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      v15[38] |= 0x40u;
    if ( !v12 )
      v15[38] |= 0x200000u;
    *((_QWORD *)v15 + 27) = a5;
    *((_QWORD *)v15 + 3) = v15 + 4;
    *((_QWORD *)v15 + 2) = v15 + 4;
    *((_QWORD *)v15 + 26) = a4;
    v45 = v15 + 56;
    v45[1] = v45;
    *v45 = v45;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v60 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v141 = KeGetCurrentIrql();
      if ( v141 <= 0xFu && LockHandle.OldIrql <= 0xFu && v141 >= 2u )
      {
        v142 = KeGetCurrentPrcb();
        v143 = v142->SchedulerAssist;
        v144 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v54 = (v144 & v143[5]) == 0;
        v143[5] &= v144;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v142);
      }
    }
  }
  __writecr8(v60);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
