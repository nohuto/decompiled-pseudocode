/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x14033CE40
 * Callers:
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x140392480 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402A66E0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402ABAC8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B0E50 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402B1104 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x1402B1400 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1402BBE00 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402BFFB8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x140306D74 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140306DB0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x14033E4F0 (RtlpLfhBlockBitmapAllocate.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x1403927D4 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F8994 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
  unsigned __int16 v23; // r11
  unsigned int v24; // r14d
  char v25; // cl
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // rdx
  signed __int16 *v32; // rsi
  signed __int16 *v33; // rdx
  unsigned __int64 v34; // r13
  unsigned __int8 v35; // r11
  signed __int16 v36; // ax
  signed __int16 v37; // tt
  int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 Subsegment; // rdi
  __int64 v45; // r9
  unsigned __int16 v46; // dx
  __int64 v47; // rdi
  unsigned __int16 v48; // ax
  unsigned __int16 v49; // r14
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // r12
  unsigned int v52; // r8d
  __int64 *v53; // r10
  _QWORD *v54; // r8
  __int64 **v55; // rcx
  __int64 v56; // rdx
  __int64 *v57; // rax
  __int64 *v58; // rax
  bool v59; // cc
  KIRQL v60; // r13
  __int64 v61; // r12
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // r15d
  __int64 v65; // rdx
  unsigned int v66; // r14d
  unsigned int v67; // esi
  unsigned __int16 v68; // ax
  int v69; // r8d
  unsigned int v70; // eax
  __int64 v71; // r9
  unsigned int v72; // r14d
  char v73; // cl
  __int64 v74; // rsi
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r12
  signed __int16 *v78; // rsi
  signed __int16 *v79; // rdx
  unsigned __int64 v80; // r15
  signed __int16 v81; // ax
  signed __int16 v82; // tt
  int v83; // r8d
  int v84; // r10d
  __int64 v85; // r11
  unsigned int v86; // r13d
  __int64 v87; // rdx
  __int64 v88; // r15
  int v89; // edx
  KIRQL v90; // al
  struct _KTHREAD *v91; // r13
  ULONG_PTR v92; // r9
  KIRQL v93; // al
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  bool v98; // zf
  unsigned __int8 v99; // si
  struct _KTHREAD *v100; // rsi
  ULONG_PTR v101; // r9
  unsigned __int8 v102; // r12
  unsigned int v103; // edx
  __int64 v104; // r8
  __int64 v105; // rcx
  __int64 v106; // r14
  __int64 v107; // rdx
  unsigned __int8 v108; // al
  __int64 v109; // rcx
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // eax
  char v114; // cl
  int (__fastcall *v115)(__int64, unsigned __int64, _QWORD, __int64); // rax
  int v116; // esi
  unsigned int v117; // r10d
  unsigned int v118; // esi
  __int64 v119; // rcx
  ULONG_PTR v120; // r10
  unsigned int v121; // edx
  __int64 v122; // rcx
  __int64 v123; // rsi
  unsigned __int8 v124; // al
  __int64 v125; // rcx
  ULONG_PTR v126; // rsi
  KIRQL v127; // r13
  __int64 v128; // rax
  KIRQL v129; // al
  struct _KTHREAD *v130; // r14
  unsigned int v131; // r8d
  KIRQL v132; // r13
  unsigned __int8 v133; // al
  struct _KPRCB *v134; // r10
  _DWORD *v135; // r9
  int v136; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v139; // si
  int v140; // r11d
  char v141; // cl
  int (__fastcall *v142)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v143; // r10d
  unsigned int v144; // esi
  __int64 v145; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v149; // eax
  unsigned int v150; // r13d
  __int16 v151; // r13
  struct _KTHREAD *v152; // rbx
  ULONG_PTR v153; // r9
  unsigned __int8 v154; // r12
  unsigned int v155; // edx
  __int64 v156; // rcx
  __int64 v157; // rdi
  unsigned __int8 v158; // al
  __int64 v159; // rcx
  unsigned __int8 v160; // al
  int v161; // eax
  __int64 v162; // r8
  unsigned __int8 v163; // r13
  unsigned int v164; // edx
  __int64 v165; // rcx
  __int64 v166; // r14
  unsigned __int8 v167; // al
  __int64 v168; // rcx
  unsigned __int8 v169; // r13
  unsigned int v170; // edx
  __int64 v171; // rcx
  __int64 v172; // rsi
  unsigned __int8 v173; // al
  __int64 v174; // rcx
  KIRQL v175; // al
  __int64 v176; // rax
  KIRQL v177; // al
  unsigned int v178; // r8d
  struct _KTHREAD *v179; // rsi
  unsigned int v180; // r8d
  unsigned __int8 v181; // r13
  unsigned int v182; // edx
  __int64 v183; // rcx
  __int64 v184; // r14
  __int64 v185; // rdx
  unsigned __int8 v186; // al
  __int64 v187; // rcx
  unsigned __int8 v188; // al
  unsigned __int8 v189; // si
  struct _KPRCB *v190; // r10
  _DWORD *v191; // r9
  int v192; // eax
  ULONG_PTR v193; // r15
  struct _KTHREAD *v194; // rbx
  ULONG_PTR v195; // r9
  unsigned __int8 v196; // r14
  unsigned int v197; // edx
  __int64 v198; // rcx
  __int64 v199; // rdi
  __int64 v200; // rdx
  __int64 v201; // rcx
  unsigned __int8 v202; // al
  struct _KPRCB *v203; // r9
  int v204; // eax
  _DWORD *v205; // r8
  struct _KTHREAD *v206; // rbx
  unsigned int v207; // r8d
  unsigned __int8 v208; // r15
  unsigned int v209; // edx
  __int64 v210; // rcx
  __int64 v211; // rsi
  unsigned __int8 v212; // r12
  __int64 v213; // rcx
  unsigned __int8 v214; // al
  struct _KPRCB *v215; // r9
  int v216; // eax
  _DWORD *v217; // r8
  KIRQL v218; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v219; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v220; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v221; // [rsp+41h] [rbp-BFh]
  int v222; // [rsp+44h] [rbp-BCh]
  unsigned int v223; // [rsp+44h] [rbp-BCh]
  unsigned __int8 v224; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v225[3]; // [rsp+49h] [rbp-B7h] BYREF
  int v226; // [rsp+4Ch] [rbp-B4h]
  unsigned int v227; // [rsp+50h] [rbp-B0h]
  __int64 v228; // [rsp+58h] [rbp-A8h]
  unsigned int v229; // [rsp+60h] [rbp-A0h]
  int v230; // [rsp+64h] [rbp-9Ch]
  int v231; // [rsp+68h] [rbp-98h]
  ULONG_PTR v232; // [rsp+70h] [rbp-90h]
  __int64 v233; // [rsp+78h] [rbp-88h]
  __int64 v234; // [rsp+80h] [rbp-80h]
  int v235; // [rsp+88h] [rbp-78h]
  int v236; // [rsp+8Ch] [rbp-74h]
  int v237; // [rsp+90h] [rbp-70h] BYREF
  int v238; // [rsp+94h] [rbp-6Ch]
  int v239; // [rsp+98h] [rbp-68h]
  int v240; // [rsp+9Ch] [rbp-64h]
  int v241; // [rsp+A0h] [rbp-60h]
  int v242; // [rsp+A4h] [rbp-5Ch]
  int v243; // [rsp+A8h] [rbp-58h]
  int v244; // [rsp+ACh] [rbp-54h] BYREF
  int v245; // [rsp+B0h] [rbp-50h]
  int v246; // [rsp+B4h] [rbp-4Ch]
  int v247; // [rsp+B8h] [rbp-48h]
  int v248; // [rsp+BCh] [rbp-44h]
  int v249; // [rsp+C0h] [rbp-40h]
  int v250; // [rsp+C8h] [rbp-38h]
  int v251; // [rsp+CCh] [rbp-34h]
  int v252; // [rsp+D0h] [rbp-30h]
  int v253; // [rsp+D4h] [rbp-2Ch]
  _QWORD v254[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v255[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v218 = -1;
  v7 = 0;
  v226 = 0;
  v231 = 0;
  v8 = a3 + 16;
  v233 = 0LL;
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
              v231 = 1;
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
          v89 = *(unsigned __int8 *)(v6 + 57);
          v7 = 2;
          v226 = 2;
          v90 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v89);
          v6 = a1;
          v218 = v90;
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
            v132 = v218;
            if ( v218 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v149 = ~(unsigned __int16)(-1LL << (v218 + 1));
              v98 = (v149 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v149;
              if ( v98 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v218);
                v13 = 0;
                v226 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v132 = v218;
          }
          __writecr8(v132);
          v13 = 0;
          v226 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v253 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v163 = ++CurrentThread->AbAllocationRegionCount;
        v164 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v98 = !_BitScanReverse((unsigned int *)&v165, v164);
        v252 = v165;
        if ( v98 )
          goto LABEL_262;
        while ( 1 )
        {
          v166 = (__int64)&CurrentThread->LockEntries[v165];
          v164 &= ~(1 << v165);
          if ( (*(_BYTE *)(v166 + 26) & 1) != 0
            && (*(_DWORD *)(v166 + 32) & 1) == 0
            && (*(_QWORD *)(v166 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v166 + 40) == SessionId )
          {
            *(_BYTE *)(v166 + 26) &= ~1u;
            if ( *(_QWORD *)(v166 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v165, v164);
          v252 = v165;
          if ( v98 )
            goto LABEL_262;
        }
        if ( !v166 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v166 + 32) |= 2u;
          if ( *(__int64 *)(v166 + 32) < 0 )
            KiAbEntryRemoveFromTree(v166);
          v253 = *(_DWORD *)(v166 + 88) & 0x1FFFF;
          *(_DWORD *)(v166 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v166 + 25) &= ~1u;
          *(_QWORD *)(v166 + 32) = 0LL;
          v167 = 1 << ((signed __int64)(v166 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v163 == 1 )
            CurrentThread->AbEntrySummary |= v167;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v167);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v98 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v98
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v168);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v226 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v254[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v254[0] = v15;
        LODWORD(v228) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v229 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v229;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18));
          v21 = v229;
          if ( a4 >= v229 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v254, *(unsigned __int16 *)(v12 + 36), v13, v228, v14);
        v23 = (unsigned int)v12 >> 12;
        LODWORD(v232) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v24 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v25 = *(_BYTE *)(v12 + 44);
        v26 = *(unsigned __int16 *)(v12 + 46);
        v27 = 0LL;
        v237 = 0;
        v28 = v24 >> v25;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v224 = -1;
        v219 = -1;
        v230 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v28;
        v31 = ((v24 + v230 - 1) >> v25) - (unsigned int)v28 + 1;
        v32 = (signed __int16 *)(2 * v28 + v12 + v26);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v228) = 0;
        v234 = 0LL;
        v227 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v219;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v38 = v228;
                v39 = v227;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v27 )
              break;
            v249 = 1;
            v93 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v27 = 1LL;
            v35 = v93;
            v219 = v93;
          }
          v39 = v227;
          if ( v36 )
          {
            v38 = v228 + 1;
            LODWORD(v228) = v228 + 1;
            v234 = v30 >> 1;
            if ( v227 == -1 )
            {
              v39 = v30 >> 1;
              v227 = v39;
            }
          }
          else
          {
            v38 = v228 - 1;
            LODWORD(v228) = v228 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v229;
        if ( v38 )
        {
          v40 = a1;
          if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
              (v38 << *(_BYTE *)(v12 + 44)) / 4096);
        }
        else
        {
          v40 = a1;
        }
        if ( v39 != -1 )
        {
          v114 = *(_BYTE *)(v12 + 44);
          v115 = (int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))(v40 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v40 + 24));
          v116 = v234 - v39;
          v224 = v35;
          v117 = v39 << v114;
          v237 = v116 + 1;
          v118 = (v116 + 1) << v114;
          v119 = *(_QWORD *)v40;
          v227 = v117;
          if ( v115(v119, v12 + v117, v118, v27) < 0 )
          {
            v178 = v24;
            v42 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v178, v230);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v188 = KeGetCurrentIrql(), v188 <= 0xFu) )
              {
                v189 = v219;
                if ( v219 <= 0xFu && v188 >= 2u )
                {
                  v190 = KeGetCurrentPrcb();
                  v191 = v190->SchedulerAssist;
                  v192 = ~(unsigned __int16)(-1LL << (v219 + 1));
                  v98 = (v192 & v191[5]) == 0;
                  v191[5] &= v192;
                  if ( v98 )
                    KiRemoveSystemWorkPriorityKick(v190);
                }
              }
              else
              {
                v189 = v219;
              }
              __writecr8(v189);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v239 = 0;
              v179 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v180 = MmGetSessionIdEx(v179->ApcState.Process);
              else
                v180 = -1;
              --v179->SpecialApcDisable;
              v181 = ++v179->AbAllocationRegionCount;
              v182 = ((char)v179->AbEntrySummary | (char)v179->AbOrphanedEntrySummary) ^ 0x3F;
              v98 = !_BitScanReverse((unsigned int *)&v183, v182);
              v238 = v183;
              if ( v98 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v179->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v179, v12 + 24, v180, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v184 = (__int64)&v179->LockEntries[v183];
                  v182 &= ~(1 << v183);
                  if ( (*(_BYTE *)(v184 + 26) & 1) != 0
                    && (*(_DWORD *)(v184 + 32) & 1) == 0
                    && (*(_QWORD *)(v184 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v184 + 40) == v180 )
                  {
                    *(_BYTE *)(v184 + 26) &= ~1u;
                    if ( *(_QWORD *)(v184 + 32) )
                      break;
                  }
                  v98 = !_BitScanReverse((unsigned int *)&v183, v182);
                  v238 = v183;
                  if ( v98 )
                    goto LABEL_352;
                }
                if ( !v184 )
                {
LABEL_352:
                  v42 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v184 + 32) |= 2u;
                if ( *(__int64 *)(v184 + 32) < 0 )
                  KiAbEntryRemoveFromTree(v184);
                v239 = *(_DWORD *)(v184 + 88) & 0x1FFFF;
                *(_DWORD *)(v184 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v184 + 25) &= ~1u;
                *(_QWORD *)(v184 + 32) = 0LL;
                v185 = (unsigned __int128)((v184 - (unsigned __int64)v179->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v42 = a1;
                v186 = 1 << ((v185 >> 4) + (v185 < 0));
                if ( v181 == 1 )
                  v179->AbEntrySummary |= v186;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v179->AbOrphanedEntrySummary, v186);
              }
              --v179->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v179);
              v98 = v179->SpecialApcDisable++ == -1;
              if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v179->ApcState.ApcListHead[0].Flink != &v179->152 )
                KiCheckForKernelApcDelivery(v187);
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v41 = 0LL;
            if ( (_DWORD)v232 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v232) >> 6) + 48),
                ~(3LL << ((2 * v232) & 0x3F)));
