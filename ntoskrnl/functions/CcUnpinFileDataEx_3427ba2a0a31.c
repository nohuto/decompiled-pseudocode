void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // r15
  __int64 v6; // rdi
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v20; // rsi
  unsigned int v21; // esi
  unsigned __int8 v22; // r8
  _DWORD *v23; // r11
  __int64 v24; // rdx
  _QWORD *v25; // r9
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int64 v30; // rsi
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // eax
  __int64 v37; // rdi
  struct _KEVENT *v38; // rcx
  __int16 v39; // cx
  char *v40; // r14
  __int16 v41; // ax
  unsigned __int8 v42; // al
  struct _KTHREAD *v43; // rdx
  unsigned __int8 v44; // al
  struct _KTHREAD *v45; // rcx
  ULONG_PTR v46; // rdi
  unsigned __int8 v47; // r8
  _DWORD *v48; // r11
  int v49; // r10d
  struct _KTHREAD *v50; // r8
  __int16 v51; // cx
  unsigned int v52; // eax
  int v53; // r13d
  __int64 v54; // rdx
  char *v55; // rbx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  ULONG_PTR v58; // rbx
  ULONG_PTR v59; // r9
  unsigned __int64 v60; // r8
  char *v61; // rdx
  unsigned int v62; // eax
  unsigned int v63; // edi
  unsigned int v64; // r12d
  unsigned int v65; // esi
  unsigned __int64 v66; // rbx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  __int64 v71; // rdi
  _DWORD *v72; // rbx
  bool v73; // cc
  int v74; // ecx
  volatile signed __int32 *v75; // rax
  __int64 v76; // rax
  unsigned __int8 v77; // cl
  unsigned __int64 v78; // rbx
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // eax
  int v83; // eax
  __int64 v84; // rcx
  _DWORD *v85; // r9
  __int64 v86; // rdx
  struct _KPRCB *v87; // rdi
  volatile signed __int32 *v88; // rbx
  volatile signed __int32 *i; // rax
  __int64 v90; // r13
  volatile signed __int32 *v91; // r12
  volatile signed __int32 *v92; // rcx
  __int64 v93; // rbx
  volatile signed __int32 **v94; // rax
  char v95; // al
  __int64 v96; // rdi
  _QWORD *v97; // r15
  unsigned __int8 v98; // cl
  _DWORD *v99; // r9
  __int64 v100; // rdx
  struct _KPRCB *v101; // r14
  _KTHREAD *v102; // rsi
  unsigned __int8 IsThreadRunning; // al
  int v104; // r8d
  __int64 *v105; // rdx
  __int64 v106; // rbx
  char v107; // al
  unsigned int v108; // ecx
  struct _PROCESSOR_NUMBER v109; // edx
  PFAST_MUTEX v110; // rdi
  unsigned __int64 OldIrql_low; // rbx
  signed __int32 v112; // eax
  unsigned __int8 v113; // cl
  struct _KPRCB *v114; // r9
  int v115; // eax
  _DWORD *v116; // r8
  ULONG_PTR v117; // rcx
  char **v118; // rdx
  PVOID *v119; // rcx
  __int64 v120; // rdi
  struct _KEVENT *v121; // rcx
  __int16 v122; // r8
  char *v123; // rbx
  __int16 v124; // ax
  unsigned __int8 v125; // al
  struct _KTHREAD *v126; // rdx
  char v127; // r8
  unsigned __int8 v128; // al
  struct _KTHREAD *v129; // rcx
  unsigned __int64 v130; // rbx
  signed __int32 v131; // eax
  unsigned __int8 v132; // cl
  struct _KPRCB *v133; // r9
  int v134; // eax
  _DWORD *v135; // r8
  signed __int32 v136[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v137; // [rsp+30h] [rbp-59h] BYREF
  volatile signed __int64 *v138; // [rsp+38h] [rbp-51h]
  __int64 v139; // [rsp+40h] [rbp-49h]
  volatile signed __int32 *v140; // [rsp+48h] [rbp-41h] BYREF
  __int128 v141; // [rsp+50h] [rbp-39h] BYREF
  __int64 v142; // [rsp+60h] [rbp-29h]
  int v143; // [rsp+68h] [rbp-21h]
  int v144; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v145; // [rsp+70h] [rbp-19h]
  int v146; // [rsp+74h] [rbp-15h]
  __int64 v147; // [rsp+78h] [rbp-11h] BYREF
  struct _KPRCB *v148; // [rsp+80h] [rbp-9h]
  volatile signed __int32 *v149; // [rsp+88h] [rbp-1h]
  PFAST_MUTEX FastMutex; // [rsp+90h] [rbp+7h]
  __int64 v151; // [rsp+A0h] [rbp+17h]
  char *v152; // [rsp+A8h] [rbp+1Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v154; // [rsp+F0h] [rbp+67h]
  unsigned int v155; // [rsp+108h] [rbp+7Fh]

  v3 = a3;
  v142 = 0LL;
  v141 = 0LL;
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 192);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 552));
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 536);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  CurrentThread = KeGetCurrentThread();
  FastMutex = (PFAST_MUTEX)(v8 + 288);
  v11 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v8 + 288, CurrentThread)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v154 = v13;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v11 = (__int64)(&CurrentThread[1].Process + 12 * v154);
    if ( (unsigned __int64)(v8 + 288 - qword_140C65668) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = (v8 + 288) & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 288), 0) )
    ExpAcquireFastMutexContended(v8 + 288, v11);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v20 = v8 + 288;
  *(_QWORD *)(v8 + 296) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 336) = CurrentIrql;
  if ( (unsigned int)v3 < 2 )
  {
    v36 = *((_DWORD *)P + 16);
    if ( !v36 )
      KeBugCheckEx(0x34u, 0x460uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *((_DWORD *)P + 16) = v36 - 1;
  }
  else
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20497uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v21 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      *((_QWORD *)P + 6) = 0LL;
      *(_QWORD *)&v141 = 0LL;
      *((_QWORD *)&v141 + 1) = v9 + 768;
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v23 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 == 2 )
          LODWORD(v24) = 4;
        else
          v24 = (-1LL << (v22 + 1)) & 4;
        v23[5] |= v24;
      }
      LOBYTE(v142) = v22;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v141, v9 + 768);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v9 + 768), (__int64)&v141) )
      {
        KxWaitForLockOwnerShip(&v141);
      }
      v25 = 0LL;
      if ( CcEnablePerVolumeLazyWriter )
        v25 = *(_QWORD **)(v8 + 600);
      CcDeductDirtyPagesInternal(v8, v21, *(_QWORD *)(v8 + 536), v25);
      v26 = *(_DWORD *)(v9 + 976);
      if ( v26 <= v21 )
        v27 = 0;
      else
        v27 = v26 - v21;
      *(_DWORD *)(v9 + 976) = v27;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v141, retaddr);
        goto LABEL_53;
      }
      _m_prefetchw(&v141);
      v28 = v141;
      if ( !(_QWORD)v141 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v141 + 1),
                           0LL,
                           (signed __int64)&v141) == &v141 )
        {
LABEL_53:
          v30 = (unsigned __int8)v142;
          if ( KiIrqlFlags )
          {
            v31 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v142 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v142 + 1));
              v35 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          __writecr8(v30);
          v20 = v8 + 288;
          goto LABEL_63;
        }
        v28 = KxWaitForLockChainValid((__int64 *)&v141);
      }
      *(_QWORD *)&v141 = 0LL;
      v29 = BYTE8(v141);
      if ( ((v29 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v28 + 8), *((__int64 *)&v141 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v136, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v28 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_53;
    }
  }
LABEL_63:
  if ( *((_DWORD *)P + 16) )
  {
    if ( a2 )
    {
LABEL_264:
      v130 = *(unsigned __int8 *)(v20 + 48);
      *(_QWORD *)(v20 + 8) = 0LL;
      v131 = _InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0);
      if ( v131 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v20, v131);
      if ( KiIrqlFlags )
      {
        v132 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v132 <= 0xFu && (unsigned __int8)v130 <= 0xFu && v132 >= 2u )
        {
          v133 = KeGetCurrentPrcb();
          v134 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v130 + 1));
          v135 = v133->SchedulerAssist;
          v35 = (v134 & v135[5]) == 0;
          v135[5] &= v134;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(v133);
        }
      }
      __writecr8(v130);
      v117 = v20;
      goto LABEL_232;
    }
    v122 = *((_WORD *)P + 49);
    v123 = P + 72;
    v124 = v122 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v124 != 1 )
      {
        if ( (v122 & 1) != 0 )
        {
          v125 = KeGetCurrentIrql();
          v126 = KeGetCurrentThread();
          if ( v125 > 2u )
            KeBugCheckEx(0x1C6u, 0LL, v125, 2uLL, 0LL);
          if ( !(unsigned __int8)ExAreApcsDisabledForThread(v125, v126) )
            goto LABEL_284;
          if ( (v127 & 1) != 0 )
          {
LABEL_255:
            ExpFastResourceLegacyRelease((ULONG_PTR)v123);
            goto LABEL_264;
          }
        }
        goto LABEL_263;
      }
    }
    else if ( v124 != 1 )
    {
      if ( (v122 & 1) != 0 )
      {
        v128 = KeGetCurrentIrql();
        v129 = KeGetCurrentThread();
        if ( v128 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v128, 2uLL, 0LL);
        if ( !v128 && (v129->MiscFlags & 0x400) == 0 && !v129->WaitBlock[3].SpareLong )
          goto LABEL_284;
        goto LABEL_255;
      }
LABEL_263:
      ExpReleaseResourceForThreadLite((ULONG_PTR)v123, (ULONG_PTR)KeGetCurrentThread());
      goto LABEL_264;
    }
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v123, 0LL, 0LL);
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v37 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v38 = *(struct _KEVENT **)(v37 + 192);
        if ( v38 )
          KeSetEvent(v38, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v37 + 552));
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( a2 )
      goto LABEL_222;
    v39 = *((_WORD *)P + 49);
    v40 = P + 72;
    v152 = P + 72;
    v41 = v39 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v41 != 1 )
      {
        if ( (v39 & 1) == 0 )
          goto LABEL_88;
        v42 = KeGetCurrentIrql();
        v43 = KeGetCurrentThread();
        if ( v42 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v42, 2uLL, 0LL);
        if ( v42 || (v43->MiscFlags & 0x400) != 0 || v43->WaitBlock[3].SpareLong )
        {
          if ( (v39 & 1) != 0 )
          {
LABEL_80:
            ExpFastResourceLegacyRelease((ULONG_PTR)(P + 72));
LABEL_222:
            v110 = FastMutex;
            OldIrql_low = LOBYTE(FastMutex->OldIrql);
            FastMutex->Owner = 0LL;
            v112 = _InterlockedCompareExchange(&v110->Count, 1, 0);
            if ( v112 )
              ExpReleaseFastMutexContended(&v110->Count, v112);
            if ( KiIrqlFlags )
            {
              v113 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v113 <= 0xFu && (unsigned __int8)OldIrql_low <= 0xFu && v113 >= 2u )
              {
                v114 = KeGetCurrentPrcb();
                v115 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql_low + 1));
                v116 = v114->SchedulerAssist;
                v35 = (v115 & v116[5]) == 0;
                v116[5] &= v115;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick(v114);
              }
            }
            __writecr8(OldIrql_low);
            v117 = (ULONG_PTR)v110;
