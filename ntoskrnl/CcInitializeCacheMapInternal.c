void __fastcall CcInitializeCacheMapInternal(
        __int64 a1,
        __m128i *a2,
        char a3,
        _WORD *a4,
        _WORD *a5,
        __int64 a6,
        int a7)
{
  _WORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v11; // esi
  _DWORD *PoolWithTag; // rdi
  _DWORD *v13; // r13
  int PrivateVolumeCacheMap; // r14d
  __int64 v15; // xmm0_8
  int MiscFlags; // r12d
  __int64 v17; // rcx
  int v18; // r12d
  __int32 v19; // eax
  NTSTATUS v20; // eax
  KSPIN_LOCK *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  _WORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rbx
  PVOID v34; // rsi
  __int64 v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 **v40; // rdx
  _QWORD *v41; // r15
  KSPIN_LOCK *v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r9
  _QWORD *FileObjectExtension; // rcx
  __int64 v47; // r8
  int v48; // eax
  char v49; // r12
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  int v55; // ebx
  int v56; // eax
  int v57; // eax
  KSPIN_LOCK *v58; // r12
  unsigned int v59; // ecx
  __int16 v60; // ax
  int v61; // eax
  __int64 v62; // rax
  _QWORD *v63; // rax
  unsigned __int64 v64; // rbx
  unsigned __int8 v65; // cl
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  unsigned __int64 v69; // rbx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  unsigned __int64 v80; // rbx
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  struct _KEVENT *v85; // rcx
  char *v86; // rax
  unsigned __int64 v87; // rbx
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  _QWORD *v97; // rax
  unsigned __int64 v98; // rbx
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  unsigned __int64 v103; // rbx
  unsigned __int8 v104; // al
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  NTSTATUS v108; // eax
  _DWORD *v109; // rbx
  unsigned __int64 v110; // rbx
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  unsigned __int64 v115; // rbx
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r10
  _DWORD *v118; // r9
  int v119; // eax
  _DWORD *v120; // r15
  int v121; // esi
  unsigned __int64 v122; // rbx
  unsigned __int8 v123; // cl
  struct _KPRCB *v124; // r10
  _DWORD *v125; // r9
  int v126; // eax
  unsigned __int64 v127; // rbx
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r10
  _DWORD *v130; // r9
  int v131; // eax
  _DWORD *PrivateCacheMap; // rax
  struct _KEVENT *v133; // rcx
  _DWORD *v134; // rbx
  unsigned __int64 v135; // rbx
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r10
  _DWORD *v138; // r9
  int v139; // eax
  unsigned __int64 v140; // rbx
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r9
  _DWORD *v143; // r8
  int v144; // eax
  __int64 v145; // rcx
  int PagePriorityThread; // ecx
  __int64 v147; // r8
  _QWORD *v148; // rax
  int v149; // ecx
  _QWORD *v150; // rdx
  unsigned int v151; // eax
  unsigned __int64 v152; // rbx
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r9
  _DWORD *v155; // r8
  int v156; // eax
  BOOLEAN IsNtstatusExpected; // al
  int v158; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v162; // eax
  int v163; // r15d
  __int64 v164; // rcx
  unsigned __int64 v165; // rcx
  __int64 v166; // rbx
  unsigned __int64 v167; // rbx
  unsigned __int8 v168; // al
  struct _KPRCB *v169; // r10
  _DWORD *v170; // r9
  int v171; // eax
  unsigned __int64 v172; // rbx
  unsigned __int8 v173; // al
  struct _KPRCB *v174; // r9
  _DWORD *v175; // r8
  int v176; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-71h] BYREF
  KSPIN_LOCK *v178; // [rsp+48h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v179; // [rsp+50h] [rbp-51h] BYREF
  PVOID Entry; // [rsp+68h] [rbp-39h]
  int v181; // [rsp+70h] [rbp-31h]
  int v182; // [rsp+74h] [rbp-2Dh]
  int v183; // [rsp+78h] [rbp-29h]
  PVOID v184; // [rsp+80h] [rbp-21h] BYREF
  __m128i v185; // [rsp+88h] [rbp-19h]
  __int64 v186; // [rsp+98h] [rbp-9h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-1h]
  struct _KTHREAD *v188; // [rsp+A8h] [rbp+7h]

  v7 = a4;
  Entry = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  PoolWithTag = 0LL;
  v181 = 0;
  v182 = 0;
  v13 = 0LL;
  PrivateVolumeCacheMap = 0;
  Process = CurrentThread->ApcState.Process;
  v178 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_QWORD *)&v179.OldIrql = 0LL;
  v184 = 0LL;
  v188 = CurrentThread;
  if ( CcDbgDisableDAX )
    a7 = -2;
  v183 = a7;
  LockHandle.LockQueue = 0LL;
  v179.LockQueue = 0LL;
  if ( v7 )
  {
    if ( !a5 )
      goto LABEL_5;
LABEL_307:
    RtlRaiseStatus(-1073741811);
  }
  if ( a5 && (*a5 != 1 || a5[1] != 40) )
    goto LABEL_307;