LABEL_29:
            if ( !v41 )
              RtlpHpLfhSubsegmentFreeBlock(v42, v12, 0LL, a5);
            if ( !v226 )
              goto LABEL_32;
            v193 = v5 + 16;
            if ( v226 == 2 )
            {
              if ( !*(_BYTE *)(v42 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v193, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v193);
                v243 = 0;
                v194 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v193) == 1 )
                  v195 = (unsigned int)MmGetSessionIdEx(v194->ApcState.Process);
                else
                  v195 = 0xFFFFFFFFLL;
                --v194->SpecialApcDisable;
                v196 = ++v194->AbAllocationRegionCount;
                v197 = ((char)v194->AbEntrySummary | (char)v194->AbOrphanedEntrySummary) ^ 0x3F;
                v98 = !_BitScanReverse((unsigned int *)&v198, v197);
                v242 = v198;
                if ( v98 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v199 = (__int64)&v194->LockEntries[v198];
                  v197 &= ~(1 << v198);
                  if ( (*(_BYTE *)(v199 + 26) & 1) != 0
                    && (*(_DWORD *)(v199 + 32) & 1) == 0
                    && (*(_QWORD *)(v199 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v193 & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v199 + 40) == (_DWORD)v195 )
                  {
                    *(_BYTE *)(v199 + 26) &= ~1u;
                    if ( *(_QWORD *)(v199 + 32) )
                      break;
                  }
                  v98 = !_BitScanReverse((unsigned int *)&v198, v197);
                  v242 = v198;
                  if ( v98 )
                    goto LABEL_391;
                }
                if ( !v199 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v194->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v194, v193, v195, 0LL);
                }
                else
                {
                  *(_BYTE *)(v199 + 32) |= 2u;
                  if ( *(__int64 *)(v199 + 32) < 0 )
                    KiAbEntryRemoveFromTree(v199);
                  v243 = *(_DWORD *)(v199 + 88) & 0x1FFFF;
                  *(_DWORD *)(v199 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v199 + 25) &= ~1u;
                  *(_QWORD *)(v199 + 32) = 0LL;
                  v200 = (signed __int64)(v199 - (unsigned __int64)v194->LockEntries) / 96;
                  if ( v196 == 1 )
                    v194->AbEntrySummary |= 1 << v200;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v194->AbOrphanedEntrySummary, 1 << v200);
                }
                --v194->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v194);
                v98 = v194->SpecialApcDisable++ == -1;
                if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v194->ApcState.ApcListHead[0].Flink != &v194->152 )
                  KiCheckForKernelApcDelivery(v201);
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v193);
            }
            else
            {
              if ( !*(_BYTE *)(v42 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v193, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v193);
                KeAbPostRelease(v193);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v193);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v202 = KeGetCurrentIrql();
                if ( v202 <= 0xFu && v218 <= 0xFu && v202 >= 2u )
                {
                  v203 = KeGetCurrentPrcb();
                  v204 = ~(unsigned __int16)(-1LL << (v218 + 1));
                  v205 = v203->SchedulerAssist;
                  v98 = (v204 & v205[5]) == 0;
                  v205[5] &= v204;
                  if ( v98 )
                    KiRemoveSystemWorkPriorityKick(v203);
                }
              }
            }
            __writecr8(v218);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v227, v118, &v237, 1, &v224);
          v23 = (unsigned int)v12 >> 12;
