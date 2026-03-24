/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1402BD4D0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x140391D80 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x1402873F4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140287430 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140288A30 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x1402BEB80 (RtlpLfhBlockBitmapAllocate.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402FF000 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140303A38 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403085A0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140308854 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x140308B50 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140314C60 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x1403920D4 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F8014 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // r10
  int v7; // r13d
  ULONG_PTR v8; // r14
  unsigned int v9; // esi
  signed __int64 v10; // rdi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // r8d
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 v25; // r11
  unsigned int v26; // r14d
  char v27; // cl
  __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // rdx
  signed __int16 *v32; // rsi
  signed __int16 *v33; // rdx
  unsigned __int64 v34; // r13
  char v35; // r11
  signed __int16 v36; // ax
  signed __int16 v37; // tt
  int v38; // r10d
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r14
  __int64 Subsegment; // rdi
  __int64 v44; // r9
  unsigned __int16 v45; // dx
  __int64 v46; // rdi
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // r14
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // r12
  unsigned int v51; // r8d
  __int64 *v52; // r10
  _QWORD *v53; // r8
  __int64 **v54; // rcx
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 *v57; // rax
  bool v58; // cc
  KIRQL v59; // r13
  __int64 v60; // r12
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r15d
  __int64 v64; // rdx
  unsigned int v65; // r14d
  unsigned int v66; // esi
  unsigned __int16 v67; // ax
  int v68; // r8d
  unsigned int v69; // eax
  unsigned int v70; // r14d
  char v71; // cl
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // r12
  signed __int16 *v75; // rsi
  signed __int16 *v76; // rdx
  unsigned __int64 v77; // r15
  signed __int16 v78; // ax
  signed __int16 v79; // tt
  int v80; // r10d
  __int64 v81; // r11
  unsigned int v82; // r13d
  __int64 v83; // rdx
  __int64 v84; // r15
  int v85; // edx
  KIRQL v86; // al
  struct _KTHREAD *v87; // r13
  ULONG_PTR v88; // r9
  KIRQL v89; // al
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  bool v94; // zf
  unsigned __int8 v95; // si
  struct _KTHREAD *v96; // rsi
  ULONG_PTR v97; // r9
  unsigned __int8 v98; // r12
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // r14
  __int64 v103; // rdx
  unsigned __int8 v104; // al
  __int64 v105; // rcx
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  int v108; // eax
  char v109; // cl
  int (__fastcall *v110)(__int64, unsigned __int64, _QWORD, __int64); // rax
  int v111; // esi
  unsigned int v112; // r10d
  unsigned int v113; // esi
  __int64 v114; // rcx
  ULONG_PTR v115; // r10
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rsi
  unsigned __int8 v120; // al
  __int64 v121; // rcx
  ULONG_PTR v122; // rsi
  KIRQL v123; // r13
  __int64 v124; // rax
  KIRQL v125; // al
  struct _KTHREAD *v126; // r14
  __int64 v127; // r8
  KIRQL v128; // r13
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r10
  _DWORD *v131; // r9
  int v132; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // r8
  unsigned __int8 v135; // si
  int v136; // r11d
  char v137; // cl
  int (__fastcall *v138)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v139; // r10d
  unsigned int v140; // esi
  __int64 v141; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v145; // eax
  unsigned int v146; // r13d
  __int16 v147; // r13
  struct _KTHREAD *v148; // rbx
  ULONG_PTR v149; // r9
  unsigned __int8 v150; // r12
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rdi
  unsigned __int8 v154; // al
  __int64 v155; // rcx
  unsigned __int8 v156; // al
  int v157; // eax
  unsigned __int8 v158; // r13
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r14
  unsigned __int8 v162; // al
  __int64 v163; // rcx
  unsigned __int8 v164; // r13
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // rcx
  __int64 v168; // rsi
  unsigned __int8 v169; // al
  __int64 v170; // rcx
  KIRQL v171; // al
  __int64 v172; // rax
  KIRQL v173; // al
  __int64 v174; // r8
  struct _KTHREAD *v175; // rsi
  __int64 v176; // r8
  unsigned __int8 v177; // r13
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r14
  __int64 v181; // rdx
  unsigned __int8 v182; // al
  __int64 v183; // rcx
  unsigned __int8 v184; // al
  unsigned __int8 v185; // si
  struct _KPRCB *v186; // r10
  int v187; // eax
  ULONG_PTR v188; // r15
  struct _KTHREAD *v189; // rbx
  ULONG_PTR v190; // r9
  unsigned __int8 v191; // r14
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // rcx
  __int64 v195; // rdi
  __int64 v196; // rdx
  __int64 v197; // rcx
  unsigned __int8 v198; // al
  int v199; // eax
  struct _KTHREAD *v200; // rbx
  __int64 v201; // r8
  unsigned __int8 v202; // r15
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rsi
  unsigned __int8 v206; // r12
  __int64 v207; // rcx
  unsigned __int8 v208; // al
  int v209; // eax
  KIRQL v210; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v211; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v212; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v213; // [rsp+41h] [rbp-BFh]
  int v214; // [rsp+44h] [rbp-BCh]
  unsigned int v215; // [rsp+44h] [rbp-BCh]
  char v216; // [rsp+48h] [rbp-B8h] BYREF
  char v217[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v218; // [rsp+4Ch] [rbp-B4h]
  int v219; // [rsp+50h] [rbp-B0h]
  __int64 v220; // [rsp+58h] [rbp-A8h]
  unsigned int v221; // [rsp+60h] [rbp-A0h]
  unsigned int v222; // [rsp+64h] [rbp-9Ch]
  int v223; // [rsp+68h] [rbp-98h]
  ULONG_PTR v224; // [rsp+70h] [rbp-90h]
  __int64 v225; // [rsp+78h] [rbp-88h]
  __int64 v226; // [rsp+80h] [rbp-80h]
  int v227; // [rsp+88h] [rbp-78h]
  int v228; // [rsp+8Ch] [rbp-74h]
  int v229; // [rsp+90h] [rbp-70h] BYREF
  int v230; // [rsp+94h] [rbp-6Ch]
  int v231; // [rsp+98h] [rbp-68h]
  int v232; // [rsp+9Ch] [rbp-64h]
  int v233; // [rsp+A0h] [rbp-60h]
  int v234; // [rsp+A4h] [rbp-5Ch]
  int v235; // [rsp+A8h] [rbp-58h]
  int v236; // [rsp+ACh] [rbp-54h] BYREF
  int v237; // [rsp+B0h] [rbp-50h]
  int v238; // [rsp+B4h] [rbp-4Ch]
  int v239; // [rsp+B8h] [rbp-48h]
  int v240; // [rsp+BCh] [rbp-44h]
  int v241; // [rsp+C0h] [rbp-40h]
  int v242; // [rsp+C8h] [rbp-38h]
  int v243; // [rsp+CCh] [rbp-34h]
  int v244; // [rsp+D0h] [rbp-30h]
  int v245; // [rsp+D4h] [rbp-2Ch]
  _QWORD v246[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v247[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v210 = -1;
  v7 = 0;
  v218 = 0;
  v223 = 0;
  v8 = a3 + 16;
  v225 = 0LL;
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v5 + 56));
          v10 = *(_QWORD *)(v5 + 56);
          if ( (v10 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v10 - 1, v10);
              if ( v10 == v11 )
                break;
              v223 = 1;
              v10 = v11;
              if ( (v11 & 0xFFF) == 0 )
                goto LABEL_38;
            }
            v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
            if ( v12 )
              break;
          }
LABEL_38:
          if ( v7 == 2 )
            goto LABEL_39;
          v85 = *(unsigned __int8 *)(v6 + 57);
          v7 = 2;
          v218 = 2;
          v86 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v85);
          v6 = a1;
          v210 = v86;
        }
        if ( !v7 )
        {
          v13 = 0;
          goto LABEL_8;
        }
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
          {
            v128 = v210;
            if ( v210 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v145 = ~(unsigned __int16)(-1LL << (v210 + 1));
              v94 = (v145 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v145;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v210);
                v13 = 0;
                v218 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v128 = v210;
          }
          __writecr8(v128);
          v13 = 0;
          v218 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 16));
        v245 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v158 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v159) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v160, v159);
        v244 = v160;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v161 = (__int64)&CurrentThread->LockEntries[v160];
          v159 = ~(1 << v160) & (unsigned int)v159;
          if ( (*(_BYTE *)(v161 + 26) & 1) != 0
            && (*(_DWORD *)(v161 + 32) & 1) == 0
            && (*(_QWORD *)(v161 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v161 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v161 + 26) &= ~1u;
            if ( *(_QWORD *)(v161 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v160, v159);
          v244 = v160;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v161 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, (unsigned int)SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v161 + 32) |= 2u;
          if ( *(__int64 *)(v161 + 32) < 0 )
            KiAbEntryRemoveFromTree(v161, v159, SessionId);
          v245 = *(_DWORD *)(v161 + 88) & 0x1FFFF;
          *(_DWORD *)(v161 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v161 + 25) &= ~1u;
          *(_QWORD *)(v161 + 32) = 0LL;
          v162 = 1 << ((signed __int64)(v161 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v158 == 1 )
            CurrentThread->AbEntrySummary |= v162;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v162);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v94 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v94
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v163);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v218 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v246[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v246[0] = v15;
        LODWORD(v220) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v221 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v221;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = RtlpLowFragHeapRandomData[(unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18)];
          v21 = v221;
          if ( a4 >= v221 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v246, *(unsigned __int16 *)(v12 + 36), v13, v220, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v224) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v229 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v216 = -1;
        v211 = -1;
        v222 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v222 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v220) = 0;
        v226 = 0LL;
        v219 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v211;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v220;
                v38 = v219;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v241 = 1;
            v89 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v211 = v89;
          }
          v38 = v219;
          if ( v36 )
          {
            v23 = (unsigned int)(v220 + 1);
            LODWORD(v220) = v220 + 1;
            v226 = v30 >> 1;
            if ( v219 == -1 )
            {
              v38 = v30 >> 1;
              v219 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v220 - 1);
            LODWORD(v220) = v220 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v221;
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)((_DWORD)v23 << *(_BYTE *)(v12 + 44));
          v39 = a1;
          if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v23 / 4096);
        }
        else
        {
          v39 = a1;
        }
        if ( v38 != -1 )
        {
          v109 = *(_BYTE *)(v12 + 44);
          v110 = (int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))(v39 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v39 + 24));
          v111 = v226 - v38;
          v216 = v35;
          v112 = v38 << v109;
          v229 = v111 + 1;
          v113 = (v111 + 1) << v109;
          v114 = *(_QWORD *)v39;
          v219 = v112;
          if ( v110(v114, v12 + v112, v113, v24) < 0 )
          {
            v174 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v174, v222);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v184 = KeGetCurrentIrql(), v184 <= 0xFu) )
              {
                v185 = v211;
                if ( v211 <= 0xFu && v184 >= 2u )
                {
                  v186 = KeGetCurrentPrcb();
                  v24 = (__int64)v186->SchedulerAssist;
                  v187 = ~(unsigned __int16)(-1LL << (v211 + 1));
                  v94 = (v187 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v187 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v186);
                }
              }
              else
              {
                v185 = v211;
              }
              __writecr8(v185);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 24));
              v231 = 0;
              v175 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v176 = (unsigned int)MmGetSessionIdEx(v175->ApcState.Process);
              else
                v176 = 0xFFFFFFFFLL;
              --v175->SpecialApcDisable;
              v177 = ++v175->AbAllocationRegionCount;
              LODWORD(v178) = ((char)v175->AbEntrySummary | (char)v175->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v179, v178);
              v230 = v179;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v175->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v175, v12 + 24, (unsigned int)v176, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v180 = (__int64)&v175->LockEntries[v179];
                  v178 = ~(1 << v179) & (unsigned int)v178;
                  if ( (*(_BYTE *)(v180 + 26) & 1) != 0
                    && (*(_DWORD *)(v180 + 32) & 1) == 0
                    && (*(_QWORD *)(v180 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v180 + 40) == (_DWORD)v176 )
                  {
                    *(_BYTE *)(v180 + 26) &= ~1u;
                    if ( *(_QWORD *)(v180 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v179, v178);
                  v230 = v179;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v180 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v180 + 32) |= 2u;
                if ( *(__int64 *)(v180 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v180, v178, v176);
                v231 = *(_DWORD *)(v180 + 88) & 0x1FFFF;
                *(_DWORD *)(v180 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v180 + 25) &= ~1u;
                *(_QWORD *)(v180 + 32) = 0LL;
                v181 = (unsigned __int128)((v180 - (unsigned __int64)v175->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v182 = 1 << ((v181 >> 4) + (v181 < 0));
                if ( v177 == 1 )
                  v175->AbEntrySummary |= v182;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v175->AbOrphanedEntrySummary, v182);
              }
              --v175->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v175);
              v94 = v175->SpecialApcDisable++ == -1;
              if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v175->ApcState.ApcListHead[0].Flink != &v175->152 )
                KiCheckForKernelApcDelivery(v183);
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v224 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v224) >> 6) + 48),
                ~(3LL << ((2 * v224) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v218 )
              goto LABEL_32;
            v188 = v5 + 16;
            if ( v218 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v188, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v188);
                v235 = 0;
                v189 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v188) == 1 )
                  v190 = (unsigned int)MmGetSessionIdEx(v189->ApcState.Process);
                else
                  v190 = 0xFFFFFFFFLL;
                --v189->SpecialApcDisable;
                v191 = ++v189->AbAllocationRegionCount;
                LODWORD(v192) = ((char)v189->AbEntrySummary | (char)v189->AbOrphanedEntrySummary) ^ 0x3F;
                v193 = v188 & 0x7FFFFFFFFFFFFFFCLL;
                v94 = !_BitScanReverse((unsigned int *)&v194, v192);
                v234 = v194;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v195 = (__int64)&v189->LockEntries[v194];
                  v192 = ~(1 << v194) & (unsigned int)v192;
                  if ( (*(_BYTE *)(v195 + 26) & 1) != 0
                    && (*(_DWORD *)(v195 + 32) & 1) == 0
                    && (*(_QWORD *)(v195 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v193
                    && *(_DWORD *)(v195 + 40) == (_DWORD)v190 )
                  {
                    *(_BYTE *)(v195 + 26) &= ~1u;
                    if ( *(_QWORD *)(v195 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v194, v192);
                  v234 = v194;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v195 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v189->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v189, v188, v190, 0LL);
                }
                else
                {
                  *(_BYTE *)(v195 + 32) |= 2u;
                  if ( *(__int64 *)(v195 + 32) < 0 )
                    KiAbEntryRemoveFromTree(v195, v192, v193);
                  v235 = *(_DWORD *)(v195 + 88) & 0x1FFFF;
                  *(_DWORD *)(v195 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v195 + 25) &= ~1u;
                  *(_QWORD *)(v195 + 32) = 0LL;
                  v196 = (signed __int64)(v195 - (unsigned __int64)v189->LockEntries) / 96;
                  if ( v191 == 1 )
                    v189->AbEntrySummary |= 1 << v196;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v189->AbOrphanedEntrySummary, 1 << v196);
                }
                --v189->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v189);
                v94 = v189->SpecialApcDisable++ == -1;
                if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v189->ApcState.ApcListHead[0].Flink != &v189->152 )
                  KiCheckForKernelApcDelivery(v197);
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v188);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v188, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v188);
                KeAbPostRelease(v188);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v188);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v198 = KeGetCurrentIrql();
                if ( v198 <= 0xFu && v210 <= 0xFu && v198 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v199 = ~(unsigned __int16)(-1LL << (v210 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v199 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v199;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v210);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v219, v113, (__int64)&v229, 1, (__int64)&v216);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v146 = v21 - a4;
            if ( v146 == 1 )
              v147 = 0x8000;
            else
              v147 = v146 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v147;
          }
          v41 = a1;
          goto LABEL_29;
        }
        if ( (_DWORD)v24 )
        {
          if ( !*(_BYTE *)(v39 + 57) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 24));
            v233 = 0;
            v96 = KeGetCurrentThread();
            v224 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v115 = (ULONG_PTR)v96;
            v213 = ++v96->AbAllocationRegionCount;
            v116 = (v12 + 24) & 0x7FFFFFFFFFFFFFFCLL;
            LODWORD(v117) = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v118, v117);
            v232 = v118;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v119 = *(_QWORD *)(v115 + 800) + 96 * v118;
              v117 = ~(1 << v118) & (unsigned int)v117;
              if ( (*(_BYTE *)(v119 + 26) & 1) != 0
                && (*(_DWORD *)(v119 + 32) & 1) == 0
                && (*(_QWORD *)(v119 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v116
                && *(_DWORD *)(v119 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v119 + 26) &= ~1u;
                if ( *(_QWORD *)(v119 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v118, v117);
              v232 = v118;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v119 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v115 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v115, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v119 + 32) |= 2u;
              if ( *(__int64 *)(v119 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v119, v117, v116);
                v115 = v224;
              }
              v233 = *(_DWORD *)(v119 + 88) & 0x1FFFF;
              *(_DWORD *)(v119 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v119 + 25) &= ~1u;
              *(_QWORD *)(v119 + 32) = 0LL;
              v120 = 1 << ((v119 - *(_QWORD *)(v115 + 800)) / 96);
              if ( v213 == 1 )
                *(_BYTE *)(v115 + 792) |= v120;
              else
                _InterlockedOr8((volatile signed __int8 *)(v115 + 870), v120);
            }
            --*(_BYTE *)(v115 + 794);
            KiAbThreadRemoveBoosts(v115);
            v122 = v224;
            v94 = (*(_WORD *)(v224 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v122 + 152) != v122 + 152 )
              KiCheckForKernelApcDelivery(v121);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v106 = KeGetCurrentIrql(), v106 <= 0xFu) )
          {
            v95 = v211;
            if ( v211 <= 0xFu && v106 >= 2u )
            {
              v107 = KeGetCurrentPrcb();
              v24 = (__int64)v107->SchedulerAssist;
              v108 = ~(unsigned __int16)(-1LL << (v211 + 1));
              v94 = (v108 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v108 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v107);
                __writecr8(v211);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v211;
          }
          __writecr8(v95);
        }
