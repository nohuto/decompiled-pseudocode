__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // r12
  unsigned int v11; // edx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 *v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // rbx
  char v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r10
  __int64 v33; // rcx
  _QWORD *BcbListHeadLargeOffset; // rsi
  __int64 v35; // rsi
  __int16 v36; // cx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  ULONG_PTR v40; // rdi
  char v41; // r13
  __int64 *v42; // r13
  _QWORD *v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rbx
  int v46; // r8d
  int v47; // r15d
  unsigned int v48; // r10d
  __int64 v49; // rdi
  _DWORD *v50; // rax
  unsigned int v51; // ebx
  bool v52; // zf
  char v53; // al
  unsigned int v54; // r15d
  _QWORD *v55; // rax
  struct _ERESOURCE *v56; // rcx
  __int16 v57; // dx
  __int16 v58; // ax
  unsigned __int8 v59; // dl
  struct _KTHREAD *v60; // r8
  unsigned __int8 v61; // dl
  struct _KTHREAD *v62; // r8
  char v63; // al
  __int64 v64; // r8
  int v65; // esi
  _QWORD *v66; // rax
  __int64 v67; // rax
  char v68; // al
  unsigned __int64 v69; // rbx
  unsigned __int32 v70; // eax
  unsigned __int8 v71; // cl
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // edx
  struct _ERESOURCE *v75; // rcx
  __int16 v76; // dx
  __int16 v77; // ax
  unsigned __int8 v78; // dl
  struct _KTHREAD *v79; // r8
  unsigned __int8 v80; // dl
  struct _KTHREAD *v81; // r8
  __int64 v82; // rdi
  __int16 v83; // cx
  struct _KTHREAD *v84; // r13
  int v85; // r8d
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rdi
  unsigned int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // r12
  unsigned int v91; // ecx
  struct _KTHREAD *v92; // rdi
  __int64 v93; // rbx
  unsigned int v94; // eax
  unsigned int v95; // ecx
  struct _KPRCB *v96; // rcx
  signed __int32 *v97; // r8
  signed __int32 v98; // eax
  signed __int32 v99; // ett
  int v100; // eax
  unsigned __int8 v101; // di
  unsigned __int64 v102; // rbx
  unsigned __int32 v103; // eax
  unsigned __int8 v104; // cl
  struct _KPRCB *v105; // r10
  _DWORD *v106; // r9
  int v107; // eax
  unsigned __int64 v108; // rbx
  unsigned __int32 v109; // eax
  unsigned __int8 v110; // cl
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // edx
  struct _ERESOURCE *v114; // rcx
  __int16 v115; // dx
  __int16 v116; // ax
  unsigned __int8 v117; // dl
  struct _KTHREAD *v118; // r8
  unsigned __int8 v119; // dl
  struct _KTHREAD *v120; // r8
  __int64 v121; // rax
  __int64 v122; // rbx
  struct _KEVENT *v123; // rcx
  unsigned __int64 v124; // rbx
  unsigned __int32 v125; // eax
  unsigned __int8 v126; // cl
  struct _KPRCB *v127; // r10
  _DWORD *v128; // r9
  int v129; // eax
  __int64 v130; // rbx
  struct _KEVENT *v131; // rcx
  unsigned __int8 v133; // [rsp+30h] [rbp-E8h]
  int v134; // [rsp+34h] [rbp-E4h]
  int v135; // [rsp+3Ch] [rbp-DCh]
  _QWORD *v136; // [rsp+40h] [rbp-D8h]
  int v137; // [rsp+48h] [rbp-D0h]
  __int64 v138; // [rsp+50h] [rbp-C8h] BYREF
  int v139; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v141; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v142; // [rsp+70h] [rbp-A8h]
  int v143; // [rsp+74h] [rbp-A4h]
  unsigned int v144; // [rsp+78h] [rbp-A0h]
  __int64 v145; // [rsp+80h] [rbp-98h]
  __int64 v146; // [rsp+88h] [rbp-90h]
  int v147; // [rsp+90h] [rbp-88h]
  int v148; // [rsp+94h] [rbp-84h]
  __int64 v149; // [rsp+98h] [rbp-80h]
  __int64 v150; // [rsp+A0h] [rbp-78h]
  __int64 v151; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v152; // [rsp+B0h] [rbp-68h]
  __int64 v153; // [rsp+B8h] [rbp-60h]
  __int64 v154; // [rsp+C0h] [rbp-58h]
  int v155; // [rsp+C8h] [rbp-50h]
  __int64 v156; // [rsp+D0h] [rbp-48h]
  char v157; // [rsp+120h] [rbp+8h] BYREF
  __int64 *v158; // [rsp+128h] [rbp+10h]
  char v159; // [rsp+130h] [rbp+18h]
  char v160; // [rsp+138h] [rbp+20h]

  v160 = a4;
  v158 = a2;
  v9 = a3;
  v11 = a6;
  v145 = 0LL;
  v137 = 0;
  v139 = 0;
  v138 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v146 = v12;
  v154 = v12;
  if ( a3 + *a2 > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x145uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  v134 = v11 & 4;
  if ( (v11 & 4) != 0 )
  {
    v139 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v12, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v12, *a2, (unsigned int)&v138, (unsigned int)&v139, (v11 >> 6) & 1, 0);
  }
  v14 = v12 + 288;
  v142 = 0;
  v156 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v14, CurrentThread)) != 0 )
  {
    _BitScanForward(&v18, AbEntrySummary);
    v142 = v18;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v16 = (__int64)(&CurrentThread[1].Process + 12 * v142);
    if ( v14 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v16 + 8) = SessionId;
    *(_QWORD *)v16 = v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( (_DWORD)v156 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v14, 0) )
    ExpAcquireFastMutexContended(v14, v16);
  if ( v16 )
    *(_BYTE *)(v16 + 18) = 1;
  *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v14 + 48) = CurrentIrql;
  v135 = 1;
  v141 = 0LL;
  v140 = 0LL;
  v25 = v158;
  v26 = *v158;
  v27 = HIDWORD(*v158);
  v28 = v27;
  v29 = *v158 + v9;
  v145 = v29;
  v149 = 0LL;
  v30 = 0;
  v31 = v26 + 0x80000;
  v32 = v146;
  v33 = *(_QWORD *)(v146 + 32);
  if ( v33 <= 0x200000 || (*(_DWORD *)(v146 + 152) & 0x200) == 0 )
  {
    v28 = v27;
    goto LABEL_31;
  }
  if ( v33 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v146, v26 + 0x80000, 1);
    v25 = v158;
    v32 = v146;
    goto LABEL_32;
  }
  if ( v31 >= v33 )
  {
LABEL_31:
    BcbListHeadLargeOffset = (_QWORD *)(v146 + 16);
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v146 + 36) )
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v146 + 88) + 0xFFFFFFFFLL + 16 * (v31 >> 19));
  else
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v146 + 88)
                                      + 8 * ((unsigned __int64)(unsigned int)v33 >> 18)
                                      + 16 * (v31 >> 19));