LABEL_27:
          v41 = v12 + v24;
          if ( a4 < v21 )
          {
            v150 = v21 - a4;
            if ( v150 == 1 )
              v151 = 0x8000;
            else
              v151 = v150 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v23) + v41 - 2) = v151;
          }
          v42 = a1;
          goto LABEL_29;
        }
        if ( (_DWORD)v27 )
        {
          if ( !*(_BYTE *)(v40 + 57) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v12 + 24);
            v241 = 0;
            v100 = KeGetCurrentThread();
            v232 = (ULONG_PTR)v100;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v101 = (unsigned int)MmGetSessionIdEx(v100->ApcState.Process);
            else
              v101 = 0xFFFFFFFFLL;
            --v100->SpecialApcDisable;
            v120 = (ULONG_PTR)v100;
            v221 = ++v100->AbAllocationRegionCount;
            v121 = ((char)v100->AbEntrySummary | (char)v100->AbOrphanedEntrySummary) ^ 0x3F;
            v98 = !_BitScanReverse((unsigned int *)&v122, v121);
            v240 = v122;
            if ( v98 )
              goto LABEL_155;
            while ( 1 )
            {
              v123 = *(_QWORD *)(v120 + 800) + 96 * v122;
              v121 &= ~(1 << v122);
              if ( (*(_BYTE *)(v123 + 26) & 1) != 0
                && (*(_DWORD *)(v123 + 32) & 1) == 0
                && (*(_QWORD *)(v123 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v123 + 40) == (_DWORD)v101 )
              {
                *(_BYTE *)(v123 + 26) &= ~1u;
                if ( *(_QWORD *)(v123 + 32) )
                  break;
              }
              v98 = !_BitScanReverse((unsigned int *)&v122, v121);
              v240 = v122;
              if ( v98 )
                goto LABEL_155;
            }
            if ( !v123 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v120 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v120, v12 + 24, v101, 0LL);
            }
            else
            {
              *(_BYTE *)(v123 + 32) |= 2u;
              if ( *(__int64 *)(v123 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree(v123);
                v120 = v232;
              }
              v241 = *(_DWORD *)(v123 + 88) & 0x1FFFF;
              *(_DWORD *)(v123 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v123 + 25) &= ~1u;
              *(_QWORD *)(v123 + 32) = 0LL;
              v124 = 1 << ((v123 - *(_QWORD *)(v120 + 800)) / 96);
              if ( v221 == 1 )
                *(_BYTE *)(v120 + 792) |= v124;
              else
                _InterlockedOr8((volatile signed __int8 *)(v120 + 870), v124);
            }
            --*(_BYTE *)(v120 + 794);
            KiAbThreadRemoveBoosts(v120);
            v126 = v232;
            v98 = (*(_WORD *)(v232 + 486))++ == 0xFFFF;
            if ( v98 && *(_QWORD *)(v126 + 152) != v126 + 152 )
              KiCheckForKernelApcDelivery(v125);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v110 = KeGetCurrentIrql(), v110 <= 0xFu) )
          {
            v99 = v219;
            if ( v219 <= 0xFu && v110 >= 2u )
            {
              v111 = KeGetCurrentPrcb();
              v112 = v111->SchedulerAssist;
              v113 = ~(unsigned __int16)(-1LL << (v219 + 1));
              v98 = (v113 & v112[5]) == 0;
              v112[5] &= v113;
              if ( v98 )
              {
                KiRemoveSystemWorkPriorityKick(v111);
                __writecr8(v219);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v99 = v219;
          }
          __writecr8(v99);
        }
LABEL_26:
        v23 = (unsigned int)v12 >> 12;
        goto LABEL_27;
      }
      if ( !v7 )
      {
        v7 = 1;
        v175 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v218 = v175;
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
          ExfTryToWakePushLock(v8);
        v236 = 0;
        v130 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v131 = MmGetSessionIdEx(v130->ApcState.Process);
        else
          v131 = -1;
        --v130->SpecialApcDisable;
        v154 = ++v130->AbAllocationRegionCount;
        v155 = ((char)v130->AbEntrySummary | (char)v130->AbOrphanedEntrySummary) ^ 0x3F;
        v98 = !_BitScanReverse((unsigned int *)&v156, v155);
        v251 = v156;
        if ( v98 )
          goto LABEL_244;
        while ( 1 )
        {
          v157 = (__int64)&v130->LockEntries[v156];
          v155 &= ~(1 << v156);
          if ( (*(_BYTE *)(v157 + 26) & 1) != 0
            && (*(_DWORD *)(v157 + 32) & 1) == 0
            && (*(_QWORD *)(v157 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v157 + 40) == v131 )
          {
            *(_BYTE *)(v157 + 26) &= ~1u;
            if ( *(_QWORD *)(v157 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v156, v155);
          v251 = v156;
          if ( v98 )
            goto LABEL_244;
        }
        if ( !v157 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v130->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v130, v5 + 16, v131, 0LL);
        }
        else
        {
          *(_BYTE *)(v157 + 32) |= 2u;
          if ( *(__int64 *)(v157 + 32) < 0 )
            KiAbEntryRemoveFromTree(v157);
          v236 = 0;
          v236 = *(_DWORD *)(v157 + 88) & 0x1FFFF;
          *(_DWORD *)(v157 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v157 + 25) &= ~1u;
          *(_QWORD *)(v157 + 32) = 0LL;
          v158 = 1 << ((signed __int64)(v157 - (unsigned __int64)v130->LockEntries) / 96);
          if ( v154 == 1 )
            v130->AbEntrySummary |= v158;
          else
            _InterlockedOr8((volatile signed __int8 *)&v130->AbOrphanedEntrySummary, v158);
        }
        --v130->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v130);
        v98 = v130->SpecialApcDisable++ == -1;
        if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v130->ApcState.ApcListHead[0].Flink != &v130->152 )
          KiCheckForKernelApcDelivery(v159);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v133 = KeGetCurrentIrql(), v133 <= 0xFu) )
          {
            v127 = v218;
            if ( v218 <= 0xFu && v133 >= 2u )
            {
              v134 = KeGetCurrentPrcb();
              v135 = v134->SchedulerAssist;
              v136 = ~(unsigned __int16)(-1LL << (v218 + 1));
              v98 = (v136 & v135[5]) == 0;
              v135[5] &= v136;
              if ( v98 )
                KiRemoveSystemWorkPriorityKick(v134);
            }
          }
          else
          {
            v127 = v218;
          }
          __writecr8(v127);
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
          v41 = 0LL;
          goto LABEL_33;
        }
      }
      v7 = 2;
      v226 = 2;
      v218 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v128 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v233 = v128;
    }
    v45 = v5 + 24;
    v46 = 1;
    v47 = *(_QWORD *)(v5 + 24);
    if ( v9 )
      v46 = 4096;
    if ( v47 == v45 )
      goto LABEL_308;