LABEL_5:
  v15 = a2[1].m128i_i64[0];
  MiscFlags = CurrentThread->MiscFlags;
  v17 = (unsigned int)_mm_cvtsi128_si32(*a2);
  v185 = *a2;
  if ( !v185.m128i_i64[0] )
    v17 = 1LL;
  v186 = v15;
  v18 = MiscFlags & 0x400;
  v185.m128i_i32[0] = v17;
  if ( *(_BYTE *)(a1 + 75) )
  {
    v185.m128i_i64[0] += 0xFFFFFLL;
    v19 = (v17 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    v185.m128i_i64[0] += 0x3FFFFLL;
    v19 = (v17 + 0x3FFFF) & 0xFFFC0000;
  }
  v185.m128i_i32[0] = v19;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
    goto LABEL_37;
  while ( 1 )
  {
    if ( EnableFeatureServicing_45016043 )
    {
      PoolWithTag = (_DWORD *)CcAllocateAndZeroSharedCacheMapRaiseOnError(v17, 608LL);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x260uLL, 0x63536343u);
      if ( !PoolWithTag )
        goto LABEL_308;
    }
    Entry = PoolWithTag;
    if ( (v183 & 1) != 0 )
      v11 |= 1u;
    v20 = MmCreateCacheManagerSection(&v184, v185.m128i_i64[0], v11, a1);
    PrivateVolumeCacheMap = v20;
    if ( v20 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        PrivateVolumeCacheMap = -1073700856;
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v162 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v162 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v162;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      goto LABEL_260;
    }
    if ( v20 < 0 )
    {
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v20);
      v158 = PrivateVolumeCacheMap;
      if ( !IsNtstatusExpected )
        v158 = -1073741590;
      PrivateVolumeCacheMap = v158;
      goto LABEL_261;
    }
    ObDeleteCapturedInsertInfo(v184);
    v178 = (KSPIN_LOCK *)CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(qword_140C67048
                                                                        + 8LL
                                                                        * (*(_WORD *)(**(_QWORD **)(a1 + 40) + 60LL) & 0x3FF))
                                                            + 200LL));
    v21 = v178;
    if ( !v178 )
    {
      v121 = 0;
      PrivateVolumeCacheMap = -1073741670;
      goto LABEL_263;
    }
    v22 = v185.m128i_i64[1];
    *PoolWithTag = 39846655;
    *(_QWORD *)(PoolWithTag + 139) = -1LL;
    *((_QWORD *)PoolWithTag + 12) = a1;
    *((_QWORD *)PoolWithTag + 1) = v22;
    v23 = v186;
    *((_QWORD *)PoolWithTag + 5) = v186;
    *((_QWORD *)PoolWithTag + 6) = v23;
    LODWORD(v23) = HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]);
    *((_QWORD *)PoolWithTag + 67) = v21;
    PoolWithTag[130] = v23;
    PrivateVolumeCacheMap = CcInitializeVolumeCacheMap((PVOID)a1);
    if ( PrivateVolumeCacheMap < 0
      || CcEnablePerVolumeLazyWriter
      && (PrivateVolumeCacheMap = CcCreatePrivateVolumeCacheMap(
                                    (__int64)v178,
                                    (__int64)PoolWithTag,
                                    (_QWORD *)PoolWithTag + 75),
          PrivateVolumeCacheMap < 0) )
    {
LABEL_308:
      RtlRaiseStatus(-1073741670);
    }
    PoolWithTag[72] = 1;
    *((_QWORD *)PoolWithTag + 37) = 0LL;
    PoolWithTag[76] = 0;
    *((_WORD *)PoolWithTag + 156) = 1;
    *((_BYTE *)PoolWithTag + 314) = 6;
    PoolWithTag[79] = 0;
    *((_QWORD *)PoolWithTag + 41) = PoolWithTag + 80;
    *((_QWORD *)PoolWithTag + 40) = PoolWithTag + 80;
    *((_QWORD *)PoolWithTag + 13) = 0LL;
    if ( a3 )
      PoolWithTag[38] |= 4u;
    if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
      PoolWithTag[38] |= 0x40u;
    if ( !v18 )
      PoolWithTag[38] |= 0x200000u;
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 4;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 4;
    *((_QWORD *)PoolWithTag + 28) = a6;
    v24 = PoolWithTag[39];
    if ( v7 )
    {
      v25 = v7;
      v26 = v24 & 0xFFFFFFFE;
    }
    else
    {
      v25 = a5;
      v26 = v24 | 1;
    }
    PoolWithTag[39] = v26;
    *((_QWORD *)PoolWithTag + 27) = v25;
    *((_QWORD *)PoolWithTag + 30) = PoolWithTag + 58;
    *((_QWORD *)PoolWithTag + 29) = PoolWithTag + 58;
