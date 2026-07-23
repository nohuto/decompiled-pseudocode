/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x140347B90
 * Callers:
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x1403925D0 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140223B20 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140229C08 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14022F1B0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14022F464 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x14022F760 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14023A010 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14023E408 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x140311AC4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140311B00 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x140349240 (RtlpLfhBlockBitmapAllocate.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x140392924 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F89C4 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r10
  _DWORD *v111; // r9
  int v112; // eax
  char v113; // cl
  int (__fastcall *v114)(__int64, unsigned __int64, _QWORD, __int64); // rax
  int v115; // esi
  unsigned int v116; // r10d
  unsigned int v117; // esi
  __int64 v118; // rcx
  ULONG_PTR v119; // r10
  unsigned int v120; // edx
  __int64 v121; // rcx
  __int64 v122; // rsi
  unsigned __int8 v123; // al
  ULONG_PTR v124; // rsi
  KIRQL v125; // r13
  __int64 v126; // rax
  KIRQL v127; // al
  struct _KTHREAD *v128; // r14
  unsigned int v129; // r8d
  KIRQL v130; // r13
  unsigned __int8 v131; // al
  struct _KPRCB *v132; // r10
  _DWORD *v133; // r9
  int v134; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v137; // si
  int v138; // r11d
  char v139; // cl
  int (__fastcall *v140)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v141; // r10d
  unsigned int v142; // esi
  __int64 v143; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v147; // eax
  unsigned int v148; // r13d
  __int16 v149; // r13
  struct _KTHREAD *v150; // rbx
  ULONG_PTR v151; // r9
  unsigned __int8 v152; // r12
  unsigned int v153; // edx
  __int64 v154; // rcx
  __int64 v155; // rdi
  unsigned __int8 v156; // al
  unsigned __int8 v157; // al
  int v158; // eax
  __int64 v159; // r8
  unsigned __int8 v160; // r13
  unsigned int v161; // edx
  __int64 v162; // rcx
  __int64 v163; // r14
  unsigned __int8 v164; // al
  unsigned __int8 v165; // r13
  unsigned int v166; // edx
  __int64 v167; // rcx
  __int64 v168; // rsi
  unsigned __int8 v169; // al
  KIRQL v170; // al
  __int64 v171; // rax
  KIRQL v172; // al
  unsigned int v173; // r8d
  struct _KTHREAD *v174; // rsi
  unsigned int v175; // r8d
  unsigned __int8 v176; // r13
  unsigned int v177; // edx
  __int64 v178; // rcx
  __int64 v179; // r14
  __int64 v180; // rdx
  unsigned __int8 v181; // al
  unsigned __int8 v182; // al
  unsigned __int8 v183; // si
  struct _KPRCB *v184; // r10
  _DWORD *v185; // r9
  int v186; // eax
  ULONG_PTR v187; // r15
  struct _KTHREAD *v188; // rbx
  ULONG_PTR v189; // r9
  unsigned __int8 v190; // r14
  unsigned int v191; // edx
  __int64 v192; // rcx
  __int64 v193; // rdi
  __int64 v194; // rdx
  unsigned __int8 v195; // al
  struct _KPRCB *v196; // r9
  int v197; // eax
  _DWORD *v198; // r8
  struct _KTHREAD *v199; // rbx
  unsigned int v200; // r8d
  unsigned __int8 v201; // r15
  unsigned int v202; // edx
  __int64 v203; // rcx
  __int64 v204; // rsi
  unsigned __int8 v205; // r12
  unsigned __int8 v206; // al
  struct _KPRCB *v207; // r9
  int v208; // eax
  _DWORD *v209; // r8
  KIRQL v210; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v211; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v212; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v213; // [rsp+41h] [rbp-BFh]
  int v214; // [rsp+44h] [rbp-BCh]
  unsigned int v215; // [rsp+44h] [rbp-BCh]
  unsigned __int8 v216; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v217[3]; // [rsp+49h] [rbp-B7h] BYREF
  int v218; // [rsp+4Ch] [rbp-B4h]
  unsigned int v219; // [rsp+50h] [rbp-B0h]
  __int64 v220; // [rsp+58h] [rbp-A8h]
  unsigned int v221; // [rsp+60h] [rbp-A0h]
  int v222; // [rsp+64h] [rbp-9Ch]
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
          v89 = *(unsigned __int8 *)(v6 + 57);
          v7 = 2;
          v218 = 2;
          v90 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), v89);
          v6 = a1;
          v210 = v90;
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
            v130 = v210;
            if ( v210 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v147 = ~(unsigned __int16)(-1LL << (v210 + 1));
              v98 = (v147 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v147;
              if ( v98 )
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
            v130 = v210;
          }
          __writecr8(v130);
          v13 = 0;
          v218 = 0;
          goto LABEL_8;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v245 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v160 = ++CurrentThread->AbAllocationRegionCount;
        v161 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v98 = !_BitScanReverse((unsigned int *)&v162, v161);
        v244 = v162;
        if ( v98 )
          goto LABEL_262;
        while ( 1 )
        {
          v163 = (__int64)&CurrentThread->LockEntries[v162];
          v161 &= ~(1 << v162);
          if ( (*(_BYTE *)(v163 + 26) & 1) != 0
            && (*(_DWORD *)(v163 + 32) & 1) == 0
            && (*(_QWORD *)(v163 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v163 + 40) == SessionId )
          {
            *(_BYTE *)(v163 + 26) &= ~1u;
            if ( *(_QWORD *)(v163 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v162, v161);
          v244 = v162;
          if ( v98 )
            goto LABEL_262;
        }
        if ( !v163 )
        {
LABEL_262:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v163 + 32) |= 2u;
          if ( *(__int64 *)(v163 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v163);
          v245 = *(_DWORD *)(v163 + 88) & 0x1FFFF;
          *(_DWORD *)(v163 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v163 + 25) &= ~1u;
          *(_QWORD *)(v163 + 32) = 0LL;
          v164 = 1 << ((signed __int64)(v163 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v160 == 1 )
            CurrentThread->AbEntrySummary |= v164;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v164);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v98 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v98
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
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
          v13 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + (unsigned __int16)RtlpLfhIncrementDataSlot(v17, v18));
          v21 = v221;
          if ( a4 >= v221 )
            v20 = v19;
        }
        v22 = RtlpLfhBlockBitmapAllocate((unsigned int)v246, *(unsigned __int16 *)(v12 + 36), v13, v220, v14);
        v23 = (unsigned int)v12 >> 12;
        LODWORD(v224) = v22;
        *(_WORD *)(v12 + 36) = v22;
        v24 = v20 + v22 * v21;
        if ( *(_BYTE *)(v12 + 45) <= 1u )
          goto LABEL_27;
        v25 = *(_BYTE *)(v12 + 44);
        v26 = *(unsigned __int16 *)(v12 + 46);
        v27 = 0LL;
        v229 = 0;
        v28 = v24 >> v25;
        v29 = *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int16)((unsigned int)v12 >> 12);
        v216 = -1;
        v211 = -1;
        v222 = WORD4(RtlpHpHeapGlobals) ^ v29;
        v30 = 2 * v28;
        v31 = ((v24 + v222 - 1) >> v25) - (unsigned int)v28 + 1;
        v32 = (signed __int16 *)(2 * v28 + v12 + v26);
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
                v38 = v220;
                v39 = v219;
                goto LABEL_21;
              }
            }
            if ( (_DWORD)v27 )
              break;
            v241 = 1;
            v93 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
            v27 = 1LL;
            v35 = v93;
            v211 = v93;
          }
          v39 = v219;
          if ( v36 )
          {
            v38 = v220 + 1;
            LODWORD(v220) = v220 + 1;
            v226 = v30 >> 1;
            if ( v219 == -1 )
            {
              v39 = v30 >> 1;
              v219 = v39;
            }
          }
          else
          {
            v38 = v220 - 1;
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
          v113 = *(_BYTE *)(v12 + 44);
          v114 = (int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))(v40 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v40 + 24));
          v115 = v226 - v39;
          v216 = v35;
          v116 = v39 << v113;
          v229 = v115 + 1;
          v117 = (v115 + 1) << v113;
          v118 = *(_QWORD *)v40;
          v219 = v116;
          if ( v114(v118, v12 + v116, v117, v27) < 0 )
          {
            v173 = v24;
            v42 = a1;
            RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, v173, v222);
            if ( *(_BYTE *)(a1 + 57) )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v182 = KeGetCurrentIrql(), v182 <= 0xFu) )
              {
                v183 = v211;
                if ( v211 <= 0xFu && v182 >= 2u )
                {
                  v184 = KeGetCurrentPrcb();
                  v185 = v184->SchedulerAssist;
                  v186 = ~(unsigned __int16)(-1LL << (v211 + 1));
                  v98 = (v186 & v185[5]) == 0;
                  v185[5] &= v186;
                  if ( v98 )
                    KiRemoveSystemWorkPriorityKick(v184);
                }
              }
              else
              {
                v183 = v211;
              }
              __writecr8(v183);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v12 + 24);
              v231 = 0;
              v174 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
                v175 = MmGetSessionIdEx(v174->ApcState.Process);
              else
                v175 = -1;
              --v174->SpecialApcDisable;
              v176 = ++v174->AbAllocationRegionCount;
              v177 = ((char)v174->AbEntrySummary | (char)v174->AbOrphanedEntrySummary) ^ 0x3F;
              v98 = !_BitScanReverse((unsigned int *)&v178, v177);
              v230 = v178;
              if ( v98 )
              {
LABEL_353:
                if ( (*((_DWORD *)&v174->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v174, v12 + 24, v175, 0LL);
              }
              else
              {
                while ( 1 )
                {
                  v179 = (__int64)&v174->LockEntries[v178];
                  v177 &= ~(1 << v178);
                  if ( (*(_BYTE *)(v179 + 26) & 1) != 0
                    && (*(_DWORD *)(v179 + 32) & 1) == 0
                    && (*(_QWORD *)(v179 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v179 + 40) == v175 )
                  {
                    *(_BYTE *)(v179 + 26) &= ~1u;
                    if ( *(_QWORD *)(v179 + 32) )
                      break;
                  }
                  v98 = !_BitScanReverse((unsigned int *)&v178, v177);
                  v230 = v178;
                  if ( v98 )
                    goto LABEL_352;
                }
                if ( !v179 )
                {
LABEL_352:
                  v42 = a1;
                  goto LABEL_353;
                }
                *(_BYTE *)(v179 + 32) |= 2u;
                if ( *(__int64 *)(v179 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v179);
                v231 = *(_DWORD *)(v179 + 88) & 0x1FFFF;
                *(_DWORD *)(v179 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v179 + 25) &= ~1u;
                *(_QWORD *)(v179 + 32) = 0LL;
                v180 = (unsigned __int128)((v179 - (unsigned __int64)v174->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                v42 = a1;
                v181 = 1 << ((v180 >> 4) + (v180 < 0));
                if ( v176 == 1 )
                  v174->AbEntrySummary |= v181;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v174->AbOrphanedEntrySummary, v181);
              }
              --v174->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v174);
              v98 = v174->SpecialApcDisable++ == -1;
              if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v174->ApcState.ApcListHead[0].Flink != &v174->152 )
                KiCheckForKernelApcDelivery();
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            v41 = 0LL;
            if ( (_DWORD)v224 != -1 )
              _InterlockedAnd64(
                (volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(unsigned int)(2 * v224) >> 6) + 48),
                ~(3LL << ((2 * v224) & 0x3F)));
LABEL_29:
            if ( !v41 )
              RtlpHpLfhSubsegmentFreeBlock(v42, v12, 0LL, a5);
            if ( !v218 )
              goto LABEL_32;
            v187 = v5 + 16;
            if ( v218 == 2 )
            {
              if ( !*(_BYTE *)(v42 + 57) )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v187, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v187);
                v235 = 0;
                v188 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v187) == 1 )
                  v189 = (unsigned int)MmGetSessionIdEx(v188->ApcState.Process);
                else
                  v189 = 0xFFFFFFFFLL;
                --v188->SpecialApcDisable;
                v190 = ++v188->AbAllocationRegionCount;
                v191 = ((char)v188->AbEntrySummary | (char)v188->AbOrphanedEntrySummary) ^ 0x3F;
                v98 = !_BitScanReverse((unsigned int *)&v192, v191);
                v234 = v192;
                if ( v98 )
                  goto LABEL_391;
                while ( 1 )
                {
                  v193 = (__int64)&v188->LockEntries[v192];
                  v191 &= ~(1 << v192);
                  if ( (*(_BYTE *)(v193 + 26) & 1) != 0
                    && (*(_DWORD *)(v193 + 32) & 1) == 0
                    && (*(_QWORD *)(v193 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v187 & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v193 + 40) == (_DWORD)v189 )
                  {
                    *(_BYTE *)(v193 + 26) &= ~1u;
                    if ( *(_QWORD *)(v193 + 32) )
                      break;
                  }
                  v98 = !_BitScanReverse((unsigned int *)&v192, v191);
                  v234 = v192;
                  if ( v98 )
                    goto LABEL_391;
                }
                if ( !v193 )
                {
LABEL_391:
                  if ( (*((_DWORD *)&v188->0 + 1) & 0x10000) == 0 )
                    KeBugCheckEx(0x162u, (ULONG_PTR)v188, v187, v189, 0LL);
                }
                else
                {
                  *(_BYTE *)(v193 + 32) |= 2u;
                  if ( *(__int64 *)(v193 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v193);
                  v235 = *(_DWORD *)(v193 + 88) & 0x1FFFF;
                  *(_DWORD *)(v193 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v193 + 25) &= ~1u;
                  *(_QWORD *)(v193 + 32) = 0LL;
                  v194 = (signed __int64)(v193 - (unsigned __int64)v188->LockEntries) / 96;
                  if ( v190 == 1 )
                    v188->AbEntrySummary |= 1 << v194;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v188->AbOrphanedEntrySummary, 1 << v194);
                }
                --v188->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v188);
                v98 = v188->SpecialApcDisable++ == -1;
                if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v188->ApcState.ApcListHead[0].Flink != &v188->152 )
                  KiCheckForKernelApcDelivery();
                goto LABEL_389;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v187);
            }
            else
            {
              if ( !*(_BYTE *)(v42 + 57) )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)v187, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)v187);
                KeAbPostRelease(v187);