LABEL_43:
    v48 = *(_WORD *)(v47 + 32);
    v231 = 0;
    while ( 1 )
    {
      if ( v46 < v48 )
      {
        v49 = v46;
      }
      else
      {
        v49 = v48;
        if ( v7 == 1 )
        {
          v47 = *(_QWORD *)v47;
          if ( v47 == v45 )
          {
            v8 = v5 + 16;
LABEL_308:
            v47 = 0LL;
            goto LABEL_64;
          }
          goto LABEL_43;
        }
      }
      v50 = v48 - v49;
      v48 = _InterlockedCompareExchange16((volatile signed __int16 *)(v47 + 32), v48 - v49, v48);
      v51 = v49;
      v52 = v49 + v50;
      if ( v48 == v52 )
        break;
      if ( v48 < v52 )
        v231 = 1;
    }
    if ( *(_WORD *)(v47 + 32) )
      goto LABEL_62;
    v53 = (__int64 *)v47;
    switch ( *(_BYTE *)(v47 + 38) )
    {
      case 0:
        v54 = (_QWORD *)(v5 + 8);
        goto LABEL_50;
      case 1:
        v45 = v5 + 40;
        v54 = 0LL;
LABEL_50:
        v55 = (__int64 **)(v5 + 40);
        if ( v45 )
        {
          v56 = *(_QWORD *)v47;
          v57 = *(__int64 **)(v47 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v47 + 8LL) == v47 && *v57 == v47 )
          {
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
            if ( v54 )
              --*v54;
            goto LABEL_55;
          }
LABEL_408:
          __fastfail(3u);
        }
