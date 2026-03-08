/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x140310BA0
 * Callers:
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x1403CE658 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402D2C60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402DF844 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpAcquireLockShared @ 0x140309A10 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140309A44 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140309BA0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14030A880 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x14030AA0C (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14030AFE0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14030B5B4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x140311C40 (RtlpLfhBlockBitmapAllocate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlHeapZero @ 0x1403D2D10 (RtlHeapZero.c)
 *     RtlpLfhIncrementDataSlot @ 0x14040C250 (RtlpLfhIncrementDataSlot.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  volatile LONG *v5; // rsi
  __int64 v6; // r13
  signed __int16 *v7; // rbp
  int v9; // r12d
  int v10; // r15d
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  unsigned __int8 *v13; // rdx
  signed __int64 v14; // rsi
  signed __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned int v24; // ebp
  unsigned __int16 v25; // ax
  int v26; // r8d
  int v27; // r14d
  __int64 v28; // rdi
  __int64 v29; // rbp
  char v30; // cl
  int v31; // r11d
  __int64 v32; // r8
  int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdx
  signed __int16 *v37; // r8
  signed __int16 *v38; // rdx
  unsigned __int64 v39; // rbx
  int v40; // r13d
  signed __int16 v41; // ax
  signed __int16 v42; // tt
  __int64 v43; // r10
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rdi
  signed __int16 *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // r11
  unsigned int v51; // r8d
  unsigned __int16 v52; // bp
  unsigned __int16 v53; // cx
  unsigned int v54; // r10d
  __int64 *v55; // r10
  _QWORD *v56; // r15
  _QWORD *v57; // r9
  _QWORD *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 *v61; // rax
  __int64 *v62; // rax
  KIRQL v63; // r12
  __int64 v64; // r12
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // esi
  __int64 v68; // rdx
  unsigned int v69; // r14d
  unsigned int v70; // ebp
  __int64 v71; // rax
  unsigned __int16 v72; // ax
  int v73; // r8d
  int v74; // eax
  unsigned int v75; // edx
  unsigned int v76; // esi
  char v77; // cl
  __int64 v78; // r9
  __int64 v79; // rdi
  __int64 v80; // r8
  __int64 v81; // rbp
  signed __int16 *v82; // rdi
  signed __int16 *v83; // r14
  signed __int16 v84; // ax
  signed __int16 v85; // tt
  int v86; // r8d
  unsigned int v87; // r10d
  __int64 v88; // r11
  int v89; // r14d
  int v90; // edx
  __int16 v91; // dx
  int v92; // edx
  KIRQL v93; // al
  KIRQL v94; // al
  __int64 Subsegment; // rsi
  struct _KTHREAD *v97; // rcx
  bool v98; // zf
  unsigned __int8 v99; // cl
  bool v100; // cf
  struct _KPRCB *v101; // r10
  _DWORD *v102; // r9
  int v103; // eax
  struct _KTHREAD *v104; // rcx
  char v105; // cl
  unsigned int v106; // r8d
  __int64 (__fastcall *v107)(__int64, unsigned __int64, _QWORD); // rax
  __int64 v108; // r9
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rdx
  unsigned __int8 v112; // cl
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // eax
  int v116; // eax
  KIRQL v117; // r12
  __int64 v118; // rax
  struct _KTHREAD *v119; // rcx
  KIRQL v120; // al
  unsigned __int8 v121; // cl
  bool v122; // cf
  struct _KPRCB *v123; // r10
  _DWORD *v124; // r9
  int v125; // eax
  KIRQL v126; // r12
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v128; // bp
  char v129; // cl
  int v130; // r11d
  unsigned __int8 v131; // bp
  int (__fastcall *v132)(__int64, __int64, _QWORD, __int64); // rax
  unsigned int v133; // r10d
  __int64 v134; // r11
  __int64 v135; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v139; // eax
  struct _KTHREAD *v140; // rcx
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r9
  int v143; // eax
  _DWORD *v144; // r8
  int v145; // r12d
  __int16 v146; // dx
  __int64 v147; // rax
  unsigned __int8 v148; // al
  int v149; // edx
  unsigned __int8 v150; // al
  struct _KTHREAD *v151; // rcx
  unsigned __int8 v152; // al
  struct _KPRCB *v153; // r10
  _DWORD *v154; // r9
  int v155; // r8d
  volatile signed __int64 *v156; // rsi
  ULONG_PTR v157; // rcx
  struct _KTHREAD *v158; // rcx
  unsigned __int8 v159; // al
  struct _KPRCB *v160; // r9
  int v161; // eax
  _DWORD *v162; // r8
  signed __int64 *v163; // rbx
  struct _KTHREAD *v164; // rcx
  unsigned __int8 v165; // al
  struct _KPRCB *v166; // r9
  _DWORD *v167; // r8
  int v168; // edx
  KIRQL v169; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v170; // [rsp+40h] [rbp-C8h]
  char v171; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v172; // [rsp+41h] [rbp-C7h]
  int v173; // [rsp+44h] [rbp-C4h]
  unsigned int v174; // [rsp+44h] [rbp-C4h]
  unsigned __int8 v175; // [rsp+48h] [rbp-C0h] BYREF
  char v176[3]; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v177; // [rsp+4Ch] [rbp-BCh]
  __int64 v178; // [rsp+50h] [rbp-B8h]
  volatile LONG *v179; // [rsp+58h] [rbp-B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A8h]
  __int64 v181; // [rsp+68h] [rbp-A0h]
  volatile LONG *v182; // [rsp+70h] [rbp-98h]
  __int64 v183; // [rsp+78h] [rbp-90h]
  __int64 v184; // [rsp+80h] [rbp-88h]
  signed __int16 *v185; // [rsp+88h] [rbp-80h]
  int v186; // [rsp+90h] [rbp-78h]
  signed __int16 *v187; // [rsp+98h] [rbp-70h]
  int v188; // [rsp+A0h] [rbp-68h] BYREF
  int v189; // [rsp+A4h] [rbp-64h] BYREF
  _QWORD v190[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v191[10]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v192; // [rsp+110h] [rbp+8h]

  v192 = a1;
  v5 = (volatile LONG *)(a3 + 16);
  v6 = a4;
  v7 = (signed __int16 *)(a1 + 57);
  v169 = -1;
  v9 = 0;
  v177 = 0;
  v181 = 0LL;
  v10 = 0;
  SpinLock = (PEX_SPIN_LOCK)(a3 + 16);
  v11 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  while ( 1 )
  {
    v185 = v7;
    v182 = v5;
    v12 = 1;
    v183 = (__int64)v7;
    v13 = (unsigned __int8 *)v7;
    v179 = v5;
    v187 = v7;
    if ( v11 )
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)(a3 + 56));
        v14 = *(_QWORD *)(a3 + 56);
        if ( (v14 & 0xFFF) != 0 )
        {
          while ( 1 )
          {
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v14 - 1, v14);
            if ( v14 == v15 )
              break;
            v10 = 1;
            v14 = v15;
            if ( (v15 & 0xFFF) == 0 )
              goto LABEL_29;
          }
          v16 = v14 & 0xFFFFFFFFFFFFF000uLL;
          if ( v16 )
          {
            if ( v9 )
            {
              if ( *(_BYTE *)v7 )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
                if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
                {
                  v126 = v169;
                  if ( v169 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v139 = ~(unsigned __int16)(-1LL << (v169 + 1));
                    v98 = (v139 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v139;
                    if ( v98 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                else
                {
                  v126 = v169;
                }
                __writecr8(v126);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)SpinLock);
                KeAbPostRelease((ULONG_PTR)SpinLock);
                CurrentThread = KeGetCurrentThread();
                v98 = CurrentThread->SpecialApcDisable++ == -1;
                if ( v98
                  && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                {
                  KiCheckForKernelApcDelivery();
                }
              }
              v177 = 0;
            }
            v17 = *(unsigned __int16 *)(v16 + 34) + (unsigned __int64)*(unsigned __int8 *)(v16 + 39);
            v190[1] = v16 + 48;
            v18 = *(unsigned __int8 *)(a3 + 1);
            v19 = 3LL;
            v190[0] = 2 * v17;
            LODWORD(v179) = *((unsigned __int8 *)RtlpSearchWidth + v18);
            LODWORD(v182) = (unsigned int)v16 >> 12;
            v20 = qword_140C6AF48 ^ *(_DWORD *)(v16 + 40) ^ ((unsigned int)v16 >> 12);
            v21 = (unsigned __int16)v20;
            v22 = HIWORD(v20);
            v23 = HIWORD(v20);
            v24 = HIWORD(v20);
            if ( (unsigned int)v6 >= (unsigned __int16)v20 )
              v19 = 1LL;
            if ( (*(_BYTE *)(v192 + 62) & 2) != 0 )
            {
              v24 = v22;
              v26 = 0;
              if ( (unsigned int)v6 >= (unsigned __int16)v20 )
                v24 = v22;
            }
            else
            {
              v25 = RtlpLfhIncrementDataSlot(v22, v22);
              if ( (unsigned int)v6 >= v21 )
                v24 = v23;
              v26 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v25);
            }
            v27 = RtlpLfhBlockBitmapAllocate(
                    (unsigned int)v190,
                    *(unsigned __int16 *)(v16 + 36),
                    v26,
                    (_DWORD)v179,
                    v19);
            *(_WORD *)(v16 + 36) = v27;
            v28 = v24 + v27 * v21;
            v29 = v16;
            if ( *(_BYTE *)(v16 + 45) <= 1u )
              goto LABEL_25;
            v30 = *(_BYTE *)(v16 + 44);
            v31 = 0;
            v32 = (unsigned int)v28 >> v30;
            v33 = (unsigned __int16)qword_140C6AF48 ^ *(unsigned __int16 *)(v16 + 40) ^ (unsigned __int16)v182;
            v188 = 0;
            v186 = v33;
            v175 = -1;
            v34 = (unsigned int)(v28 + v33 - 1) >> v30;
            v35 = *(unsigned __int16 *)(v16 + 46);
            v36 = v34 - (unsigned int)v32 + 1;
            v172 = -1;
            v178 = 2 * v32;
            v37 = (signed __int16 *)(2 * v32 + v16 + v35);
            v187 = v37;
            _m_prefetchw(v37);
            v38 = &v37[v36];
            LODWORD(v183) = (unsigned __int8)v188;
            v173 = (unsigned __int8)v188;
            v29 = v16;
            if ( v37 >= v38 )
            {
LABEL_25:
              v46 = v29 + v28;
              if ( (a5 & 2) != 0 )
                RtlHeapZero(v46, ((unsigned int)v6 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              if ( (unsigned int)v6 < v21 )
              {
                v145 = v21 - v6;
                if ( v145 == 1 )
                  v146 = 0x8000;
                else
                  v146 = v145 & 0x3FFF;
                *(_WORD *)(((unsigned __int16)qword_140C6AF48 ^ *(unsigned __int16 *)(v16 + 40) ^ (unsigned __int64)(unsigned __int16)v182)
                         + v46
                         - 2) = v146;
              }
              v47 = v185;
              v48 = v192;
              goto LABEL_95;
            }
            v39 = (unsigned __int64)v38;
            v40 = -1;
            do
            {
              while ( 1 )
              {
                v41 = *v37;
                while ( v41 > 0 )
                {
                  v42 = v41;
                  v41 = _InterlockedCompareExchange16(v37, v41 + 1, v41);
                  if ( v42 == v41 )
                  {
                    v43 = v178;
                    v44 = v173;
                    goto LABEL_20;
                  }
                }
                if ( v31 )
                  break;
                LODWORD(v179) = 1;
                v94 = RtlpHpAcquireLockExclusive((volatile LONG *)(v16 + 24), *(unsigned __int8 *)v185);
                v37 = v187;
                v31 = 1;
                v172 = v94;
              }
              v43 = v178;
              if ( v41 )
              {
                v44 = ++v173;
                v183 = v178 >> 1;
                if ( v40 == -1 )
                  v40 = v178 >> 1;
              }
              else
              {
                v44 = --v173;
              }
              *v37 = v41 + 1;
LABEL_20:
              v187 = ++v37;
              v178 = v43 + 2;
            }
            while ( (unsigned __int64)v37 < v39 );
            LODWORD(v179) = v40;
            LODWORD(v6) = a4;
            if ( v44 )
            {
              v45 = v192;
              if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(*(__int16 *)(v192 + 58) + v192 + 24),
                  (v173 << *(_BYTE *)(v16 + 44)) / 4096);
            }
            else
            {
              v45 = v192;
            }
            if ( (_DWORD)v179 == -1 )
            {
              if ( v31 )
              {
                if ( *(_BYTE *)v185 )
                {
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 24));
                  if ( KiIrqlFlags )
                  {
                    v112 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v112 <= 0xFu && v172 <= 0xFu && v112 >= 2u )
                    {
                      v113 = KeGetCurrentPrcb();
                      v114 = v113->SchedulerAssist;
                      v115 = ~(unsigned __int16)(-1LL << (v172 + 1));
                      v98 = (v115 & v114[5]) == 0;
                      v114[5] &= v115;
                      if ( v98 )
                        KiRemoveSystemWorkPriorityKick(v113);
                    }
                  }
                  __writecr8(v172);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 24));
                  KeAbPostRelease(v16 + 24);
                  v104 = KeGetCurrentThread();
                  v98 = v104->SpecialApcDisable++ == -1;
                  if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v104->ApcState.ApcListHead[0].Flink != &v104->152 )
                    KiCheckForKernelApcDelivery();
                }
              }
              goto LABEL_25;
            }
            v105 = *(_BYTE *)(v16 + 44);
            v106 = (_DWORD)v179 << v105;
            v175 = v172;
            v107 = (__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))(v45 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v45 + 24));
            v188 = v183 - (_DWORD)v179 + 1;
            v108 = (unsigned int)(v188 << v105);
            v109 = *(_QWORD *)v45;
            LODWORD(v179) = v106;
            v183 = v108;
            v110 = v107(v109, v16 + v106, (unsigned int)v108);
            v111 = v16;
            if ( v110 >= 0 )
            {
              RtlpHpLfhSubsegmentIncBlockCounts(v192, v16, (unsigned int)v179, v183, &v188, 1, (char *)&v175);
              goto LABEL_25;
            }
            v48 = v192;
            RtlpHpLfhSubsegmentDecBlockCounts(v192, v111, v28, v186);
            v47 = v185;
            if ( *(_BYTE *)v185 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 24));
              if ( KiIrqlFlags )
              {
                v152 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v152 <= 0xFu && v172 <= 0xFu && v152 >= 2u )
                {
                  v153 = KeGetCurrentPrcb();
                  v154 = v153->SchedulerAssist;
                  v172 = v175;
                  v155 = ~(unsigned __int16)(-1LL << (v175 + 1)) & v154[5];
                  v154[5] = v155;
                  if ( !v155 )
                    KiRemoveSystemWorkPriorityKick(v153);
                }
              }
              __writecr8(v172);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 24));
              KeAbPostRelease(v29 + 24);
              v151 = KeGetCurrentThread();
              v98 = v151->SpecialApcDisable++ == -1;
              if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v151->ApcState.ApcListHead[0].Flink != &v151->152 )
                KiCheckForKernelApcDelivery();
            }
            v46 = 0LL;
            if ( v27 == -1 )
            {
LABEL_95:
              if ( v46 )
                goto LABEL_96;
            }
            else
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(v29 + 8 * ((unsigned __int64)(unsigned int)(2 * v27) >> 6) + 48),
                ~(3LL << ((2 * v27) & 0x3F)));
            }
            RtlpHpLfhSubsegmentFreeBlock(v48, v29, 0LL, a5);
