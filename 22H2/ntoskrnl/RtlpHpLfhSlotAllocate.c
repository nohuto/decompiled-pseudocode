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
  unsigned int v99; // edx
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
  unsigned int v116; // edx
  __int64 v117; // rcx
  __int64 v118; // rsi
  unsigned __int8 v119; // al
  __int64 v120; // rcx
  ULONG_PTR v121; // rsi
  KIRQL v122; // r13
  __int64 v123; // rax
  KIRQL v124; // al
  struct _KTHREAD *v125; // r14
  unsigned int v126; // r8d
  KIRQL v127; // r13
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r10
  _DWORD *v130; // r9
  int v131; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v134; // si
  int v135; // r11d
  char v136; // cl
  int (__fastcall *v137)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v138; // r10d
  unsigned int v139; // esi
  __int64 v140; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v144; // eax
  unsigned int v145; // r13d
  __int16 v146; // r13
  struct _KTHREAD *v147; // rbx
  ULONG_PTR v148; // r9
  unsigned __int8 v149; // r12
  unsigned int v150; // edx
  __int64 v151; // rcx
  __int64 v152; // rdi
  unsigned __int8 v153; // al
  __int64 v154; // rcx
  unsigned __int8 v155; // al
  int v156; // eax
  unsigned __int8 v157; // r13
  unsigned int v158; // edx
  __int64 v159; // rcx
  __int64 v160; // r14
  unsigned __int8 v161; // al
  __int64 v162; // rcx
  unsigned __int8 v163; // r13
  unsigned int v164; // edx
  __int64 v165; // rcx
  __int64 v166; // rsi
  unsigned __int8 v167; // al
  __int64 v168; // rcx
  KIRQL v169; // al
  __int64 v170; // rax
  KIRQL v171; // al
  __int64 v172; // r8
  struct _KTHREAD *v173; // rsi
  unsigned int v174; // r8d
  unsigned __int8 v175; // r13
  unsigned int v176; // edx
  __int64 v177; // rcx
  __int64 v178; // r14
  __int64 v179; // rdx
  unsigned __int8 v180; // al
  __int64 v181; // rcx
  unsigned __int8 v182; // al
  unsigned __int8 v183; // si
  struct _KPRCB *v184; // r10
  int v185; // eax
  ULONG_PTR v186; // r15
  struct _KTHREAD *v187; // rbx
  ULONG_PTR v188; // r9
  unsigned __int8 v189; // r14
  unsigned int v190; // edx
  __int64 v191; // rcx
  __int64 v192; // rdi
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int8 v195; // al
  int v196; // eax
  struct _KTHREAD *v197; // rbx
  unsigned int v198; // r8d
  unsigned __int8 v199; // r15
  unsigned int v200; // edx
  __int64 v201; // rcx
  __int64 v202; // rsi
  unsigned __int8 v203; // r12
  __int64 v204; // rcx
  unsigned __int8 v205; // al
  int v206; // eax
  KIRQL v207; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v208; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v209; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v210; // [rsp+41h] [rbp-BFh]
  int v211; // [rsp+44h] [rbp-BCh]
  unsigned int v212; // [rsp+44h] [rbp-BCh]
  char v213; // [rsp+48h] [rbp-B8h] BYREF
  char v214[3]; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int v215; // [rsp+4Ch] [rbp-B4h]
  int v216; // [rsp+50h] [rbp-B0h]
  __int64 v217; // [rsp+58h] [rbp-A8h]
  unsigned int v218; // [rsp+60h] [rbp-A0h]
  unsigned int v219; // [rsp+64h] [rbp-9Ch]
  int v220; // [rsp+68h] [rbp-98h]
  ULONG_PTR v221; // [rsp+70h] [rbp-90h]
  __int64 v222; // [rsp+78h] [rbp-88h]
  __int64 v223; // [rsp+80h] [rbp-80h]
  int v224; // [rsp+88h] [rbp-78h]
  int v225; // [rsp+8Ch] [rbp-74h]
  int v226; // [rsp+90h] [rbp-70h] BYREF
  int v227; // [rsp+94h] [rbp-6Ch]
  int v228; // [rsp+98h] [rbp-68h]
  int v229; // [rsp+9Ch] [rbp-64h]
  int v230; // [rsp+A0h] [rbp-60h]
  int v231; // [rsp+A4h] [rbp-5Ch]
  int v232; // [rsp+A8h] [rbp-58h]
  int v233; // [rsp+ACh] [rbp-54h] BYREF
  int v234; // [rsp+B0h] [rbp-50h]
  int v235; // [rsp+B4h] [rbp-4Ch]
  int v236; // [rsp+B8h] [rbp-48h]
  int v237; // [rsp+BCh] [rbp-44h]
  int v238; // [rsp+C0h] [rbp-40h]
  int v239; // [rsp+C8h] [rbp-38h]
  int v240; // [rsp+CCh] [rbp-34h]
  int v241; // [rsp+D0h] [rbp-30h]
  int v242; // [rsp+D4h] [rbp-2Ch]
  _QWORD v243[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v244[11]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a1;
  v207 = -1;
  v7 = 0;
  v215 = 0;
  v220 = 0;
  v8 = a3 + 16;
  v222 = 0LL;
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
              v220 = 1;
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
          v215 = 2;
          v86 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v85);
          v6 = a1;
          v207 = v86;
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
            v127 = v207;
            if ( v207 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v144 = ~(unsigned __int16)(-1LL << (v207 + 1));
              v94 = (v144 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v144;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v207);
                v13 = 0;
                v215 = 0;
                goto LABEL_8;
              }
            }
          }
          else
          {
            v127 = v207;
          }
          __writecr8(v127);
          v13 = 0;
          v215 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 16));
        v242 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v157 = ++CurrentThread->AbAllocationRegionCount;
        v158 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v159, v158);
        v241 = v159;
        if ( v94 )
          goto LABEL_262;
        while ( 1 )
        {
          v160 = (__int64)&CurrentThread->LockEntries[v159];
          v158 &= ~(1 << v159);
          if ( (*(_BYTE *)(v160 + 26) & 1) != 0
            && (*(_DWORD *)(v160 + 32) & 1) == 0
            && (*(_QWORD *)(v160 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v160 + 40) == SessionId )
          {
            *(_BYTE *)(v160 + 26) &= ~1u;
            if ( *(_QWORD *)(v160 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v159, v158);
          v241 = v159;
          if ( v94 )
            goto LABEL_262;
        }
        if ( !v160 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v160 + 32) |= 2u;
          if ( *(__int64 *)(v160 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v160);
          v242 = *(_DWORD *)(v160 + 88) & 0x1FFFF;
          *(_DWORD *)(v160 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v160 + 25) &= ~1u;
          *(_QWORD *)(v160 + 32) = 0LL;
          v161 = 1 << ((signed __int64)(v160 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v157 == 1 )
            CurrentThread->AbEntrySummary |= v161;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v161);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v94 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v94
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v162);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = 0;
        v215 = 0;
LABEL_8:
        v14 = 3LL;
        v15 = 2 * (*(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39));
        v243[1] = v12 + 48;
        v16 = *(unsigned __int8 *)(v5 + 1);
        v243[0] = v15;
        LODWORD(v217) = *((unsigned __int8 *)RtlpSearchWidth + v16);
        v17 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        v18 = (DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12)) >> 16;
        v19 = v18;
        v20 = v18;
        v218 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ *(_WORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12));
        if ( a4 >= (unsigned int)v17 )
          v14 = 1LL;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          v21 = v218;
          v20 = v18;
          if ( a4 >= (unsigned int)v17 )
            v20 = v18;
        }
        else
        {
          v13 = RtlpLowFragHeapRandomData[(unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18)];
          v21 = v218;
          if ( a4 >= v218 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v243, *(unsigned __int16 *)(v12 + 36), v13, v217, v14);
        v25 = (unsigned int)v12 >> 12;
        LODWORD(v221) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v26 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v27 = *(_BYTE *)(v12 + 44);
        v28 = *(unsigned __int16 *)(v12 + 46);
        v24 = 0LL;
        v226 = 0;
        v23 = v26 >> v27;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v213 = -1;
        v208 = -1;
        v219 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v23;
        v31 = ((v26 + v219 - 1) >> v27) - (unsigned int)v23 + 1;
        v32 = (signed __int16 *)(2 * v23 + v12 + v28);
        _m_prefetchw(v32);
        v33 = &v32[v31];
        LODWORD(v217) = 0;
        v223 = 0LL;
        v216 = -1;
        if ( v32 >= v33 )
          goto LABEL_27;
        v34 = (unsigned __int64)v33;
        do
        {
          v35 = v208;
          while ( 1 )
          {
            v36 = *v32;
            while ( v36 > 0 )
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange16(v32, v36 + 1, v36);
              if ( v37 == v36 )
              {
                v23 = (unsigned int)v217;
                v38 = v216;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v24 )
              break;
            v238 = 1;
            v89 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v24 = 1LL;
            v35 = v89;
            v208 = v89;
          }
          v38 = v216;
          if ( v36 )
          {
            v23 = (unsigned int)(v217 + 1);
            LODWORD(v217) = v217 + 1;
            v223 = v30 >> 1;
            if ( v216 == -1 )
            {
              v38 = v30 >> 1;
              v216 = v38;
            }
          }
          else
          {
            v23 = (unsigned int)(v217 - 1);
            LODWORD(v217) = v217 - 1;
          }
          *v32 = v36 + 1;
LABEL_21:
          ++v32;
          v30 += 2LL;
        }
        while ( (unsigned __int64)v32 < v34 );
        v5 = a3;
        v21 = v218;
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
          v111 = v223 - v38;
          v213 = v35;
          v112 = v38 << v109;
          v226 = v111 + 1;
          v113 = (v111 + 1) << v109;
          v114 = *(_QWORD *)v39;
          v216 = v112;
          if ( v110(v114, v12 + v112, v113, v24) < 0 )
          {
            v172 = v26;
            v41 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v172, v219);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v182 = KeGetCurrentIrql(), v182 <= 0xFu) )
              {
                v183 = v208;
                if ( v208 <= 0xFu && v182 >= 2u )
                {
                  v184 = KeGetCurrentPrcb();
                  v24 = (__int64)v184->SchedulerAssist;
                  v185 = ~(unsigned __int16)(-1LL << (v208 + 1));
                  v94 = (v185 & *(_DWORD *)(v24 + 20)) == 0;
                  v23 = (unsigned int)v185 & *(_DWORD *)(v24 + 20);
                  *(_DWORD *)(v24 + 20) = v23;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v184);
                }
              }
              else
              {
                v183 = v208;
              }
              __writecr8(v183);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 24));
              v228 = 0;
              v173 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v174 = MmGetSessionIdEx(v173->ApcState.Process);
              else
                v174 = -1;
              --v173->SpecialApcDisable;
              v175 = ++v173->AbAllocationRegionCount;
              v176 = ((char)v173->AbEntrySummary | (char)v173->AbOrphanedEntrySummary) ^ 0x3F;
              v94 = !_BitScanReverse((unsigned int *)&v177, v176);
              v227 = v177;
              if ( v94 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v173->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v173, v12 + 24, v174, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v178 = (__int64)&v173->LockEntries[v177];
                  v176 &= ~(1 << v177);
                  if ( (*(_BYTE *)(v178 + 26) & 1) != 0
                    && (*(_DWORD *)(v178 + 32) & 1) == 0
                    && (*(_QWORD *)(v178 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v178 + 40) == v174 )
                  {
                    *(_BYTE *)(v178 + 26) &= ~1u;
                    if ( *(_QWORD *)(v178 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v177, v176);
                  v227 = v177;
                  if ( v94 )
                    goto LABEL_352;
                }
                if ( !v178 )
                {
LABEL_352:
                  v41 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v178 + 32) |= 2u;
                if ( *(__int64 *)(v178 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v178);
                v228 = *(_DWORD *)(v178 + 88) & 0x1FFFF;
                *(_DWORD *)(v178 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v178 + 25) &= ~1u;
                *(_QWORD *)(v178 + 32) = 0LL;
                v179 = (unsigned __int128)((v178 - (unsigned __int64)v173->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v41 = a1;
                v180 = 1 << ((v179 >> 4) + (v179 < 0));
                if ( v175 == 1 )
                  v173->AbEntrySummary |= v180;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v173->AbOrphanedEntrySummary, v180);
              }
              --v173->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v173);
              v94 = v173->SpecialApcDisable++ == -1;
              if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v173->ApcState.ApcListHead[0].Flink != &v173->152 )
                KiCheckForKernelApcDelivery(v181);
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v40 = 0LL;
            if ( (_DWORD)v221 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v221) >> 6) + 48),
                ~(3LL << ((2 * v221) & 0x3F)));