LABEL_26:
        v25 = (unsigned int)v12 >> 12;
        goto LABEL_27;
      }
      if ( !v7 )
      {
        v7 = 1;
        v171 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v210 = v171;
      }
LABEL_39:
      if ( *(_QWORD *)(v5 + 8) )
        break;
      if ( v7 == 2 )
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
          goto LABEL_173;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        v228 = 0;
        v126 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v127 = (unsigned int)MmGetSessionIdEx(v126->ApcState.Process);
        else
          v127 = 0xFFFFFFFFLL;
        --v126->SpecialApcDisable;
        v150 = ++v126->AbAllocationRegionCount;
        LODWORD(v151) = ((char)v126->AbEntrySummary | (char)v126->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v152, v151);
        v243 = v152;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v153 = (__int64)&v126->LockEntries[v152];
          v151 = ~(1 << v152) & (unsigned int)v151;
          if ( (*(_BYTE *)(v153 + 26) & 1) != 0
            && (*(_DWORD *)(v153 + 32) & 1) == 0
            && (*(_QWORD *)(v153 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v153 + 40) == (_DWORD)v127 )
          {
            *(_BYTE *)(v153 + 26) &= ~1u;
            if ( *(_QWORD *)(v153 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v152, v151);
          v243 = v152;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v153 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v126->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v126, v5 + 16, (unsigned int)v127, 0LL);
        }
        else
        {
          *(_BYTE *)(v153 + 32) |= 2u;
          if ( *(__int64 *)(v153 + 32) < 0 )
            KiAbEntryRemoveFromTree(v153, v151, v127);
          v228 = 0;
          v228 = *(_DWORD *)(v153 + 88) & 0x1FFFF;
          *(_DWORD *)(v153 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v153 + 25) &= ~1u;
          *(_QWORD *)(v153 + 32) = 0LL;
          v154 = 1 << ((signed __int64)(v153 - (unsigned __int64)v126->LockEntries) / 96);
          if ( v150 == 1 )
            v126->AbEntrySummary |= v154;
          else
            _InterlockedOr8((volatile signed __int8 *)&v126->AbOrphanedEntrySummary, v154);
        }
        --v126->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v126);
        v94 = v126->SpecialApcDisable++ == -1;
        if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v126->ApcState.ApcListHead[0].Flink != &v126->152 )
          KiCheckForKernelApcDelivery(v155);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v129 = KeGetCurrentIrql(), v129 <= 0xFu) )
          {
            v123 = v210;
            if ( v210 <= 0xFu && v129 >= 2u )
            {
              v130 = KeGetCurrentPrcb();
              v131 = v130->SchedulerAssist;
              v132 = ~(unsigned __int16)(-1LL << (v210 + 1));
              v94 = (v132 & v131[5]) == 0;
              v131[5] &= v132;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v130);
            }
          }
          else
          {
            v123 = v210;
          }
          __writecr8(v123);
          goto LABEL_176;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8);
        KeAbPostRelease(v8);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
