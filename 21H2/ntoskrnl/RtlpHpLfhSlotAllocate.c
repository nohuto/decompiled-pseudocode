/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x14034A490
 * Callers:
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x14039FD24 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402314B0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x14034B970 (RtlpLfhBlockBitmapAllocate.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140362C48 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14036424C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140365834 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x140365B28 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140367768 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14037039C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14039FF7C (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     RtlHeapZero @ 0x1403E0320 (RtlHeapZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x14041A044 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  __int64 v11; // r8
  signed __int64 v12; // rdi
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // ebp
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  __int64 v28; // rsi
  char v29; // cl
  unsigned __int64 v30; // rbp
  __int64 v31; // r8
  int v32; // edx
  signed __int16 *v33; // rbp
  signed __int16 *v34; // rdx
  unsigned __int64 v35; // r14
  signed __int16 v36; // ax
  signed __int16 v37; // tt
  __int64 v38; // r8
  int v39; // r10d
  int v40; // r11d
  __int64 v41; // rdx
  unsigned int v42; // ebp
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 Subsegment; // rdi
  __int64 v47; // r15
  unsigned __int16 v48; // dx
  __int64 v49; // r9
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // di
  unsigned __int16 v52; // cx
  unsigned __int16 v53; // r10
  unsigned int v54; // r8d
  __int64 *v55; // r10
  _QWORD *v56; // r8
  __int64 **v57; // rcx
  __int64 v58; // rdx
  __int64 *v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rdi
  unsigned __int8 v62; // r12
  __int64 v63; // rdx
  unsigned __int8 v64; // al
  struct _KTHREAD *v65; // r12
  __int64 v66; // r8
  __int64 v67; // r12
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // eax
  unsigned int v71; // r14d
  __int64 v72; // rdx
  unsigned int v73; // esi
  unsigned int v74; // ebp
  unsigned __int16 v75; // ax
  int v76; // r8d
  int v77; // eax
  __int64 v78; // rsi
  char v79; // cl
  char v80; // r11
  __int64 v81; // rdi
  __int64 v82; // r8
  __int64 v83; // r12
  __int64 v84; // rdx
  signed __int16 *v85; // rdi
  signed __int16 *v86; // rbp
  signed __int16 v87; // ax
  signed __int16 v88; // tt
  int v89; // edx
  __int64 v90; // r10
  __int64 v91; // r12
  unsigned __int8 v92; // al
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  bool v97; // zf
  struct _KTHREAD *v98; // r10
  __int64 v99; // rdx
  char *v100; // rdi
  unsigned int m; // ecx
  int v102; // r8d
  struct _KTHREAD *v103; // rcx
  char v104; // cl
  int (__fastcall *v105)(_QWORD, unsigned __int64, _QWORD, __int64); // rax
  int v106; // ebp
  unsigned __int8 v107; // al
  struct _KPRCB *v108; // r10
  int v109; // eax
  unsigned __int8 v110; // r12
  unsigned int v111; // eax
  __int64 v112; // rdx
  char *v113; // rbp
  unsigned int i; // ecx
  struct _KTHREAD *v115; // rcx
  struct _KTHREAD *v116; // r12
  __int64 v117; // rdx
  char *v118; // rdi
  unsigned int k; // ecx
  char v120; // al
  unsigned __int8 v121; // al
  struct _KPRCB *v122; // r10
  _DWORD *v123; // r9
  int v124; // eax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // ecx
  unsigned __int8 v127; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v131; // eax
  char v132; // cl
  int (__fastcall *v133)(__int64, __int64, _QWORD, __int64); // rax
  __int64 v134; // rdx
  unsigned int v135; // edi
  __int64 v136; // rcx
  int v137; // r8d
  struct _KTHREAD *v138; // rcx
  struct _KTHREAD *v139; // rbp
  unsigned __int8 v140; // al
  int v141; // eax
  __int64 v142; // r8
  char *p_Process; // r15
  __int64 v144; // rdx
  int v145; // r8d
  struct _KTHREAD *v146; // rcx
  __int64 v147; // rdx
  char *v148; // rbx
  unsigned int n; // ecx
  struct _KTHREAD *v150; // rcx
  int v151; // r15d
  __int16 v152; // r15
  unsigned __int8 v153; // al
  __int64 v154; // rax
  struct _KTHREAD *v155; // rcx
  __int64 v156; // rdx
  struct _KTHREAD *v157; // r15
  unsigned int v158; // ecx
  char *v159; // rsi
  __int64 v160; // rdx
  struct _KTHREAD *v161; // rcx
  unsigned __int8 v162; // al
  struct _KPRCB *v163; // r10
  int v164; // eax
  ULONG_PTR v165; // r14
  struct _KTHREAD *v166; // rdi
  char *v167; // rbx
  __int64 v168; // rdx
  unsigned int j; // ecx
  struct _KTHREAD *v170; // rcx
  unsigned __int8 v171; // al
  unsigned __int8 v172; // r12
  int v173; // eax
  struct _KTHREAD *v174; // rsi
  unsigned int v175; // ecx
  char *v176; // rbx
  __int64 v177; // rdx
  struct _KTHREAD *v178; // rcx
  unsigned __int8 v179; // al
  unsigned __int8 v180; // di
  int v181; // eax
  unsigned __int8 v182; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v183; // [rsp+40h] [rbp-B8h]
  unsigned __int8 v184; // [rsp+41h] [rbp-B7h]
  int v185; // [rsp+44h] [rbp-B4h]
  unsigned int v186; // [rsp+44h] [rbp-B4h]
  unsigned int v187; // [rsp+44h] [rbp-B4h]
  unsigned int v188; // [rsp+44h] [rbp-B4h]
  unsigned __int8 v189; // [rsp+48h] [rbp-B0h] BYREF
  char v190[3]; // [rsp+49h] [rbp-AFh] BYREF
  int v191; // [rsp+4Ch] [rbp-ACh]
  int v192; // [rsp+50h] [rbp-A8h]
  __int64 v193; // [rsp+58h] [rbp-A0h]
  unsigned int v194; // [rsp+60h] [rbp-98h]
  int v195; // [rsp+64h] [rbp-94h]
  unsigned int v196; // [rsp+68h] [rbp-90h]
  __int64 v197; // [rsp+70h] [rbp-88h]
  __int64 v198; // [rsp+78h] [rbp-80h]
  unsigned int v199; // [rsp+80h] [rbp-78h]
  int v200; // [rsp+88h] [rbp-70h] BYREF
  int v201; // [rsp+8Ch] [rbp-6Ch] BYREF
  _QWORD v202[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v203[11]; // [rsp+A0h] [rbp-58h] BYREF

  v5 = a1;
  LOBYTE(v6) = -1;
  v7 = a4;
  v8 = a3;
  v182 = -1;
  v9 = 0;
  v191 = 0;
  v195 = 0;
  v193 = 0LL;
  v10 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  while ( 1 )
  {
    v11 = 0xFFFFFFFFLL;
    if ( v10 )
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)(v8 + 56));
        v12 = *(_QWORD *)(v8 + 56);
        if ( (v12 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), v12 - 1, v12);
            if ( v12 == v13 )
              break;
            v195 = 1;
            v12 = v13;
            if ( (v13 & 0xFFF) == 0 )
              goto LABEL_37;
          }
          v14 = v12 & 0xFFFFFFFFFFFFF000uLL;
          if ( v14 )
            break;
        }
LABEL_37:
        if ( v9 == 2 )
          goto LABEL_38;
        v63 = *(unsigned __int8 *)(v5 + 57);
        v9 = 2;
        v191 = 2;
        v64 = RtlpHpAcquireLockExclusive(v8 + 16, v63);
        v5 = a1;
        LOBYTE(v6) = v64;
        v182 = v64;
      }
      if ( v9 )
      {
        if ( *(_BYTE *)(v5 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v131 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                v97 = (v131 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v131;
                if ( v97 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8((unsigned __int8)v6);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v8 + 16);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          _disable();
          v142 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
          p_Process = (char *)&CurrentThread[1].Process;
          v144 = 0LL;
          do
          {
            if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == v142
              && p_Process[18]
              && (*(_DWORD *)p_Process & 1) == 0
              && *((_DWORD *)p_Process + 2) == SessionId )
            {
              p_Process[18] = 0;
              if ( *(__int64 *)p_Process < 0 )
              {
                *p_Process |= 2u;
                _enable();
                KiAbEntryRemoveFromTree(p_Process, v144, v142);
                _disable();
              }
              v145 = *((_DWORD *)p_Process + 22);
              *((_DWORD *)p_Process + 22) = 0;
              p_Process[17] = 0;
              *(_QWORD *)p_Process = 0LL;
              CurrentThread->AbEntrySummary |= 1 << p_Process[16];
              _enable();
              if ( v145 )
                KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v8 + 16, v145);
              goto LABEL_258;
            }
            v144 = (unsigned int)(v144 + 1);
            p_Process += 96;
          }
          while ( (unsigned int)v144 < 6 );
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8 + 16, SessionId, 0LL);
          _enable();
LABEL_258:
          v146 = KeGetCurrentThread();
          v97 = v146->SpecialApcDisable++ == -1;
          if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v146->ApcState.ApcListHead[0].Flink != &v146->152 )
            KiCheckForKernelApcDelivery();
        }
        v191 = 0;
      }
      v15 = 3LL;
      v16 = *(unsigned __int16 *)(v14 + 34) + (unsigned __int64)*(unsigned __int8 *)(v14 + 39);
      v202[1] = v14 + 48;
      v17 = *(unsigned __int8 *)(v8 + 1);
      v202[0] = 2 * v16;
      v192 = *((unsigned __int8 *)RtlpSearchWidth + v17);
      v196 = (unsigned int)v14 >> 12;
      v18 = *(_DWORD *)(v14 + 40) ^ qword_140C5A5C8 ^ ((unsigned int)v14 >> 12);
      v19 = (unsigned __int16)v18;
      v20 = HIWORD(v18);
      v21 = HIWORD(v18);
      v22 = HIWORD(v18);
      if ( (unsigned int)v7 >= (unsigned __int16)v18 )
        v15 = 1LL;
      if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
      {
        v22 = v20;
        v24 = 0;
        if ( (unsigned int)v7 >= (unsigned __int16)v18 )
          v22 = v20;
      }
      else
      {
        v23 = (unsigned __int16)RtlpLfhIncrementDataSlot(v20, v20);
        if ( (unsigned int)v7 >= v19 )
          v22 = v21;
        v24 = RtlpLowFragHeapRandomData[v23];
      }
      v27 = RtlpLfhBlockBitmapAllocate((unsigned int)v202, *(unsigned __int16 *)(v14 + 36), v24, v192, v15);
      *(_WORD *)(v14 + 36) = v27;
      v28 = v22 + v27 * v19;
      if ( *(_BYTE *)(v14 + 45) > 1u )
      {
        v29 = *(_BYTE *)(v14 + 44);
        v26 = 0LL;
        v30 = v14 + *(unsigned __int16 *)(v14 + 46);
        v31 = (unsigned int)v28 >> v29;
        v194 = *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int16)v196;
        v200 = 0;
        v32 = (((unsigned int)v28 + v194 - 1) >> v29) - v31;
        v189 = -1;
        v25 = 2 * v31;
        v184 = -1;
        v198 = v25;
        v33 = (signed __int16 *)(v25 + v30);
        _m_prefetchw(v33);
        v192 = (unsigned __int8)v200;
        v34 = &v33[v32 + 1];
        v185 = -1;
        v197 = (unsigned __int8)v200;
        if ( v33 < v34 )
        {
          v35 = (unsigned __int64)v34;
          do
          {
            while ( 1 )
            {
              v36 = *v33;
              while ( v36 > 0 )
              {
                v37 = v36;
                v36 = _InterlockedCompareExchange16(v33, v36 + 1, v36);
                if ( v37 == v36 )
                {
                  v38 = v198;
                  v39 = v192;
                  v40 = v185;
                  goto LABEL_20;
                }
              }
              if ( (_DWORD)v26 )
                break;
              v199 = 1;
              v92 = RtlpHpAcquireLockExclusive(v14 + 24, *(unsigned __int8 *)(a1 + 57));
              v26 = 1LL;
              v184 = v92;
            }
            v38 = v198;
            v40 = v185;
            if ( v36 )
            {
              v39 = ++v192;
              v197 = v198 >> 1;
              if ( v185 == -1 )
              {
                v40 = v198 >> 1;
                v185 = v40;
              }
            }
            else
            {
              v39 = --v192;
            }
            *v33 = v36 + 1;
LABEL_20:
            v25 = v38 + 2;
            ++v33;
            v198 = v25;
          }
          while ( (unsigned __int64)v33 < v35 );
          v8 = a3;
          LODWORD(v7) = a4;
          if ( v39 )
          {
            v41 = a1;
            if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
                (v39 << *(_BYTE *)(v14 + 44)) / 4096);
          }
          else
          {
            v41 = a1;
          }
          if ( v40 == -1 )
          {
            if ( (_DWORD)v26 )
            {
              if ( *(_BYTE *)(v41 + 57) )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 24));
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v107 = KeGetCurrentIrql();
                    if ( v107 <= 0xFu && v184 <= 0xFu && v107 >= 2u )
                    {
                      v108 = KeGetCurrentPrcb();
                      v26 = (__int64)v108->SchedulerAssist;
                      v109 = ~(unsigned __int16)(-1LL << (v184 + 1));
                      v97 = (v109 & *(_DWORD *)(v26 + 20)) == 0;
                      v25 = (unsigned int)v109 & *(_DWORD *)(v26 + 20);
                      *(_DWORD *)(v26 + 20) = v25;
                      if ( v97 )
                        KiRemoveSystemWorkPriorityKick(v108);
                    }
                  }
                }
                __writecr8(v184);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v14 + 24);
                v98 = KeGetCurrentThread();
                v197 = (__int64)v98;
                if ( v14 + 24 - qword_140C50630 < 0x8000000000LL )
                {
                  v111 = MmGetSessionIdEx((__int64)v98->ApcState.Process);
                  v98 = (struct _KTHREAD *)v197;
                  v25 = v111;
                }
                else
                {
                  v25 = 0xFFFFFFFFLL;
                }
                _disable();
                v26 = 0x7FFFFFFFFFFFFFFCLL;
                v112 = (v14 + 24) & 0x7FFFFFFFFFFFFFFCLL;
                v113 = (char *)&v98[1].Process;
                for ( i = 0; i < 6; ++i )
                {
                  if ( (*(_QWORD *)v113 & 0x7FFFFFFFFFFFFFFCLL) == v112
                    && v113[18]
                    && (*(_DWORD *)v113 & 1) == 0
                    && *((_DWORD *)v113 + 2) == (_DWORD)v25 )
                  {
                    v113[18] = 0;
                    if ( *(__int64 *)v113 < 0 )
                    {
                      *v113 |= 2u;
                      _enable();
                      KiAbEntryRemoveFromTree(v113, v112, v25);
                      _disable();
                      v98 = (struct _KTHREAD *)v197;
                    }
                    v25 = *((unsigned int *)v113 + 22);
                    *((_DWORD *)v113 + 22) = 0;
                    v113[17] = 0;
                    *(_QWORD *)v113 = 0LL;
                    v26 = (unsigned __int8)v113[16];
                    v98->AbEntrySummary |= 1 << v26;
                    _enable();
                    if ( (_DWORD)v25 )
                      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v98, v14 + 24, v25);
                    goto LABEL_169;
                  }
                  v113 += 96;
                }
                if ( (*((_DWORD *)&v98->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v98, v14 + 24, (unsigned int)v25, 0LL);
                _enable();
LABEL_169:
                v115 = KeGetCurrentThread();
                v97 = v115->SpecialApcDisable++ == -1;
                if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v115->ApcState.ApcListHead[0].Flink != &v115->152 )
                  KiCheckForKernelApcDelivery();
              }
            }
          }
          else
          {
            v104 = *(_BYTE *)(v14 + 44);
            v189 = v184;
            v105 = (int (__fastcall *)(_QWORD, unsigned __int64, _QWORD, __int64))(v41 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v41 + 24));
            v200 = v197 - v40 + 1;
            v106 = v200 << v104;
            v187 = v40 << v104;
            if ( v105(*(_QWORD *)v41, v14 + (unsigned int)(v40 << v104), (unsigned int)(v200 << v104), v26) < 0 )
            {
              v44 = a1;
              RtlpHpLfhSubsegmentDecBlockCounts(a1, v14, (unsigned int)v28, v194);
              if ( *(_BYTE *)(a1 + 57) )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 24));
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v162 = KeGetCurrentIrql();
                    if ( v162 <= 0xFu && v184 <= 0xFu && v162 >= 2u )
                    {
                      v163 = KeGetCurrentPrcb();
                      v26 = (__int64)v163->SchedulerAssist;
                      v164 = ~(unsigned __int16)(-1LL << (v184 + 1));
                      v97 = (v164 & *(_DWORD *)(v26 + 20)) == 0;
                      v25 = (unsigned int)v164 & *(_DWORD *)(v26 + 20);
                      *(_DWORD *)(v26 + 20) = v25;
                      if ( v97 )
                        KiRemoveSystemWorkPriorityKick(v163);
                    }
                  }
                }
                __writecr8(v184);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v14 + 24);
                v157 = KeGetCurrentThread();
                if ( v14 + 24 - qword_140C50630 >= 0x8000000000LL )
                  v158 = -1;
                else
                  v158 = MmGetSessionIdEx((__int64)v157->ApcState.Process);
                _disable();
                v26 = 0x7FFFFFFFFFFFFFFCLL;
                v25 = (v14 + 24) & 0x7FFFFFFFFFFFFFFCLL;
                v159 = (char *)&v157[1].Process;
                v160 = 0LL;
                do
                {
                  if ( (*(_QWORD *)v159 & 0x7FFFFFFFFFFFFFFCLL) == v25
                    && v159[18]
                    && (*(_DWORD *)v159 & 1) == 0
                    && *((_DWORD *)v159 + 2) == v158 )
                  {
                    v159[18] = 0;
                    if ( *(__int64 *)v159 < 0 )
                    {
                      *v159 |= 2u;
                      _enable();
                      KiAbEntryRemoveFromTree(v159, v160, v25);
                      _disable();
                    }
                    v25 = *((unsigned int *)v159 + 22);
                    *((_DWORD *)v159 + 22) = 0;
                    v159[17] = 0;
                    *(_QWORD *)v159 = 0LL;
                    v26 = (unsigned __int8)v159[16];
                    v157->AbEntrySummary |= 1 << v26;
                    _enable();
                    if ( (_DWORD)v25 )
                      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v157, v14 + 24, v25);
                    goto LABEL_334;
                  }
                  v160 = (unsigned int)(v160 + 1);
                  v159 += 96;
                }
                while ( (unsigned int)v160 < 6 );
                if ( (*((_DWORD *)&v157->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v157, v14 + 24, v158, 0LL);
                _enable();
LABEL_334:
                v161 = KeGetCurrentThread();
                v97 = v161->SpecialApcDisable++ == -1;
                if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v161->ApcState.ApcListHead[0].Flink != &v161->152 )
                  KiCheckForKernelApcDelivery();
                v44 = a1;
              }
              v43 = 0LL;
              v42 = a5;
              if ( v27 != -1 )
              {
                _InterlockedAnd64(
                  (volatile signed __int64 *)(v14 + 8 * ((unsigned __int64)(unsigned int)(2 * v27) >> 6) + 48),
                  ~(3LL << ((2 * v27) & 0x3F)));
LABEL_340:
                RtlpHpLfhSubsegmentFreeBlock(v44, v14, 0LL, v42);
LABEL_30:
                if ( !v191 )
                  goto LABEL_31;
                v165 = v8 + 16;
                if ( v191 == 2 )
                {
                  if ( !*(_BYTE *)(v44 + 57) )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v165, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v165);
                    v166 = KeGetCurrentThread();
                    if ( v165 - qword_140C50630 >= 0x8000000000LL )
                      v25 = 0xFFFFFFFFLL;
                    else
                      v25 = (unsigned int)MmGetSessionIdEx((__int64)v166->ApcState.Process);
                    _disable();
                    v167 = (char *)&v166[1].Process;
                    v26 = 0x7FFFFFFFFFFFFFFCLL;
                    v168 = v165 & 0x7FFFFFFFFFFFFFFCLL;
                    for ( j = 0; j < 6; ++j )
                    {
                      if ( (*(_QWORD *)v167 & 0x7FFFFFFFFFFFFFFCLL) == v168
                        && v167[18]
                        && (*(_DWORD *)v167 & 1) == 0
                        && *((_DWORD *)v167 + 2) == (_DWORD)v25 )
                      {
                        v167[18] = 0;
                        if ( *(__int64 *)v167 < 0 )
                        {
                          *v167 |= 2u;
                          _enable();
                          KiAbEntryRemoveFromTree(v167, v168, v25);
                          _disable();
                        }
                        v25 = *((unsigned int *)v167 + 22);
                        *((_DWORD *)v167 + 22) = 0;
                        v167[17] = 0;
                        *(_QWORD *)v167 = 0LL;
                        v166->AbEntrySummary |= 1 << v167[16];
                        _enable();
                        if ( (_DWORD)v25 )
                          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v166, v165, v25);
                        goto LABEL_371;
                      }
                      v167 += 96;
                    }
                    if ( (*((_DWORD *)&v166->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v166, v165, (unsigned int)v25, 0LL);
                    _enable();
                    goto LABEL_371;
                  }
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v165);
                }
                else
                {
                  if ( !*(_BYTE *)(v44 + 57) )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v165, 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared(v165);
                    KeAbPostRelease(v165);
LABEL_371:
                    v170 = KeGetCurrentThread();
                    v97 = v170->SpecialApcDisable++ == -1;
                    if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v170->ApcState.ApcListHead[0].Flink != &v170->152 )
                      KiCheckForKernelApcDelivery();
                    goto LABEL_31;
                  }
                  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v165);
                }
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v171 = KeGetCurrentIrql(), v171 <= 0xFu) )
                {
                  v172 = v182;
                  if ( v182 <= 0xFu && v171 >= 2u )
                  {
                    v26 = (__int64)KeGetCurrentPrcb();
                    v173 = ~(unsigned __int16)(-1LL << (v182 + 1));
                    v25 = *(_QWORD *)(v26 + 35000);
                    v97 = (v173 & *(_DWORD *)(v25 + 20)) == 0;
                    *(_DWORD *)(v25 + 20) &= v173;
                    if ( v97 )
                      KiRemoveSystemWorkPriorityKick(v26);
                  }
                }
                else
                {
                  v172 = v182;
                }
                __writecr8(v172);
                goto LABEL_31;
              }