LABEL_96:
            if ( !v177 )
              goto LABEL_97;
            if ( v177 == 2 )
            {
              if ( !*(_BYTE *)v47 )
              {
                v156 = (volatile signed __int64 *)SpinLock;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v156);
                v157 = (ULONG_PTR)v156;
LABEL_270:
                KeAbPostRelease(v157);
                v158 = KeGetCurrentThread();
                v98 = v158->SpecialApcDisable++ == -1;
                if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v158->ApcState.ApcListHead[0].Flink != &v158->152 )
                  KiCheckForKernelApcDelivery();
                goto LABEL_97;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
            }
            else
            {
              if ( !*(_BYTE *)v47 )
              {
                v163 = (signed __int64 *)SpinLock;
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v163);
                v157 = (ULONG_PTR)v163;
                goto LABEL_270;
              }
              ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
            }
            if ( KiIrqlFlags )
            {
              v159 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v159 <= 0xFu && v169 <= 0xFu && v159 >= 2u )
              {
                v160 = KeGetCurrentPrcb();
                v161 = ~(unsigned __int16)(-1LL << (v169 + 1));
                v162 = v160->SchedulerAssist;
                v98 = (v161 & v162[5]) == 0;
                v162[5] &= v161;
                if ( v98 )
                  KiRemoveSystemWorkPriorityKick(v160);
              }
            }
            __writecr8(v169);
            goto LABEL_97;
          }