LABEL_37:
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(a1 + 48) )
      break;
    v27 = *(_QWORD *)(a1 + 40);
    PoolWithTag = *(_DWORD **)(v27 + 8);
    if ( PoolWithTag )
    {
      v42 = (KSPIN_LOCK *)*((_QWORD *)PoolWithTag + 67);
      v43 = *(_QWORD *)(v27 + 8);
      v178 = v42;
      v44 = CcGetPrivateVolumeCacheMap(v43);
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(v45, 8, 0LL);
      if ( FileObjectExtension && *FileObjectExtension != v42[1] )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v42 + 96, &v179);
        v48 = PoolWithTag[1];
        if ( !v48 || v48 == PoolWithTag[136] )
        {
          LOBYTE(v47) = 1;
          PrivateVolumeCacheMap = -1073741608;
          CcScheduleLazyWriteScan(v42, v44, v47, 0);
          v49 = 1;
        }
        else
        {
          PrivateVolumeCacheMap = -1073740277;
          v49 = 0;
        }
        KxReleaseQueuedSpinLock(&v179);
        KxReleaseQueuedSpinLock(&LockHandle);
        v50 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v51 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
          {
            v52 = KeGetCurrentPrcb();
            v53 = v52->SchedulerAssist;
            v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v54 & v53[5]) == 0;
            v53[5] &= v54;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
        __writecr8(v50);
        v55 = 0;
        goto LABEL_265;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v42 + 96, &v179);
      v41 = (_QWORD *)a1;
      if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
        PoolWithTag[38] &= ~0x40u;
      v56 = PoolWithTag[38];
      if ( (v56 & 0x200000) != 0 && v18 )
        PoolWithTag[38] = v56 & 0xFFDFFFFF;
      v57 = HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]);
      if ( v57 )
        PoolWithTag[130] = v57;
      v34 = Entry;