LABEL_29:
            if ( !v40 )
              RtlpHpLfhSubsegmentFreeBlock(v41, v12, 0LL, a5);
            if ( !v215 )
              goto LABEL_32;
            v186 = v5 + 16;
            if ( v215 == 2 )
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v186, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v186);
                v232 = 0;
                v187 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v186) == 1 )
                  v188 = (unsigned int)MmGetSessionIdEx(v187->ApcState.Process);
                else
                  v188 = 0xFFFFFFFFLL;
                --v187->SpecialApcDisable;
                v189 = ++v187->AbAllocationRegionCount;
                v190 = ((char)v187->AbEntrySummary | (char)v187->AbOrphanedEntrySummary) ^ 0x3F;
                v94 = !_BitScanReverse((unsigned int *)&v191, v190);
                v231 = v191;
                if ( v94 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v192 = (__int64)&v187->LockEntries[v191];
                  v190 &= ~(1 << v191);
                  if ( (*(_BYTE *)(v192 + 26) & 1) != 0
                    && (*(_DWORD *)(v192 + 32) & 1) == 0
                    && (*(_QWORD *)(v192 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v186 & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v192 + 40) == (_DWORD)v188 )
                  {
                    *(_BYTE *)(v192 + 26) &= ~1u;
                    if ( *(_QWORD *)(v192 + 32) )
                      break;
                  }
                  v94 = !_BitScanReverse((unsigned int *)&v191, v190);
                  v231 = v191;
                  if ( v94 )
                    goto LABEL_391;
                }
                if ( !v192 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v187->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v187, v186, v188, 0LL);
                }
                else
                {
                  *(_BYTE *)(v192 + 32) |= 2u;
                  if ( *(__int64 *)(v192 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v192);
                  v232 = *(_DWORD *)(v192 + 88) & 0x1FFFF;
                  *(_DWORD *)(v192 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v192 + 25) &= ~1u;
                  *(_QWORD *)(v192 + 32) = 0LL;
                  v193 = (signed __int64)(v192 - (unsigned __int64)v187->LockEntries) / 96;
                  if ( v189 == 1 )
                    v187->AbEntrySummary |= 1 << v193;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v187->AbOrphanedEntrySummary, 1 << v193);
                }
                --v187->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v187);
                v94 = v187->SpecialApcDisable++ == -1;
                if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v187->ApcState.ApcListHead[0].Flink != &v187->152 )
                  KiCheckForKernelApcDelivery(v194);
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v186);
            }
            else
            {
              if ( !*(_BYTE *)(v41 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v186, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v186);
                KeAbPostRelease(v186);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v186);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v195 = KeGetCurrentIrql();
                if ( v195 <= 0xFu && v207 <= 0xFu && v195 >= 2u )
                {
                  v24 = (__int64)KeGetCurrentPrcb();
                  v196 = ~(unsigned __int16)(-1LL << (v207 + 1));
                  v23 = *(_QWORD *)(v24 + 33976);
                  v94 = (v196 & *(_DWORD *)(v23 + 20)) == 0;
                  *(_DWORD *)(v23 + 20) &= v196;
                  if ( v94 )
                    KiRemoveSystemWorkPriorityKick(v24);
                }
              }
            }
            __writecr8(v207);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v216, v113, (__int64)&v226, 1, (__int64)&v213);
          v25 = (unsigned int)v12 >> 12;