LABEL_29:
          a1 = v192;
        }
        if ( v9 == 2 )
          break;
        v92 = *(unsigned __int8 *)(a1 + 57);
        v9 = 2;
        v177 = 2;
        v93 = RtlpHpAcquireLockExclusive((volatile LONG *)(a3 + 16), v92);
        a1 = v192;
        v12 = 1;
        v169 = v93;
      }
      v5 = SpinLock;
      goto LABEL_32;
    }
    if ( !v9 )
    {
      v9 = 1;
      v169 = RtlpHpAcquireLockShared(v5, *(unsigned __int8 *)v7);
      v12 = 1;
LABEL_32:
      v13 = (unsigned __int8 *)v7;
    }
    if ( !*(_QWORD *)(a3 + 8) )
      break;
    v49 = *(_QWORD *)(a3 + 24);
    v50 = a3 + 24;
    if ( v11 )
      v12 = 4096;
    if ( v49 == v50 )
    {
LABEL_220:
      v178 = 0LL;
      goto LABEL_58;
    }
LABEL_37:
    LOWORD(v51) = *(_WORD *)(v49 + 32);
    v10 = 0;
    while ( 1 )
    {
      LODWORD(v182) = v10;
      if ( v12 < (unsigned __int16)v51 )
      {
        v52 = v12;
      }
      else
      {
        v52 = v51;
        if ( v9 == 1 )
        {
          v49 = *(_QWORD *)v49;
          if ( v49 == v50 )
            goto LABEL_220;
          goto LABEL_37;
        }
      }
      v53 = v51 - v52;
      v51 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v49 + 32), v51 - v52, v51);
      v54 = v52 + v53;
      if ( v51 == v54 )
        break;
      if ( v51 < v54 )
        v10 = 1;
    }
    if ( *(_WORD *)(v49 + 32) )
      goto LABEL_55;
    v55 = (__int64 *)v49;
    switch ( *(_BYTE *)(v49 + 38) )
    {
      case 0:
        v56 = (_QWORD *)(a3 + 8);
        v57 = 0LL;
        v58 = (_QWORD *)(a3 + 8);
        goto LABEL_44;
      case 1:
        v57 = 0LL;
        v50 = a3 + 40;
        v58 = 0LL;
        v56 = (_QWORD *)(a3 + 8);
LABEL_44:
        v178 = 0LL;
        v59 = a3 + 40;
        if ( v50 )
        {
          v60 = *(_QWORD *)v49;
          v61 = *(__int64 **)(v49 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) == v49 && *v61 == v49 )
          {
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            v57 = (_QWORD *)v178;
            if ( v58 )
              --*v58;
            goto LABEL_49;
          }
LABEL_286:
          __fastfail(3u);
        }