LABEL_389:
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                goto LABEL_32;
              }
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v187);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v195 = KeGetCurrentIrql();
                if ( v195 <= 0xFu && v210 <= 0xFu && v195 >= 2u )
                {
                  v196 = KeGetCurrentPrcb();
                  v197 = ~(unsigned __int16)(-1LL << (v210 + 1));
                  v198 = v196->SchedulerAssist;
                  v98 = (v197 & v198[5]) == 0;
                  v198[5] &= v197;
                  if ( v98 )
                    KiRemoveSystemWorkPriorityKick(v196);
                }
              }
            }
            __writecr8(v210);
            goto LABEL_32;
          }
          RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v219, v117, &v229, 1, &v216);
          v23 = (unsigned int)v12 >> 12;
LABEL_27:
          v41 = v12 + v24;
          if ( a4 < v21 )
          {
            v148 = v21 - a4;
            if ( v148 == 1 )
              v149 = 0x8000;
            else
              v149 = v148 & 0x3FFF;
            *(_WORD *)((WORD4(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v12 + 40) ^ (unsigned __int64)v23) + v41 - 2) = v149;
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
            v233 = 0;
            v100 = KeGetCurrentThread();
            v224 = (ULONG_PTR)v100;
            if ( (unsigned int)MiGetSystemRegionType(v12 + 24) == 1 )
              v101 = (unsigned int)MmGetSessionIdEx(v100->ApcState.Process);
            else
              v101 = 0xFFFFFFFFLL;
            --v100->SpecialApcDisable;
            v119 = (ULONG_PTR)v100;
            v213 = ++v100->AbAllocationRegionCount;
            v120 = ((char)v100->AbEntrySummary | (char)v100->AbOrphanedEntrySummary) ^ 0x3F;
            v98 = !_BitScanReverse((unsigned int *)&v121, v120);
            v232 = v121;
            if ( v98 )
              goto LABEL_155;
            while ( 1 )
            {
              v122 = *(_QWORD *)(v119 + 800) + 96 * v121;
              v120 &= ~(1 << v121);
              if ( (*(_BYTE *)(v122 + 26) & 1) != 0
                && (*(_DWORD *)(v122 + 32) & 1) == 0
                && (*(_QWORD *)(v122 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v12 + 24) & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v122 + 40) == (_DWORD)v101 )
              {
                *(_BYTE *)(v122 + 26) &= ~1u;
                if ( *(_QWORD *)(v122 + 32) )
                  break;
              }
              v98 = !_BitScanReverse((unsigned int *)&v121, v120);
              v232 = v121;
              if ( v98 )
                goto LABEL_155;
            }
            if ( !v122 )
            {
LABEL_155:
              if ( (*(_DWORD *)(v119 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v119, v12 + 24, v101, 0LL);
            }
            else
            {
              *(_BYTE *)(v122 + 32) |= 2u;
              if ( *(__int64 *)(v122 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v122);
                v119 = v224;
              }
              v233 = *(_DWORD *)(v122 + 88) & 0x1FFFF;
              *(_DWORD *)(v122 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v122 + 25) &= ~1u;
              *(_QWORD *)(v122 + 32) = 0LL;
              v123 = 1 << ((v122 - *(_QWORD *)(v119 + 800)) / 96);
              if ( v213 == 1 )
                *(_BYTE *)(v119 + 792) |= v123;
              else
                _InterlockedOr8((volatile signed __int8 *)(v119 + 870), v123);
            }
            --*(_BYTE *)(v119 + 794);
            KiAbThreadRemoveBoosts(v119);
            v124 = v224;
            v98 = (*(_WORD *)(v224 + 486))++ == 0xFFFF;
            if ( v98 && *(_QWORD *)(v124 + 152) != v124 + 152 )
              KiCheckForKernelApcDelivery();
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            goto LABEL_26;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v109 = KeGetCurrentIrql(), v109 <= 0xFu) )
          {
            v99 = v211;
            if ( v211 <= 0xFu && v109 >= 2u )
            {
              v110 = KeGetCurrentPrcb();
              v111 = v110->SchedulerAssist;
              v112 = ~(unsigned __int16)(-1LL << (v211 + 1));
              v98 = (v112 & v111[5]) == 0;
              v111[5] &= v112;
              if ( v98 )
              {
                KiRemoveSystemWorkPriorityKick(v110);
                __writecr8(v211);
                goto LABEL_26;
              }
            }
          }
          else
          {
            v99 = v211;
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
        v170 = RtlpHpAcquireLockShared((volatile LONG *)v8, *(unsigned __int8 *)(v6 + 57));
        v6 = a1;
        v210 = v170;
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
        v228 = 0;
        v128 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16) == 1 )
          v129 = MmGetSessionIdEx(v128->ApcState.Process);
        else
          v129 = -1;
        --v128->SpecialApcDisable;
        v152 = ++v128->AbAllocationRegionCount;
        v153 = ((char)v128->AbEntrySummary | (char)v128->AbOrphanedEntrySummary) ^ 0x3F;
        v98 = !_BitScanReverse((unsigned int *)&v154, v153);
        v243 = v154;
        if ( v98 )
          goto LABEL_244;
        while ( 1 )
        {
          v155 = (__int64)&v128->LockEntries[v154];
          v153 &= ~(1 << v154);
          if ( (*(_BYTE *)(v155 + 26) & 1) != 0
            && (*(_DWORD *)(v155 + 32) & 1) == 0
            && (*(_QWORD *)(v155 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v155 + 40) == v129 )
          {
            *(_BYTE *)(v155 + 26) &= ~1u;
            if ( *(_QWORD *)(v155 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v154, v153);
          v243 = v154;
          if ( v98 )
            goto LABEL_244;
        }
        if ( !v155 )
        {
LABEL_244:
          if ( (*((_DWORD *)&v128->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v128, v5 + 16, v129, 0LL);
        }
        else
        {
          *(_BYTE *)(v155 + 32) |= 2u;
          if ( *(__int64 *)(v155 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v155);
          v228 = 0;
          v228 = *(_DWORD *)(v155 + 88) & 0x1FFFF;
          *(_DWORD *)(v155 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v155 + 25) &= ~1u;
          *(_QWORD *)(v155 + 32) = 0LL;
          v156 = 1 << ((signed __int64)(v155 - (unsigned __int64)v128->LockEntries) / 96);
          if ( v152 == 1 )
            v128->AbEntrySummary |= v156;
          else
            _InterlockedOr8((volatile signed __int8 *)&v128->AbOrphanedEntrySummary, v156);
        }
        --v128->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v128);
        v98 = v128->SpecialApcDisable++ == -1;
        if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v128->ApcState.ApcListHead[0].Flink != &v128->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v8 = v5 + 16;
      }
      else
      {
        if ( *(_BYTE *)(v6 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
LABEL_173:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v131 = KeGetCurrentIrql(), v131 <= 0xFu) )
          {
            v125 = v210;
            if ( v210 <= 0xFu && v131 >= 2u )
            {
              v132 = KeGetCurrentPrcb();
              v133 = v132->SchedulerAssist;
              v134 = ~(unsigned __int16)(-1LL << (v210 + 1));
              v98 = (v134 & v133[5]) == 0;
              v133[5] &= v134;
              if ( v98 )
                KiRemoveSystemWorkPriorityKick(v132);
            }
          }
          else
          {
            v125 = v210;
          }
          __writecr8(v125);
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
      v218 = 2;
      v210 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
      v126 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v6 = a1;
      v225 = v126;
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
    v223 = 0;
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
        v223 = 1;
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
          v171 = **v55;
          if ( (__int64 **)(*v55)[1] != v55 || *(__int64 **)(v171 + 8) != v53 )
            goto LABEL_408;
          *v55 = (__int64 *)v171;
          *(_QWORD *)(v171 + 8) = v55;
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
          v60 = v210;
          if ( v210 <= 0xFu && v94 >= 2u )
          {
            v95 = KeGetCurrentPrcb();
            v96 = v95->SchedulerAssist;
            v97 = ~(unsigned __int16)(-1LL << (v210 + 1));
            v98 = (v97 & v96[5]) == 0;
            v96[5] &= v97;
            if ( v98 )
              KiRemoveSystemWorkPriorityKick(v95);
          }
        }
        else
        {
          v60 = v210;
        }
        __writecr8(v60);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v227 = 0;
        v91 = KeGetCurrentThread();
        v92 = (unsigned int)MiGetSystemRegionType(v8) == 1
            ? (unsigned int)MmGetSessionIdEx(v91->ApcState.Process)
            : 0xFFFFFFFFLL;
        --v91->SpecialApcDisable;
        v102 = ++v91->AbAllocationRegionCount;
        v103 = ((char)v91->AbEntrySummary | (char)v91->AbOrphanedEntrySummary) ^ 0x3F;
        v104 = v8 & 0x7FFFFFFFFFFFFFFCLL;
        v98 = !_BitScanReverse((unsigned int *)&v105, v103);
        v242 = v105;
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
            v242 = v105;
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
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v106);
          v227 = 0;
          v227 = *(_DWORD *)(v106 + 88) & 0x1FFFF;
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
          KiCheckForKernelApcDelivery();
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
    v218 = 2;
    v172 = RtlpHpAcquireLockExclusive((volatile LONG *)v8, *(unsigned __int8 *)(a1 + 57));
    v6 = a1;
    v210 = v172;
  }
  v61 = 3LL;
  v62 = 2 * (*(unsigned __int16 *)(v47 + 34) + (unsigned __int64)*(unsigned __int8 *)(v47 + 39));
  v247[1] = v47 + 48;
  v63 = *(unsigned __int8 *)(v5 + 1);
  v247[0] = v62;
  v222 = (unsigned int)v47 >> 12;
  LODWORD(v224) = *((unsigned __int8 *)RtlpSearchWidth + v63);
  v64 = (unsigned __int16)(WORD4(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_WORD *)(v47 + 40));
  v65 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_DWORD *)(v47 + 40)) >> 16;
  v66 = (DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)v47 >> 12) ^ *(_DWORD *)(v47 + 40)) >> 16;
  v67 = v66;
  v241 = v64;
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
  v70 = RtlpLfhBlockBitmapAllocate((unsigned int)v247, *(unsigned __int16 *)(v47 + 36), v69, v224, v61);
  v221 = v70;
  *(_WORD *)(v47 + 36) = v70;
  v72 = v67 + v70 * v64;
  if ( *(_BYTE *)(v47 + 45) <= 1u )
    goto LABEL_89;
  v73 = *(_BYTE *)(v47 + 44);
  v71 = 0LL;
  v74 = v47 + *(unsigned __int16 *)(v47 + 46);
  v75 = v72 >> v73;
  v222 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int16)v222 ^ *(unsigned __int16 *)(v47 + 40);
  v236 = 0;
  v217[0] = -1;
  v76 = ((v72 + v222 - 1) >> v73) - (unsigned int)v75 + 1;
  v212 = -1;
  v77 = 2 * v75;
  v78 = (signed __int16 *)(2 * v75 + v74);
  _m_prefetchw(v78);
  v220 = 0LL;
  v79 = &v78[v76];
  v218 = 0;
  v214 = -1;
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
          v83 = v218;
          v84 = v214;
          LODWORD(v85) = v220;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v71 )
        break;
      LODWORD(v224) = 1;
      v127 = RtlpHpAcquireLockExclusive((volatile LONG *)(v47 + 24), *(unsigned __int8 *)(a1 + 57));
      v71 = 1LL;
      v212 = v127;
    }
    v84 = v214;
    if ( v81 )
    {
      v83 = v218 + 1;
      v85 = v77 >> 1;
      ++v218;
      v220 = v77 >> 1;
      if ( v214 == -1 )
      {
        v84 = v77 >> 1;
        v214 = v84;
      }
    }
    else
    {
      LODWORD(v85) = v220;
      v83 = --v218;
    }
    *v78 = v81 + 1;