LABEL_232:
            KeAbPostRelease(v117);
            return;
          }
LABEL_88:
          v46 = (ULONG_PTR)KeGetCurrentThread();
          v138 = (volatile signed __int64 *)(P + 168);
          v137 = 0LL;
          v139 = 0LL;
          v47 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
          {
            v48 = KeGetCurrentPrcb()->SchedulerAssist;
            v49 = v48[5];
            if ( v47 == 2 )
              v48[5] = v49 | 4;
            else
              v48[5] = (-1 << (v47 + 1)) & 4 | v49;
          }
          LOBYTE(v139) = v47;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v137, P + 168);
          }
          else if ( _InterlockedExchange64((volatile __int64 *)P + 21, (__int64)&v137) )
          {
            KxWaitForLockOwnerShip(&v137);
          }
          v50 = KeGetCurrentThread();
          v51 = *((_WORD *)P + 49);
          if ( ((v51 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v46 & 3) != 3 && (struct _KTHREAD *)v46 != v50 )
            KeBugCheckEx(0x16Eu, (ULONG_PTR)(P + 72), (ULONG_PTR)v50, v46, 0LL);
          if ( (v51 & 0x80u) != 0 )
          {
            ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)(P + 72), v46);
            goto LABEL_222;
          }
          v52 = 0;
          v53 = DWORD1(PerfGlobalGroupMask) & 0x20000;
          v140 = 0LL;
          v146 = DWORD1(PerfGlobalGroupMask) & 0x20000;
          if ( (v46 & 3) == 0 )
            v52 = *(unsigned __int8 *)(v46 + 1120);
          v54 = *((_QWORD *)P + 15);
          v55 = P + 120;
          if ( v54 != v46 )
          {
            v56 = v54 != 0;
            if ( !v52
              || (v57 = *((_QWORD *)v40 + 2)) == 0
              || v52 >= *(_DWORD *)(v57 + 8)
              || (v55 = (char *)(v57 + 16LL * v52), *(_QWORD *)v55 != v46) )
            {
              v58 = *((_QWORD *)v40 + 2);
              v59 = v58;
              v60 = *((unsigned int *)v40 + 16) + (unsigned __int64)*((unsigned int *)v40 + 18);
              if ( !v58
                || (v61 = (char *)(v58 + 16LL * *(unsigned int *)(v58 + 8)), v55 = (char *)(v58 + 16), v56 >= v60) )
              {
LABEL_280:
                KeBugCheckEx(0xE3u, (ULONG_PTR)v40, v46, v59, 2uLL);
              }
              while ( *(_QWORD *)v55 != v46 )
              {
                if ( !*(_QWORD *)v55 || (++v56, v56 != v60) )
                {
                  v55 += 16;
                  if ( v55 != v61 )
                    continue;
                }
                goto LABEL_280;
              }
              KeGetCurrentThread()->ResourceIndex = (__int64)&v55[-v59] >> 4;
            }
          }
          v62 = *((_DWORD *)v55 + 2) & 7 | (8 * (*((_DWORD *)v55 + 2) >> 3) - 8);
          *((_DWORD *)v55 + 2) = v62;
          v63 = v62 >> 3;
          if ( v62 >> 3 )
          {
            v64 = *((_DWORD *)v40 + 17);
            v65 = 65618;
            KxReleaseQueuedSpinLock(&v137);
            v66 = (unsigned __int8)v139;
            if ( KiIrqlFlags )
            {
              v67 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v67 <= 0xFu && (unsigned __int8)v139 <= 0xFu && v67 >= 2u )
              {
                v68 = KeGetCurrentPrcb();
                v69 = v68->SchedulerAssist;
                v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v139 + 1));
                v35 = (v70 & v69[5]) == 0;
                v69[5] &= v70;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick(v68);
              }
            }
            __writecr8(v66);
            goto LABEL_220;
          }
          v71 = *(_QWORD *)v55;
          if ( (v62 & 2) != 0 )
          {
            v71 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v71 & 3) != 0 )
          {
LABEL_138:
            *(_QWORD *)v55 = 0LL;
            v72 = v40 + 76;
            v73 = *((_DWORD *)v40 + 16) <= 1u;
            v64 = *((_DWORD *)v40 + 17);
            v145 = v64;
            v147 = 0LL;
            if ( !v73 )
              goto LABEL_143;
            if ( *v72 )
            {
              KeCaptureWaitChainHeadEx((_QWORD **)v40 + 5, (__int64 *)&v140, &v147);
              --*v72;
              *((_WORD *)v40 + 13) |= 0x80u;
              v74 = 1;
              goto LABEL_144;
            }
            v74 = *((_DWORD *)v40 + 18);
            if ( v74 )
            {
              v75 = (volatile signed __int32 *)*((_QWORD *)v40 + 4);
              *((_QWORD *)v40 + 4) = 0LL;
              v140 = v75;
              *((_DWORD *)v40 + 18) = 0;
            }
            else
            {
LABEL_143:
              v74 = 0;
            }
LABEL_144:
            v35 = v74 - 1 + *((_DWORD *)v40 + 16) == 0;
            *((_DWORD *)v40 + 16) += v74 - 1;
            if ( v35 )
              *((_WORD *)v40 + 12) = 0;
            if ( !*v72 && !*((_DWORD *)v40 + 18) )
              *((_WORD *)v40 + 13) &= 0xF9u;
            v155 = (unsigned __int8)v40[27];
            if ( v147 )
            {
              *((_QWORD *)v40 + 6) = v147;
              *((_DWORD *)v40 + 14) = *((_DWORD *)v40 + 14) & 7 | 8;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v137, retaddr);
              goto LABEL_158;
            }
            _m_prefetchw(&v137);
            v76 = v137;
            if ( !v137 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v138, 0LL, (signed __int64)&v137) == &v137 )
              {
LABEL_158:
                v78 = (unsigned __int8)v139;
                if ( KiIrqlFlags )
                {
                  v79 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v79 <= 0xFu && (unsigned __int8)v139 <= 0xFu && v79 >= 2u )
                  {
                    v80 = KeGetCurrentPrcb();
                    v81 = v80->SchedulerAssist;
                    v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v139 + 1));
                    v35 = (v82 & v81[5]) == 0;
                    v81[5] &= v82;
                    if ( v35 )
                      KiRemoveSystemWorkPriorityKick(v80);
                  }
                }
                __writecr8(v78);
                v83 = 1;
                v143 = 1;
                if ( v147 )
                  v83 = 3;
                v144 = v83;
                if ( !v140 )
                {
LABEL_219:
                  v65 = 65602;
                  v63 = 0;
LABEL_220:
                  __incgsdword(0x8A70u);
                  if ( v53 )
                    PerfLogExecutiveResourceRelease(v65, v40, v63, v64);
                  goto LABEL_222;
                }
                v84 = KeGetCurrentIrql();
                v151 = v84;
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v84 <= 0xFu )
                {
                  v85 = KeGetCurrentPrcb()->SchedulerAssist;
                  if ( (_BYTE)v84 == 2 )
                    LODWORD(v86) = 4;
                  else
                    v86 = (-1LL << ((unsigned __int8)v84 + 1)) & 4;
                  v85[5] |= v86;
                }
                v87 = KeGetCurrentPrcb();
                v88 = v140;
                v148 = v87;
                for ( i = *(volatile signed __int32 **)v140; ; i = *(volatile signed __int32 **)v149 )
                {
                  v90 = (__int64)(v88 + 6);
                  v149 = i;
                  KiAcquireKobjectLockSafe(v88 + 6);
                  v91 = (volatile signed __int32 *)*((_QWORD *)v88 + 4);
                  *((_DWORD *)v88 + 7) = 1;
                  if ( v91 != v88 + 8 )
                    break;
LABEL_209:
                  _InterlockedAnd((volatile signed __int32 *)v90, 0xFFFFFF7F);
                  if ( v149 == v140 )
                  {
                    v106 = (__int64)v148;
                    v107 = KiRemoveBoostThread((__int64)v148, (__int64)v148->CurrentThread);
                    v108 = v155;
                    if ( v155 )
                    {
                      v109 = (struct _PROCESSOR_NUMBER)2;
                      if ( v107 > (char)v155 )
                        v108 = v107;
                    }
                    else
                    {
                      v109 = (struct _PROCESSOR_NUMBER)v143;
                    }
                    if ( (v144 & 2) != 0 && v109 == 1 )
                      v108 = 1;
                    KiExitDispatcher(v106, 0, v109, v108, v151);
                    v40 = v152;
                    v64 = v145;
                    v53 = v146;
                    v140 = 0LL;
                    goto LABEL_219;
                  }
                  v87 = v148;
                  v88 = v149;
                }
                while ( 1 )
                {
                  v92 = *(volatile signed __int32 **)v91;
                  v93 = (__int64)v91;
                  v91 = v92;
                  v94 = *(volatile signed __int32 ***)(v93 + 8);
                  if ( *((_QWORD *)v92 + 1) != v93 || *v94 != (volatile signed __int32 *)v93 )
                    break;
                  *v94 = v92;
                  *((_QWORD *)v92 + 1) = v94;
                  v95 = *(_BYTE *)(v93 + 16);
                  switch ( v95 )
                  {
                    case 1:
                      if ( (unsigned __int8)KiTryUnwaitThread((__int64)v87, v93, *(unsigned __int16 *)(v93 + 18), 0LL) )
                      {
                        v35 = (*(_DWORD *)(v90 + 4))-- == 1;
                        if ( v35 )
                          goto LABEL_209;
                      }
                      break;
                    case 2:
                      *(_BYTE *)(v93 + 17) = 5;
                      v96 = *(_QWORD *)(v93 + 24);
                      *(_QWORD *)v93 = 0LL;
                      v97 = (_QWORD *)(v96 + 8);
                      v98 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v98 <= 0xFu )
                      {
                        v99 = KeGetCurrentPrcb()->SchedulerAssist;
                        if ( v98 == 2 )
                          LODWORD(v100) = 4;
                        else
                          v100 = (-1LL << (v98 + 1)) & 4;
                        v99[5] |= v100;
                      }
                      v101 = KeGetCurrentPrcb();
                      v102 = v101->CurrentThread;
                      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                      {
                        IsThreadRunning = KeIsThreadRunning(v101->CurrentThread);
                        EtwTraceEnqueueWork(v102, v93, IsThreadRunning);
                      }
                      KiAcquireKobjectLockSafe((volatile signed __int32 *)v96);
                      if ( (_QWORD *)*v97 == v97
                        || *(_DWORD *)(v96 + 40) >= *(_DWORD *)(v96 + 44)
                        || v102->Queue == (_DISPATCHER_HEADER *volatile)v96 && v102->WaitReason == 15
                        || !(unsigned __int8)KiWakeQueueWaiter(v101, v96, v93) )
                      {
                        v104 = *(_DWORD *)(v96 + 4);
                        *(_DWORD *)(v96 + 4) = v104 + 1;
                        v105 = *(__int64 **)(v96 + 32);
                        if ( *v105 != v96 + 24 )
                          goto LABEL_247;
                        *(_QWORD *)v93 = v96 + 24;
                        *(_QWORD *)(v93 + 8) = v105;
                        *v105 = v93;
                        *(_QWORD *)(v96 + 32) = v93;
                        if ( !v104 && (_QWORD *)*v97 != v97 )
                          KiWakeOtherQueueWaiters((__int64)v101, v96);
                      }
                      else
                      {
                        *(_QWORD *)v93 = 0LL;
                      }
                      _InterlockedAnd((volatile signed __int32 *)v96, 0xFFFFFF7F);
                      v35 = (*(_DWORD *)(v90 + 4))-- == 1;
                      if ( v35 )
                        goto LABEL_209;
                      v87 = v148;
                      break;
                    case 4:
                      *(_BYTE *)(v93 + 17) = 5;
                      *(_DWORD *)(v90 + 4) = 0;
                      KiInsertQueueDpc(*(_QWORD *)(v93 + 24), v90, v93, 0LL, 0);
                      break;
                    default:
                      KiTryUnwaitThread((__int64)v87, v93, 256LL, 0LL);
                      break;
                  }
                  if ( v91 == (volatile signed __int32 *)(v90 + 8) )
                    goto LABEL_209;
                }