LABEL_49:
        *(_BYTE *)(v49 + 38) = 1;
        if ( v59 )
        {
          v62 = *(__int64 **)(v59 + 8);
          if ( *v62 != v59 )
            goto LABEL_286;
          *(_QWORD *)v49 = v59;
          v55 = 0LL;
          *(_QWORD *)(v49 + 8) = v62;
          *v62 = v49;
          *(_QWORD *)(v59 + 8) = v49;
        }
        if ( (*(_BYTE *)a3 & 1) == 0 && *v56 > 8uLL )
        {
          v55 = *(__int64 **)v59;
          v147 = **(_QWORD **)v59;
          if ( *(_QWORD *)(*(_QWORD *)v59 + 8LL) != v59 || *(__int64 **)(v147 + 8) != v55 )
            goto LABEL_286;
          *(_QWORD *)v59 = v147;
          *(_QWORD *)(v147 + 8) = v59;
          --*v57;
          *((_BYTE *)v55 + 38) = 2;
        }
        if ( v55 && *((_BYTE *)v55 + 38) == 2 )
          v55[2] = 0LL;
        break;
      case 2:
        v59 = a3 + 40;
        v57 = 0LL;
        v56 = (_QWORD *)(a3 + 8);
        goto LABEL_49;
    }
LABEL_55:
    v10 = (int)v182;
    v178 = v49;
    if ( v49 )
    {
      v178 = v49;
      if ( v52 > 1u )
      {
        v178 = v49;
        *(_QWORD *)(a3 + 56) = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)(v52 - 1)) & 0xFFF;
      }
    }