LABEL_29:
              if ( v43 )
                goto LABEL_30;
              goto LABEL_340;
            }
            RtlpHpLfhSubsegmentIncBlockCounts(a1, v14, v187, v106, &v200, 1, (char *)&v189);
          }
        }
      }
      v42 = a5;
      v43 = v14 + v28;
      if ( (a5 & 2) != 0 )
        RtlHeapZero(v43, ((unsigned int)v7 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v7 < v19 )
      {
        v151 = v19 - v7;
        if ( v151 == 1 )
          v152 = 0x8000;
        else
          v152 = v151 & 0x3FFF;
        *(_WORD *)((*(unsigned __int16 *)(v14 + 40) ^ (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int64)(unsigned __int16)v196)
                 + v43
                 - 2) = v152;
      }
      v44 = a1;
      goto LABEL_29;
    }
    if ( !v9 )
    {
      v9 = 1;
      v153 = RtlpHpAcquireLockShared(v8 + 16, *(unsigned __int8 *)(v5 + 57), 0xFFFFFFFFLL, 4096LL);
      v5 = a1;
      v182 = v153;
LABEL_38:
      v11 = 0xFFFFFFFFLL;
    }
    if ( *(_QWORD *)(v8 + 8) )
      break;
    if ( v9 == 2 )
    {
      if ( !*(_BYTE *)(v5 + 57) )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v8 + 16);
          v11 = 0xFFFFFFFFLL;
        }
        v116 = KeGetCurrentThread();
        if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
          v11 = (unsigned int)MmGetSessionIdEx((__int64)v116->ApcState.Process);
        _disable();
        v117 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
        v118 = (char *)&v116[1].Process;
        for ( k = 0; k < 6; ++k )
        {
          if ( (*(_QWORD *)v118 & 0x7FFFFFFFFFFFFFFCLL) == v117
            && v118[18]
            && (*(_DWORD *)v118 & 1) == 0
            && *((_DWORD *)v118 + 2) == (_DWORD)v11 )
          {
            v118[18] = 0;
            if ( *(__int64 *)v118 < 0 )
            {
              *v118 |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(v118, v117, v11);
              _disable();
            }
            v137 = *((_DWORD *)v118 + 22);
            *((_DWORD *)v118 + 22) = 0;
            v118[17] = 0;
            *(_QWORD *)v118 = 0LL;
            v116->AbEntrySummary |= 1 << v118[16];
            _enable();
            if ( v137 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v116, v8 + 16, v137);
            goto LABEL_228;
          }
          v118 += 96;
        }
        if ( (*((_DWORD *)&v116->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v116, v8 + 16, (unsigned int)v11, 0LL);
        _enable();
        goto LABEL_228;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
    }
    else
    {
      if ( !*(_BYTE *)(v5 + 57) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 16);
        KeAbPostRelease(v8 + 16);
LABEL_228:
        v138 = KeGetCurrentThread();
        v97 = v138->SpecialApcDisable++ == -1;
        if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v138->ApcState.ApcListHead[0].Flink != &v138->152 )
          KiCheckForKernelApcDelivery();
        goto LABEL_153;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v121 = KeGetCurrentIrql(), v121 <= 0xFu) )
    {
      v110 = v182;
      if ( v182 <= 0xFu && v121 >= 2u )
      {
        v122 = KeGetCurrentPrcb();
        v123 = v122->SchedulerAssist;
        v124 = ~(unsigned __int16)(-1LL << (v182 + 1));
        v97 = (v124 & v123[5]) == 0;
        v123[5] &= v124;
        if ( v97 )
          KiRemoveSystemWorkPriorityKick(v122);
      }
    }
    else
    {
      v110 = v182;
    }
    __writecr8(v110);