LABEL_55:
        *(_BYTE *)(v47 + 38) = 1;
        if ( v5 != -40 )
        {
          v58 = *(__int64 **)(v5 + 48);
          if ( (__int64 **)*v58 != v55 )
            goto LABEL_408;
          *(_QWORD *)v47 = v55;
          *(_QWORD *)(v47 + 8) = v58;
          v53 = 0LL;
          *v58 = v47;
          *(_QWORD *)(v5 + 48) = v47;
        }
        if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
        {
          v53 = *v55;
          v176 = **v55;
          if ( (__int64 **)(*v55)[1] != v55 || *(__int64 **)(v176 + 8) != v53 )
            goto LABEL_408;
          *v55 = (__int64 *)v176;
          *(_QWORD *)(v176 + 8) = v55;
          --MEMORY[0];
          *((_BYTE *)v53 + 38) = 2;
        }
        if ( v53 && *((_BYTE *)v53 + 38) == 2 )
          v53[2] = 0LL;
        break;
      case 2:
        v45 = 0LL;
        v54 = 0LL;
        goto LABEL_50;
    }
    v6 = a1;
LABEL_62:
    v59 = v49 <= 1u;
    v8 = v5 + 16;
    if ( !v59 )
      *(_QWORD *)(v5 + 56) = v47 ^ ((unsigned __int16)(v51 - 1) ^ (unsigned __int16)v47) & 0xFFF;