LABEL_75:
      KxReleaseQueuedSpinLock(&v179);
      v178 = (KSPIN_LOCK *)*((_QWORD *)PoolWithTag + 67);
      v58 = v178 + 96;
      KeAcquireInStackQueuedSpinLock(v178 + 96, &v179);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (PoolWithTag[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v59 = PoolWithTag[38] & 0xFFFFFFEF;
      v60 = PoolWithTag[38] & 0xFFEF;
      PoolWithTag[38] = v59;
      v61 = v60 & 0x100;
      if ( *((_QWORD *)PoolWithTag + 11) )
      {
        if ( !v61 )
        {
          ++PoolWithTag[1];
          KxReleaseQueuedSpinLock(&v179);
          v110 = v179.OldIrql;
          if ( KiIrqlFlags )
          {
            v111 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v111 <= 0xFu && v179.OldIrql <= 0xFu && v111 >= 2u )
            {
              v112 = KeGetCurrentPrcb();
              v113 = v112->SchedulerAssist;
              v114 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
              v32 = (v114 & v113[5]) == 0;
              v113[5] &= v114;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v112);
            }
          }
          __writecr8(v110);
          goto LABEL_168;
        }
      }
      else if ( !v61 )
      {
        ++PoolWithTag[1];
        v62 = *((_QWORD *)PoolWithTag + 23);
        PoolWithTag[38] = v59 | 0x100;
        if ( v62 )
        {
          *(_WORD *)v62 = 0;
          *(_BYTE *)(v62 + 2) = 6;
          *(_DWORD *)(v62 + 4) = 0;
          v63 = (_QWORD *)(v62 + 8);
          v63[1] = v63;
          *v63 = v63;
        }
        KxReleaseQueuedSpinLock(&v179);
        v64 = v179.OldIrql;
        if ( KiIrqlFlags )
        {
          v65 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v65 <= 0xFu && v179.OldIrql <= 0xFu && v65 >= 2u )
          {
            v66 = KeGetCurrentPrcb();
            v67 = v66->SchedulerAssist;
            v68 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
            v32 = (v68 & v67[5]) == 0;
            v67[5] &= v68;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v66);
          }
        }
        __writecr8(v64);
        KxReleaseQueuedSpinLock(&LockHandle);
        v69 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v70 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v73 & v72[5]) == 0;
            v72[5] &= v73;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
        __writecr8(v69);
        v181 = 1;
        if ( *((_QWORD *)PoolWithTag + 22) )
        {
          PrivateVolumeCacheMap = -1073741811;
        }
        else
        {
          if ( !v184 )
            KeBugCheckEx(0x34u, 0x7BBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *((_QWORD *)PoolWithTag + 22) = v184;
          v74 = v41[3];
          v184 = 0LL;
          if ( (*(_BYTE *)(v74 + 6) & 1) == 0 && !v41[4] )
          {
            MmDisableModifiedWriteOfSection(v41[5]);
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v58, &v179);
            PoolWithTag[38] |= 0x200u;
            KxReleaseQueuedSpinLock(&v179);
            KxReleaseQueuedSpinLock(&LockHandle);
            v75 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v76 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v76 <= 0xFu && LockHandle.OldIrql <= 0xFu && v76 >= 2u )
              {
                v77 = KeGetCurrentPrcb();
                v78 = v77->SchedulerAssist;
                v79 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v79 & v78[5]) == 0;
                v78[5] &= v79;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v77);
              }
            }
            __writecr8(v75);
          }
          PrivateVolumeCacheMap = CcCreateVacbArray(PoolWithTag, v185.m128i_i64[0]);
          if ( PrivateVolumeCacheMap >= 0 )
          {
            if ( (v183 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v58, &v179);
              PoolWithTag[38] |= 0x40000000u;
              KxReleaseQueuedSpinLock(&v179);
              KxReleaseQueuedSpinLock(&LockHandle);
              v80 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                v81 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v81 <= 0xFu && LockHandle.OldIrql <= 0xFu && v81 >= 2u )
                {
                  v82 = KeGetCurrentPrcb();
                  v83 = v82->SchedulerAssist;
                  v84 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v32 = (v84 & v83[5]) == 0;
                  v83[5] &= v84;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v82);
                }
              }
              __writecr8(v80);
            }
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v58, &v179);
            v85 = (struct _KEVENT *)*((_QWORD *)PoolWithTag + 23);
            PoolWithTag[38] &= ~0x100u;
            if ( v85 )
              KeSetEvent(v85, 0, 0);
            KxReleaseQueuedSpinLock(&v179);
LABEL_168:
            KxReleaseQueuedSpinLock(&LockHandle);
            v115 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v116 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v116 <= 0xFu && LockHandle.OldIrql <= 0xFu && v116 >= 2u )
              {
                v117 = KeGetCurrentPrcb();
                v118 = v117->SchedulerAssist;
                v119 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v119 & v118[5]) == 0;
                v118[5] &= v119;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v117);
              }
            }
            __writecr8(v115);