LABEL_84:
    ++v78;
    v77 += 2LL;
  }
  while ( (unsigned __int64)v78 < v80 );
  v64 = v241;
  v86 = v221;
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v157 = KeGetCurrentIrql(), v157 <= 0xFu) )
      {
        v137 = v212;
        if ( v212 <= 0xFu && v157 >= 2u )
        {
          v71 = (__int64)KeGetCurrentPrcb();
          v158 = ~(unsigned __int16)(-1LL << (v212 + 1));
          v159 = *(_QWORD *)(v71 + 33976);
          v98 = (v158 & *(_DWORD *)(v159 + 20)) == 0;
          *(_DWORD *)(v159 + 20) &= v158;
          if ( v98 )
          {
            KiRemoveSystemWorkPriorityKick(v71);
            __writecr8(v212);
            goto LABEL_89;
          }
        }
      }
      else
      {
        v137 = v212;
      }
      __writecr8(v137);
      goto LABEL_89;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v47 + 24);
    v240 = 0;
    v150 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v47 + 24) == 1 )
      v151 = (unsigned int)MmGetSessionIdEx(v150->ApcState.Process);
    else
      v151 = 0xFFFFFFFFLL;
    --v150->SpecialApcDisable;
    v165 = ++v150->AbAllocationRegionCount;
    v166 = ((char)v150->AbEntrySummary | (char)v150->AbOrphanedEntrySummary) ^ 0x3F;
    v98 = !_BitScanReverse((unsigned int *)&v167, v166);
    v239 = v167;
    if ( v98 )
      goto LABEL_282;
    while ( 1 )
    {
      v168 = (__int64)&v150->LockEntries[v167];
      v166 &= ~(1 << v167);
      if ( (*(_BYTE *)(v168 + 26) & 1) != 0
        && (*(_DWORD *)(v168 + 32) & 1) == 0
        && (*(_QWORD *)(v168 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v47 + 24) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v168 + 40) == (_DWORD)v151 )
      {
        *(_BYTE *)(v168 + 26) &= ~1u;
        if ( *(_QWORD *)(v168 + 32) )
          break;
      }
      v98 = !_BitScanReverse((unsigned int *)&v167, v166);
      v239 = v167;
      if ( v98 )
        goto LABEL_282;
    }
    if ( !v168 )
    {
LABEL_282:
      if ( (*((_DWORD *)&v150->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v150, v47 + 24, v151, 0LL);
    }
    else
    {
      *(_BYTE *)(v168 + 32) |= 2u;
      if ( *(__int64 *)(v168 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v168);
      v240 = *(_DWORD *)(v168 + 88) & 0x1FFFF;
      *(_DWORD *)(v168 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v168 + 25) &= ~1u;
      *(_QWORD *)(v168 + 32) = 0LL;
      v169 = 1 << ((signed __int64)(v168 - (unsigned __int64)v150->LockEntries) / 96);
      if ( v165 == 1 )
        v150->AbEntrySummary |= v169;
      else
        _InterlockedOr8((volatile signed __int8 *)&v150->AbOrphanedEntrySummary, v169);
    }
    --v150->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v150);
    v98 = v150->SpecialApcDisable++ == -1;
    if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v150->ApcState.ApcListHead[0].Flink != &v150->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
LABEL_89:
    v41 = v47 + v72;
    if ( a4 < v64 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v47, v47 + v72, v64 - a4, v71);
    v88 = a1;
  }
  else
  {
    v138 = v85 - v84;
    v139 = *(_BYTE *)(v47 + 44);
    v140 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v87 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v87 + 24));
    v141 = v84 << v139;
    v236 = v138 + 1;
    v142 = (v138 + 1) << v139;
    v143 = *(_QWORD *)v87;
    v217[0] = v212;
    v215 = v141;
    if ( v140(v143, v47 + v141, v142, v71) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v47, v215, v142, &v236, 1, v217);
      goto LABEL_89;
    }
    v88 = a1;
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v47, v72, v222);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v206 = KeGetCurrentIrql();
          if ( v206 <= 0xFu && v212 <= 0xFu && v206 >= 2u )
          {
            v207 = KeGetCurrentPrcb();
            v208 = ~(unsigned __int16)(-1LL << (v212 + 1));
            v209 = v207->SchedulerAssist;
            v98 = (v208 & v209[5]) == 0;
            v209[5] &= v208;
            if ( v98 )
              KiRemoveSystemWorkPriorityKick(v207);
          }
        }
      }
      __writecr8(v212);
      v41 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v47 + 24);
      v41 = 0LL;
      v238 = 0;
      v199 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v47 + 24) == 1 )
        v200 = MmGetSessionIdEx(v199->ApcState.Process);
      else
        v200 = -1;
      --v199->SpecialApcDisable;
      v201 = ++v199->AbAllocationRegionCount;
      v202 = ((char)v199->AbEntrySummary | (char)v199->AbOrphanedEntrySummary) ^ 0x3F;
      v98 = !_BitScanReverse((unsigned int *)&v203, v202);
      v237 = v203;
      if ( v98 )
      {
LABEL_433:
        if ( (*((_DWORD *)&v199->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v199, v47 + 24, v200, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v204 = (__int64)&v199->LockEntries[v203];
          v202 &= ~(1 << v203);
          if ( (*(_BYTE *)(v204 + 26) & 1) != 0
            && (*(_DWORD *)(v204 + 32) & 1) == 0
            && (*(_QWORD *)(v204 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v47 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v204 + 40) == v200 )
          {
            *(_BYTE *)(v204 + 26) &= ~1u;
            if ( *(_QWORD *)(v204 + 32) )
              break;
          }
          v98 = !_BitScanReverse((unsigned int *)&v203, v202);
          v237 = v203;
          if ( v98 )
            goto LABEL_432;
        }
        if ( !v204 )
        {
LABEL_432:
          v41 = 0LL;
          goto LABEL_433;
        }
        *(_BYTE *)(v204 + 32) |= 2u;
        if ( *(__int64 *)(v204 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v204);
        v238 = *(_DWORD *)(v204 + 88) & 0x1FFFF;
        *(_DWORD *)(v204 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v204 + 25) &= ~1u;
        *(_QWORD *)(v204 + 32) = 0LL;
        v205 = 1 << ((char)(v204 - LOBYTE(v199->LockEntries)) / 96);
        if ( v201 == 1 )
          v199->AbEntrySummary |= v205;
        else
          _InterlockedOr8((volatile signed __int8 *)&v199->AbOrphanedEntrySummary, v205);
        v41 = 0LL;
      }
      --v199->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v199);
      v98 = v199->SpecialApcDisable++ == -1;
      if ( v98 && ($C459BD0D405E8E46662177FB3D0A143F *)v199->ApcState.ApcListHead[0].Flink != &v199->152 )
        KiCheckForKernelApcDelivery();
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
  Subsegment = v225;
LABEL_33:
  if ( v223 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v41;
}