LABEL_58:
    SpinLock = v5;
    v7 = v187;
    if ( v9 == 2 )
    {
      if ( *(_BYTE *)v187 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v5);
        if ( KiIrqlFlags )
        {
          v99 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v99 <= 0xFu )
          {
            v63 = v169;
            if ( v169 <= 0xFu )
            {
              v100 = v99 < 2u;
              goto LABEL_117;
            }
            goto LABEL_62;
          }
        }
LABEL_61:
        v63 = v169;
        goto LABEL_62;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
LABEL_105:
      KeAbPostRelease((ULONG_PTR)v5);
      v97 = KeGetCurrentThread();
      v98 = v97->SpecialApcDisable++ == -1;
      if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v97->ApcState.ApcListHead[0].Flink != &v97->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      if ( !*(_BYTE *)v187 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v5);
        goto LABEL_105;
      }
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      if ( !KiIrqlFlags )
        goto LABEL_61;
      v148 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 || v148 > 0xFu )
        goto LABEL_61;
      v63 = v169;
      if ( v169 <= 0xFu )
      {
        v100 = v148 < 2u;
LABEL_117:
        if ( !v100 )
        {
          v101 = KeGetCurrentPrcb();
          v102 = v101->SchedulerAssist;
          v103 = ~(unsigned __int16)(-1LL << (v63 + 1));
          v98 = (v103 & v102[5]) == 0;
          v102[5] &= v103;
          if ( v98 )
            KiRemoveSystemWorkPriorityKick(v101);
        }
      }