LABEL_247:
                __fastfail(3u);
              }
              v76 = KxWaitForLockChainValid(&v137);
            }
            v137 = 0LL;
            v77 = (unsigned __int8)v138;
            if ( ((v77 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v76 + 8), (__int64)v138)) & 4) != 0 )
            {
              _InterlockedOr(v136, 0);
              KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v76 + 8) >> 5) & 0x7F], 0LL));
            }
            goto LABEL_158;
          }
          if ( v71 )
          {
            if ( (v62 & 1) != 0 )
            {
              PsBoostThreadIoEx(v71, 1, 0, 0LL);
              *((_DWORD *)v55 + 2) &= ~1u;
              v62 = *((_DWORD *)v55 + 2);
            }
            if ( (v62 & 4) != 0 )
            {
              PsBoostThreadIoQoS(v71, 1);
              *((_DWORD *)v55 + 2) &= ~4u;
              v62 = *((_DWORD *)v55 + 2);
            }
            if ( (v62 & 2) != 0 )
            {
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v71, 0x746C6644u);
              *((_DWORD *)v55 + 2) &= ~2u;
            }
          }
          goto LABEL_138;
        }
LABEL_284:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
    }
    else if ( v41 != 1 )
    {
      if ( (v39 & 1) == 0 )
        goto LABEL_88;
      v44 = KeGetCurrentIrql();
      v45 = KeGetCurrentThread();
      if ( v44 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v44, 2uLL, 0LL);
      if ( v44 || (v45->MiscFlags & 0x400) != 0 || v45->WaitBlock[3].SpareLong )
        goto LABEL_80;
      goto LABEL_284;
    }
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)(P + 72), 0LL, 0LL);
  }
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  v118 = (char **)*((_QWORD *)P + 2);
  v119 = (PVOID *)*((_QWORD *)P + 3);
  if ( v118[1] != P + 16 || *v119 != P + 16 )
    goto LABEL_247;
  *v119 = v118;
  v118[1] = (char *)v119;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), -1);
  ExReleasePushLockEx((__int64 *)(v8 + 104), 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v120 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v121 = *(struct _KEVENT **)(v120 + 192);
      if ( v121 )
        KeSetEvent(v121, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v120 + 552));
    }
  }
  ExReleaseFastMutex(FastMutex);
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