LABEL_153:
    Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)(a1 + 57));
    if ( !Subsegment )
    {
      Subsegment = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
      if ( !Subsegment )
      {
        v42 = a5;
        v43 = 0LL;
        goto LABEL_32;
      }
    }
    v9 = 2;
    v191 = 2;
    v182 = RtlpHpAcquireLockExclusive(v8 + 16, *(unsigned __int8 *)(a1 + 57));
    LOBYTE(v6) = v182;
    v193 = RtlpHpLfhSlotAddSubsegment(v8, Subsegment);
LABEL_155:
    v5 = a1;
  }
  v47 = *(_QWORD *)(v8 + 24);
  v48 = 1;
  if ( v10 )
    v48 = 4096;
  v49 = v8 + 24;
  if ( v47 == v8 + 24 )
  {
LABEL_291:
    v47 = 0LL;
    goto LABEL_64;
  }
LABEL_43:
  v50 = *(_WORD *)(v47 + 32);
  v195 = 0;
  while ( 1 )
  {
    if ( v48 < v50 )
    {
      v51 = v48;
    }
    else
    {
      v51 = v50;
      if ( v9 == 1 )
      {
        v47 = *(_QWORD *)v47;
        if ( v47 == v49 )
          goto LABEL_291;
        goto LABEL_43;
      }
    }
    v52 = v50 - v51;
    v50 = _InterlockedCompareExchange16((volatile signed __int16 *)(v47 + 32), v50 - v51, v50);
    v53 = v51;
    v54 = v51 + v52;
    if ( v50 == v54 )
      break;
    if ( v50 < v54 )
      v195 = 1;
  }
  if ( *(_WORD *)(v47 + 32) )
    goto LABEL_62;
  v55 = (__int64 *)v47;
  switch ( *(_BYTE *)(v47 + 38) )
  {
    case 0:
      v56 = (_QWORD *)(v8 + 8);
      goto LABEL_50;
    case 1:
      v49 = v8 + 40;
      v56 = 0LL;
LABEL_50:
      v57 = (__int64 **)(v8 + 40);
      if ( v49 )
      {
        v58 = *(_QWORD *)v47;
        v59 = *(__int64 **)(v47 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v47 + 8LL) == v47 && *v59 == v47 )
        {
          *v59 = v58;
          *(_QWORD *)(v58 + 8) = v59;
          if ( v56 )
            --*v56;
          goto LABEL_55;
        }
LABEL_388:
        __fastfail(3u);
      }