LABEL_32:
  v35 = *BcbListHeadLargeOffset - 16LL;
  v149 = v35;
  if ( v28 || (v36 = *(_WORD *)v35, *(_WORD *)v35 != 765) || *(_DWORD *)(v35 + 36) )
  {
    while ( *(_WORD *)v35 == 765 && *v25 < *(_QWORD *)(v35 + 32) )
    {
      v39 = *(_QWORD *)(v35 + 8);
      if ( *v25 >= v39 )
      {
LABEL_48:
        v30 = 1;
        break;
      }
      if ( v29 >= v39 )
        v29 = *(_QWORD *)(v35 + 8);
      v145 = v29;
      v35 = *(_QWORD *)(v35 + 16) - 16LL;
      v149 = v35;
    }
  }
  else
  {
    v37 = v145;
    while ( v36 == 765 && *(_DWORD *)v25 < *(_DWORD *)(v35 + 32) )
    {
      v38 = *(_DWORD *)(v35 + 8);
      if ( *(_DWORD *)v25 >= v38 )
        goto LABEL_48;
      if ( v37 >= v38 )
        v37 = *(_DWORD *)(v35 + 8);
      LODWORD(v145) = v37;
      v35 = *(_QWORD *)(v35 + 16) - 16LL;
      v149 = v35;
      v36 = *(_WORD *)v35;
      v29 = v145;
    }
  }
  v40 = v35;
  v136 = (_QWORD *)v35;
  v41 = a6;
  if ( v30 )
  {
    v68 = v160;
    if ( (*(_DWORD *)(v32 + 152) & 0x200) == 0 )
      v68 = 1;
    v160 = v68;
    if ( !*(_QWORD *)(v35 + 184) )
    {
      v43 = a8;
      *a8 -= (unsigned int)(*(_DWORD *)v25 - *(_DWORD *)(v35 + 8));
      v141 = *(_QWORD *)(v35 + 8);
      v140 = *(unsigned int *)(v35 + 4);
      if ( (v41 & 1) != 0 )
      {
        ++*(_DWORD *)(v35 + 64);
        *(_QWORD *)(v14 + 8) = 0LL;
        v69 = *(unsigned __int8 *)(v14 + 48);
        v70 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
        if ( v70 )
          ExpReleaseFastMutexContended(v14, v70);
        if ( KiIrqlFlags )
        {
          v71 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v71 <= 0xFu && (unsigned __int8)v69 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v69 + 1));
            v52 = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
        __writecr8(v69);
        KeAbPostRelease(v14);
        v135 = 0;
        if ( !v160 )
        {
          v75 = (struct _ERESOURCE *)(v35 + 72);
          if ( (v41 & 2) != 0 )
          {
            ExAcquireResourceExclusiveLite(v75, 1u);
          }
          else
          {
            v76 = *(_WORD *)(v35 + 98);
            v77 = v76 & 0x41;
            if ( FeatureFastResource2 )
            {
              if ( v77 == 1 )
                KeBugCheckEx(0x1C6u, 0xFuLL, v35 + 72, 0LL, 0LL);
              if ( (v76 & 1) != 0 )
              {
                v78 = KeGetCurrentIrql();
                v79 = KeGetCurrentThread();
                if ( v78 > 1u )
                  KeBugCheckEx(0x1C6u, 0LL, v78, 1uLL, 0LL);
                if ( (v79->ApcState.InProgressFlags & 2) != 0 )
                  KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
                if ( !v78 && (v79->MiscFlags & 0x400) == 0 && !v79->WaitBlock[3].SpareLong )
                  KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            else
            {
              if ( v77 == 1 )
                KeBugCheckEx(0x1C6u, 0xFuLL, v35 + 72, 0LL, 0LL);
              if ( (v76 & 1) != 0 )
              {
                v80 = KeGetCurrentIrql();
                v81 = KeGetCurrentThread();
                if ( v80 > 1u )
                  KeBugCheckEx(0x1C6u, 0LL, v80, 1uLL, 0LL);
                if ( (v81->ApcState.InProgressFlags & 2) != 0 )
                  KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
                if ( !v80 && (v81->MiscFlags & 0x400) == 0 && !v81->WaitBlock[3].SpareLong )
                  KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            if ( (*(_BYTE *)(v35 + 98) & 1) != 0 )
              ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v75);
            else
              ExpAcquireSharedStarveExclusive(v75);
          }
        }
        if ( v134 )
        {
          v42 = v158;
          v133 = 1;
          v40 = v35;
        }
        else
        {
          v82 = *v43;
          v83 = *v43;
          v84 = KeGetCurrentThread();
          v147 = 0;
          v155 = 0;
          v85 = 0;
          v148 = 0;
          v157 = 1;
          v86 = ((v83 & 0xFFF) + (unsigned __int64)(unsigned int)v140 + 4095) >> 12;
          v143 = v86;
          v87 = v82 & 0xFFFFFFFFFFFFF000uLL;
          v152 = v87;
          LODWORD(v151) = BYTE4(v84[1].Queue) + 2 * LODWORD(v84[1].WaitListEntry.Flink);
          while ( (_DWORD)v86 )
          {
            BYTE4(v84[1].Queue) = 1;
            v88 = v86 - 1;
            if ( (unsigned int)(v86 - 1) > LODWORD(v84[1].WaitListEntry.Flink) )
            {
              if ( v88 > 0xF )
                v88 = 15;
              LODWORD(v84[1].WaitListEntry.Flink) = v88;
            }
            v147 = 0;
            v89 = (unsigned int)((_DWORD)v86 << 12);
            v90 = (unsigned int)v89;
            v85 = MmCheckCachedPageStates(v87, v89, 0LL, &v157);
            v148 = v85;
            if ( v85 < 0 )
              break;
            v87 += v90;
            v152 = v87;
            LODWORD(v86) = 0;
            v143 = 0;
          }
          v91 = v151;
          BYTE4(v84[1].Queue) = v151 & 1;
          LODWORD(v84[1].WaitListEntry.Flink) = v91 >> 1;
          if ( v85 < 0 )
            RtlRaiseStatus((unsigned int)v85);
          v144 = 0;
          v150 = 0LL;
          v92 = KeGetCurrentThread();
          v93 = 0LL;
          v153 = 0LL;
          _disable();
          v94 = v92->AbEntrySummary;
          if ( v92->AbEntrySummary || (v94 = KiAbTryReclaimOrphanedEntries(v14, v92)) != 0 )
          {
            _BitScanForward(&v95, v94);
            v144 = v95;
            v92->AbEntrySummary = v94 & ~(unsigned __int8)(1 << v95);
            v96 = KeGetCurrentPrcb();
            v97 = (signed __int32 *)v96->SchedulerAssist;
            if ( v97 )
            {
              _m_prefetchw(v97);
              v98 = *v97;
              do
              {
                v99 = v98;
                v98 = _InterlockedCompareExchange(v97, v98 & 0xFFDFFFFF, v98);
              }
              while ( v99 != v98 );
              if ( (v98 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v96);
            }
            _enable();
            v93 = (__int64)(&v92[1].Process + 12 * v144);
            v153 = v93;
            if ( v14 - qword_140C65668 >= 0x8000000000LL )
              v100 = -1;
            else
              v100 = MmGetSessionIdEx(v92->ApcState.Process);
            *(_DWORD *)(v93 + 8) = v100;
            *(_QWORD *)v93 = v14 & 0x7FFFFFFFFFFFFFFCLL;
          }
          v151 = v150;
          if ( (_DWORD)v150 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v92);
          v101 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v14, 0) )
            ExpAcquireFastMutexContended(v14, v93);
          if ( v93 )
            *(_BYTE *)(v93 + 18) = 1;
          *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v14 + 48) = v101;
          v43 = a8;
          if ( !*(_QWORD *)(v35 + 184) )
          {
            *(_QWORD *)(v35 + 184) = *a8;
            *(_QWORD *)(v35 + 56) = v138;
            v138 = 0LL;
          }
          *(_QWORD *)(v14 + 8) = 0LL;
          v102 = *(unsigned __int8 *)(v14 + 48);
          v103 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
          if ( v103 )
            ExpReleaseFastMutexContended(v14, v103);
          if ( KiIrqlFlags )
          {
            v104 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v104 <= 0xFu && (unsigned __int8)v102 <= 0xFu && v104 >= 2u )
            {
              v105 = KeGetCurrentPrcb();
              v106 = v105->SchedulerAssist;
              v107 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v102 + 1));
              v52 = (v107 & v106[5]) == 0;
              v106[5] &= v107;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v105);
            }
          }
          __writecr8(v102);
          KeAbPostRelease(v14);
          v42 = v158;
          *v43 = *(_QWORD *)(v35 + 184) + (unsigned int)(*(_DWORD *)v158 - *(_DWORD *)(v35 + 8));
          v133 = 1;
          v40 = v35;
        }
        goto LABEL_232;
      }
      if ( !v160 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v35 + 72), 0) )
      {
        v40 = 0LL;
        v136 = 0LL;
        v133 = 0;
        v42 = v158;
        goto LABEL_232;
      }
      ++*(_DWORD *)(v35 + 64);
      ExReleaseFastMutex((PFAST_MUTEX)v14);
      v135 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v35 + 4), 0LL, 0LL, *v43) )
      {
        v133 = 0;
        v42 = v158;
        goto LABEL_232;
      }
      ExAcquireFastMutex((PFAST_MUTEX)v14);
      if ( !*(_QWORD *)(v35 + 184) )
      {
        *(_QWORD *)(v35 + 184) = *v43;
        *(_QWORD *)(v35 + 56) = v138;
        v138 = 0LL;
      }
      ExReleaseFastMutex((PFAST_MUTEX)v14);
      goto LABEL_230;
    }
    if ( (a6 & 1) == 0 )
    {
      if ( !v160 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v35 + 72), 0) )
        goto LABEL_51;
      ++*(_DWORD *)(v35 + 64);
      ExReleaseFastMutex((PFAST_MUTEX)v14);
      v135 = 0;
      goto LABEL_229;
    }
    ++*(_DWORD *)(v35 + 64);
    *(_QWORD *)(v14 + 8) = 0LL;
    v108 = *(unsigned __int8 *)(v14 + 48);
    v109 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
    if ( v109 )
      ExpReleaseFastMutexContended(v14, v109);
    if ( KiIrqlFlags )
    {
      v110 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v110 <= 0xFu && (unsigned __int8)v108 <= 0xFu && v110 >= 2u )
      {
        v111 = KeGetCurrentPrcb();
        v112 = v111->SchedulerAssist;
        v113 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v108 + 1));
        v52 = (v113 & v112[5]) == 0;
        v112[5] &= v113;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v111);
      }
    }
    __writecr8(v108);
    KeAbPostRelease(v14);
    v135 = 0;
    if ( !v160 )
    {
      v114 = (struct _ERESOURCE *)(v35 + 72);
      if ( (v41 & 2) != 0 )
      {
        ExAcquireResourceExclusiveLite(v114, 1u);
        v40 = v35;
LABEL_229:
        v43 = a8;
LABEL_230:
        v42 = v158;
        v67 = *(_QWORD *)(v35 + 184) + (unsigned int)(*(_DWORD *)v158 - *(_DWORD *)(v35 + 8));
        goto LABEL_231;
      }
      v115 = *(_WORD *)(v35 + 98);
      v116 = v115 & 0x41;
      if ( FeatureFastResource2 )
      {
        if ( v116 == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v35 + 72, 0LL, 0LL);
        if ( (v115 & 1) != 0 )
        {
          v117 = KeGetCurrentIrql();
          v118 = KeGetCurrentThread();
          if ( v117 > 1u )
            KeBugCheckEx(0x1C6u, 0LL, v117, 1uLL, 0LL);
          if ( (v118->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !v117 && (v118->MiscFlags & 0x400) == 0 && !v118->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        if ( v116 == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v35 + 72, 0LL, 0LL);
        if ( (v115 & 1) != 0 )
        {
          v119 = KeGetCurrentIrql();
          v120 = KeGetCurrentThread();
          if ( v119 > 1u )
            KeBugCheckEx(0x1C6u, 0LL, v119, 1uLL, 0LL);
          if ( (v120->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !v119 && (v120->MiscFlags & 0x400) == 0 && !v120->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
      }
      if ( (*(_BYTE *)(v35 + 98) & 1) != 0 )
      {
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v114);
        v40 = v35;
        goto LABEL_229;
      }
      ExpAcquireSharedStarveExclusive(v114);
    }
    v40 = v35;
    goto LABEL_229;
  }
  if ( (a6 & 8) != 0 )
  {
LABEL_51:
    v40 = 0LL;
    v136 = 0LL;
    v133 = 0;
    v42 = v158;
    v43 = a8;
LABEL_232:
    v65 = v134;
    goto LABEL_233;
  }
  v44 = *v25;
  v141 = v44;
  v45 = v29 - v44;
  HIDWORD(v140) = HIDWORD(v45);
  v46 = v44 & 0xFFF;
  v47 = v45 + v46;
  LODWORD(v140) = v45 + v46;
  v48 = v46 + v139;
  v139 += v46;
  v49 = v146;
  if ( (v160 || (*(_DWORD *)(v146 + 152) & 4) != 0) && (v50 = (_DWORD *)(v146 + 152), !a5) )
  {
    v51 = 0;
  }
  else
  {
    v50 = (_DWORD *)(v146 + 152);
    v51 = 2;
    v137 = 2;
    if ( (v44 & 0xFFF) == 0 )
    {
      if ( (unsigned int)v9 >= 0x1000 )
        v51 = 3;
      v137 = v51;
    }
    if ( (v47 & 0xFFF) == 0 )
    {
      v51 |= 4u;
      v137 = v51;
    }
  }
  v52 = (*v50 & 0x200) == 0;
  v53 = v160;
  if ( v52 )
    v53 = 1;
  v160 = v53;
  v54 = (v47 + 4095) & 0xFFFFF000;
  LODWORD(v140) = v54;
  v43 = a8;
  *a8 -= v44 & 0xFFF;
  LODWORD(v141) = v141 & 0xFFFFF000;
  if ( v54 > v48 )
    v54 = v48;
  LODWORD(v140) = v54;
  if ( (v41 & 1) == 0 )
  {
    v66 = CcAllocateInitializeBcb(v49, v35, &v141, &v140);
    v40 = (ULONG_PTR)v66;
    v136 = v66;
    if ( !v66 )
      goto LABEL_103;
    if ( !v160 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v66 + 9), 0) )
      KeBugCheckEx(0x34u, 0x2027AuLL, v40, 0LL, 0LL);
    ExReleaseFastMutex((PFAST_MUTEX)v14);
    v135 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v54, v51, 0LL, *v43) )
    {
LABEL_103:
      v133 = 0;
      v42 = v158;
      goto LABEL_232;
    }
    ExAcquireFastMutex((PFAST_MUTEX)v14);
    if ( !*(_QWORD *)(v40 + 184) )
    {
      *(_QWORD *)(v40 + 184) = *v43;
      *(_QWORD *)(v40 + 56) = v138;
      v138 = 0LL;
    }
    ExReleaseFastMutex((PFAST_MUTEX)v14);
    v42 = v158;
    v67 = *(_QWORD *)(v40 + 184) + (unsigned int)(*(_DWORD *)v158 - *(_DWORD *)(v40 + 8));
LABEL_231:
    *v43 = v67;
    v133 = 1;
    goto LABEL_232;
  }
  v55 = CcAllocateInitializeBcb(v49, v35, &v141, &v140);
  v40 = (ULONG_PTR)v55;
  v136 = v55;
  if ( !v55 )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v14);
    RtlRaiseStatus(3221225626LL);
  }
  if ( v160 )
    goto LABEL_97;
  v56 = (struct _ERESOURCE *)(v55 + 9);
  if ( (v41 & 2) == 0 )
  {
    v57 = *((_WORD *)v55 + 49);
    v58 = v57 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v58 == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v56, 0LL, 0LL);
      if ( (v57 & 1) == 0 )
        goto LABEL_93;
      v59 = KeGetCurrentIrql();
      v60 = KeGetCurrentThread();
      if ( v59 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v59, 2uLL, 0LL);
      if ( v59 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
      if ( (v60->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !v59 && (v60->MiscFlags & 0x400) == 0 && !v60->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    else
    {
      if ( v58 == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v56, 0LL, 0LL);
      if ( (v57 & 1) == 0 )
        goto LABEL_93;
      v61 = KeGetCurrentIrql();
      v62 = KeGetCurrentThread();
      if ( v61 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v61, 2uLL, 0LL);
      if ( v61 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
      if ( (v62->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !v61 && (v62->MiscFlags & 0x400) == 0 && !v62->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    v40 = (ULONG_PTR)v136;
    v51 = v137;
    v54 = v140;
LABEL_93:
    if ( (v56->ReservedLowFlags & 1) != 0 )
      v63 = ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v56);
    else
      v63 = ExpAcquireSharedStarveExclusive(v56);
    v159 = v63;
    if ( !v63 )
      KeBugCheckEx(0x34u, 0x2021AuLL, v40, 0LL, 0LL);
    goto LABEL_97;
  }
  if ( !ExAcquireResourceExclusiveLite(v56, 0) )
    KeBugCheckEx(0x34u, 0x20213uLL, v40, 0LL, 0LL);
LABEL_97:
  ExReleaseFastMutex((PFAST_MUTEX)v14);
  v135 = 0;
  v65 = v134;
  if ( v134 )
  {
    v42 = v158;
    v133 = 1;
  }
  else
  {
    LOBYTE(v64) = 1;
    CcMapAndRead(v54, v51, v64, *v43);
    ExAcquireFastMutex((PFAST_MUTEX)v14);
    if ( !*(_QWORD *)(v40 + 184) )
    {
      *(_QWORD *)(v40 + 184) = *v43;
      *(_QWORD *)(v40 + 56) = v138;
      v138 = 0LL;
    }
    ExReleaseFastMutex((PFAST_MUTEX)v14);
    v42 = v158;
    *v43 = *(_QWORD *)(v40 + 184) + (unsigned int)(*(_DWORD *)v158 - *(_DWORD *)(v40 + 8));
    v133 = 1;
  }
LABEL_233:
  if ( (a6 & 6) == 6 && v40 && *(_QWORD *)(v40 + 184) )
  {
    v121 = *(_QWORD *)(v40 + 56);
    v122 = *(_QWORD *)(v121 + 8);
    if ( (unsigned __int16)_InterlockedExchangeAdd((volatile signed __int32 *)(v121 + 16), 0xFFFFFFFF) == 1 )
    {
      v123 = *(struct _KEVENT **)(v122 + 192);
      if ( v123 )
        KeSetEvent(v123, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v122 + 552));
    }
    *(_QWORD *)(v40 + 184) = 0LL;
    *(_QWORD *)(v40 + 56) = 0LL;
    v40 = (ULONG_PTR)v136;
  }
  if ( v135 )
  {
    *(_QWORD *)(v14 + 8) = 0LL;
    v124 = *(unsigned __int8 *)(v14 + 48);
    v125 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
    if ( v125 )
      ExpReleaseFastMutexContended(v14, v125);
    if ( KiIrqlFlags )
    {
      v126 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v126 <= 0xFu && (unsigned __int8)v124 <= 0xFu && v126 >= 2u )
      {
        v127 = KeGetCurrentPrcb();
        v128 = v127->SchedulerAssist;
        v129 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v124 + 1));
        v52 = (v129 & v128[5]) == 0;
        v128[5] &= v129;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v127);
      }
    }
    __writecr8(v124);
    KeAbPostRelease(v14);
    v40 = (ULONG_PTR)v136;
  }
  if ( v138 )
  {
    v130 = *(_QWORD *)(v138 + 8);
    if ( (unsigned __int16)_InterlockedExchangeAdd((volatile signed __int32 *)(v138 + 16), 0xFFFFFFFF) == 1 )
    {
      v131 = *(struct _KEVENT **)(v130 + 192);
      if ( v131 )
        KeSetEvent(v131, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v130 + 552));
    }
    v40 = (ULONG_PTR)v136;
  }
  if ( v65 )
    CcDereferenceFileOffset(v146, *v42);
  if ( v133 )
  {
    *a7 = v40;
    *a9 = *(_QWORD *)(v40 + 32);
    return v133;
  }
  else
  {
    *v43 = 0LL;
    if ( v40 )
      CcUnpinFileDataEx((PVOID)v40);
    return 0LL;
  }
}
