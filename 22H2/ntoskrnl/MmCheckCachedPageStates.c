/*
 * XREFs of MmCheckCachedPageStates @ 0x1402A1C20
 * Callers:
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x14029FCC0 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1402A10C0 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1402A1A70 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     CcMapDataForOverwrite @ 0x140306B18 (CcMapDataForOverwrite.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiMarkPteDirty @ 0x14027ABCC (MiMarkPteDirty.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiUnlinkStandbyBatch @ 0x140283260 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReferenceControlAreaPfn @ 0x14029A610 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x14029A9B0 (MiLockOwnedProtoPage.c)
 *     MiIsAddressGlobal @ 0x14029F1A0 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A3AC0 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402A7960 (MiIsPfnCommitNotCharged.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiControlAreaUsingExtents @ 0x1402B32E0 (MiControlAreaUsingExtents.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiUserPdeOrAbove @ 0x140303E44 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x140308418 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3F5C (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F534 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055F9B0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055FFA0 (MiReplenishTransitionPageHeatList.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  unsigned int v5; // r12d
  ULONG_PTR v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 Process; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rcx
  __int64 v33; // r12
  struct _LIST_ENTRY *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  ULONG_PTR v37; // rbx
  __int64 v38; // r14
  unsigned __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  signed __int32 v44; // eax
  __int64 Page; // rax
  ULONG_PTR v46; // r15
  __int64 v47; // rsi
  unsigned __int64 v48; // rax
  int v49; // eax
  BOOL v50; // eax
  unsigned __int8 v51; // di
  __int64 v52; // rax
  unsigned __int64 *v53; // r12
  __int64 v54; // rsi
  unsigned __int64 v55; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v57; // r9
  int v58; // r14d
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v63; // rax
  struct _LIST_ENTRY *v64; // r8
  __int64 v65; // rcx
  unsigned __int8 v66; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v68; // r9
  int v69; // edx
  bool v70; // zf
  _DWORD *v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  char v74; // bl
  int IsPfnCommitNotCharged; // eax
  char v76; // r10
  __int64 v77; // rcx
  ULONG_PTR *v78; // rdi
  signed __int32 v79; // eax
  signed __int32 v80; // ett
  volatile signed __int64 *v81; // r14
  char v82; // al
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  unsigned int v85; // ebx
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // r12
  __int64 v93; // rax
  unsigned __int64 v94; // rsi
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // r15
  ULONG_PTR v99; // rbx
  __int64 PfnPriority; // r14
  __int64 v101; // r8
  int v102; // esi
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r14
  char v107; // al
  _QWORD *v108; // r14
  __int64 v109; // r8
  unsigned __int64 v110; // r10
  struct _LIST_ENTRY *v111; // rax
  char v112; // dl
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rdx
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // rbx
  unsigned __int64 v119; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rbx
  ULONG_PTR v123; // rdx
  char v124; // di
  unsigned __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // rcx
  unsigned __int64 v128; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int v130; // eax
  unsigned int v131; // ecx
  unsigned int v132; // edi
  __int64 v133; // rax
  int v134; // eax
  int v135; // ecx
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int8 v140; // bl
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r10
  int v143; // eax
  unsigned __int64 v144; // rax
  __int64 v145; // rcx
  __int16 v146; // bx
  __int16 v147; // bx
  unsigned __int64 v148; // rdx
  char v149; // al
  unsigned __int64 v150; // rdx
  unsigned __int64 v151; // r8
  unsigned __int64 v152; // r9
  unsigned __int64 v153; // r14
  int v154; // r12d
  __int64 v155; // rcx
  __int64 v156; // rdi
  struct _KPRCB *v157; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v159; // eax
  unsigned __int8 v160; // al
  unsigned __int8 v161; // bl
  struct _KPRCB *v162; // r9
  _DWORD *v163; // r8
  int v164; // eax
  unsigned __int8 v166; // [rsp+30h] [rbp-198h] BYREF
  char i; // [rsp+31h] [rbp-197h]
  unsigned int v168; // [rsp+34h] [rbp-194h]
  char v169; // [rsp+38h] [rbp-190h]
  int v170; // [rsp+3Ch] [rbp-18Ch]
  __int64 ValidPte; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v172; // [rsp+48h] [rbp-180h]
  int v173; // [rsp+50h] [rbp-178h]
  unsigned __int64 v174; // [rsp+58h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-168h]
  __int64 v176; // [rsp+68h] [rbp-160h] BYREF
  __int64 v177; // [rsp+70h] [rbp-158h]
  volatile signed __int64 *v178; // [rsp+78h] [rbp-150h]
  int v179; // [rsp+80h] [rbp-148h] BYREF
  int v180; // [rsp+84h] [rbp-144h] BYREF
  int v181; // [rsp+88h] [rbp-140h] BYREF
  int v182; // [rsp+8Ch] [rbp-13Ch] BYREF
  ULONG_PTR v183; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v184; // [rsp+98h] [rbp-130h]
  __int64 v185; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v186; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v187; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v188; // [rsp+B8h] [rbp-110h]
  __int64 v189; // [rsp+C0h] [rbp-108h]
  __int64 v190; // [rsp+C8h] [rbp-100h]
  __int128 v191; // [rsp+D0h] [rbp-F8h] BYREF
  char *v192; // [rsp+E0h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v194[16]; // [rsp+100h] [rbp-C8h] BYREF

  v192 = a4;
  v170 = a3;
  v183 = 0LL;
  ValidPte = 0LL;
  v176 = 0LL;
  v169 = 1;
  v191 = 0LL;
  v173 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v168 = 0;
  v7 = 0LL;
  v166 = 17;
  v185 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v172 = v8;
  v184 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
      v9 = v10 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v9 = v10;
      v10 = v9;
      if ( (v12 & 0x42) != 0 )
        v10 = v9 | 0x42;
    }
  }
  v186 = v10;
  if ( (unsigned int)MiPteInShadowRange(&v186, v9)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v13 )
    {
      v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v186 >> 3) & 0x1FF));
      v15 = v10 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v10;
      v10 = v15;
      if ( (v14 & 0x42) != 0 )
        v10 = v15 | 0x42;
    }
  }
  v16 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v177 = v16;
  v17 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + ((v17 >> 3) & 0x1FF));
      v17 = v18 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v17 = v18;
      v18 = v17;
      if ( (v20 & 0x42) != 0 )
        v18 = v17 | 0x42;
    }
  }
  v187 = v18;
  if ( (unsigned int)MiPteInShadowRange(&v187, v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v187 >> 3) & 0x1FF));
      v25 = v18 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v18;
      v18 = v25;
      if ( (v24 & 0x42) != 0 )
        v18 = v25 | 0x42;
    }
  }
  v26 = 0xFFFFFFFFFLL;
  v27 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v27 )
    v27 += 40 * ((a1 >> 18) & 7);
  Process = *(_QWORD *)(v27 + 24);
  v29 = (__int64 *)(Process & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (Process & 1) == 0 )
    v29 = (__int64 *)Process;
  v190 = *v29;
  v30 = 0LL;
  v189 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v190 + 60) & 0x3FF));
  while ( 1 )
  {
    v31 = 0xFFFFFA8000000028uLL;
    if ( v8 > v184 )
      break;
    v32 = *(_QWORD *)v8;
    LODWORD(v33) = 0;
    Process = *(_QWORD *)v8;
    v22 = 0xFFFFF6FB7DBED000uLL;
    v21 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (Process & 1) != 0
        && ((Process & 0x20) == 0 || (Process & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v34 )
        {
          Process |= 0x20uLL;
          v35 = *((_QWORD *)&v34->Flink + ((v8 >> 3) & 0x1FF));
          if ( (v35 & 0x20) == 0 )
            Process = *(_QWORD *)v8;
          if ( (v35 & 0x42) != 0 )
            Process |= 0x42uLL;
        }
      }
      v21 = 0xFFFFF6FB7DBED7F8uLL;
      v22 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (Process & 1) != 0 )
    {
      if ( (v170 & 4) == 0 )
        goto LABEL_371;
      if ( v166 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v166);
        v166 = 17;
      }
LABEL_70:
      MiMarkPteDirty(v8);
      goto LABEL_371;
    }
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v21 = *(_QWORD *)(Process + 1928);
        if ( v21 )
        {
          v36 = *(_QWORD *)(v21 + 8 * ((v8 >> 3) & 0x1FF));
          v21 = v32 | 0x20;
          Process = (unsigned __int8)v36;
          LOBYTE(Process) = v36 & 0x20;
          if ( (v36 & 0x20) == 0 )
            v21 = *(_QWORD *)v8;
          v32 = v21;
          if ( (v36 & 0x42) != 0 )
            v32 = v21 | 0x42;
        }
      }
    }
    ValidPte = v32;
    if ( (v32 & 1) != 0 )
    {
      if ( (v170 & 4) == 0 )
        goto LABEL_371;
      if ( v166 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v166);
        v166 = 17;
      }
      goto LABEL_70;
    }
    v37 = v6;
    v33 = (v32 >> 3) & 1;
    v38 = v32;
    v188 = v33;
    if ( qword_140C4DF40 && (v32 & 0x10) == 0 )
      v38 = v32 & ~qword_140C4DF40;
    Process = v166;
    v39 = v37 & 0xFFFFFFFFFFFFF000uLL;
    v6 = v38 >> 16;
    BugCheckParameter1 = v6;
    if ( v166 != 17 )
    {
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == v39 )
        goto LABEL_219;
      MiUnlockProtoPoolPage(v7, v166);
      v166 = 17;
    }
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != v39 )
    {
      Process = v168;
      if ( v168 )
      {
        MiMakeSystemCacheRangeValid(v8 - 8LL * v168, (unsigned __int64)v194, v168, v16);
        v168 = 0;
      }
    }
    v40 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v40 & 1) != 0
      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v41 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v40 | 0x20;
        if ( (v41 & 0x20) == 0 )
          Process = *(_QWORD *)v6;
        v40 = Process;
        if ( (v41 & 0x42) != 0 )
          v40 = Process | 0x42;
      }
    }
    v176 = v40;
    if ( (v40 & 1) == 0 && ((v40 & 0x400) != 0 || (v40 & 0x800) == 0) )
    {
      v7 = 0LL;
      goto LABEL_113;
    }
    v53 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v174 = *v53;
      v54 = v174 & 1;
      do
      {
        if ( !v54 )
          goto LABEL_177;
        v55 = v174;
        if ( (v174 & 0x200) != 0 )
          goto LABEL_177;
        v58 = MiPteInShadowRange(&v174, Process);
        if ( v58
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
        {
          v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v59 )
          {
            v60 = *((_QWORD *)&v59->Flink + (((unsigned __int64)&v174 >> 3) & 0x1FF));
            if ( (v60 & 0x20) != 0 )
              v55 |= 0x20uLL;
            if ( (v60 & 0x42) != 0 )
              v55 |= 0x42uLL;
          }
          else
          {
            v55 = v174;
          }
        }
        v61 = (v55 >> 12) & 0xFFFFFFFFFLL;
        Process = 6 * v61;
      }
      while ( (*(_QWORD *)(48 * v61 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v7 = 48 * v61 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = Process;
      }
      v179 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v179, Process, (__int64)SchedulerAssist, v57);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v63 = *v53;
      v174 = v63;
      if ( (v63 & 1) == 0 || (v63 & 0x200) != 0 )
        goto LABEL_168;
      if ( v58
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
      {
        v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v64 )
        {
          v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v174 >> 3) & 0x1FF));
          if ( (v65 & 0x20) != 0 )
            v63 |= 0x20uLL;
          if ( (v65 & 0x42) != 0 )
            v63 |= 0x42uLL;
        }
        else
        {
          v63 = v174;
        }
      }
      if ( v61 != ((v63 >> 12) & 0xFFFFFFFFFLL) )
      {
LABEL_168:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v66 = KeGetCurrentIrql();
              if ( v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v68 = CurrentPrcb->SchedulerAssist;
                v69 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v70 = (v69 & v68[5]) == 0;
                v68[5] &= v69;
                if ( v70 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
LABEL_177:
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
      break;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v7) )
      goto LABEL_194;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
    {
      v74 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v73, v72, v21);
      v74 = v76;
      if ( IsPfnCommitNotCharged )
        v74 = 1;
    }
    v77 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
    v78 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v77);
    if ( v74 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E648 + 8 * v77), 1uLL, 4u) )
      goto LABEL_195;
    if ( v78 == &MiSystemPartition )
    {
      Process = (__int64)KeGetCurrentPrcb();
      v79 = *(_DWORD *)(Process + 33564);
      while ( v79 )
      {
        if ( v79 == -1 )
          break;
        v32 = (unsigned int)(v79 - 1);
        v80 = v79;
        v79 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 33564), v32, v79);
        if ( v80 == v79 )
          goto LABEL_194;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v78, 1LL, 0xFFFFFFFFLL, v71) )
    {
LABEL_194:
      ++*(_WORD *)(v7 + 32);
    }
    else if ( v74 )
    {
      MiReturnCommit((__int64)v78, 1LL);
    }
LABEL_195:
    if ( CurrentIrql == 17 )
    {
      LOBYTE(Process) = 17;
      MiLockOwnedProtoPage(v7, Process, v21, v71);
    }
    else
    {
      v81 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
      v166 = CurrentIrql;
      v82 = *(_BYTE *)(v7 + 34);
      i = 0;
      v178 = v81;
      if ( (v82 & 0x20) != 0 )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v83 = KeGetCurrentIrql();
              if ( v83 <= 0xFu && CurrentIrql <= 0xFu && v83 >= 2u )
              {
                v84 = KeGetCurrentPrcb();
                v32 = (unsigned int)CurrentIrql + 1;
                v71 = v84->SchedulerAssist;
                Process = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v70 = ((unsigned int)Process & v71[5]) == 0;
                v21 = (unsigned int)Process & v71[5];
                v71[5] = v21;
                if ( v70 )
                  KiRemoveSystemWorkPriorityKick(v84);
              }
            }
          }
          __writecr8(CurrentIrql);
          v85 = 0;
          for ( i = *(_BYTE *)(v7 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v7 + 34) )
          {
            if ( (++v85 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32, Process, v21, v71) )
            {
              HvlNotifyLongSpinWait(v85);
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v7, Process, v21, v71);
          v82 = *(_BYTE *)(v7 + 34);
        }
        while ( (v82 & 0x20) != 0 );
        v81 = v178;
      }
      *(_BYTE *)(v7 + 34) = v82 | 0x20;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v81 & 0x20) == 0 )
        MiWriteValidPteVolatile(v81, 1, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v16 = v177;
    v30 = 0LL;
    v6 = BugCheckParameter1;
    v26 = 0xFFFFFFFFFLL;
    LODWORD(v33) = v188;
    v8 = v172;
    v31 = 0xFFFFFA8000000028uLL;
    v22 = 0xFFFFF6FB7DBED000uLL;
LABEL_219:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_371;
    v40 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v32, Process, v21, 0xFFFFF6FB7DBED000uLL)
      && (v40 & 1) != 0
      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
    {
      v32 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      Process = *(_QWORD *)(v32 + 1928);
      if ( Process )
      {
        v86 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v40 | 0x20;
        v32 = (unsigned __int8)v86;
        LOBYTE(v32) = v86 & 0x20;
        if ( (v86 & 0x20) == 0 )
          Process = v40;
        v40 = Process;
        if ( (v86 & 0x42) != 0 )
          v40 = Process | 0x42;
      }
    }
    v176 = v40;
    if ( (v40 & 1) == 0 && ((v40 & 0x400) != 0 || (v40 & 0x800) == 0) )
      goto LABEL_113;
    while ( 1 )
    {
      while ( 1 )
      {
        v87 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 1) == 0 )
          break;
        v88 = *(_QWORD *)v6;
LABEL_244:
        Process = 6 * (v26 & (v88 >> 12));
        v32 = *(_QWORD *)(v31 + 48 * (v26 & (v88 >> 12)));
        if ( (v32 & 0x4000000000000LL) != 0 )
        {
          v89 = 48 * (v26 & (v88 >> 12)) - 0x58000000000LL;
          v180 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v89 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v180, Process, v21, v22);
              while ( *(__int64 *)(v89 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v89 + 24), 0x3FuLL) );
            v26 = 0xFFFFFFFFFLL;
            v31 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v6 == v87 )
            goto LABEL_252;
          _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v87 & 0x400) != 0 || (v87 & 0x800) == 0 )
        break;
      if ( !v87 || !qword_140C4DF40 || (v87 & qword_140C4DF40) != 0 )
      {
        v88 = *(_QWORD *)v6;
        if ( qword_140C4DF40 && (v87 & 0x10) == 0 )
          v88 = v87 & ~qword_140C4DF40;
        goto LABEL_244;
      }
    }
    v89 = 0LL;
LABEL_252:
    v40 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v32, Process, v21, v22)
      && (v40 & 1) != 0
      && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v90 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v40 | 0x20;
        if ( (v90 & 0x20) == 0 )
          Process = v40;
        v40 = Process;
        if ( (v90 & 0x42) != 0 )
          v40 = Process | 0x42;
      }
    }
    v176 = v40;
    if ( v89 )
    {
      if ( (v40 & 1) != 0 )
      {
        v70 = (*(_BYTE *)(v89 + 35) & 0x40) == 0;
        ValidPte = v40;
        if ( !v70 )
          goto LABEL_266;
        v91 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v89 + 24) ^= (*(_QWORD *)(v89 + 24) ^ (*(_QWORD *)(v89 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_345:
        _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = 0LL;
        goto LABEL_406;
      }
      if ( (*(_BYTE *)(v89 + 34) & 0x20) != 0 || (*(_BYTE *)(v89 + 35) & 0x40) != 0 )
      {
LABEL_266:
        _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_370;
      }
      v92 = v89 + 16;
      v93 = *(_QWORD *)(v89 + 16) >> 11;
      v94 = ((__int64)(v184 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v89 + 16) & 0x400LL) == 0 )
        v93 = *(_QWORD *)(v89 + 16) >> 3;
      if ( (v93 & 1) == 0
        || (TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v89, 0LL, ((__int64)(v184 - v8) >> 3) + 1)) == 0LL )
      {
        if ( (*(_BYTE *)(v89 + 34) & 7) != 2
          || v94 <= 1
          || MiIsPfnFromSlabAllocation(v89) && !*(_WORD *)(v89 + 32) && *(__int64 *)v89 < 0 )
        {
          goto LABEL_297;
        }
        v96 = *(_QWORD *)v92;
        if ( qword_140C4DF40 && (v96 & 0x10) == 0 )
          v96 &= ~qword_140C4DF40;
        if ( (__int64)(*(_QWORD *)((v96 >> 16) + 8) + 8LL * *(unsigned int *)((v96 >> 16) + 0x2C) - v6) >> 3 < v94 )
          v94 = (__int64)(*(_QWORD *)((v96 >> 16) + 8) + 8LL * *(unsigned int *)((v96 >> 16) + 0x2C) - v6) >> 3;
        v97 = (unsigned __int64)(4096 - (unsigned int)(v6 & 0xFFF)) >> 3;
        if ( v94 <= v97 )
          v97 = v94;
        v98 = 16 - v168;
        if ( v97 <= v98 )
          v98 = v97;
        if ( v98 > 1 )
        {
          v99 = 0LL;
          v183 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v89);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v189 + 8 * (PfnPriority + 4 * (PfnPriority + 77)));
          KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v101);
          v102 = MiUnlinkPageFromList(v89, 1);
          if ( v102 == 1 )
          {
            v103 = MiUnlinkStandbyBatch((__int64)&v183, BugCheckParameter1 + 8, PfnPriority, v172, v98 - 1, &v183);
            v99 = v183;
            v185 = v103;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v99 )
          {
            MiDiscardTransitionPteEx(v99, 0LL);
            v22 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_299;
          }
        }
        else
        {
LABEL_297:
          v102 = MiUnlinkPageFromList(v89, 0);
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_299:
        if ( !v102 )
        {
          MiDiscardTransitionPteEx(v89, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v172;
          goto LABEL_277;
        }
        v106 = *(_QWORD *)(v89 + 8);
        v107 = *(_BYTE *)(v89 + 34) & 0xFE;
        ++*(_WORD *)(v89 + 32);
        *(_BYTE *)(v89 + 34) = v107 | 6;
        v108 = (_QWORD *)(v106 | 0x8000000000000000uLL);
        v109 = *(_QWORD *)v92;
        v110 = 0xFFFFF6FB7DBED000uLL;
        if ( v92 >= 0xFFFFF6FB7DBED000uLL
          && v92 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v105, v104, v109, 0x7FFFFFFFFFFFFFFFLL)
          && (v109 & 1) != 0
          && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
        {
          v111 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v111 )
          {
            v112 = v109 | 0x20;
            v113 = *((_QWORD *)&v111->Flink + ((v92 >> 3) & 0x1FF));
            if ( (v113 & 0x20) == 0 )
              v112 = v109;
            LOBYTE(v109) = v112;
            if ( (v113 & 0x42) != 0 )
              LOBYTE(v109) = v112 | 0x42;
          }
        }
        v21 = (unsigned __int8)v109 >> 5;
        v114 = *(unsigned __int8 *)(v89 + 34) >> 6;
        if ( v114 != 1 )
        {
          if ( v114 )
          {
            if ( v114 == 2 )
              v21 = (unsigned int)v21 | 0x18;
          }
          else
          {
            v21 = (unsigned int)v21 | 8;
          }
        }
        v115 = v89 + 0x58000000000LL;
        v116 = (((v89 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
        v117 = v116 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x21;
        v8 = v172;
        if ( v172 < 0xFFFFF68000000000uLL || v172 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v118 = v116 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x121;
        }
        else
        {
          if ( v172 >= 0xFFFFF6FB40000000uLL && v172 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v172 == 0xFFFFF6FB7DBEDF68uLL )
              v117 = v116 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
            else
              v117 &= v22;
            if ( (unsigned int)MiUserPdeOrAbove(v172, v116, v21, v22) )
              v117 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v117 |= 4uLL;
          v118 = v117 | 0x100;
          if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
            v118 = v21;
        }
        v91 = v118 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C4E008 & 1 | 0xA000000000000LL) << 8);
        v119 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v108 >= v110 && (unsigned __int64)v108 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v115, v91, v21, v22) )
          {
            if ( !HIBYTE(word_140C4E008) )
              v91 |= 0x8000000000000000uLL;
            *v108 = v91;
            MiWritePteShadow(v108, v91);
            v110 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_341;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            v91 |= 0x8000000000000000uLL;
        }
        *v108 = v91;
LABEL_341:
        v6 = BugCheckParameter1;
        *(_QWORD *)(v89 + 24) = *(_QWORD *)(v89 + 24) & 0xC000000000000000uLL | 1;
        PteShadow = *(_QWORD *)v6;
        if ( v6 >= v110 && v6 <= v119 )
          PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(v33) = v188;
        ValidPte = PteShadow;
        goto LABEL_345;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v7, v166);
      v166 = 17;
      if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(TransitionHeatBatch);
        MiFreeTransitionPageHeatList(TransitionHeatBatch);
      }
LABEL_277:
      v16 = v177;
      v30 = 0LL;
      v5 = v168;
      v6 = 0LL;
      v26 = 0xFFFFFFFFFLL;
    }
    else
    {
LABEL_113:
      if ( qword_140C4DF40 && (v40 & 0x10) == 0 )
        v40 &= ~qword_140C4DF40;
      v42 = v40 >> 16;
      if ( (unsigned int)MiControlAreaUsingExtents(v190, Process, v21) || (v170 & 1) == 0 )
        goto LABEL_357;
      MiInitializePageColorBase(0LL, (*(_DWORD *)(v43 + 56) >> 20) & 0x3F, (__int64)&v191);
      v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v191, 1u);
      Page = MiGetPage(v189, DWORD2(v191) & (unsigned int)v44 | HIDWORD(v191), 2LL);
      v46 = Page;
      if ( Page == -1 )
      {
        v8 = v172;
LABEL_357:
        if ( (v170 & 2) == 0 )
        {
          if ( v166 != 17 )
          {
            MiUnlockProtoPoolPage(v7, v166);
            v166 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v130 = BYTE4(CurrentThread[1].Queue);
          v131 = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v132 = v130 + 4 * v131;
          v133 = (__int64)(v184 - v8) >> 3;
          if ( (unsigned int)v133 > v131 )
          {
            if ( (unsigned int)v133 > 0xF )
              LODWORD(v133) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v133;
          }
          v134 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0, 0LL);
          if ( v134 < 0 )
          {
            v135 = v173;
            if ( v173 >= 0 )
              v135 = v134;
            v173 = v135;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v132 >> 2;
          BYTE4(CurrentThread[1].Queue) = v132 & 3;
        }
        v169 = 0;
LABEL_370:
        v30 = 0LL;
LABEL_371:
        v136 = 0LL;
        goto LABEL_372;
      }
      v47 = 48 * Page - 0x58000000000LL;
      v178 = (volatile signed __int64 *)v47;
      v48 = MI_READ_PTE_LOCK_FREE(&v176);
      v49 = MiProtectionToCacheAttribute((v48 >> 5) & 0x1F);
      v50 = MiPfnZeroingNeeded(v47, v49);
      v51 = v166;
      if ( v50 )
      {
        if ( v166 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v166);
          v51 = 17;
          v166 = 17;
        }
        MiZeroPhysicalPage(v46);
        *(_QWORD *)(v47 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v6 = BugCheckParameter1;
      if ( v51 == 17 )
      {
        v7 = MiLockProtoPoolPage(BugCheckParameter1, (__int64)&v166);
        if ( !v7 )
        {
          do
          {
            MmAccessFault(2uLL, v6, 0, 0LL);
            v7 = MiLockProtoPoolPage(v6, (__int64)&v166);
          }
          while ( !v7 );
          v47 = (__int64)v178;
        }
        v52 = MI_READ_PTE_LOCK_FREE(v6);
        v176 = v52;
        if ( (v52 & 1) != 0 || (v52 & 0x800) != 0 && (v52 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v7, v166);
          MiReleaseFreshPage(v47);
          v8 = v172;
          v166 = 17;
          goto LABEL_277;
        }
      }
      MiReferenceControlAreaPfn(v190, v42, 1u);
      v121 = MI_READ_PTE_LOCK_FREE(&v176);
      v122 = (v121 >> 5) & 0x1F;
      MiInitializePfn(v47, (__int64 *)v6, (v121 >> 5) & 0x1F, 18);
      v123 = v46;
      v8 = v172;
      ValidPte = MiMakeValidPte(v172, v123, (unsigned int)v122 | 0x20000000);
      v124 = ValidPte;
      v125 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v6, v126) )
      {
        if ( (unsigned int)MiPteHasShadow(v127, v91, v21, v22) )
        {
          v128 = v125;
          if ( !HIBYTE(word_140C4E008) && (v124 & 1) != 0 )
            v128 = v125 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v128;
          MiWritePteShadow(v6, v128);
          v30 = 0LL;
          goto LABEL_406;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v124 & 1) != 0 )
        {
          v125 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v125;
      v30 = 0LL;
      while ( 1 )
      {
LABEL_406:
        v140 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v140 <= 0xFu )
        {
          v22 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
          v91 = (-1LL << (v140 + 1)) & 4;
          v21 = (unsigned int)v91 | *(_DWORD *)(v22 + 20);
          *(_DWORD *)(v22 + 20) = v21;
        }
        v16 = v177;
        v181 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v181, v91, v21, v22);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        Process = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 24) = Process ^ ((Process + 1) ^ Process) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v141 = KeGetCurrentIrql();
            if ( v141 <= 0xFu && v140 <= 0xFu && v141 >= 2u )
            {
              v142 = KeGetCurrentPrcb();
              Process = -1LL << (v140 + 1);
              v22 = (unsigned __int64)v142->SchedulerAssist;
              v143 = ~(unsigned __int16)Process;
              v70 = (v143 & *(_DWORD *)(v22 + 20)) == 0;
              v21 = (unsigned int)v143 & *(_DWORD *)(v22 + 20);
              *(_DWORD *)(v22 + 20) = v21;
              if ( v70 )
                KiRemoveSystemWorkPriorityKick(v142);
            }
          }
        }
        __writecr8(v140);
        if ( (v33 & 1) != 0 )
        {
          v144 = MI_READ_PTE_LOCK_FREE(&ValidPte);
          v145 = MiMakeValidPte(v8, (v144 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
        }
        else
        {
          v145 = ValidPte;
          if ( (v170 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v145 = ValidPte | 0x42;
        }
        v136 = v145 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4E008 & 1) << 8);
LABEL_372:
        v8 += 8LL;
        ValidPte = v136;
        if ( (unsigned int)v33 >= 2 )
        {
          v136 &= ~1uLL;
          ValidPte = v136;
        }
        v5 = v168;
        if ( v168 || v136 )
        {
          v194[v168] = v136;
          v168 = ++v5;
          if ( v5 == 16 )
          {
            if ( v166 != 17 )
            {
              MiUnlockProtoPoolPage(v7, v166);
              v166 = 17;
            }
            MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v194, 0x10u, v16);
            v5 = 0;
            v168 = 0;
          }
        }
        if ( !v185 )
          break;
        v137 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        v22 = 0xFFFFF6FB7DBED000uLL;
        --v185;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v137, v21, 0xFFFFF6FB7DBED000uLL)
          && (v137 & 1) != 0
          && ((v137 & 0x20) == 0 || (v137 & 0x42) == 0) )
        {
          v21 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v138 = *(_QWORD *)(v21 + 8 * ((v6 >> 3) & 0x1FF));
            v21 = v137 | 0x20;
            if ( (v138 & 0x20) == 0 )
              v21 = v137;
            v137 = v21;
            if ( (v138 & 0x42) != 0 )
              v137 = v21 | 0x42;
          }
        }
        ValidPte = v137;
        v91 = *(_QWORD *)v8;
        if ( v8 >= v22
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v91, v21, v22)
          && (v91 & 1) != 0
          && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
        {
          v21 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v139 = *(_QWORD *)(v21 + 8 * ((v8 >> 3) & 0x1FF));
            v21 = v91 | 0x20;
            if ( (v139 & 0x20) == 0 )
              v21 = v91;
            v91 = v21;
            if ( (v139 & 0x42) != 0 )
              v91 = v21 | 0x42;
          }
        }
        v186 = v91;
        if ( (v91 & 1) != 0 )
          LODWORD(v33) = 2;
        else
          LODWORD(v33) = (v91 & 8) != 0;
      }
      v172 = v8;
      v26 = 0xFFFFFFFFFLL;
    }
  }
  if ( v166 != 17 )
  {
    v182 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v182, Process, v21, v22);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    v146 = *(_WORD *)(v7 + 32);
    if ( !v146 )
      MiBadRefCount(v7);
    v147 = v146 - 1;
    *(_WORD *)(v7 + 32) = v147;
    if ( !v147 && MiIsPfnFileOnly(v7) )
      goto LABEL_467;
    if ( (unsigned int)MiAreChargesNeededToLockPage(v7) )
    {
      v148 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      if ( v148 > 0xFFFFF6BFFFFFFF78uLL || v148 < 0xFFFFF68000000000uLL )
      {
        v149 = *(_BYTE *)(v7 + 35);
        if ( (v149 & 0x20) != 0 )
        {
          *(_BYTE *)(v7 + 35) = v149 & 0xDF;
          goto LABEL_466;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v153 = 1LL;
        v154 = 1;
      }
      else if ( v150 <= v151 && v150 >= v152 && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
      {
        v153 = 1LL;
        v154 = 1;
      }
      else
      {
        v153 = 1LL;
        if ( v147 )
        {
          v154 = 0;
        }
        else
        {
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
            v30 = 1LL;
          v178 = (volatile signed __int64 *)v30;
          v154 = v30;
        }
      }
      v155 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v156 = *(_QWORD *)(qword_140C4E648 + 8 * v155);
      if ( v154 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v155), 1LL);
      if ( (ULONG_PTR *)v156 != &MiSystemPartition )
        goto LABEL_464;
      v157 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v157->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_464;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v159 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v157->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v70 = (_DWORD)CachedResidentAvailable == v159;
          LODWORD(CachedResidentAvailable) = v159;
          if ( v70 )
            goto LABEL_465;
        }
        while ( v159 != -1 && (unsigned __int64)(v159 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v157->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v153 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v153 )
LABEL_464:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v156 + 7168), v153);
LABEL_465:
      v5 = v168;
LABEL_466:
      if ( !v147 )
LABEL_467:
        MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v160 = KeGetCurrentIrql(), v160 <= 0xFu) )
    {
      v161 = v166;
      if ( v166 <= 0xFu && v160 >= 2u )
      {
        v162 = KeGetCurrentPrcb();
        v163 = v162->SchedulerAssist;
        v161 = v166;
        v164 = ~(unsigned __int16)(-1LL << (v166 + 1));
        v70 = (v164 & v163[5]) == 0;
        v163[5] &= v164;
        if ( v70 )
          KiRemoveSystemWorkPriorityKick(v162);
      }
    }
    else
    {
      v161 = v166;
    }
    __writecr8(v161);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v5, (unsigned __int64)v194, v5, v16);
  if ( v192 )
    *v192 = v169;
  return (unsigned int)v173;
}