LABEL_55:
      *(_BYTE *)(v47 + 38) = 1;
      if ( v57 )
      {
        v60 = v57[1];
        if ( (__int64 **)*v60 != v57 )
          goto LABEL_388;
        *(_QWORD *)v47 = v57;
        *(_QWORD *)(v47 + 8) = v60;
        v55 = 0LL;
        *v60 = v47;
        v57[1] = (__int64 *)v47;
      }
      if ( (*(_BYTE *)v8 & 1) == 0 && *(_QWORD *)(v8 + 8) > 8uLL )
      {
        v55 = *v57;
        v154 = **v57;
        if ( (__int64 **)(*v57)[1] != v57 || *(__int64 **)(v154 + 8) != v55 )
          goto LABEL_388;
        *v57 = (__int64 *)v154;
        *(_QWORD *)(v154 + 8) = v57;
        --MEMORY[0];
        *((_BYTE *)v55 + 38) = 2;
      }
      if ( v55 && *((_BYTE *)v55 + 38) == 2 )
        v55[2] = 0LL;
      break;
    case 2:
      v57 = (__int64 **)(v8 + 40);
      goto LABEL_55;
  }
  v53 = v51;
LABEL_62:
  if ( v51 > 1u )
    *(_QWORD *)(v8 + 56) = v47 ^ ((unsigned __int16)(v53 - 1) ^ (unsigned __int16)v47) & 0xFFF;