LABEL_27:
          v40 = v12 + v26;
          if ( a4 < v21 )
          {
            v145 = v21 - a4;
            if ( v145 == 1 )
              v146 = 0x8000;
            else
              v146 = v145 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v25) + v40 - 2) = v146;
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
            v230 = 0;
            v96 = KeGetCurrentThread();
            v221 = (ULONG_PTR)v96;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
            else
              v97 = 0xFFFFFFFFLL;
            --v96->SpecialApcDisable;
            v115 = (ULONG_PTR)v96;
            v210 = ++v96->AbAllocationRegionCount;
            v116 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
            v94 = !_BitScanReverse((unsigned int *)&v117, v116);
            v229 = v117;
            if ( v94 )
              goto LABEL_155;
            while ( 1 )
            {
              v118 = *(_QWORD *)(v115 + 800) + 96 * v117;
              v116 &= ~(1 << v117);
              if ( (*(_BYTE *)(v118 + 26) & 1) != 0
                && (*(_DWORD *)(v118 + 32) & 1) == 0
                && (*(_QWORD *)(v118 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v118 + 40) == (_DWORD)v97 )
              {
                *(_BYTE *)(v118 + 26) &= ~1u;
                if ( *(_QWORD *)(v118 + 32) )
                  break;
              }
              v94 = !_BitScanReverse((unsigned int *)&v117, v116);
              v229 = v117;
              if ( v94 )
                goto LABEL_155;
            }
            if ( !v118 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v115 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v115, v12 + 24, v97, 0LL);
            }
            else
            {
              *(_BYTE *)(v118 + 32) |= 2u;
              if ( *(__int64 *)(v118 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v118);
                v115 = v221;
              }
              v230 = *(_DWORD *)(v118 + 88) & 0x1FFFF;
              *(_DWORD *)(v118 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v118 + 25) &= ~1u;
              *(_QWORD *)(v118 + 32) = 0LL;
              v119 = 1 << ((v118 - *(_QWORD *)(v115 + 800)) / 96);
              if ( v210 == 1 )
                *(_BYTE *)(v115 + 792) |= v119;
              else
                _InterlockedOr8((volatile signed __int8 *)(v115 + 870), v119);
            }
            --*(_BYTE *)(v115 + 794);
            KiAbThreadRemoveBoosts(v115);
            v121 = v221;
            v94 = (*(_WORD *)(v221 + 486))++ == 0xFFFF;
            if ( v94 && *(_QWORD *)(v121 + 152) != v121 + 152 )
              KiCheckForKernelApcDelivery(v120);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v106 = KeGetCurrentIrql(), v106 <= 0xFu) )
          {
            v95 = v208;
            if ( v208 <= 0xFu && v106 >= 2u )
            {
              v107 = KeGetCurrentPrcb();
              v24 = (__int64)v107->SchedulerAssist;
              v108 = ~(unsigned __int16)(-1LL << (v208 + 1));
              v94 = (v108 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v108 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v94 )
              {
                KiRemoveSystemWorkPriorityKick(v107);
                __writecr8(v208);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v95 = v208;
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
        v169 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v207 = v169;
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
        v225 = 0;
        v125 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v126 = MmGetSessionIdEx(v125->ApcState.Process);
        else
          v126 = -1;
        --v125->SpecialApcDisable;
        v149 = ++v125->AbAllocationRegionCount;
        v150 = ((char)v125->AbEntrySummary | (char)v125->AbOrphanedEntrySummary) ^ 0x3F;
        v94 = !_BitScanReverse((unsigned int *)&v151, v150);
        v240 = v151;
        if ( v94 )
          goto LABEL_244;
        while ( 1 )
        {
          v152 = (__int64)&v125->LockEntries[v151];
          v150 &= ~(1 << v151);
          if ( (*(_BYTE *)(v152 + 26) & 1) != 0
            && (*(_DWORD *)(v152 + 32) & 1) == 0
            && (*(_QWORD *)(v152 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v152 + 40) == v126 )
          {
            *(_BYTE *)(v152 + 26) &= ~1u;
            if ( *(_QWORD *)(v152 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v151, v150);
          v240 = v151;
          if ( v94 )
            goto LABEL_244;
        }
        if ( !v152 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v125->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v125, v5 + 16, v126, 0LL);
        }
        else
        {
          *(_BYTE *)(v152 + 32) |= 2u;
          if ( *(__int64 *)(v152 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v152);
          v225 = 0;
          v225 = *(_DWORD *)(v152 + 88) & 0x1FFFF;
          *(_DWORD *)(v152 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v152 + 25) &= ~1u;
          *(_QWORD *)(v152 + 32) = 0LL;
          v153 = 1 << ((signed __int64)(v152 - (unsigned __int64)v125->LockEntries) / 96);
          if ( v149 == 1 )
            v125->AbEntrySummary |= v153;
          else
            _InterlockedOr8((volatile signed __int8 *)&v125->AbOrphanedEntrySummary, v153);
        }
        --v125->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v125);
        v94 = v125->SpecialApcDisable++ == -1;
        if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v125->ApcState.ApcListHead[0].Flink != &v125->152 )
          KiCheckForKernelApcDelivery(v154);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v128 = KeGetCurrentIrql(), v128 <= 0xFu) )
          {
            v122 = v207;
            if ( v207 <= 0xFu && v128 >= 2u )
            {
              v129 = KeGetCurrentPrcb();
              v130 = v129->SchedulerAssist;
              v131 = ~(unsigned __int16)(-1LL << (v207 + 1));
              v94 = (v131 & v130[5]) == 0;
              v130[5] &= v131;
              if ( v94 )
                KiRemoveSystemWorkPriorityKick(v129);
            }
          }
          else
          {
            v122 = v207;
          }
          __writecr8(v122);
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
      v215 = 2;
      v207 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v123 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v222 = v123;
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
    v220 = 0;
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
        v220 = 1;
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
          v170 = **v54;
          if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v170 + 8) != v52 )
            goto LABEL_408;
          *v54 = (__int64 *)v170;
          *(_QWORD *)(v170 + 8) = v54;
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
          v59 = v207;
          if ( v207 <= 0xFu && v90 >= 2u )
          {
            v91 = KeGetCurrentPrcb();
            v92 = v91->SchedulerAssist;
            v93 = ~(unsigned __int16)(-1LL << (v207 + 1));
            v94 = (v93 & v92[5]) == 0;
            v92[5] &= v93;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v91);
          }
        }
        else
        {
          v59 = v207;
        }
        __writecr8(v59);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        v224 = 0;
        v87 = KeGetCurrentThread();
        v88 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v87->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        v98 = ++v87->AbAllocationRegionCount;
        v99 = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        v100 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v94 = !_BitScanReverse((unsigned int *)&v101, v99);
        v239 = v101;
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
            v99 &= ~(1 << v101);
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
            v239 = v101;
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
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v102);
          v224 = 0;
          v224 = *(_DWORD *)(v102 + 88) & 0x1FFFF;
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
    v215 = 2;
    v171 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v207 = v171;
  }
  v60 = 3LL;
  v61 = 2 * (*(unsigned __int16 *)(v46 + 34) + (unsigned __int64)*(unsigned __int8 *)(v46 + 39));
  v244[1] = v46 + 48;
  v62 = *(unsigned __int8 *)(v5 + 1);
  v244[0] = v61;
  v219 = (unsigned int)v46 >> 12;
  LODWORD(v221) = *((unsigned __int8 *)RtlpSearchWidth + v62);
  v63 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_WORD *)(v46 + 40));
  v64 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v46 >> 12) ^ *(_DWORD *)(v46 + 40)) >> 16;
  v66 = v65;
  v238 = v63;
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
  v69 = RtlpLfhBlockBitmapAllocate((unsigned int)v244, *(unsigned __int16 *)(v46 + 36), v68, v221, v60);
  v218 = v69;
  *(_WORD *)(v46 + 36) = v69;
  v70 = v66 + v69 * v63;
  if ( *(_BYTE *)(v46 + 45) <= 1u )
    goto LABEL_89;
  v71 = *(_BYTE *)(v46 + 44);
  v24 = 0LL;
  v72 = v46 + *(unsigned __int16 *)(v46 + 46);
  v23 = v70 >> v71;
  v219 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v219 ^ *(unsigned __int16 *)(v46 + 40);
  v233 = 0;
  v214[0] = -1;
  v73 = ((v70 + v219 - 1) >> v71) - (unsigned int)v23 + 1;
  v209 = -1;
  v74 = 2 * v23;
  v75 = (signed __int16 *)(2 * v23 + v72);
  _m_prefetchw(v75);
  v217 = 0LL;
  v76 = &v75[v73];
  v215 = 0;
  v211 = -1;
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
          v23 = v215;
          v80 = v211;
          LODWORD(v81) = v217;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v24 )
        break;
      LODWORD(v221) = 1;
      v124 = RtlpHpAcquireLockExclusive((volatile LONG *)(v46 + 24), *(unsigned __int8 *)(a1 + 57));
      v24 = 1LL;
      v209 = v124;
    }
    v80 = v211;
    if ( v78 )
    {
      v23 = v215 + 1;
      v81 = v74 >> 1;
      ++v215;
      v217 = v74 >> 1;
      if ( v211 == -1 )
      {
        v80 = v74 >> 1;
        v211 = v80;
      }
    }
    else
    {
      LODWORD(v81) = v217;
      v23 = --v215;
    }
    *v75 = v78 + 1;