LABEL_62:
      __writecr8(v63);
    }
    v64 = v178;
    if ( v178 )
    {
      v65 = *(unsigned __int16 *)(v178 + 34) + (unsigned __int64)*(unsigned __int8 *)(v178 + 39);
      v191[1] = v178 + 48;
      v66 = *(unsigned __int8 *)(a3 + 1);
      v191[0] = 2 * v65;
      v187 = (signed __int16 *)(v178 + 40);
      v186 = *((unsigned __int8 *)RtlpSearchWidth + v66);
      LODWORD(v182) = (unsigned int)v178 >> 12;
      v67 = (unsigned __int16)(*(_WORD *)(v178 + 40) ^ qword_140C6AF48 ^ ((unsigned int)v178 >> 12));
      v68 = (*(_DWORD *)(v178 + 40) ^ (unsigned int)qword_140C6AF48 ^ ((unsigned int)v178 >> 12)) >> 16;
      v69 = (*(_DWORD *)(v178 + 40) ^ (unsigned int)qword_140C6AF48 ^ ((unsigned int)v178 >> 12)) >> 16;
      v70 = v69;
      v71 = 3LL;
      v174 = v67;
      if ( (unsigned int)v6 >= v67 )
        v71 = 1LL;
      v184 = v71;
      if ( (*(_BYTE *)(v192 + 62) & 2) != 0 )
      {
        v70 = v68;
        v73 = 0;
        if ( (unsigned int)v6 >= v67 )
          v70 = v68;
      }
      else
      {
        v72 = RtlpLfhIncrementDataSlot(v68, v68);
        if ( (unsigned int)v6 >= v67 )
          v70 = v69;
        v73 = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v72);
      }
      v74 = RtlpLfhBlockBitmapAllocate((unsigned int)v191, *(unsigned __int16 *)(v178 + 36), v73, v186, v184);
      v75 = v67;
      LODWORD(v183) = v74;
      *(_WORD *)(v178 + 36) = v74;
      v76 = v70 + v67 * v74;
      if ( *(_BYTE *)(v64 + 45) <= 1u )
        goto LABEL_82;
      v77 = *(_BYTE *)(v64 + 44);
      v78 = 0LL;
      v79 = v64 + *(unsigned __int16 *)(v64 + 46);
      v80 = v76 >> v77;
      v189 = 0;
      v176[0] = -1;
      v170 = -1;
      LODWORD(SpinLock) = (unsigned __int16)*v187 ^ (unsigned __int16)v182 ^ (unsigned __int16)qword_140C6AF48;
      v81 = 2 * v80;
      v82 = (signed __int16 *)(2 * v80 + v79);
      _m_prefetchw(v82);
      v178 = 0LL;
      LODWORD(v179) = 0;
      v177 = -1;
      if ( v82 >= &v82[((v76 + (_DWORD)SpinLock - 1) >> v77) - (unsigned int)v80 + 1] )
        goto LABEL_81;
      v83 = &v82[((v76 + (_DWORD)SpinLock - 1) >> v77) - (unsigned int)v80 + 1];
      do
      {
        while ( 1 )
        {
          v84 = *v82;
          while ( v84 > 0 )
          {
            v85 = v84;
            v84 = _InterlockedCompareExchange16(v82, v84 + 1, v84);
            if ( v85 == v84 )
            {
              v86 = (int)v179;
              v87 = v177;
              LODWORD(v88) = v178;
              goto LABEL_77;
            }
          }
          if ( (_DWORD)v78 )
            break;
          v186 = 1;
          v120 = RtlpHpAcquireLockExclusive((volatile LONG *)(v64 + 24), *(unsigned __int8 *)v185);
          v78 = 1LL;
          v170 = v120;
        }
        v87 = v177;
        if ( v84 )
        {
          v86 = (_DWORD)v179 + 1;
          v88 = v81 >> 1;
          LODWORD(v179) = (_DWORD)v179 + 1;
          v178 = v81 >> 1;
          if ( v177 == -1 )
          {
            v87 = v81 >> 1;
            v177 = v87;
          }
        }
        else
        {
          LODWORD(v88) = v178;
          v86 = (_DWORD)v179 - 1;
          LODWORD(v179) = (_DWORD)v179 - 1;
        }
        *v82 = v84 + 1;
LABEL_77:
        ++v82;
        v81 += 2LL;
      }
      while ( v82 < v83 );
      v89 = v183;
      if ( v86 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(__int16 *)(v192 + 58) + v192 + 24),
          (v86 << *(_BYTE *)(v64 + 44)) / 4096);
      if ( v87 == -1 )
      {
        if ( !(_DWORD)v78 )
          goto LABEL_81;
        if ( *(_BYTE *)v185 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v64 + 24));
          if ( KiIrqlFlags && (v141 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v141 <= 0xFu )
          {
            v128 = v170;
            if ( v170 <= 0xFu && v141 >= 2u )
            {
              v142 = KeGetCurrentPrcb();
              v143 = ~(unsigned __int16)(-1LL << (v170 + 1));
              v144 = v142->SchedulerAssist;
              v98 = (v143 & v144[5]) == 0;
              v144[5] &= v143;
              if ( v98 )
              {
                KiRemoveSystemWorkPriorityKick(v142);
                __writecr8(v170);
                goto LABEL_81;
              }
            }
          }
          else
          {
            v128 = v170;
          }
          __writecr8(v128);
          goto LABEL_81;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v64 + 24));
        KeAbPostRelease(v64 + 24);
        v140 = KeGetCurrentThread();
        v98 = v140->SpecialApcDisable++ == -1;
        if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v140->ApcState.ApcListHead[0].Flink != &v140->152 )
          KiCheckForKernelApcDelivery();