LABEL_64:
  v61 = a1;
  if ( v9 == 2 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
LABEL_67:
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v93 = KeGetCurrentIrql(), v93 <= 0xFu) )
      {
        v62 = v182;
        if ( v182 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->SchedulerAssist;
          v96 = ~(unsigned __int16)(-1LL << (v182 + 1));
          v97 = (v96 & v95[5]) == 0;
          v95[5] &= v96;
          if ( v97 )
          {
            KiRemoveSystemWorkPriorityKick(v94);
            __writecr8(v182);
            goto LABEL_76;
          }
        }
      }
      else
      {
        v62 = v182;
      }
      __writecr8(v62);
      goto LABEL_76;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 16);
    v65 = KeGetCurrentThread();
    if ( (unsigned __int64)(v8 + 16 - qword_140C50630) < 0x8000000000LL )
      v66 = (unsigned int)MmGetSessionIdEx((__int64)v65->ApcState.Process);
    else
      v66 = 0xFFFFFFFFLL;
    _disable();
    v99 = (v8 + 16) & 0x7FFFFFFFFFFFFFFCLL;
    v100 = (char *)&v65[1].Process;
    for ( m = 0; m < 6; ++m )
    {
      if ( (*(_QWORD *)v100 & 0x7FFFFFFFFFFFFFFCLL) == v99
        && v100[18]
        && (*(_DWORD *)v100 & 1) == 0
        && *((_DWORD *)v100 + 2) == (_DWORD)v66 )
      {
        v100[18] = 0;
        if ( *(__int64 *)v100 < 0 )
        {
          *v100 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v100, v99, v66);
          _disable();
        }
        v102 = *((_DWORD *)v100 + 22);
        *((_DWORD *)v100 + 22) = 0;
        v100[17] = 0;
        *(_QWORD *)v100 = 0LL;
        v65->AbEntrySummary |= 1 << v100[16];
        _enable();
        if ( v102 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v65, v8 + 16, v102);
        goto LABEL_133;
      }
      v100 += 96;
    }
    if ( (*((_DWORD *)&v65->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v65, v8 + 16, (unsigned int)v66, 0LL);
    _enable();
LABEL_133:
    v103 = KeGetCurrentThread();
    v97 = v103->SpecialApcDisable++ == -1;
    if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v103->ApcState.ApcListHead[0].Flink != &v103->152 )
      KiCheckForKernelApcDelivery();
    v61 = a1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
      goto LABEL_67;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 16);
    KeAbPostRelease(v8 + 16);
    v155 = KeGetCurrentThread();
    v97 = v155->SpecialApcDisable++ == -1;
    if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v155->ApcState.ApcListHead[0].Flink != &v155->152 )
      KiCheckForKernelApcDelivery();
  }