LABEL_176:
            if ( EnableFeatureServicing_45016043 )
            {
              CcFreeSharedCacheMapIgnoreNull(v34);
              Entry = 0LL;
            }
            else if ( v34 )
            {
              ExFreePoolWithTag(v34, 0x63536343u);
              Entry = 0LL;
            }
            v120 = PoolWithTag + 96;
            if ( *((_WORD *)PoolWithTag + 192) )
              goto LABEL_199;
            while ( 1 )
            {
              v121 = 1;
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLock(v58, &v179);
              if ( *(_QWORD *)(a1 + 48) )
              {
                v151 = PoolWithTag[1];
                if ( v151 <= 1 )
                  KeBugCheckEx(0x34u, 0x91AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
                PoolWithTag[1] = v151 - 1;
                PoolWithTag = 0LL;
                goto LABEL_262;
              }
              if ( !*(_WORD *)v120 )
                goto LABEL_230;
              if ( v13 )
                break;
              KxReleaseQueuedSpinLock(&v179);
              v122 = v179.OldIrql;
              if ( KiIrqlFlags )
              {
                v123 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v123 <= 0xFu && v179.OldIrql <= 0xFu && v123 >= 2u )
                {
                  v124 = KeGetCurrentPrcb();
                  v125 = v124->SchedulerAssist;
                  v126 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
                  v32 = (v126 & v125[5]) == 0;
                  v125[5] &= v126;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v124);
                }
              }
              __writecr8(v122);
              KxReleaseQueuedSpinLock(&LockHandle);
              v127 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                v128 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v128 <= 0xFu && LockHandle.OldIrql <= 0xFu && v128 >= 2u )
                {
                  v129 = KeGetCurrentPrcb();
                  v130 = v129->SchedulerAssist;
                  v131 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v32 = (v131 & v130[5]) == 0;
                  v130[5] &= v131;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v129);
                }
              }
              __writecr8(v127);
LABEL_199:
              if ( EnableFeatureServicing_45016043 )
                PrivateCacheMap = (_DWORD *)CcAllocatePrivateCacheMap();
              else
                PrivateCacheMap = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
              v13 = PrivateCacheMap;
              if ( !PrivateCacheMap )
              {
                v34 = Entry;
                PrivateVolumeCacheMap = -1073741670;
                v181 = 0;
                goto LABEL_204;
              }
            }
            v120 = v13;
            v13 = 0LL;
LABEL_230:
            v145 = (__int64)v188;
            *(_OWORD *)v120 = 0LL;
            *((_OWORD *)v120 + 1) = 0LL;
            *((_OWORD *)v120 + 2) = 0LL;
            *((_OWORD *)v120 + 3) = 0LL;
            *((_OWORD *)v120 + 4) = 0LL;
            *((_OWORD *)v120 + 5) = 0LL;
            *((_OWORD *)v120 + 6) = 0LL;
            *((_QWORD *)v120 + 14) = 0LL;
            *(_WORD *)v120 = 766;
            *((_QWORD *)v120 + 1) = a1;
            v120[1] = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(v145);
            v148 = v120 + 24;
            v149 = (*v120 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v120 + 10) = 0LL;
            *v120 ^= v149;
            v150 = (_QWORD *)*((_QWORD *)PoolWithTag + 30);
            if ( (_DWORD *)*v150 != PoolWithTag + 58 )
LABEL_231:
              __fastfail(3u);
            *v148 = PoolWithTag + 58;
            *((_QWORD *)v120 + 13) = v150;
            *v150 = v148;
            *((_QWORD *)PoolWithTag + 30) = v148;
            *(_QWORD *)(v147 + 48) = v120;
            goto LABEL_262;
          }
        }
LABEL_204:
        v49 = 0;
        v109 = PoolWithTag;
LABEL_205:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock(v178 + 96, &v179);
        if ( v181 )
        {
          v133 = (struct _KEVENT *)*((_QWORD *)PoolWithTag + 23);
          if ( v133 )
            KeSetEvent(v133, 0, 0);
          v134 = PoolWithTag + 38;
          PoolWithTag[38] &= ~0x100u;
        }
        else
        {
          v134 = v109 + 38;
        }
        v32 = PoolWithTag[1]-- == 1;
        if ( !v32 || (*v134 & 0x20) != 0 || PoolWithTag[28] )
        {
          KxReleaseQueuedSpinLock(&v179);
          v135 = v179.OldIrql;
          if ( KiIrqlFlags )
          {
            v136 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v136 <= 0xFu && v179.OldIrql <= 0xFu && v136 >= 2u )
            {
              v137 = KeGetCurrentPrcb();
              v138 = v137->SchedulerAssist;
              v139 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
              v32 = (v139 & v138[5]) == 0;
              v138[5] &= v139;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v137);
            }
          }
          __writecr8(v135);
          KxReleaseQueuedSpinLock(&LockHandle);
          v140 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v141 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v141 <= 0xFu && LockHandle.OldIrql <= 0xFu && v141 >= 2u )
            {
              v142 = KeGetCurrentPrcb();
              v143 = v142->SchedulerAssist;
              v144 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v32 = (v144 & v143[5]) == 0;
              v143[5] &= v144;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v142);
            }
          }
          __writecr8(v140);
        }
        else
        {
          CcDeleteSharedCacheMap(PoolWithTag, &LockHandle, (__int64)&v179, 0, 0LL);
        }