LABEL_81:
        v75 = v174;
LABEL_82:
        v46 = v64 + v76;
        if ( (a5 & 2) != 0 )
        {
          RtlHeapZero(v64 + v76, (v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
          v75 = v174;
        }
        if ( (unsigned int)v6 < v75 )
        {
          v90 = v75 - v6;
          if ( v90 == 1 )
            v91 = 0x8000;
          else
            v91 = v90 & 0x3FFF;
          *(_WORD *)(((unsigned __int16)*v187 ^ (unsigned __int16)v182 ^ (unsigned __int64)(unsigned __int16)qword_140C6AF48)
                   + v46
                   - 2) = v91;
        }
LABEL_92:
        if ( v46 )
        {
LABEL_97:
          Subsegment = v181;
          goto LABEL_98;
        }
      }
      else
      {
        v129 = *(_BYTE *)(v64 + 44);
        v130 = v88 - v87 + 1;
        v131 = v170;
        v132 = (int (__fastcall *)(__int64, __int64, _QWORD, __int64))(v192 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v192 + 24));
        v133 = v87 << v129;
        v189 = v130;
        v134 = (unsigned int)(v130 << v129);
        v135 = *(_QWORD *)v192;
        v176[0] = v170;
        v177 = v133;
        v178 = v134;
        if ( v132(v135, v64 + v133, (unsigned int)v134, v78) >= 0 )
        {
          RtlpHpLfhSubsegmentIncBlockCounts(v192, v64, v177, v178, &v189, 1, v176);
          goto LABEL_81;
        }
        RtlpHpLfhSubsegmentDecBlockCounts(v192, v64, v76, (int)SpinLock);
        if ( *(_BYTE *)v185 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v64 + 24));
          if ( KiIrqlFlags )
          {
            v165 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v165 <= 0xFu && v170 <= 0xFu && v165 >= 2u )
            {
              v166 = KeGetCurrentPrcb();
              v167 = v166->SchedulerAssist;
              v171 = v176[0];
              v168 = ~(unsigned __int16)(-1LL << (v176[0] + 1)) & v167[5];
              v167[5] = v168;
              if ( !v168 )
                KiRemoveSystemWorkPriorityKick(v166);
              v131 = v171;
            }
          }
          __writecr8(v131);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v64 + 24));
          KeAbPostRelease(v64 + 24);
          v164 = KeGetCurrentThread();
          v98 = v164->SpecialApcDisable++ == -1;
          if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v164->ApcState.ApcListHead[0].Flink != &v164->152 )
            KiCheckForKernelApcDelivery();
        }
        v46 = 0LL;
        if ( v89 == -1 )
          goto LABEL_92;
        _InterlockedAnd64(
          (volatile signed __int64 *)(v64 + 8 * ((unsigned __int64)(unsigned int)(2 * v89) >> 6) + 48),
          ~(3LL << ((2 * v89) & 0x3F)));
      }
      RtlpHpLfhSubsegmentFreeBlock(v192, v64, 0LL, a5);
      goto LABEL_97;
    }
    v149 = *(unsigned __int8 *)v7;
    v9 = 2;
    v177 = 2;
    v169 = RtlpHpAcquireLockExclusive(v179, v149);