LABEL_176:
      Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)(a1 + 57));
      if ( !Subsegment )
      {
        Subsegment = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
        if ( !Subsegment )
        {
          v40 = 0LL;
          goto LABEL_33;
        }
      }
      v7 = 2;
      v218 = 2;
      v210 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v124 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v225 = v124;
    }
    v44 = v5 + 24;
    v45 = 1;
    v46 = *(_QWORD *)(v5 + 24);
    if ( v9 )
      v45 = 4096;
    if ( v46 == v44 )
      goto LABEL_308;
LABEL_43:
    v47 = *(_WORD *)(v46 + 32);
    v223 = 0;
    while ( 1 )
    {
      if ( v45 < v47 )
      {
        v48 = v45;
      }
      else
      {
        v48 = v47;
        if ( v7 == 1 )
        {
          v46 = *(_QWORD *)v46;
          if ( v46 == v44 )
          {
            v8 = v5 + 16;
LABEL_308:
            v46 = 0LL;
            goto LABEL_64;
          }
          goto LABEL_43;
        }
      }
      v49 = v47 - v48;
      v47 = _InterlockedCompareExchange16((volatile signed __int16 *)(v46 + 32), v47 - v48, v47);
      v50 = v48;
      v51 = v48 + v49;
      if ( v47 == v51 )
        break;
      if ( v47 < v51 )
        v223 = 1;
    }
    if ( *(_WORD *)(v46 + 32) )
      goto LABEL_62;
    v52 = (__int64 *)v46;
    switch ( *(_BYTE *)(v46 + 38) )
    {
      case 0:
        v53 = (_QWORD *)(v5 + 8);
        goto LABEL_50;
      case 1:
        v44 = v5 + 40;
        v53 = 0LL;
LABEL_50:
        v54 = (__int64 **)(v5 + 40);
        if ( v44 )
        {
          v55 = *(_QWORD *)v46;
          v56 = *(__int64 **)(v46 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) == v46 && *v56 == v46 )
          {
            *v56 = v55;
            *(_QWORD *)(v55 + 8) = v56;
            if ( v53 )
              --*v53;
            goto LABEL_55;
          }
LABEL_408:
          __fastfail(3u);
        }
