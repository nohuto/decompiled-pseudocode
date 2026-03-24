/*
 * XREFs of MiSharePages @ 0x140367CB0
 * Callers:
 *     MiProcessCrcList @ 0x140726CE0 (MiProcessCrcList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B200 (MiVadSupportsPrivateCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14025BAD8 (KeForceAttachProcess.c)
 *     MiPrepareAttachThread @ 0x14026FA54 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x14026FAC8 (MiAttachThreadDone.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     RtlAvlInsertNodeEx @ 0x140296BD0 (RtlAvlInsertNodeEx.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFlushTbListEarly @ 0x1402DF198 (MiFlushTbListEarly.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeForceDetachProcess @ 0x140311DD8 (KeForceDetachProcess.c)
 *     MiIsStoreProcess @ 0x1403334C0 (MiIsStoreProcess.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x1403674C4 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x140367760 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x140368EE4 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x140368F60 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x1403690F0 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x1403694F0 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1403695D0 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x14036967C (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x1403696DC (MiMakeCombineCandidateClean.c)
 *     MiGetCombineDomain @ 0x1403697BC (MiGetCombineDomain.c)
 *     MiPageMightBeZero @ 0x1403697D4 (MiPageMightBeZero.c)
 *     MiDereferenceCombineBlock @ 0x1403698B0 (MiDereferenceCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x1403698E0 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiPopCombineBlock @ 0x14036A7A4 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x14036A7FC (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x140371420 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiSharePages(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, int a5)
{
  unsigned __int64 *v5; // rsi
  __int64 v8; // r14
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // r13
  _BYTE *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  _KPROCESS *v21; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  int v28; // edi
  __int64 v29; // rbx
  char v30; // r15
  unsigned __int64 v31; // r14
  unsigned __int8 v32; // r12
  unsigned __int8 v33; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rbx
  unsigned __int64 valid; // rax
  __int64 v41; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  ULONG_PTR BugCheckParameter2; // rsi
  int v50; // r13d
  char v51; // r14
  unsigned int v52; // r12d
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // r8
  __int64 **Address; // rax
  unsigned int v60; // r14d
  unsigned __int64 **v61; // rbx
  _KPROCESS *v62; // rdx
  unsigned __int64 v63; // r11
  __int64 v64; // r8
  __int64 v65; // r9
  int IsZero; // eax
  unsigned __int64 *v67; // rcx
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // r8
  __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // r11
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  unsigned __int64 *v79; // r14
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  bool v82; // si
  char v83; // r13
  unsigned __int64 UltraMapping; // rax
  int v85; // r9d
  unsigned __int64 *v86; // r14
  int v87; // r8d
  __int64 CombineDomain; // rax
  int v89; // ecx
  __int64 v90; // rdx
  unsigned __int64 v91; // rbx
  __int64 v92; // r8
  char v93; // al
  __int64 v94; // rbx
  __int64 v95; // rcx
  unsigned __int64 v96; // rbx
  __int64 v97; // r8
  unsigned __int64 v98; // rax
  int v99; // esi
  unsigned __int64 v100; // rbx
  unsigned int v101; // esi
  __int64 v102; // r13
  unsigned __int64 v103; // r12
  bool v104; // r8
  unsigned __int64 *v105; // rbx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned int v108; // eax
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r10
  _DWORD *v111; // r9
  int v112; // eax
  __int64 *v113; // r15
  int i; // r14d
  __int64 v115; // rbx
  __int64 v116; // rsi
  unsigned __int64 *v117; // rsi
  __int64 v118; // rbx
  unsigned __int64 v119; // r14
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  int v122; // eax
  unsigned __int64 *v123; // rbx
  char v124; // [rsp+40h] [rbp-C0h]
  char v125; // [rsp+44h] [rbp-BCh]
  __int64 v126; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v127; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v128; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v130; // [rsp+68h] [rbp-98h]
  unsigned int v131; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v132; // [rsp+70h] [rbp-90h] BYREF
  int v133; // [rsp+78h] [rbp-88h]
  unsigned int v134; // [rsp+7Ch] [rbp-84h]
  int v135; // [rsp+80h] [rbp-80h]
  int v136[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v137; // [rsp+90h] [rbp-70h]
  __int64 v138; // [rsp+98h] [rbp-68h]
  int v139; // [rsp+A0h] [rbp-60h]
  int v140; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 *v141; // [rsp+A8h] [rbp-58h]
  _BYTE *Pool; // [rsp+B0h] [rbp-50h]
  int v143; // [rsp+B8h] [rbp-48h]
  int v144; // [rsp+BCh] [rbp-44h]
  __int64 v145; // [rsp+C0h] [rbp-40h]
  _QWORD *v146; // [rsp+C8h] [rbp-38h]
  _KPROCESS *v147; // [rsp+D0h] [rbp-30h]
  __int64 *v148; // [rsp+D8h] [rbp-28h]
  __int64 v149; // [rsp+E0h] [rbp-20h]
  int v150[2]; // [rsp+E8h] [rbp-18h]
  int v151; // [rsp+F0h] [rbp-10h] BYREF
  int v152; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v153; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v154; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  unsigned __int64 v156; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  __int128 v158; // [rsp+130h] [rbp+30h]
  unsigned __int64 v159; // [rsp+140h] [rbp+40h]
  _OWORD v160[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v161; // [rsp+168h] [rbp+68h]
  _OWORD v162[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v163[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v164[208]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 *v165; // [rsp+330h] [rbp+230h]
  __int64 v166; // [rsp+358h] [rbp+258h]
  _QWORD v167[5]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v168; // [rsp+3A8h] [rbp+2A8h] BYREF

  v145 = a1;
  v5 = a3;
  v161 = 0LL;
  v159 = 0LL;
  v8 = 0LL;
  v153 = 0LL;
  v156 = 0LL;
  memset(v160, 0, sizeof(v160));
  memset(v162, 0, sizeof(v162));
  v158 = 0LL;
  memset(v163, 0, 0xB8uLL);
  memset(v164, 0, 0xB8uLL);
  v10 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)v150 = *(_QWORD *)(a1 + 16);
  v131 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)v136 = *a4;
  v11 = a2[4];
  v132 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v146 = v10;
  v134 = 0;
  v138 = 0LL;
  v126 = v11;
  v12 = MiTbFlushType(v11);
  v16 = a2[3];
  v17 = (unsigned __int64 *)a2[6];
  v139 = v12;
  v135 = 0;
  v140 = 0;
  v154 = a1 + 64;
  v18 = v164;
  Pool = v164;
  if ( v16 <= 0x14 )
  {
    LODWORD(v19) = v16;
  }
  else
  {
    v19 = 509LL;
    if ( v16 < 0x1FD )
      v19 = v16;
    Pool = MiAllocatePool(64, 8 * v19 + 24, 0x73576D4Du);
    v18 = Pool;
    if ( !Pool )
    {
      v18 = v164;
      Pool = v164;
      LODWORD(v19) = 20;
    }
  }
  v20 = v139;
  *((_DWORD *)v18 + 3) = 0;
  *((_WORD *)v18 + 2) = 0;
  *((_QWORD *)v18 + 2) = 0LL;
  *((_QWORD *)v18 + 3) = 0LL;
  *(_DWORD *)v18 = v20;
  *((_DWORD *)v18 + 2) = v19;
  v21 = (_KPROCESS *)a2[5];
  v147 = v21;
  if ( v21 && v21 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v140 = MiPrepareAttachThread((__int64)v21, (__int64)&v21[1].ActiveProcessorsPadding[6]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v140 )
      goto LABEL_229;
    KeForceAttachProcess((ULONG_PTR)v21, (__int64)v162);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = a5;
  v29 = v126;
  while ( 2 )
  {
    v30 = 0;
    v165 = 0LL;
    v166 = 0LL;
    v31 = 0LL;
    v167[0] = 0LL;
    v32 = 0;
    v168 = 0LL;
    v127 = 0LL;
    v124 = 0;
    v33 = MiLockWorkingSetShared(v29, v13, v14, v15);
    v130 = v33;
    if ( v147
      && ((HIDWORD(v147[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v29 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v147)) )
    {
      MiUnlockWorkingSetShared(v29, v33);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v18 = Pool;
      goto LABEL_228;
    }
    while ( 1 )
    {
      v34 = v32;
      v32 = 0;
      v141 = v17;
      if ( (_BYTE)v34 != 1 )
        v32 = v34;
      v35 = 0LL;
      v125 = v32;
      if ( (_BYTE)v34 != 1 )
        v35 = (unsigned int)(v135 + 1);
      v135 = v35;
      if ( v30 )
      {
        v124 = 0;
        LOBYTE(v34) = 1;
        goto LABEL_38;
      }
      if ( (v35 & 7) != 0 )
        goto LABEL_35;
      if ( MiWorkingSetIsContended(v29) )
      {
        LOBYTE(v34) = 1;
        goto LABEL_38;
      }
      if ( v31 && (unsigned int)MiPageTableLockIsContended(v29, v31) )
      {
        LOBYTE(v34) = 1;
      }
      else
      {
LABEL_35:
        if ( KeShouldYieldProcessor() )
          LOBYTE(v34) = 1;
        else
          v34 = (unsigned int)MiFlushTbListEarly((__int64)Pool, (_KPROCESS *)2) != 0;
      }
LABEL_38:
      if ( !v17 )
        break;
      if ( (_BYTE)v34 )
        goto LABEL_202;
      v36 = v17[4];
      v37 = v17[1];
      v128 = (unsigned __int64 *)v17[2];
      v137 = *v17;
      v148 = (__int64 *)v37;
      if ( v36 >= 0x100 )
      {
        v143 = *(_DWORD *)(v36 + 40) & 0x1F;
      }
      else
      {
        v143 = v36;
        v36 = 0LL;
      }
      v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v149 = v38;
      v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v127 == v39 )
        goto LABEL_48;
      if ( v127 )
      {
        v29 = v126;
        v30 = 1;
        v124 = 1;
        v31 = v127;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v126, ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v156);
        v127 = valid;
        if ( valid == v39 )
        {
LABEL_48:
          if ( !(unsigned int)MiRecheckVaVm(v34, v37) )
            goto LABEL_70;
          v41 = *(_QWORD *)v38;
          if ( MiPteInShadowRange(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            && (unsigned int)MiPteHasShadow()
            && (v41 & 1) != 0
            && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v43 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v38 >> 3) & 0x1FF));
              v44 = v41 | 0x20;
              if ( (v43 & 0x20) == 0 )
                v44 = v41;
              v41 = v44;
              if ( (v43 & 0x42) != 0 )
                v41 = v44 | 0x42;
            }
          }
          v153 = v41;
          if ( (v41 & 1) != 0 )
          {
            v45 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v153);
            v48 = 6 * ((v45 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v45 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = 48 * ((v45 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v151 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v151, v48, v46, v47);
              while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
            }
          }
          else
          {
            if ( (v41 & 0x400) != 0 )
              goto LABEL_70;
            if ( (v41 & 0x800) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = MiLockTransitionLeafPage(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
            if ( !BugCheckParameter2 )
              goto LABEL_70;
          }
          v144 = MiCombineCandidate(*(_QWORD *)v136, v131, BugCheckParameter2);
          v50 = v144;
          if ( !v144 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
            MiDereferenceCombineBlock(a3);
            goto LABEL_71;
          }
          v51 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
          v52 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          v133 = 3;
          v132 = v141[3];
          if ( *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2) != v28 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v51 == 6 )
          {
            if ( v149 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
              goto LABEL_74;
            if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
              goto LABEL_74;
            v53 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v53 & 0x1000000000LL) != 0 )
              goto LABEL_74;
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
              goto LABEL_74;
            v54 = v53 & 0xFFFFFFFFFLL;
            if ( v54 == 0xFFFFFFFFDLL )
              goto LABEL_74;
            v55 = (unsigned __int64)v148;
            if ( (MiGetWsleContents(v54, (unsigned __int64)v148) & 0xF) == 8 )
              goto LABEL_74;
            if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
              goto LABEL_74;
            v58 = 0LL;
            if ( v50 == 1 )
            {
              Address = MiLocateAddress(v55);
              if ( !Address
                || MiVadPageSizes[((unsigned __int64)*((unsigned int *)Address + 12) >> 18) & 3] == 16
                || !MiVadSupportsPrivateCommit((__int64)Address) )
              {
                goto LABEL_74;
              }
            }
            v60 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
            if ( v60 != v143 )
              goto LABEL_74;
            if ( (v41 & 0x42) != 0 )
            {
              if ( v134 < 8 )
              {
                v61 = (unsigned __int64 **)v167;
LABEL_104:
                MiInsertTbFlushEntry((__int64)Pool, v55, 1LL, 0);
                v67 = v141;
                v68 = *v61;
                v32 = v125;
                *v61 = v141;
                v67[2] = (unsigned __int64)v68;
                goto LABEL_71;
              }
              MiMakeCombineCandidateClean(v57, v58);
              WORD2(v163[0]) = 0;
              v163[2] = 0LL;
              v163[3] = 0LL;
              v163[1] = 1LL;
              LODWORD(v163[0]) = v139;
              MiInsertTbFlushEntry((__int64)v163, v55, 1LL, 0);
              MiFlushTbList((__int64)v163, v62);
              v57 = v149;
              v63 = v137;
              goto LABEL_92;
            }
            v63 = v137;
            if ( v137 == qword_140C4ED98 )
            {
              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0 && (v41 & 0x20) != 0 && v134 < 3 )
              {
                v61 = (unsigned __int64 **)&v168;
                goto LABEL_104;
              }
LABEL_92:
              v29 = v126;
              if ( v63 != qword_140C4ED98 || !(unsigned int)MiPageMightBeZero(v126, BugCheckParameter2, v57) )
                goto LABEL_107;
              v152 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v152, v56, v64, v65);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !IsZero )
                goto LABEL_107;
              v163[2] = 0LL;
              v163[3] = 0LL;
              v163[1] = 1LL;
              LODWORD(v163[0]) = v139;
              WORD2(v163[0]) = 4;
              MiInsertTbFlushEntry((__int64)v163, v55, 1LL, 0);
              MiFreeWsleList(v126, (__int64)v163, 0);
              ++v138;
              ++v146[1];
              MiDereferenceCombineBlock(a3);
              v32 = v125;
              v17 = v128;
              v31 = v127;
              v30 = v124;
            }
            else
            {
              v29 = v126;
LABEL_107:
              v69 = v132;
              v32 = v125;
              if ( (v60 & 0x18) != 0 )
                v32 = 1;
              v125 = v32;
              if ( v132 == qword_140C4E550
                || v50 != 1
                || (v69 = v132, v132 == *(_QWORD *)(v29 + 864)) && (HIDWORD(v147[2].ReadyListHead.Blink) & 0x1000) == 0 )
              {
                v70 = -1LL;
                if ( v36 )
                {
                  LODWORD(v76) = v133;
LABEL_128:
                  v79 = v141;
                  goto LABEL_129;
                }
                v71 = (unsigned __int64)v148;
                v72 = MiComputeHash64(v148, v56, v69);
                if ( v72 != v74 )
                  goto LABEL_71;
                if ( v73 == qword_140C4E550 )
                {
                  if ( !(unsigned int)MiHashIsCommon(v145, v74, v71) )
                    goto LABEL_71;
                  v74 = v137;
                }
                v75 = MiAllocateCombineProto(*(__int64 *)v136, v74, v60, &v132, 0);
                v36 = v75;
                if ( !v75 )
                {
                  v36 = MiPopCombineBlock(a3);
                  if ( !v36 )
                    goto LABEL_71;
                  v76 = (int)MiProtectionToCacheAttribute(v60);
                  v77 = *(_QWORD *)(v154 + 8 * v76);
                  if ( !v77 || *(_DWORD *)(v77 + 44) >= *(_DWORD *)(v77 + 40) )
                  {
                    v78 = *a3;
                    if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
                      __fastfail(3u);
                    *(_QWORD *)v36 = v78;
                    *(_QWORD *)(v36 + 8) = a3;
                    *(_QWORD *)(v78 + 8) = v36;
                    *a3 = v36;
                    goto LABEL_71;
                  }
                  *(_DWORD *)(v36 + 40) = v60 | *(_DWORD *)(v36 + 40) & 0xFFFFFFE0;
                  *(_QWORD *)(v36 + 64) = v132;
                  v70 = *(_QWORD *)(v77 + 8 * ((unsigned __int64)*(unsigned int *)(v77 + 44) >> 12) + 48);
                  goto LABEL_128;
                }
                v79 = v141;
                LODWORD(v76) = v133;
                v141[4] = v75;
LABEL_129:
                v80 = MiConvertPrivateToProto(v126, v149, v36, v131, *(__int64 *)v136, (__int64)Pool, v70);
                if ( !v80 )
                  goto LABEL_70;
                ++v146[1];
                if ( v70 == -1 )
                {
                  v36 = 0LL;
                  ++v138;
                }
                else
                {
                  MiIncrementCombineMdl(v145, (unsigned int)v76);
                }
                v81 = (unsigned __int64)v165;
                v79[1] = v80;
                v82 = v70 != -1;
                v79[2] = v81;
                v165 = v79;
LABEL_180:
                if ( v82 )
                {
                  v98 = v137;
                  v99 = *(_DWORD *)(v36 + 40);
                  v100 = v137 & 0xF;
                  *(_QWORD *)(v36 + 24) = v137;
                  *(_QWORD *)&v158 = v98;
                  v101 = v99 & 0x1F;
                  v102 = *(_QWORD *)v136 + 16LL * (unsigned int)v100;
                  DWORD2(v158) = v101;
                  v159 = v36 + 64;
                  v103 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v102 + 104));
                  v104 = 0;
                  v105 = (unsigned __int64 *)(*(_QWORD *)v136 + 16 * (v100 + 6));
                  v106 = *v105;
                  if ( *v105 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v107 = *(_QWORD *)(v106 + 24);
                        if ( v137 > v107 )
                          break;
                        if ( v137 >= v107 )
                        {
                          v108 = *(_DWORD *)(v106 + 40) & 0x1F;
                          if ( v101 > v108
                            || v101 >= v108 && (v36 == -64LL || *(_QWORD *)(v36 + 64) >= *(_QWORD *)(v106 + 64)) )
                          {
                            break;
                          }
                        }
                        if ( !*(_QWORD *)v106 )
                          goto LABEL_193;
                        v106 = *(_QWORD *)v106;
                      }
                      if ( !*(_QWORD *)(v106 + 8) )
                        break;
                      v106 = *(_QWORD *)(v106 + 8);
                    }
                    v104 = 1;
                  }
LABEL_193:
                  RtlAvlInsertNodeEx(v105, v106, v104, (_QWORD *)v36);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v102 + 104));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v109 = KeGetCurrentIrql();
                      if ( v109 <= 0xFu && (unsigned __int8)v103 <= 0xFu && v109 >= 2u )
                      {
                        v110 = KeGetCurrentPrcb();
                        v111 = v110->SchedulerAssist;
                        v112 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v103 + 1));
                        v27 = (v112 & v111[5]) == 0;
                        v111[5] &= v112;
                        if ( v27 )
                          KiRemoveSystemWorkPriorityKick(v110);
                      }
                    }
                  }
                  __writecr8(v103);
                  v32 = v125;
                }
LABEL_71:
                v17 = v128;
                v31 = v127;
                v30 = v124;
                v29 = v126;
              }
              else
              {
                MiDereferenceCombineBlock(a3);
                v17 = v128;
                v31 = v127;
                v30 = v124;
              }
            }
          }
          else
          {
            v83 = 0;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v145 + 208), 3u, 1LL, 0);
            v85 = v144;
            v86 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v87 = 1;
            v29 = v126;
            if ( v132 == qword_140C4E550
              || v144 != 1
              || (CombineDomain = MiGetCombineDomain(1LL, v126), v132 == CombineDomain)
              && (HIDWORD(v147[2].ReadyListHead.Blink) & 0x1000) == 0 )
            {
              if ( v86 )
              {
                v89 = v136[0];
                v90 = *(_QWORD *)v150;
                *(_QWORD *)(*(_QWORD *)v150 + 72LL) = v86;
                *(_QWORD *)(v90 + 64) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v89, v90, v131, v85, v87) )
                {
                  v91 = ZeroPte;
                  if ( MiPteInShadowRange((unsigned __int64)v86) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                        v91 = ZeroPte | 0x8000000000000000uLL;
                      *v86 = v91;
                      MiWritePteShadow((__int64)v86, v91, v92);
                      goto LABEL_74;
                    }
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v91 = ZeroPte | 0x8000000000000000uLL;
                    }
                  }
                  *v86 = v91;
LABEL_74:
                  MiDereferenceCombineBlock(a3);
                  v32 = v125;
                  goto LABEL_71;
                }
                v93 = v125;
                if ( (v52 & 0x18) != 0 )
                  v93 = 1;
                v125 = v93;
                v94 = -1LL;
                if ( !v36 )
                {
                  if ( !(unsigned int)MiPerformCombineScan(v145, *(_QWORD *)v150, v132 == qword_140C4E550, v160)
                    || *(_QWORD *)&v160[0] != v137 )
                  {
                    goto LABEL_167;
                  }
                  v36 = MiAllocateCombineProto(*(__int64 *)v136, v137, v52, &v132, 0);
                  if ( !v36 )
                  {
                    v36 = MiPopCombineBlock(a3);
                    if ( v36 )
                    {
                      v133 = MiProtectionToCacheAttribute(v52);
                      v95 = *(_QWORD *)(v154 + 8LL * v133);
                      if ( v95 )
                      {
                        if ( *(_DWORD *)(v95 + 44) < *(_DWORD *)(v95 + 40) )
                        {
                          *(_DWORD *)(v36 + 40) = v52 | *(_DWORD *)(v36 + 40) & 0xFFFFFFE0;
                          *(_QWORD *)(v36 + 64) = v132;
                          v94 = *(_QWORD *)(v95 + 8 * ((unsigned __int64)*(unsigned int *)(v95 + 44) >> 12) + 48);
                          goto LABEL_163;
                        }
                      }
                    }
LABEL_167:
                    v82 = 0;
LABEL_168:
                    MiReleaseArbitraryPage(*(_QWORD *)v150);
                    v96 = ZeroPte;
                    if ( MiPteInShadowRange((unsigned __int64)v86) )
                    {
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                          v96 = ZeroPte | 0x8000000000000000uLL;
                        *v86 = v96;
                        MiWritePteShadow((__int64)v86, v96, v97);
                        goto LABEL_178;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (ZeroPte & 1) != 0 )
                      {
                        v96 = ZeroPte | 0x8000000000000000uLL;
                      }
                    }
                    *v86 = v96;
LABEL_178:
                    if ( !v83 )
                      goto LABEL_74;
                    v32 = v125;
                    goto LABEL_180;
                  }
                  v141[4] = v36;
                }
LABEL_163:
                if ( !(unsigned int)MiConvertStandbyToProto(
                                      v126,
                                      *(__int64 *)v136,
                                      *(__int64 *)v150,
                                      v131,
                                      v36,
                                      BugCheckParameter2,
                                      v149,
                                      v94) )
                  goto LABEL_167;
                ++v146[1];
                if ( v94 == -1 )
                {
                  v36 = 0LL;
                  v83 = 1;
                  ++v138;
                  v82 = 0;
                }
                else
                {
                  MiIncrementCombineMdl(v145, (unsigned int)v133);
                  v82 = 1;
                  v83 = 1;
                }
                goto LABEL_168;
              }
            }
            MiDereferenceCombineBlock(a3);
            v32 = v125;
            v17 = v128;
            v31 = v127;
            v30 = v124;
          }
        }
        else
        {
          v29 = v126;
          MiUnlockPageTable(v126, valid);
          v31 = 0LL;
          v127 = 0LL;
          MiDereferenceCombineBlock(a3);
          v17 = v128;
          v30 = v124;
        }
      }
    }
    ++v134;
LABEL_202:
    v113 = v167;
    v148 = v167;
    for ( i = 2; i <= 3; ++i )
    {
      v115 = *v113;
      if ( *v113 )
      {
        do
        {
          v116 = *(_QWORD *)(v115 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v136, v126, v131, v115, i) )
          {
            *(_QWORD *)(v115 + 16) = v17;
            v17 = (unsigned __int64 *)v115;
          }
          else
          {
            v35 = *(_QWORD *)(v115 + 32);
            if ( v35 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v115 = v116;
        }
        while ( v116 );
        v113 = v148;
      }
      *v113 = 0LL;
      v113 += 5;
      v148 = v113;
    }
    v18 = Pool;
    v28 = a5;
    MiFlushTbList((__int64)Pool, (_KPROCESS *)v35);
    v29 = v126;
    if ( v127 )
      MiUnlockPageTable(v126, v127);
    MiUnlockWorkingSetShared(v126, v130);
    v117 = v165;
    if ( v165 )
    {
      do
      {
        v118 = v117[1];
        v119 = (unsigned __int8)MiLockPageInline(v118, v13, v14, v15);
        *(_BYTE *)(v118 + 34) = *(_BYTE *)(v118 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v118);
        _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v120 = KeGetCurrentIrql();
            if ( v120 <= 0xFu && (unsigned __int8)v119 <= 0xFu && v120 >= 2u )
            {
              v121 = KeGetCurrentPrcb();
              v13 = -1LL << ((unsigned __int8)v119 + 1);
              v15 = v121->SchedulerAssist;
              v122 = ~(unsigned __int16)v13;
              v27 = (v122 & v15[5]) == 0;
              v14 = (unsigned int)v122 & v15[5];
              v15[5] = v14;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v121);
            }
          }
        }
        __writecr8(v119);
        v117 = (unsigned __int64 *)v117[2];
      }
      while ( v117 );
      v28 = a5;
      v29 = v126;
    }
    if ( v17 )
    {
      v5 = a3;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v5 = a3;
LABEL_228:
  v21 = v147;
  v10 = v146;
  v8 = v138;
LABEL_229:
  if ( v17 )
  {
    do
    {
      v123 = (unsigned __int64 *)v17[2];
      if ( v17[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v17 = v123;
    }
    while ( v123 );
  }
  if ( v140 == 1 )
  {
    KeForceDetachProcess(v162, 0);
    MiAttachThreadDone((__int64)&v21[1].ActiveProcessorsPadding[6]);
  }
  if ( v18 != v164 )
    ExFreePoolWithTag(v18, 0);
  *v10 += v8;
}