LABEL_295:
        if ( EnableFeatureServicing_45016043 )
        {
          CcFreeSharedCacheMapIgnoreNull(v34);
          CcFreePrivateCacheMapIgnoreNull(v13);
        }
        else
        {
          if ( v34 )
            ExFreePoolWithTag(v34, 0x63536343u);
          if ( v13 )
            ExFreePoolWithTag(v13, 0x63506343u);
        }
        if ( v184 )
          ObDereferenceObjectDeferDeleteWithTag(v184, 0x746C6644u);
        if ( PrivateVolumeCacheMap < 0 )
        {
          if ( v49 )
            KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
          RtlRaiseStatus(PrivateVolumeCacheMap);
        }
        return;
      }
      if ( !*((_QWORD *)PoolWithTag + 23) )
      {
        v86 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *((_QWORD *)PoolWithTag + 23) = v86;
        if ( !v86 )
        {
          KxReleaseQueuedSpinLock(&v179);
          v87 = v179.OldIrql;
          if ( KiIrqlFlags )
          {
            v88 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v88 <= 0xFu && v179.OldIrql <= 0xFu && v88 >= 2u )
            {
              v89 = KeGetCurrentPrcb();
              v90 = v89->SchedulerAssist;
              v91 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
              v32 = (v91 & v90[5]) == 0;
              v90[5] &= v91;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v89);
            }
          }
          __writecr8(v87);
          KxReleaseQueuedSpinLock(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v93 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v93 <= 0xFu && LockHandle.OldIrql <= 0xFu && v93 >= 2u )
            {
              v94 = KeGetCurrentPrcb();
              v95 = v94->SchedulerAssist;
              v96 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v32 = (v96 & v95[5]) == 0;
              v95[5] &= v96;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v94);
            }
          }
          PrivateVolumeCacheMap = -1073741670;
LABEL_260:
          __writecr8(OldIrql);
LABEL_261:
          v121 = 0;
LABEL_262:
          v21 = v178;
LABEL_263:
          v49 = 0;
          v55 = v121;
          v163 = v121;
          if ( !PoolWithTag )
          {
LABEL_276:
            if ( v163 )
            {
              KxReleaseQueuedSpinLock(&v179);
              v167 = v179.OldIrql;
              if ( KiIrqlFlags )
              {
                v168 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v168 <= 0xFu && v179.OldIrql <= 0xFu && v168 >= 2u )
                {
                  v169 = KeGetCurrentPrcb();
                  v170 = v169->SchedulerAssist;
                  v171 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
                  v32 = (v171 & v170[5]) == 0;
                  v170[5] &= v171;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v169);
                }
              }
              __writecr8(v167);
            }
            if ( v121 )
            {
              KxReleaseQueuedSpinLock(&LockHandle);
              v172 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                v173 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v173 <= 0xFu && LockHandle.OldIrql <= 0xFu && v173 >= 2u )
                {
                  v174 = KeGetCurrentPrcb();
                  v175 = v174->SchedulerAssist;
                  v176 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v32 = (v176 & v175[5]) == 0;
                  v175[5] &= v176;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v174);
                }
              }
              __writecr8(v172);
            }
            v34 = Entry;
            goto LABEL_295;
          }
          if ( v121 )
          {
LABEL_266:
            v163 = v55;
            if ( v21 && !v55 )
            {
              KeAcquireInStackQueuedSpinLock(v21 + 96, &v179);
              v163 = 1;
            }
            if ( !v182 && !PoolWithTag[28] && PoolWithTag[1] )
              CcInsertIntoCleanSharedCacheMapList((__int64)PoolWithTag);
            v164 = *((_QWORD *)PoolWithTag + 35);
            if ( v164 )
            {
              do
              {
                v165 = v164 & 0xFFFFFFFFFFFFFFFEuLL;
                v166 = *(_QWORD *)v165;
                KeSetEvent((PRKEVENT)(v165 + 8), 0, 0);
                v164 = v166;
              }
              while ( v166 );
            }
            PoolWithTag[38] &= ~0x10000u;
            *((_QWORD *)PoolWithTag + 35) = 0LL;
            goto LABEL_276;
          }