LABEL_55:
        *(_BYTE *)(v46 + 38) = 1;
        if ( v5 != -40 )
        {
          v57 = *(__int64 **)(v5 + 48);
          if ( (__int64 **)*v57 != v54 )
            goto LABEL_408;
          *(_QWORD *)v46 = v54;
          *(_QWORD *)(v46 + 8) = v57;
          v52 = 0LL;
          *v57 = v46;
          *(_QWORD *)(v5 + 48) = v46;
        }
        if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
        {
          v52 = *v54;
          v172 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v172 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v172;
          *(_QWORD *)(v172 + 8) = v54;
          --MEMORY[0];
          *((_BYTE *)v52 + 38) = 2;
        }
        if ( v52 && *((_BYTE *)v52 + 38) == 2 )
          v52[2] = 0LL;
        break;
      case 2:
        v44 = 0LL;
        v53 = 0LL;
        goto LABEL_50;
    }
    v6 = a1;
LABEL_62:
    v58 = v48 <= 1u;
    v8 = v5 + 16;
    if ( !v58 )
      *(_QWORD *)(v5 + 56) = v46 ^ ((unsigned __int16)(v50 - 1) ^ (unsigned __int16)v46) & 0xFFF;
LABEL_64:
    if ( v7 == 2 )
    {
      if ( *(_BYTE *)(v6 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_67:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v90 = KeGetCurrentIrql(), v90 <= 0xFu) )
        {
          v59 = v210;
          if ( v210 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v210 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v210;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        v227 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        LODWORD(v99) = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v242 = v101;
        if ( v94 )
        {
LABEL_125:
          if ( (*((_DWORD *)&v87->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v87, v8, v88, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v102 = (__int64)&v87->LockEntries[v101];
            v99 = ~(1 << v101) & (unsigned int)v99;
            if ( (*(_BYTE *)(v102 + 26) & 1) != 0
              && (*(_DWORD *)(v102 + 32) & 1) == 0
              && (*(_QWORD *)(v102 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v100
              && *(_DWORD *)(v102 + 40) == (_DWORD)v88 )
            {
              *(_BYTE *)(v102 + 26) &= ~1u;
              if ( *(_QWORD *)(v102 + 32) )
                break;
            }
            v94 = !_BitScanReverse((unsigned int *)&v101, v99);
            v242 = v101;
            if ( v94 )
              goto LABEL_124;
          }
          if ( !v102 )
          {
LABEL_124:
            v8 = v5 + 16;
            goto LABEL_125;
          }
          *(_BYTE *)(v102 + 32) |= 2u;
          if ( *(__int64 *)(v102 + 32) < 0 )
            KiAbEntryRemoveFromTree(v102, v99, v100);
          v227 = 0;
          v227 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
          *(_DWORD *)(v102 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v102 + 25) &= ~1u;
          *(_QWORD *)(v102 + 32) = 0LL;
          v103 = (unsigned __int128)((v102 - (unsigned __int64)v87->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v8 = v5 + 16;
          v104 = 1 << ((v103 >> 4) + (v103 < 0));
          if ( v98 == 1 )
            v87->AbEntrySummary |= v104;
          else
            _InterlockedOr8((volatile signed __int8 *)&v87->AbOrphanedEntrySummary, v104);
        }
        --v87->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v87);
        v94 = v87->SpecialApcDisable++ == -1;
        if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v87->ApcState.ApcListHead[0].Flink != &v87->152 )
          KiCheckForKernelApcDelivery(v105);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    else
    {
      if ( *(_BYTE *)(v6 + 57) )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
        goto LABEL_67;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      KeAbPostRelease(v8);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    if ( v46 )
      break;
    v7 = 2;
    v218 = 2;
    v173 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v210 = v173;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v247[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v247[0] = v61;
  v222 = (unsigned int)v46 >> 12;
  LODWORD(v224) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v241 = v63;
  if ( a4 >= v63 )
    v60 = 1LL;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v66 = v64;
    v68 = 0;
    if ( a4 >= v63 )
      v66 = v64;
  }
  else
  {
    v67 = RtlpLfhIncrementDataSlot(v64, v64);
    if ( a4 >= v63 )
      v66 = v65;
    v68 = RtlpLowFragHeapRandomData[v67];
  }
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v247, *(unsigned __int16 *)(v46 + 36), v68, v224, v60);
  v221 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v222 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v222 ^ *(unsigned __int16 *)(v46 + 40);
  v236 = 0;
  v217[0] = -1;
  v73 = ((v70 + v222 - 1) >> v71) - (unsigned int)v23 + 1;
  v212 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v220 = 0LL;
  v76 = &v75[v73];
  v218 = 0;
  v214 = -1;
  if ( v75 >= v76 )
    goto LABEL_89;
  v77 = (unsigned __int64)v76;
  do
  {
    while ( 1 )
    {
      v78 = *v75;
      while ( v78 > 0 )
      {
        v79 = v78;
        v78 = _InterlockedCompareExchange16(v75, v78 + 1, v78);
        if ( v79 == v78 )
        {
          v23 = v218;
          v80 = v214;
          LODWORD(v81) = v220;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v224) = 1;
      v125 = RtlpHpAcquireLockExclusive((volatile LONG *)(v46 + 24), *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v212 = v125;
    }
    v80 = v214;
    if ( v78 )
    {
      v23 = v218 + 1;
      v81 = v74 >> 1;
      ++v218;
      v220 = v74 >> 1;
      if ( v214 == -1 )
      {
        v80 = v74 >> 1;
        v214 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v220;
      v23 = --v218;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v241;
  v82 = v221;
  if ( (_DWORD)v23 )
  {
    v23 = (unsigned int)((_DWORD)v23 << *(_BYTE *)(v46 + 44));
    v83 = a1;
    if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v23 / 4096);
  }
  else
  {
    v83 = a1;
  }
  if ( v80 == -1 )
  {
    if ( !(_DWORD)v24 )
      goto LABEL_89;
    if ( *(_BYTE *)(v83 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v156 = KeGetCurrentIrql(), v156 <= 0xFu) )
      {
        v135 = v212;
        if ( v212 <= 0xFu && v156 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v157 = ~(unsigned __int16)(-1LL << (v212 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v157 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v157;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v212);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v135 = v212;
      }
      __writecr8(v135);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 24));
    v240 = 0;
    v148 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v149 = (unsigned int)MmGetSessionIdEx(v148->ApcState.Process);
    else
      v149 = 0xFFFFFFFFLL;
    --v148->SpecialApcDisable;
    v164 = ++v148->AbAllocationRegionCount;
    LODWORD(v165) = ((char)v148->AbEntrySummary | (char)v148->AbOrphanedEntrySummary) ^ 0x3F;
    v166 = (v46 + 24) & 0x7FFFFFFFFFFFFFFCLL;
    v94 = !_BitScanReverse((unsigned int *)&v167, v165);
    v239 = v167;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v168 = (__int64)&v148->LockEntries[v167];
      v165 = ~(1 << v167) & (unsigned int)v165;
      if ( (*(_BYTE *)(v168 + 26) & 1) != 0
        && (*(_DWORD *)(v168 + 32) & 1) == 0
        && (*(_QWORD *)(v168 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v166
        && *(_DWORD *)(v168 + 40) == (_DWORD)v149 )
      {
        *(_BYTE *)(v168 + 26) &= ~1u;
        if ( *(_QWORD *)(v168 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v167, v165);
      v239 = v167;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v168 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v148->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v148, v46 + 24, v149, 0LL);
    }
    else
    {
      *(_BYTE *)(v168 + 32) |= 2u;
      if ( *(__int64 *)(v168 + 32) < 0 )
        KiAbEntryRemoveFromTree(v168, v165, v166);
      v240 = *(_DWORD *)(v168 + 88) & 0x1FFFF;
      *(_DWORD *)(v168 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v168 + 25) &= ~1u;
      *(_QWORD *)(v168 + 32) = 0LL;
      v169 = 1 << ((signed __int64)(v168 - (unsigned __int64)v148->LockEntries) / 96);
      if ( v164 == 1 )
        v148->AbEntrySummary |= v169;
      else
        _InterlockedOr8((volatile signed __int8 *)&v148->AbOrphanedEntrySummary, v169);
    }
    --v148->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v148);
    v94 = v148->SpecialApcDisable++ == -1;
    if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v148->ApcState.ApcListHead[0].Flink != &v148->152 )
      KiCheckForKernelApcDelivery(v170);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v40 = v46 + v70;
    if ( a4 < v63 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v46, v46 + v70, v63 - a4, v24);
    v84 = a1;
  }
  else
  {
    v136 = v81 - v80;
    v137 = *(_BYTE *)(v46 + 44);
    v138 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v139 = v80 << v137;
    v236 = v136 + 1;
    v140 = (v136 + 1) << v137;
    v141 = *(_QWORD *)v83;
    v217[0] = v212;
    v215 = v139;
    if ( v138(v141, v46 + v139, v140, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v215, v140, (__int64)&v236, 1, (__int64)v217);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v222);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v208 = KeGetCurrentIrql();
          if ( v208 <= 0xFu && v212 <= 0xFu && v208 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v209 = ~(unsigned __int16)(-1LL << (v212 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v209 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v209;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v212);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 24));
      v40 = 0LL;
      v238 = 0;
      v200 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v201 = (unsigned int)MmGetSessionIdEx(v200->ApcState.Process);
      else
        v201 = 0xFFFFFFFFLL;
      --v200->SpecialApcDisable;
      v202 = ++v200->AbAllocationRegionCount;
      LODWORD(v203) = ((char)v200->AbEntrySummary | (char)v200->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v204, v203);
      v237 = v204;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v200->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v200, v46 + 24, (unsigned int)v201, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v205 = (__int64)&v200->LockEntries[v204];
          v203 = ~(1 << v204) & (unsigned int)v203;
          if ( (*(_BYTE *)(v205 + 26) & 1) != 0
            && (*(_DWORD *)(v205 + 32) & 1) == 0
            && (*(_QWORD *)(v205 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v205 + 40) == (_DWORD)v201 )
          {
            *(_BYTE *)(v205 + 26) &= ~1u;
            if ( *(_QWORD *)(v205 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v204, v203);
          v237 = v204;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v205 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v205 + 32) |= 2u;
        if ( *(__int64 *)(v205 + 32) < 0 )
          KiAbEntryRemoveFromTree(v205, v203, v201);
        v238 = *(_DWORD *)(v205 + 88) & 0x1FFFF;
        *(_DWORD *)(v205 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v205 + 25) &= ~1u;
        *(_QWORD *)(v205 + 32) = 0LL;
        v206 = 1 << ((char)(v205 - LOBYTE(v200->LockEntries)) / 96);
        if ( v202 == 1 )
          v200->AbEntrySummary |= v206;
        else
          _InterlockedOr8((volatile signed __int8 *)&v200->AbOrphanedEntrySummary, v206);
        v40 = 0LL;
      }
      --v200->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v200);
      v94 = v200->SpecialApcDisable++ == -1;
      if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v200->ApcState.ApcListHead[0].Flink != &v200->152 )
        KiCheckForKernelApcDelivery(v207);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v84 = a1;
    }
    if ( v82 != -1 )
      _InterlockedAnd64(
        (volatile signed __int64 *)(v46 + 8 * ((unsigned __int64)(2 * v82) >> 6) + 48),
        ~(3LL << ((2 * v82) & 0x3F)));
  }
  if ( !v40 )
    RtlpHpLfhSubsegmentFreeBlock(v84, v46, 0LL, a5);
LABEL_32:
  Subsegment = v225;
LABEL_33:
  if ( v223 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