LABEL_64:
    if ( v7 == 2 )
    {
      if ( *(_BYTE *)(v6 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_67:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v94 = KeGetCurrentIrql(), v94 <= 0xFu) )
        {
          v60 = v218;
          if ( v218 <= 0xFu && v94 >= 2u )
          {
            v95 = KeGetCurrentPrcb();
            v96 = v95->SchedulerAssist;
            v97 = ~(unsigned __int16)(-1LL << (v218 + 1));
            v98 = (v97 & v96[5]) == 0;
            v96[5] &= v97;
            if ( v98 )
              KiRemoveSystemWorkPriorityKick(v95);
          }
        }
        else
        {
          v60 = v218;
        }
        __writecr8(v60);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v235 = 0;
        v91 = KeGetCurrentThread();
        v92 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v91->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v91->SpecialApcDisable;
        v102 = ++v91->AbAllocationRegionCount;
        v103 = ((char)v91->AbEntrySummary | (char)v91->AbOrphanedEntrySummary) ^ 0x3F;
        v104 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v98 = !_BitScanReverse((unsigned int *)&v105, v103);
        v250 = v105;
        if ( v98 )
        {
LABEL_125:
          if ( (*((_DWORD *)&v91->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v91, v8, v92, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v106 = (__int64)&v91->LockEntries[v105];
            v103 &= ~(1 << v105);
            if ( (*(_BYTE *)(v106 + 26) & 1) != 0
              && (*(_DWORD *)(v106 + 32) & 1) == 0
              && (*(_QWORD *)(v106 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v104
              && *(_DWORD *)(v106 + 40) == (_DWORD)v92 )
            {
              *(_BYTE *)(v106 + 26) &= ~1u;
              if ( *(_QWORD *)(v106 + 32) )
                break;
            }
            v98 = !_BitScanReverse((unsigned int *)&v105, v103);
            v250 = v105;
            if ( v98 )
              goto LABEL_124;
          }
          if ( !v106 )
          {
LABEL_124:
            v8 = v5 + 16;
            goto LABEL_125;
          }
          *(_BYTE *)(v106 + 32) |= 2u;
          if ( *(__int64 *)(v106 + 32) < 0 )
            KiAbEntryRemoveFromTree(v106);
          v235 = 0;
          v235 = *(_DWORD *)(v106 + 88) & 0x1FFFF;
          *(_DWORD *)(v106 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v106 + 25) &= ~1u;
          *(_QWORD *)(v106 + 32) = 0LL;
          v107 = (unsigned __int128)((v106 - (unsigned __int64)v91->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v8 = v5 + 16;
          v108 = 1 << ((v107 >> 4) + (v107 < 0));
          if ( v102 == 1 )
            v91->AbEntrySummary |= v108;
          else
            _InterlockedOr8((volatile signed __int8 *)&v91->AbOrphanedEntrySummary, v108);
        }
        --v91->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v91);
        v98 = v91->SpecialApcDisable++ == -1;
        if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v91->ApcState.ApcListHead[0].Flink != &v91->152 )
          KiCheckForKernelApcDelivery(v109);
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
    if ( v47 )
      break;
    v7 = 2;
    v226 = 2;
    v177 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v218 = v177;
  }
  v61 = 3LL;
  v62 = 2 * (*(unsigned __int16 *)(v47 + 34) + (unsigned __int64)*(unsigned __int8 *)(v47 + 39));
  v255[1] = v47 + 48;
  v63 = *(unsigned __int8 *)(v5 + 1);
  v255[0] = v62;
  v230 = (unsigned int)v47 >> 12;
  LODWORD(v232) = *((unsigned __int8 *)RtlpSearchWidth + v63);
  v64 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_WORD *)(v47 + 40));
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_DWORD *)(v47 + 40)) >> 16;
  v66 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_DWORD *)(v47 + 40)) >> 16;
  v67 = v66;
  v249 = v64;
  if ( a4 >= v64 )
    v61 = 1LL;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v67 = v65;
    v69 = 0;
    if ( a4 >= v64 )
      v67 = v65;
  }
  else
  {
    v68 = RtlpLfhIncrementDataSlot(v65, v65);
    if ( a4 >= v64 )
      v67 = v66;
    v69 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v68);
  }
  v70 = RtlpLfhBlockBitmapAllocate((unsigned int)v255, *(unsigned __int16 *)(v47 + 36), v69, v232, v61);
  v229 = v70;
  *(_WORD *)(v47 + 36) = v70;
  v72 = v67 + v70 * v64;
  if ( *(_BYTE *)(v47 + 45) <= 1u )
    goto LABEL_89;
  v73 = *(_BYTE *)(v47 + 44);
  v71 = 0LL;
  v74 = v47 + *(unsigned __int16 *)(v47 + 46);
  v75 = v72 >> v73;
  v230 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v230 ^ *(unsigned __int16 *)(v47 + 40);
  v244 = 0;
  v225[0] = -1;
  v76 = ((v72 + v230 - 1) >> v73) - (unsigned int)v75 + 1;
  v220 = -1;
  v77 = 2 * v75;
  v78 = (signed __int16 *)(2 * v75 + v74);
  _m_prefetchw(v78);
  v228 = 0LL;
  v79 = &v78[v76];
  v226 = 0;
  v222 = -1;
  if ( v78 >= v79 )
    goto LABEL_89;
  v80 = (unsigned __int64)v79;
  do
  {
    while ( 1 )
    {
      v81 = *v78;
      while ( v81 > 0 )
      {
        v82 = v81;
        v81 = _InterlockedCompareExchange16(v78, v81 + 1, v81);
        if ( v82 == v81 )
        {
          v83 = v226;
          v84 = v222;
          LODWORD(v85) = v228;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v71 )
        break;
      LODWORD(v232) = 1;
      v129 = RtlpHpAcquireLockExclusive((volatile LONG *)(v47 + 24), *(unsigned __int8 *)(a1 + 57));
      v71 = 1LL;
      v220 = v129;
    }
    v84 = v222;
    if ( v81 )
    {
      v83 = v226 + 1;
      v85 = v77 >> 1;
      ++v226;
      v228 = v77 >> 1;
      if ( v222 == -1 )
      {
        v84 = v77 >> 1;
        v222 = v84;
      }
    }
    else
    {
      LODWORD(v85) = v228;
      v83 = --v226;
    }
    *v78 = v81 + 1;
LABEL_84:
    ++v78;
    v77 += 2LL;
  }
  while ( (unsigned __int64)v78 < v80 );
  v64 = v249;
  v86 = v229;
  if ( v83 )
  {
    v87 = a1;
    if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        (v83 << *(_BYTE *)(v47 + 44)) / 4096);
  }
  else
  {
    v87 = a1;
  }
  if ( v84 == -1 )
  {
    if ( !(_DWORD)v71 )
      goto LABEL_89;
    if ( *(_BYTE *)(v87 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v160 = KeGetCurrentIrql(), v160 <= 0xFu) )
      {
        v139 = v220;
        if ( v220 <= 0xFu && v160 >= 2u )
        {
          v71 = (__int64)KeGetCurrentPrcb();
          v161 = ~(unsigned __int16)(-1LL << (v220 + 1));
          v162 = *(_QWORD *)(v71 + 33976);
          v98 = (v161 & *(_DWORD *)(v162 + 20)) == 0;
          *(_DWORD *)(v162 + 20) &= v161;
          if ( v98 )
          {
            KiRemoveSystemWorkPriorityKick(v71);
            __writecr8(v220);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v139 = v220;
      }
      __writecr8(v139);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v47 + 24);
    v248 = 0;
    v152 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v47 + 24) == 1 )
      v153 = (unsigned int)MmGetSessionIdEx(v152->ApcState.Process);
    else
      v153 = 0xFFFFFFFFLL;
    --v152->SpecialApcDisable;
    v169 = ++v152->AbAllocationRegionCount;
    v170 = ((char)v152->AbEntrySummary | (char)v152->AbOrphanedEntrySummary) ^ 0x3F;
    v98 = !_BitScanReverse((unsigned int *)&v171, v170);
    v247 = v171;
    if ( v98 )
      goto LABEL_282;
    while ( 1 )
    {
      v172 = (__int64)&v152->LockEntries[v171];
      v170 &= ~(1 << v171);
      if ( (*(_BYTE *)(v172 + 26) & 1) != 0
        && (*(_DWORD *)(v172 + 32) & 1) == 0
        && (*(_QWORD *)(v172 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v47 + 24) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v172 + 40) == (_DWORD)v153 )
      {
        *(_BYTE *)(v172 + 26) &= ~1u;
        if ( *(_QWORD *)(v172 + 32) )
          break;
      }
      v98 = !_BitScanReverse((unsigned int *)&v171, v170);
      v247 = v171;
      if ( v98 )
        goto LABEL_282;
    }
    if ( !v172 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v152->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v152, v47 + 24, v153, 0LL);
    }
    else
    {
      *(_BYTE *)(v172 + 32) |= 2u;
      if ( *(__int64 *)(v172 + 32) < 0 )
        KiAbEntryRemoveFromTree(v172);
      v248 = *(_DWORD *)(v172 + 88) & 0x1FFFF;
      *(_DWORD *)(v172 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v172 + 25) &= ~1u;
      *(_QWORD *)(v172 + 32) = 0LL;
      v173 = 1 << ((signed __int64)(v172 - (unsigned __int64)v152->LockEntries) / 96);
      if ( v169 == 1 )
        v152->AbEntrySummary |= v173;
      else
        _InterlockedOr8((volatile signed __int8 *)&v152->AbOrphanedEntrySummary, v173);
    }
    --v152->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v152);
    v98 = v152->SpecialApcDisable++ == -1;
    if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v152->ApcState.ApcListHead[0].Flink != &v152->152 )
      KiCheckForKernelApcDelivery(v174);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v41 = v47 + v72;
    if ( a4 < v64 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v47, v47 + v72, v64 - a4, v71);
    v88 = a1;
  }
  else
  {
    v140 = v85 - v84;
    v141 = *(_BYTE *)(v47 + 44);
    v142 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v87 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v87 + 24));
    v143 = v84 << v141;
    v244 = v140 + 1;
    v144 = (v140 + 1) << v141;
    v145 = *(_QWORD *)v87;
    v225[0] = v220;
    v223 = v143;
    if ( v142(v145, v47 + v143, v144, v71) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v47, v223, v144, &v244, 1, v225);
      goto LABEL_89;
    }
    v88 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v47, v72, v230);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v214 = KeGetCurrentIrql();
          if ( v214 <= 0xFu && v220 <= 0xFu && v214 >= 2u )
          {
            v215 = KeGetCurrentPrcb();
            v216 = ~(unsigned __int16)(-1LL << (v220 + 1));
            v217 = v215->SchedulerAssist;
            v98 = (v216 & v217[5]) == 0;
            v217[5] &= v216;
            if ( v98 )
              KiRemoveSystemWorkPriorityKick(v215);
          }
        }
      }
      __writecr8(v220);
      v41 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v47 + 24);
      v41 = 0LL;
      v246 = 0;
      v206 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v47 + 24) == 1 )
        v207 = MmGetSessionIdEx(v206->ApcState.Process);
      else
        v207 = -1;
      --v206->SpecialApcDisable;
      v208 = ++v206->AbAllocationRegionCount;
      v209 = ((char)v206->AbEntrySummary | (char)v206->AbOrphanedEntrySummary) ^ 0x3F;
      v98 = !_BitScanReverse((unsigned int *)&v210, v209);
      v245 = v210;
      if ( v98 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v206->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v206, v47 + 24, v207, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v211 = (__int64)&v206->LockEntries[v210];
          v209 &= ~(1 << v210);
          if ( (*(_BYTE *)(v211 + 26) & 1) != 0
            && (*(_DWORD *)(v211 + 32) & 1) == 0
            && (*(_QWORD *)(v211 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v47 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v211 + 40) == v207 )
          {
            *(_BYTE *)(v211 + 26) &= ~1u;
            if ( *(_QWORD *)(v211 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v210, v209);
          v245 = v210;
          if ( v98 )
            goto LABEL_432;
        }
        if ( !v211 )
        {
LABEL_432:
          v41 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v211 + 32) |= 2u;
        if ( *(__int64 *)(v211 + 32) < 0 )
          KiAbEntryRemoveFromTree(v211);
        v246 = *(_DWORD *)(v211 + 88) & 0x1FFFF;
        *(_DWORD *)(v211 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v211 + 25) &= ~1u;
        *(_QWORD *)(v211 + 32) = 0LL;
        v212 = 1 << ((char)(v211 - LOBYTE(v206->LockEntries)) / 96);
        if ( v208 == 1 )
          v206->AbEntrySummary |= v212;
        else
          _InterlockedOr8((volatile signed __int8 *)&v206->AbOrphanedEntrySummary, v212);
        v41 = 0LL;
      }
      --v206->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v206);
      v98 = v206->SpecialApcDisable++ == -1;
      if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v206->ApcState.ApcListHead[0].Flink != &v206->152 )
        KiCheckForKernelApcDelivery(v213);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v88 = a1;
    }
    if ( v86 != -1 )
      _InterlockedAnd64(
        (volatile signed __int64 *)(v47 + 8 * ((unsigned __int64)(2 * v86) >> 6) + 48),
        ~(3LL << ((2 * v86) & 0x3F)));
  }
  if ( !v41 )
    RtlpHpLfhSubsegmentFreeBlock(v88, v47, 0LL, a5);
LABEL_32:
  Subsegment = v233;
LABEL_33:
  if ( v231 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v41;
}