LABEL_76:
  if ( !v47 )
  {
    v156 = *(unsigned __int8 *)(v61 + 57);
    v9 = 2;
    v191 = 2;
    v6 = (unsigned __int8)RtlpHpAcquireLockExclusive(v8 + 16, v156);
    v182 = v6;
    goto LABEL_155;
  }
  v67 = 3LL;
  v68 = *(unsigned __int16 *)(v47 + 34) + (unsigned __int64)*(unsigned __int8 *)(v47 + 39);
  v203[1] = v47 + 48;
  v69 = *(unsigned __int8 *)(v8 + 1);
  v203[0] = 2 * v68;
  v194 = *((unsigned __int8 *)RtlpSearchWidth + v69);
  v199 = (unsigned int)v47 >> 12;
  v70 = qword_140C5A5C8 ^ *(_DWORD *)(v47 + 40) ^ ((unsigned int)v47 >> 12);
  v71 = (unsigned __int16)v70;
  v72 = HIWORD(v70);
  v73 = HIWORD(v70);
  v74 = HIWORD(v70);
  if ( (unsigned int)v7 >= (unsigned __int16)v70 )
    v67 = 1LL;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    v74 = v72;
    v76 = 0;
    if ( (unsigned int)v7 >= (unsigned __int16)v70 )
      v74 = v72;
  }
  else
  {
    v75 = RtlpLfhIncrementDataSlot(v72, v72);
    if ( (unsigned int)v7 >= v71 )
      v74 = v73;
    v76 = RtlpLowFragHeapRandomData[v75];
  }
  v77 = RtlpLfhBlockBitmapAllocate((unsigned int)v203, *(unsigned __int16 *)(v47 + 36), v76, v194, v67);
  v192 = v77;
  *(_WORD *)(v47 + 36) = v77;
  v78 = v74 + v71 * v77;
  if ( *(_BYTE *)(v47 + 45) <= 1u )
    goto LABEL_93;
  v79 = *(_BYTE *)(v47 + 44);
  v80 = -1;
  v81 = v47 + *(unsigned __int16 *)(v47 + 46);
  v82 = (unsigned int)v78 >> v79;
  v199 = (unsigned __int16)qword_140C5A5C8 ^ (unsigned __int16)v199 ^ *(unsigned __int16 *)(v47 + 40);
  v26 = 0LL;
  v201 = 0;
  v190[0] = -1;
  v83 = 2 * v82;
  v183 = -1;
  v84 = (((unsigned int)v78 + v199 - 1) >> v79) - (unsigned int)v82 + 1;
  v85 = (signed __int16 *)(2 * v82 + v81);
  _m_prefetchw(v85);
  v198 = 0LL;
  v86 = &v85[v84];
  v191 = 0;
  v25 = 0xFFFFFFFFLL;
  v186 = -1;
  if ( v85 >= v86 )
    goto LABEL_93;
  do
  {
    while ( 1 )
    {
      v87 = *v85;
      while ( v87 > 0 )
      {
        v88 = v87;
        v87 = _InterlockedCompareExchange16(v85, v87 + 1, v87);
        if ( v88 == v87 )
        {
          v89 = v191;
          v25 = v186;
          LODWORD(v90) = v198;
          goto LABEL_89;
        }
      }
      if ( (_DWORD)v26 )
        break;
      v194 = 1;
      v120 = RtlpHpAcquireLockExclusive(v47 + 24, *(unsigned __int8 *)(a1 + 57));
      v26 = 1LL;
      v80 = v120;
      v183 = v120;
    }
    v25 = v186;
    if ( v87 )
    {
      v89 = v191 + 1;
      v90 = v83 >> 1;
      ++v191;
      v198 = v83 >> 1;
      if ( v186 == -1 )
      {
        v25 = (unsigned int)v90;
        v186 = v83 >> 1;
      }
    }
    else
    {
      LODWORD(v90) = v198;
      v89 = --v191;
    }
    *v85 = v87 + 1;
LABEL_89:
    ++v85;
    v83 += 2LL;
  }
  while ( v85 < v86 );
  v91 = a1;
  if ( v89 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
      (v89 << *(_BYTE *)(v47 + 44)) / 4096);
  if ( (_DWORD)v25 == -1 )
  {
    if ( !(_DWORD)v26 )
      goto LABEL_93;
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v140 = KeGetCurrentIrql(), v140 <= 0xFu) )
      {
        v127 = v183;
        if ( v183 <= 0xFu && v140 >= 2u )
        {
          v26 = (__int64)KeGetCurrentPrcb();
          v141 = ~(unsigned __int16)(-1LL << (v183 + 1));
          v25 = *(_QWORD *)(v26 + 35000);
          v97 = (v141 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v141;
          if ( v97 )
          {
            KiRemoveSystemWorkPriorityKick(v26);
            __writecr8(v183);
            goto LABEL_93;
          }
        }
      }
      else
      {
        v127 = v183;
      }
      __writecr8(v127);
      goto LABEL_93;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v47 + 24);
    v139 = KeGetCurrentThread();
    if ( (unsigned __int64)(v47 + 24 - qword_140C50630) < 0x8000000000LL )
      v25 = (unsigned int)MmGetSessionIdEx((__int64)v139->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    _disable();
    v26 = 0x7FFFFFFFFFFFFFFCLL;
    v147 = (v47 + 24) & 0x7FFFFFFFFFFFFFFCLL;
    v148 = (char *)&v139[1].Process;
    for ( n = 0; n < 6; ++n )
    {
      if ( (*(_QWORD *)v148 & 0x7FFFFFFFFFFFFFFCLL) == v147
        && v148[18]
        && (*(_DWORD *)v148 & 1) == 0
        && *((_DWORD *)v148 + 2) == (_DWORD)v25 )
      {
        v148[18] = 0;
        if ( *(__int64 *)v148 < 0 )
        {
          *v148 |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(v148, v147, v25);
          _disable();
        }
        v25 = *((unsigned int *)v148 + 22);
        *((_DWORD *)v148 + 22) = 0;
        v148[17] = 0;
        *(_QWORD *)v148 = 0LL;
        v26 = (unsigned __int8)v148[16];
        v139->AbEntrySummary |= 1 << v26;
        _enable();
        if ( (_DWORD)v25 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v139, v47 + 24, v25);
        goto LABEL_275;
      }
      v148 += 96;
    }
    if ( (*((_DWORD *)&v139->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v139, v47 + 24, (unsigned int)v25, 0LL);
    _enable();
LABEL_275:
    v150 = KeGetCurrentThread();
    v97 = v150->SpecialApcDisable++ == -1;
    if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v150->ApcState.ApcListHead[0].Flink != &v150->152 )
      KiCheckForKernelApcDelivery();
LABEL_93:
    v42 = a5;
    v43 = v47 + v78;
    if ( (a5 & 2) != 0 )
      RtlHeapZero(v43, (v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v7 < v71 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v47, v43, v71 - (unsigned int)v7, v26);
    v91 = a1;
LABEL_98:
    if ( !v43 )
      goto LABEL_422;
  }
  else
  {
    v132 = *(_BYTE *)(v47 + 44);
    v133 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v188 = (_DWORD)v25 << v132;
    v134 = v47 + (unsigned int)((_DWORD)v25 << v132);
    v201 = v90 - v25 + 1;
    v135 = v201 << v132;
    v136 = *(_QWORD *)a1;
    v190[0] = v80;
    if ( v133(v136, v134, v135, v26) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v47, v188, v135, &v201, 1, v190);
      goto LABEL_93;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v47, (unsigned int)v78, v199);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v179 = KeGetCurrentIrql(), v179 <= 0xFu) )
      {
        v180 = v183;
        if ( v183 <= 0xFu && v179 >= 2u )
        {
          v26 = (__int64)KeGetCurrentPrcb();
          v181 = ~(unsigned __int16)(-1LL << (v183 + 1));
          v25 = *(_QWORD *)(v26 + 35000);
          v97 = (v181 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v181;
          if ( v97 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      else
      {
        v180 = v183;
      }
      __writecr8(v180);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v47 + 24);
      v174 = KeGetCurrentThread();
      if ( (unsigned __int64)(v47 + 24 - qword_140C50630) >= 0x8000000000LL )
        v175 = -1;
      else
        v175 = MmGetSessionIdEx((__int64)v174->ApcState.Process);
      _disable();
      v26 = 0x7FFFFFFFFFFFFFFCLL;
      v25 = (v47 + 24) & 0x7FFFFFFFFFFFFFFCLL;
      v176 = (char *)&v174[1].Process;
      v177 = 0LL;
      do
      {
        if ( (*(_QWORD *)v176 & 0x7FFFFFFFFFFFFFFCLL) == v25
          && v176[18]
          && (*(_DWORD *)v176 & 1) == 0
          && *((_DWORD *)v176 + 2) == v175 )
        {
          v176[18] = 0;
          if ( *(__int64 *)v176 < 0 )
          {
            *v176 |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(v176, v177, v25);
            _disable();
          }
          v25 = *((unsigned int *)v176 + 22);
          *((_DWORD *)v176 + 22) = 0;
          v176[17] = 0;
          *(_QWORD *)v176 = 0LL;
          v26 = (unsigned __int8)v176[16];
          v174->AbEntrySummary |= 1 << v26;
          _enable();
          if ( (_DWORD)v25 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v174, v47 + 24, v25);
          goto LABEL_408;
        }
        v177 = (unsigned int)(v177 + 1);
        v176 += 96;
      }
      while ( (unsigned int)v177 < 6 );
      if ( (*((_DWORD *)&v174->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v174, v47 + 24, v175, 0LL);
      _enable();
LABEL_408:
      v178 = KeGetCurrentThread();
      v97 = v178->SpecialApcDisable++ == -1;
      if ( v97 && ($CEA84C04E3712D858E5667A507841A2A *)v178->ApcState.ApcListHead[0].Flink != &v178->152 )
        KiCheckForKernelApcDelivery();
    }
    v43 = 0LL;
    v42 = a5;
    if ( v192 == -1 )
      goto LABEL_98;
    _InterlockedAnd64(
      (volatile signed __int64 *)(v47 + 8 * ((unsigned __int64)(unsigned int)(2 * v192) >> 6) + 48),
      ~(3LL << ((2 * v192) & 0x3F)));
LABEL_422:
    RtlpHpLfhSubsegmentFreeBlock(v91, v47, 0LL, v42);
  }
LABEL_31:
  Subsegment = v193;
LABEL_32:
  if ( v195 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2, v25, v26);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, v42);
  return v43;
}