LABEL_145:
    a1 = v192;
  }
  v116 = *v13;
  v7 = (signed __int16 *)v13;
  SpinLock = v5;
  if ( v9 == 2 )
  {
    if ( v116 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags )
      {
        v121 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v121 <= 0xFu )
        {
          v117 = v169;
          if ( v169 <= 0xFu )
          {
            v122 = v121 < 2u;
            goto LABEL_159;
          }
          goto LABEL_142;
        }
      }
LABEL_141:
      v117 = v169;
      goto LABEL_142;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
LABEL_148:
    KeAbPostRelease((ULONG_PTR)v5);
    v119 = KeGetCurrentThread();
    v98 = v119->SpecialApcDisable++ == -1;
    if ( v98 && ($C71981A45BEB2B45F82C232A7085991E *)v119->ApcState.ApcListHead[0].Flink != &v119->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    if ( !(_BYTE)v116 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v5);
      goto LABEL_148;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    if ( !KiIrqlFlags )
      goto LABEL_141;
    v150 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || v150 > 0xFu )
      goto LABEL_141;
    v117 = v169;
    if ( v169 <= 0xFu )
    {
      v122 = v150 < 2u;
LABEL_159:
      if ( !v122 )
      {
        v123 = KeGetCurrentPrcb();
        v124 = v123->SchedulerAssist;
        v125 = ~(unsigned __int16)(-1LL << (v117 + 1));
        v98 = (v125 & v124[5]) == 0;
        v124[5] &= v125;
        if ( v98 )
          KiRemoveSystemWorkPriorityKick(v123);
      }
    }
LABEL_142:
    __writecr8(v117);
  }
  Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)v183);
  if ( Subsegment || (Subsegment = RtlpHpLfhSubsegmentCreate(v192, a2, a5)) != 0 )
  {
    v9 = 2;
    v177 = 2;
    v169 = RtlpHpAcquireLockExclusive(v182, *(unsigned __int8 *)v183);
    v118 = RtlpHpLfhSlotAddSubsegment(a3, Subsegment);
    v5 = SpinLock;
    v181 = v118;
    goto LABEL_145;
  }
  v46 = 0LL;
LABEL_98:
  if ( v10 )
    RtlpHpLfhBucketUpdateAffinityMapping(v192, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(v192, a2, Subsegment, a5);
  return v46;
}