LABEL_265:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v21 = v178;
          v121 = 1;
          goto LABEL_266;
        }
        *(_WORD *)v86 = 0;
        v86[2] = 6;
        *((_DWORD *)v86 + 1) = 0;
        v97 = v86 + 8;
        v97[1] = v97;
        *v97 = v97;
      }
      ++PoolWithTag[1];
      KxReleaseQueuedSpinLock(&v179);
      v98 = v179.OldIrql;
      if ( KiIrqlFlags )
      {
        v99 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v99 <= 0xFu && v179.OldIrql <= 0xFu && v99 >= 2u )
        {
          v100 = KeGetCurrentPrcb();
          v101 = v100->SchedulerAssist;
          v102 = ~(unsigned __int16)(-1LL << (v179.OldIrql + 1));
          v32 = (v102 & v101[5]) == 0;
          v101[5] &= v102;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v100);
        }
      }
      __writecr8(v98);
      KxReleaseQueuedSpinLock(&LockHandle);
      v103 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v104 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v104 <= 0xFu && LockHandle.OldIrql <= 0xFu && v104 >= 2u )
        {
          v105 = KeGetCurrentPrcb();
          v106 = v105->SchedulerAssist;
          v107 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v107 & v106[5]) == 0;
          v106[5] &= v107;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v105);
        }
      }
      __writecr8(v103);
      KeWaitForSingleObject(*((PVOID *)PoolWithTag + 23), Executive, 0, 0, 0LL);
      v108 = PoolWithTag[40];
      if ( v108 >= 0 )
        goto LABEL_176;
      PrivateVolumeCacheMap = PoolWithTag[40];
      v49 = 0;
      v109 = PoolWithTag;
      if ( !FsRtlIsNtstatusExpected(v108) )
        PrivateVolumeCacheMap = -1073741590;
      goto LABEL_205;
    }
    if ( Entry )
    {
      v33 = *((_QWORD *)Entry + 67);
      v34 = 0LL;
      PoolWithTag = Entry;
      Entry = 0LL;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v33 + 768), &v179);
      v35 = v33 + 624;
      v36 = PoolWithTag + 34;
      v37 = *(_QWORD **)(v35 + 8);
      if ( *v37 != v35 )
        goto LABEL_231;
      v32 = CcEnablePerVolumeLazyWriter == 0;
      *v36 = v35;
      *((_QWORD *)PoolWithTag + 18) = v37;
      *v37 = v36;
      *(_QWORD *)(v35 + 8) = v36;
      if ( !v32 )
      {
        v38 = (__int64 *)(PoolWithTag + 142);
        v39 = *((_QWORD *)PoolWithTag + 75) + 608LL;
        v40 = *(__int64 ***)(*((_QWORD *)PoolWithTag + 75) + 616LL);
        if ( *v40 != (__int64 *)v39 )
          goto LABEL_231;
        *v38 = v39;
        *((_QWORD *)PoolWithTag + 72) = v40;
        *v40 = v38;
        *(_QWORD *)(v39 + 8) = v38;
      }
      v41 = (_QWORD *)a1;
      v182 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) = PoolWithTag;
      ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
      goto LABEL_75;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)v17 <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)v17 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v17 = (unsigned int)LockHandle.OldIrql + 1;
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v28);
    v7 = a4;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v152 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v153 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v153 <= 0xFu && LockHandle.OldIrql <= 0xFu && v153 >= 2u )
    {
      v154 = KeGetCurrentPrcb();
      v155 = v154->SchedulerAssist;
      v156 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v32 = (v156 & v155[5]) == 0;
      v155[5] &= v156;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(v154);
    }
  }
  __writecr8(v152);
  if ( EnableFeatureServicing_45016043 )
  {
    CcFreeSharedCacheMapIgnoreNull(PoolWithTag);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x63536343u);
  }
}
