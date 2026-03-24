/*
 * XREFs of MiSetProtectionOnSection @ 0x1402B3300
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14061FD14 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiMarkSharedImageCfgBits @ 0x140636D24 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x14067FEA4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiVadPureReserve @ 0x14021B950 (MiVadPureReserve.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x14028D1E0 (MiComputePageCommitment.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402989F0 (MiReturnFullProcessCharges.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiSanitizePfnProtection @ 0x1402B4920 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1402E2938 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x140315C64 (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x14031A9B4 (MiDecreaseUsedPtesCount.c)
 *     MiUnlockVa @ 0x140338B10 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiTryDeleteTransitionPte @ 0x140363C98 (MiTryDeleteTransitionPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140363CE4 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14063BF58 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x14063DB38 (MiImageVadHotPatchEligible.c)
 *     MiGetImageHotPatchTableAddress @ 0x1408CA218 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v10; // r14
  char v11; // al
  unsigned int ProtectionMask; // eax
  __int64 v13; // r8
  char *v14; // r9
  unsigned int v15; // ecx
  __int64 result; // rax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // bl
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  volatile signed __int64 *v29; // rbx
  int v30; // r14d
  __int64 v31; // rbx
  int v32; // ebx
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rbx
  __int64 v37; // rdi
  _DWORD *v38; // r9
  LONG *v39; // rbx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v43; // rcx
  int v44; // eax
  signed __int32 v45; // ett
  _DWORD *v46; // rcx
  int v47; // eax
  __int64 Flink; // rdx
  __int64 v49; // r15
  ULONG_PTR v50; // r12
  unsigned int v51; // r14d
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r9
  LONG *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  unsigned __int64 v59; // rdi
  _KPROCESS *Process; // r13
  unsigned __int64 v61; // r15
  int v62; // r12d
  int v63; // eax
  ULONG_PTR v64; // rdi
  unsigned __int64 valid; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  _DWORD *v69; // r9
  ULONG_PTR v70; // rdi
  unsigned __int64 v71; // rbx
  ULONG_PTR v72; // r13
  __int64 v73; // rax
  unsigned __int64 v74; // r15
  struct _LIST_ENTRY *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r15
  unsigned __int64 v78; // rdi
  __int64 v79; // r8
  __int64 v80; // r15
  unsigned __int64 v81; // r12
  _QWORD *CloneAddress; // rbx
  __int64 v83; // rcx
  _QWORD *v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  _DWORD *v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r10
  unsigned __int64 v93; // rbx
  unsigned __int64 v94; // rdx
  struct _LIST_ENTRY *v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r8
  _KPROCESS *v101; // rcx
  unsigned int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r10
  struct _LIST_ENTRY *v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  signed __int64 v111; // rax
  signed __int64 v112; // rtt
  __int64 v113; // r9
  __int64 v114; // rax
  ULONG_PTR v115; // r12
  ULONG_PTR v116; // rdi
  ULONG_PTR v117; // r15
  char v118; // bl
  __int64 v119; // r14
  _DWORD *v120; // rsi
  __int64 v121; // rcx
  unsigned __int64 v122; // rax
  __int64 v123; // rdi
  unsigned __int64 v124; // rbx
  char v125; // al
  unsigned __int64 v126; // rdi
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  bool v132; // zf
  int v133; // eax
  char v134; // r15
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v136; // r13
  unsigned __int64 v137; // rbx
  unsigned int v138; // edi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  struct _LIST_ENTRY *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rax
  __int64 v150; // rbx
  char v151; // al
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  unsigned __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  unsigned __int64 v160; // rdx
  _DWORD *v161; // rsi
  __int64 v162; // rax
  __int64 v163; // r14
  __int64 v164; // rbx
  __int64 v165; // r8
  __int64 v166; // rdx
  unsigned __int64 v167; // r8
  unsigned int v169; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v171; // [rsp+68h] [rbp-98h]
  unsigned __int64 v172; // [rsp+70h] [rbp-90h]
  int v173; // [rsp+78h] [rbp-88h]
  __int64 v174; // [rsp+80h] [rbp-80h]
  __int64 v175; // [rsp+88h] [rbp-78h] BYREF
  int v176; // [rsp+90h] [rbp-70h]
  unsigned int v177; // [rsp+94h] [rbp-6Ch]
  _DWORD *v178; // [rsp+98h] [rbp-68h] BYREF
  __int64 v179; // [rsp+A0h] [rbp-60h]
  unsigned int v180; // [rsp+A8h] [rbp-58h]
  __int16 v181; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v182; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v183; // [rsp+B8h] [rbp-48h]
  int v184; // [rsp+C0h] [rbp-40h]
  char *v185; // [rsp+C8h] [rbp-38h]
  __int64 v186; // [rsp+D0h] [rbp-30h]
  int v187; // [rsp+D8h] [rbp-28h] BYREF
  int v188; // [rsp+DCh] [rbp-24h] BYREF
  int v189; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v190; // [rsp+E4h] [rbp-1Ch]
  int v191; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  _DWORD *v193; // [rsp+F8h] [rbp-8h]
  __int64 v194; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v195; // [rsp+108h] [rbp+8h] BYREF
  __int64 v196; // [rsp+110h] [rbp+10h]
  __int64 v197; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v198; // [rsp+120h] [rbp+20h] BYREF
  __int64 v199; // [rsp+128h] [rbp+28h]
  int v200; // [rsp+130h] [rbp+30h] BYREF
  __int16 v201; // [rsp+134h] [rbp+34h]
  __int16 v202; // [rsp+136h] [rbp+36h]
  __int64 v203; // [rsp+138h] [rbp+38h]
  char *v204; // [rsp+140h] [rbp+40h]
  char *v205; // [rsp+148h] [rbp+48h]
  __int128 v206; // [rsp+150h] [rbp+50h]
  __int128 v207; // [rsp+160h] [rbp+60h]
  __int128 v208; // [rsp+170h] [rbp+70h]
  __int128 v209; // [rsp+180h] [rbp+80h]
  __int128 v210; // [rsp+190h] [rbp+90h]
  __int128 v211; // [rsp+1A0h] [rbp+A0h]
  __int128 v212; // [rsp+1B0h] [rbp+B0h]
  __int128 v213; // [rsp+1C0h] [rbp+C0h]
  __int128 v214; // [rsp+1D0h] [rbp+D0h]
  __int64 v215; // [rsp+1E0h] [rbp+E0h]
  int v216; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v217; // [rsp+1F4h] [rbp+F4h]
  __int16 v218; // [rsp+1F6h] [rbp+F6h]
  __int64 v219; // [rsp+1F8h] [rbp+F8h]
  char *v220; // [rsp+200h] [rbp+100h]
  char *v221; // [rsp+208h] [rbp+108h]
  __int128 v222; // [rsp+210h] [rbp+110h]
  __int128 v223; // [rsp+220h] [rbp+120h]
  __int128 v224; // [rsp+230h] [rbp+130h]
  __int128 v225; // [rsp+240h] [rbp+140h]
  __int128 v226; // [rsp+250h] [rbp+150h]
  __int128 v227; // [rsp+260h] [rbp+160h]
  __int128 v228; // [rsp+270h] [rbp+170h]
  __int128 v229; // [rsp+280h] [rbp+180h]
  __int128 v230; // [rsp+290h] [rbp+190h]
  __int64 v231; // [rsp+2A0h] [rbp+1A0h]

  v199 = a8;
  v171 = a2;
  v202 = 0;
  v215 = 0LL;
  v10 = a2;
  v218 = 0;
  v231 = 0LL;
  v11 = *(_DWORD *)(a2 + 48) & 0x70;
  v187 = 0;
  v197 = 0LL;
  v194 = 0LL;
  v169 = 0;
  v188 = 0;
  v175 = 0LL;
  v181 = 0;
  v206 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  v212 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0LL;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  if ( v11 == 32 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v180 = ProtectionMask;
  v15 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = ProtectionMask & 0xFFFFFFFE;
  v18 = ProtectionMask & 5;
  v185 = v14;
  v193 = v14;
  if ( v18 != 5 )
    v17 = v15;
  v219 = 20LL;
  v177 = v17;
  v19 = (__int64)v14;
  v216 = 1;
  v217 = (__int16)v14;
  v220 = v14;
  v221 = v14;
  v173 = v18;
  v20 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter1 = v20;
  v21 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v184 = (int)v14;
  v22 = v13 + 1664;
  CurrentThread = KeGetCurrentThread();
  v23 = *(_QWORD *)(v13 + 1680);
  v203 = 20LL;
  v200 = 1;
  v201 = 4;
  v204 = v14;
  v205 = v14;
  v183 = v21;
  v178 = v14;
  v179 = v13 + 1664;
  if ( *(char **)(v23 + 360) != v14 )
  {
    v24 = *(unsigned int *)(v10 + 52);
    LODWORD(v24) = v24 & 0x7FFFFFFF;
    if ( v24 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v25 = MiLockWorkingSetShared(v13 + 1664, v21, v13, v14);
      MiComputePageCommitment(a3, a4, v10, v25, 0, &v178);
      MiUnlockWorkingSetShared(v22, v25);
      if ( v178 )
      {
        result = MiChargeFullProcessCommitment(a1, v178);
        if ( (int)result < 0 )
          return result;
      }
      v21 = v183;
      v20 = BugCheckParameter1;
    }
  }
  v186 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v22 + 174));
  if ( v173 != 5 )
    goto LABEL_21;
  v26 = MiCountSharedPages(v10, v20, v21);
  v19 = v26;
  if ( a6 == 1 )
  {
    v27 = ((__int64)(v183 - v20) >> 3) - v26;
    v132 = v27 == -1;
    v28 = v27 + 1;
    v185 = (char *)v28;
    if ( !v132 && !(unsigned int)MiChargeCommit(v186, v28, 0) )
    {
      if ( v178 )
        MiReturnFullProcessCommitment(a1);
      return 3221225773LL;
    }
    v19 = 0LL;
    goto LABEL_21;
  }
  if ( !v26 || (v32 = MiChargeFullProcessCommitment(a1, v26), v32 >= 0) )
  {
LABEL_21:
    if ( (unsigned int)MiVadPureReserve(v10) == 1 )
    {
      v184 = 1;
      --CurrentThread->SpecialApcDisable;
      v29 = (volatile signed __int64 *)(a1 + 1232);
      ExAcquirePushLockExclusiveEx(a1 + 1232, 0LL);
      v30 = MiCommitPageTablesForVad(v10, a3, a4);
      if ( v30 < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        KeAbPostRelease((ULONG_PTR)v29);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        if ( v185 )
        {
          MiReturnCommit(v186, v19);
        }
        else if ( v19 )
        {
          v31 = a1;
          MiReturnFullProcessCommitment(a1);
          goto LABEL_28;
        }
        v31 = a1;
LABEL_28:
        if ( v178 )
          MiReturnFullProcessCommitment(v31);
        return (unsigned int)v30;
      }
      v10 = v171;
    }
    if ( v19 )
    {
      v33 = *(unsigned int *)(v10 + 52);
      LODWORD(v33) = v33 & 0x7FFFFFFF;
      v34 = v19 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v33);
      *(_DWORD *)(v10 + 52) ^= (*(_DWORD *)(v10 + 52) ^ v34) & 0x7FFFFFFF;
      *(_BYTE *)(v10 + 34) = v34 >> 31;
    }
    v35 = *(_BYTE *)(v22 + 184) & 7;
    v176 = 1;
    v182 = 0LL;
    v36 = 0LL;
    v172 = 0LL;
    if ( v35 < 6u )
    {
      v39 = &dword_140C4F780;
      if ( v35 != 2 )
        v39 = (LONG *)(v22 + 192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v39, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = v43[6];
            v43[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw(v39);
        v45 = *v39 & 0x7FFFFFFF;
        if ( v45 != _InterlockedCompareExchange(v39, v45 + 1, v45) )
        {
          v46 = CurrentPrcb->SchedulerAssist;
          if ( v46 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v47 = v46[6] - 1;
              v46[6] = v47;
              if ( !v47 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v39, CurrentIrql);
        }
      }
      if ( v39[1] )
        _InterlockedExchange(v39 + 1, 0);
      v36 = v172;
      LOBYTE(v37) = CurrentIrql;
      v174 = CurrentIrql;
    }
    else
    {
      v37 = KeGetCurrentIrql();
      v174 = v37;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v37 + 1)) - 1) & 4;
      }
    }
    MiQueryAddressState(a3, a3, v37, v171, 0LL, (int *)&v169, &v188, &v181, &v197, &v187);
    v49 = v171;
    *a7 = MmProtectToValue[v169];
    v50 = BugCheckParameter1;
    v51 = (*(_DWORD *)(v49 + 48) >> 12) & 0x3F;
    v190 = v51;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v50 > v183 )
          {
            MiFlushTbList(&v216);
            if ( v36 )
              MiUnlockPageTableInternal(v22, v36);
            MiUnlockWorkingSetShared(v22, v37);
            if ( v184 == 1 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1232));
              KeAbPostRelease(a1 + 1232);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            v161 = v193;
            v162 = (__int64)v185;
            if ( v193 && v173 == 5 )
            {
              v162 = v185 - (char *)v193;
              v161 = 0LL;
            }
            v163 = v186;
            if ( v162 )
              MiReturnCommit(v186, v162);
            v164 = v182;
            if ( v182 )
            {
              v165 = *(unsigned int *)(v49 + 52);
              LODWORD(v165) = v165 & 0x7FFFFFFF;
              v166 = v182 - (_QWORD)v161;
              v167 = (((unsigned __int64)*(unsigned __int8 *)(v49 + 34) << 31) | v165) - v182;
              *(_DWORD *)(v49 + 52) ^= (*(_DWORD *)(v49 + 52) ^ v167) & 0x7FFFFFFF;
              *(_BYTE *)(v49 + 34) = v167 >> 31;
              MiReturnCommit(v163, v166);
              MiReturnFullProcessCharges(a1, v164);
            }
            if ( v178 )
              MiReturnFullProcessCommitment(a1);
            return 0LL;
          }
          v52 = 0xFFFFFA8000000000uLL;
          v53 = 0x8000000000000000uLL;
          v54 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v50 & 0xFFF) == 0 || v176 == 1 )
          {
            v176 = 0;
            if ( v36 )
            {
              MiFlushTbList(&v216);
              MiUnlockPageTableInternal(v22, v36);
            }
            v55 = &dword_140C4F780;
            if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
              v55 = (LONG *)(v22 + 192);
            if ( (*v55 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v22, v37);
              MiLockWorkingSetShared(v22, v56, v57, v58);
            }
            v59 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v172 = v59;
            v198 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            v61 = (__int64)(v50 << 25) >> 16;
            if ( v61 < 0xFFFFF68000000000uLL || (v62 = 0, v61 > 0xFFFFF6FFFFFFFFFFuLL) )
              v62 = 1;
            while ( 1 )
            {
              if ( v62 )
              {
                v63 = MiFastLockLeafPageTable((__int64)&Process[1].ActiveProcessorsPadding[6], v61, 0);
                if ( v63 )
                  break;
              }
              v64 = BugCheckParameter1;
              valid = MiLockLowestValidPageTable(
                        (__int64)&Process[1].ActiveProcessorsPadding[6],
                        BugCheckParameter1,
                        &v198);
              if ( valid == v172 )
                goto LABEL_88;
              MiUnlockPageTableInternal(&Process[1].ActiveProcessorsPadding[6], valid);
              MiFlushTbList(&v216);
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v174);
              v66 = MmAccessFault(((unsigned __int64)v51 << 57) | 0x100000000000002LL, v64, 0, 0LL);
              v70 = v66;
              if ( v66 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v70, (ULONG_PTR)Process, BugCheckParameter1);
              }
              MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v67, v68, v69);
              v59 = v172;
            }
            if ( v63 != 1 )
            {
              while ( 1 )
                v59 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
LABEL_88:
            v50 = BugCheckParameter1;
            v53 = 0x8000000000000000uLL;
            v49 = v171;
            v54 = 0xFFFFF6FB7DBED7F8uLL;
            v52 = 0xFFFFFA8000000000uLL;
          }
          v71 = *(_QWORD *)v50;
          v72 = (__int64)(v50 << 25) >> 16;
          if ( v50 >= 0xFFFFF6FB7DBED000uLL
            && v50 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, Flink, 0x8000000000000000uLL, 0xFFFFF6FB7DBED7F8uLL)
            && (v71 & 1) != 0
            && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
          {
            Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v73 = *(_QWORD *)(Flink + 8 * ((v50 >> 3) & 0x1FF));
              Flink = v71 | 0x20;
              if ( (v73 & 0x20) == 0 )
                Flink = v71;
              v71 = Flink;
              if ( (v73 & 0x42) != 0 )
                v71 = Flink | 0x42;
            }
          }
          v175 = v71;
          if ( (v71 & 1) == 0 )
            break;
          v74 = v71;
          if ( (unsigned __int64)&v175 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v175 <= v54
            && (unsigned int)MiPteHasShadow(&v175, Flink, v53, v54)
            && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
          {
            v75 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v75 )
            {
              v74 = v71 | 0x20;
              v76 = *((_QWORD *)&v75->Flink + (((unsigned __int64)&v175 >> 3) & 0x1FF));
              if ( (v76 & 0x20) == 0 )
                v74 = v71;
              if ( (v76 & 0x42) != 0 )
                v74 |= 0x42uLL;
            }
          }
          v77 = (v74 >> 12) & 0xFFFFFFFFFLL;
          v196 = v77;
          v78 = v52 + 48 * v77;
          if ( (unsigned int)MI_PFN_IS_PROTO(v78) )
          {
            v80 = *(_QWORD *)(v78 + 8);
            v81 = v79 | v80;
            if ( (v79 | v80) == MiGetProtoPteAddress(v171, v72 >> 12, 0, &v194) )
            {
              LODWORD(v77) = v196;
              goto LABEL_122;
            }
            CloneAddress = 0LL;
            if ( (*(_QWORD *)(v78 + 40) & 0x1000000000LL) != 0 || v80 <= 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v81);
              if ( *(_QWORD *)(*(_QWORD *)(v83 + 1680) + 360LL) <= CloneAddress[12] )
                CloneAddress = v84;
            }
            MiFlushTbList(&v216);
            v50 = BugCheckParameter1;
            LODWORD(v37) = MiCopyOnWrite(v72, (ULONG_PTR *)BugCheckParameter1, -1LL, 0);
            if ( (int)v37 >= 0 )
            {
              if ( CloneAddress )
                v178 = (_DWORD *)((char *)v178 - 1);
              goto LABEL_279;
            }
            v22 = v179;
            MiUnlockPageTableInternal(v179, v172);
            MiUnlockWorkingSetShared(v22, v174);
            MiCopyOnWriteCheckConditions(v22, (unsigned int)v37);
            v176 = 1;
            v172 = 0LL;
            v36 = 0LL;
            MiLockWorkingSetShared(v22, v85, v86, v87);
            LOBYTE(v37) = v174;
            v49 = v171;
          }
          else
          {
LABEL_122:
            if ( (a5 & 0x101) == 0 && (a6 != 1 || (unsigned int)MI_PFN_IS_PROTO(v78)) )
            {
              if ( !(unsigned int)MI_PFN_IS_PROTO(v78) )
              {
                v189 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v189, v88, v90, v91);
                  while ( *(__int64 *)(v78 + 24) < 0 );
                }
                LODWORD(v107) = MiSanitizePfnProtection(v171, (*(_QWORD *)(v78 + 16) >> 5) & 0x1FLL, v177);
                v114 = 32 * (v107 & 0x1F);
                if ( v113 )
                  *(_QWORD *)(v78 + 16) = v114 | v113 & 0xFFFFFFFFFFFFFC1FuLL;
                else
                  *(_QWORD *)(v78 + 16) = MiSwizzleInvalidPte(v114);
                _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_175;
              }
              if ( v173 != 5 && (v71 & 0x200) != 0 )
                ++v182;
              v93 = v92 + ((v72 >> 9) & 0x7FFFFFFFF8LL);
              v94 = *(_QWORD *)v93;
              if ( v93 >= 0xFFFFF6FB7DBED000uLL
                && v93 <= 0xFFFFF6FB7DBED7F8uLL
                && (unsigned int)MiPteHasShadow(v89, v94, v90, v91)
                && (v94 & 1) != 0
                && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
              {
                v95 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v95 )
                {
                  v96 = *((_QWORD *)&v95->Flink + ((v93 >> 3) & 0x1FF));
                  v97 = v94 | 0x20;
                  if ( (v96 & 0x20) == 0 )
                    v97 = v94;
                  v94 = v97;
                  if ( (v96 & 0x42) != 0 )
                    v94 = v97 | 0x42;
                }
              }
              v98 = (v94 >> 60) & 7;
              if ( !(_DWORD)v98 )
                goto LABEL_147;
              v99 = *(_QWORD *)v93;
              if ( (*(_QWORD *)v93 & 0x10) != 0 )
                goto LABEL_145;
              if ( (v99 & 8) != 0 )
              {
                v98 = (unsigned int)v98 | 0x18;
                goto LABEL_146;
              }
              if ( (v99 & 0x10) != 0 )
LABEL_145:
                v98 = (unsigned int)v98 | 8;
LABEL_146:
              if ( (_DWORD)v98 )
              {
LABEL_154:
                v169 = v98;
                v102 = MiSanitizePfnProtection(v171, v98, v180);
                v106 = *(_QWORD *)v93;
                v107 = v102;
                if ( v93 >= 0xFFFFF6FB7DBED000uLL
                  && v93 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(v103, v106, v104, v105)
                  && (v106 & 1) != 0
                  && ((v106 & 0x20) == 0 || (v106 & 0x42) == 0) )
                {
                  v108 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v108 )
                  {
                    v109 = *((_QWORD *)&v108->Flink + ((v93 >> 3) & 0x1FF));
                    v110 = v106 | 0x20;
                    if ( (v109 & 0x20) == 0 )
                      v110 = v106;
                    v106 = v110;
                    if ( (v109 & 0x42) != 0 )
                      v106 = v110 | 0x42;
                  }
                }
                v111 = *(_QWORD *)v93;
                do
                {
                  v112 = v111;
                  v111 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v93,
                           v106 & 0xF00000000000000LL | (v107 << 60) & 0x7F00000000000000LL | v111 & 0x80FFFFFFFFFFFFFFuLL,
                           v111);
                }
                while ( v112 != v111 );
LABEL_175:
                v115 = BugCheckParameter1;
                MiRevertValidPte(v171, BugCheckParameter1, v107, v77, (__int64)&v216);
                v50 = v115 + 8;
                BugCheckParameter1 = v50;
                goto LABEL_279;
              }
LABEL_147:
              v100 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v78 + 16) >> 5) & 0x1F;
              if ( (*(_QWORD *)(v78 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v78 + 8) <= 0 )
              {
                v101 = KeGetCurrentThread()->ApcState.Process;
                if ( v101[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress((__int64)v101, *(_QWORD *)(v78 + 8) | 0x8000000000000000uLL) )
                {
                  LODWORD(v100) = MmMakeProtectNotWriteCopy[v100];
                }
                v98 = (unsigned int)v100;
              }
              else
              {
                v98 = (unsigned int)MmMakeProtectNotWriteCopy[v100];
              }
              goto LABEL_154;
            }
            Flink = BugCheckParameter1;
            v116 = BugCheckParameter1;
            v117 = (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) == (v183 & 0xFFFFFFFFFFFFF000uLL) )
              v117 = v183;
            v118 = 0;
            if ( BugCheckParameter1 <= v117 )
            {
              v119 = v179;
              v120 = (_DWORD *)v199;
              while ( 1 )
              {
                v175 = MI_READ_PTE_LOCK_FREE(v116);
                if ( (v175 & 1) == 0
                  || (a5 & 0x101) == 0
                  && (a6 != 1
                   || (v122 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v175),
                       (unsigned int)MI_PFN_IS_PROTO(48 * ((v122 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL))) )
                {
LABEL_192:
                  v51 = v190;
                  goto LABEL_193;
                }
                if ( (MiGetWsleContents(v121, v72) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v200, v72, 1LL, 0LL);
                if ( HIDWORD(v203) == (_DWORD)v203 )
                  goto LABEL_187;
LABEL_191:
                v116 += 8LL;
                v72 += 4096LL;
                if ( v116 > v117 )
                  goto LABEL_192;
              }
              v118 = 1;
              *v120 = 1;
LABEL_187:
              if ( HIDWORD(v203) )
                MiFreeWsleList(v119, (__int64)&v200, 0);
              if ( v118 == 1 )
              {
                MiUnlockVa(v119, v72);
                v118 = 0;
              }
              goto LABEL_191;
            }
LABEL_193:
            if ( !HIDWORD(v203) )
            {
              v50 = BugCheckParameter1;
              goto LABEL_279;
            }
            v22 = v179;
            MiFreeWsleList(v179, (__int64)&v200, 0);
            v50 = BugCheckParameter1;
            v36 = v172;
            LOBYTE(v37) = v174;
            v49 = v171;
          }
        }
        if ( (v71 & 0x400) == 0 )
          break;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v71) )
          goto LABEL_206;
        v123 = v71;
        if ( qword_140C4DF40 && (v71 & 0x10) == 0 )
          v123 = v71 & ~qword_140C4DF40;
        if ( v123 >> 16 == MiGetProtoPteAddress(v49, v72 >> 12, 0, &v194) )
        {
LABEL_206:
          if ( v173 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v71) && (v71 & 0xA0) == 0xA0 )
            ++v182;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v71) )
            v124 = v71 >> 5;
          else
            LODWORD(v124) = *(unsigned __int16 *)(*(_QWORD *)(v49 + 72) + 32LL) >> 1;
          v169 = v124 & 0x1F;
          v125 = MiSanitizePfnProtection(v49, v124 & 0x1F, v180);
          v175 = MiSwizzleInvalidPte(32 * (v125 & 0x1F | 0xFFFFFFFFF8000020uLL));
          v126 = v175;
          v127 = v175;
          if ( !(unsigned int)MiPteInShadowRange(v50, v128) )
            goto LABEL_276;
          if ( !(unsigned int)MiPteHasShadow(v129, Flink, v130, v131) )
            goto LABEL_273;
          v132 = HIBYTE(word_140C4E008) == 0;
LABEL_269:
          v160 = v126;
          if ( v132 && (v126 & 1) != 0 )
            v160 = v126 | 0x8000000000000000uLL;
          *(_QWORD *)v50 = v160;
          MiWritePteShadow(v50, v160);
          v50 += 8LL;
          BugCheckParameter1 = v50;
          goto LABEL_279;
        }
        MiFlushTbList(&v216);
        LOBYTE(v37) = v174;
        if ( (int)MiMakeProtoLeafValid(v50) < 0 )
        {
          v50 += 8LL;
          BugCheckParameter1 = v50;
        }
        v36 = v172;
        v22 = v179;
        v49 = v171;
        v176 = 1;
      }
      if ( (v71 & 0x800) == 0 )
        break;
      if ( a6 == 1 )
      {
        v133 = MiTryDeleteTransitionPte(v50);
        if ( v133 == 3 )
        {
          v193 = (_DWORD *)((char *)v193 + 1);
        }
        else if ( v133 == 1 )
        {
          goto LABEL_279;
        }
LABEL_225:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_226:
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v50 << 25) >> 16, Flink);
        MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
        v134 = 1;
        goto LABEL_228;
      }
      if ( !(unsigned int)MiSetProtectionOnTransitionPte(v49, v50, v177, 1LL) )
        goto LABEL_277;
LABEL_279:
      v22 = v179;
      v36 = v172;
      LOBYTE(v37) = v174;
      v49 = v171;
    }
    v134 = 0;
    if ( a6 == 1 )
    {
      if ( v71 )
      {
        MiReleasePageFileSpace(v186, v71, 1LL);
        if ( IS_PTE_NOT_DEMAND_ZERO(v71) )
          goto LABEL_225;
        goto LABEL_226;
      }
    }
    else if ( v71 )
    {
      v169 = (v71 >> 5) & 0x1F;
      v177 = MiSanitizePfnProtection(v171, (v71 >> 5) & 0x1F, v177);
      v126 = v71 ^ ((unsigned __int16)v71 ^ (unsigned __int16)(32 * v177)) & 0x3E0;
      v175 = v126;
      v127 = v126;
      if ( !(unsigned int)MiPteInShadowRange(v50, v156) )
        goto LABEL_276;
      if ( !(unsigned int)MiPteHasShadow(v157, Flink, v158, v159) )
      {
LABEL_273:
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v126 & 1) != 0 )
        {
          v127 |= 0x8000000000000000uLL;
        }
LABEL_276:
        *(_QWORD *)v50 = v127;
LABEL_277:
        v50 += 8LL;
        BugCheckParameter1 = v50;
        goto LABEL_279;
      }
      v132 = HIBYTE(word_140C4E008) == 0;
      goto LABEL_269;
    }
LABEL_228:
    v136 = (v72 >> 18) & 0x3FFFFFF8;
    v137 = *(_QWORD *)((unsigned int)v136 - 0x904C0000000LL);
    v138 = v136 + 0x40000000;
    if ( (unsigned int)MiPteInShadowRange((unsigned int)v136 - 0x904C0000000LL, Flink)
      && (unsigned int)MiPteHasShadow(v140, v139, v141, v142)
      && (v137 & 1) != 0
      && ((v137 & 0x20) == 0 || (v137 & 0x42) == 0) )
    {
      v139 = v138;
      v143 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v143 )
      {
        v144 = *((_QWORD *)&v143->Flink + (((unsigned __int64)v138 >> 3) & 0x1FF));
        v139 = v137 | 0x20;
        if ( (v144 & 0x20) == 0 )
          v139 = v137;
        v137 = v139;
        if ( (v144 & 0x42) != 0 )
          v137 = v139 | 0x42;
      }
    }
    v195 = v137;
    if ( (unsigned int)MiPteInShadowRange(&v195, v139)
      && (unsigned int)MiPteHasShadow(v146, v145, v147, v148)
      && (v137 & 1) != 0
      && ((v137 & 0x20) == 0 || (v137 & 0x42) == 0) )
    {
      v145 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v145 )
      {
        v149 = *(_QWORD *)(v145 + 8 * (((unsigned __int64)&v195 >> 3) & 0x1FF));
        v145 = v137 | 0x20;
        if ( (v149 & 0x20) == 0 )
          v145 = v137;
        v137 = v145;
        if ( (v149 & 0x42) != 0 )
          v137 = v145 | 0x42;
      }
    }
    v150 = 48 * ((v137 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v191 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v150 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v191, v145, v147, v148);
      while ( *(__int64 *)(v150 + 24) < 0 );
    }
    *(_QWORD *)(v150 + 16) ^= ((unsigned int)*(_QWORD *)(v150 + 16) ^ ((unsigned int)*(_QWORD *)(v150 + 16) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v150 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MmIsAddressValidEx(*(_QWORD *)(v150 + 8) | 0x8000000000000000uLL);
    if ( v173 != 5 && (v134 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v171, v50)) )
      ++v182;
    v169 = (*(unsigned __int16 *)(*(_QWORD *)(v171 + 72) + 32LL) >> 1) & 0x1F;
    v151 = MiSanitizePfnProtection(0LL, v169, v180);
    Flink = MiSwizzleInvalidPte(32 * (v151 & 0x1F | 0xFFFFFFFFF8000020uLL));
    v175 = Flink;
    if ( v50 < 0xFFFFF6FB7DBED000uLL || v50 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_265;
    if ( !(unsigned int)MiPteHasShadow(v152, Flink, v153, v154) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (Flink & 1) != 0 )
      {
        Flink |= 0x8000000000000000uLL;
      }
LABEL_265:
      *(_QWORD *)v50 = Flink;
      v50 += 8LL;
      BugCheckParameter1 = v50;
      goto LABEL_279;
    }
    v155 = Flink;
    if ( !HIBYTE(word_140C4E008) && (Flink & 1) != 0 )
      v155 = Flink | 0x8000000000000000uLL;
    *(_QWORD *)v50 = v155;
    MiWritePteShadow(v50, v155);
    v50 += 8LL;
    BugCheckParameter1 = v50;
    goto LABEL_279;
  }
  if ( v178 )
    MiReturnFullProcessCommitment(a1);
  return (unsigned int)v32;
}