LABEL_84:
    ++v75;
    v74 += 2LL;
  }
  while ( (unsigned __int64)v75 < v77 );
  v63 = v238;
  v82 = v218;
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v155 = KeGetCurrentIrql(), v155 <= 0xFu) )
      {
        v134 = v209;
        if ( v209 <= 0xFu && v155 >= 2u )
        {
          v24 = (__int64)KeGetCurrentPrcb();
          v156 = ~(unsigned __int16)(-1LL << (v209 + 1));
          v23 = *(_QWORD *)(v24 + 33976);
          v94 = (v156 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v156;
          if ( v94 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            __writecr8(v209);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v134 = v209;
      }
      __writecr8(v134);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 24));
    v237 = 0;
    v147 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
      v148 = (unsigned int)MmGetSessionIdEx(v147->ApcState.Process);
    else
      v148 = 0xFFFFFFFFLL;
    --v147->SpecialApcDisable;
    v163 = ++v147->AbAllocationRegionCount;
    v164 = ((char)v147->AbEntrySummary | (char)v147->AbOrphanedEntrySummary) ^ 0x3F;
    v94 = !_BitScanReverse((unsigned int *)&v165, v164);
    v236 = v165;
    if ( v94 )
      goto LABEL_282;
    while ( 1 )
    {
      v166 = (__int64)&v147->LockEntries[v165];
      v164 &= ~(1 << v165);
      if ( (*(_BYTE *)(v166 + 26) & 1) != 0
        && (*(_DWORD *)(v166 + 32) & 1) == 0
        && (*(_QWORD *)(v166 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v166 + 40) == (_DWORD)v148 )
      {
        *(_BYTE *)(v166 + 26) &= ~1u;
        if ( *(_QWORD *)(v166 + 32) )
          break;
      }
      v94 = !_BitScanReverse((unsigned int *)&v165, v164);
      v236 = v165;
      if ( v94 )
        goto LABEL_282;
    }
    if ( !v166 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v147->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v147, v46 + 24, v148, 0LL);
    }
    else
    {
      *(_BYTE *)(v166 + 32) |= 2u;
      if ( *(__int64 *)(v166 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v166);
      v237 = *(_DWORD *)(v166 + 88) & 0x1FFFF;
      *(_DWORD *)(v166 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v166 + 25) &= ~1u;
      *(_QWORD *)(v166 + 32) = 0LL;
      v167 = 1 << ((signed __int64)(v166 - (unsigned __int64)v147->LockEntries) / 96);
      if ( v163 == 1 )
        v147->AbEntrySummary |= v167;
      else
        _InterlockedOr8((volatile signed __int8 *)&v147->AbOrphanedEntrySummary, v167);
    }
    --v147->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v147);
    v94 = v147->SpecialApcDisable++ == -1;
    if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v147->ApcState.ApcListHead[0].Flink != &v147->152 )
      KiCheckForKernelApcDelivery(v168);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v40 = v46 + v70;
    if ( a4 < v63 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v46, v46 + v70, v63 - a4, v24);
    v84 = a1;
  }
  else
  {
    v135 = v81 - v80;
    v136 = *(_BYTE *)(v46 + 44);
    v137 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v83 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v83 + 24));
    v138 = v80 << v136;
    v233 = v135 + 1;
    v139 = (v135 + 1) << v136;
    v140 = *(_QWORD *)v83;
    v214[0] = v209;
    v212 = v138;
    if ( v137(v140, v46 + v138, v139, v24) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v46, v212, v139, (__int64)&v233, 1, (__int64)v214);
      goto LABEL_89;
    }
    v84 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v46, v70, v219);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v46 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v205 = KeGetCurrentIrql();
          if ( v205 <= 0xFu && v209 <= 0xFu && v205 >= 2u )
          {
            v24 = (__int64)KeGetCurrentPrcb();
            v206 = ~(unsigned __int16)(-1LL << (v209 + 1));
            v23 = *(_QWORD *)(v24 + 33976);
            v94 = (v206 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v206;
            if ( v94 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v209);
      v40 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 24));
      v40 = 0LL;
      v235 = 0;
      v197 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46 + 24) == 1 )
        v198 = MmGetSessionIdEx(v197->ApcState.Process);
      else
        v198 = -1;
      --v197->SpecialApcDisable;
      v199 = ++v197->AbAllocationRegionCount;
      v200 = ((char)v197->AbEntrySummary | (char)v197->AbOrphanedEntrySummary) ^ 0x3F;
      v94 = !_BitScanReverse((unsigned int *)&v201, v200);
      v234 = v201;
      if ( v94 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v197->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v197, v46 + 24, v198, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v202 = (__int64)&v197->LockEntries[v201];
          v200 &= ~(1 << v201);
          if ( (*(_BYTE *)(v202 + 26) & 1) != 0
            && (*(_DWORD *)(v202 + 32) & 1) == 0
            && (*(_QWORD *)(v202 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v46 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v202 + 40) == v198 )
          {
            *(_BYTE *)(v202 + 26) &= ~1u;
            if ( *(_QWORD *)(v202 + 32) )
              break;
          }
          v94 = !_BitScanReverse((unsigned int *)&v201, v200);
          v234 = v201;
          if ( v94 )
            goto LABEL_432;
        }
        if ( !v202 )
        {
LABEL_432:
          v40 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v202 + 32) |= 2u;
        if ( *(__int64 *)(v202 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v202);
        v235 = *(_DWORD *)(v202 + 88) & 0x1FFFF;
        *(_DWORD *)(v202 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v202 + 25) &= ~1u;
        *(_QWORD *)(v202 + 32) = 0LL;
        v203 = 1 << ((char)(v202 - LOBYTE(v197->LockEntries)) / 96);
        if ( v199 == 1 )
          v197->AbEntrySummary |= v203;
        else
          _InterlockedOr8((volatile signed __int8 *)&v197->AbOrphanedEntrySummary, v203);
        v40 = 0LL;
      }
      --v197->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v197);
      v94 = v197->SpecialApcDisable++ == -1;
      if ( v94 && ($C459BD0D405E8E46662177FB3D0A143F *)v197->ApcState.ApcListHead[0].Flink != &v197->152 )
        KiCheckForKernelApcDelivery(v204);
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
  Subsegment = v222;
LABEL_33:
  if ( v220 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v23, v24);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v40;
}
