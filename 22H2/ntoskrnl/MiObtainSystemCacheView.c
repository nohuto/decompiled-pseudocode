/*
 * XREFs of MiObtainSystemCacheView @ 0x140292B80
 * Callers:
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407BD104 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     RemoveListHeadPte @ 0x140292A74 (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x140293260 (MiGetPteLink.c)
 *     MiIncrementSystemCacheViewCount @ 0x140293290 (MiIncrementSystemCacheViewCount.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiCompareTbFlushTimeStamp @ 0x140307B3C (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x14030A67C (MiExpandSystemCache.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6E0 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     CcUnmapInactiveViews @ 0x1404EB320 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x1407A0A58 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // r12d
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int64 *v6; // r15
  __int64 v7; // rdi
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  signed __int64 v13; // rdx
  struct _KTHREAD *v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rbx
  volatile signed __int64 *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int v47; // r8d
  unsigned int v48; // ecx
  signed __int64 v49; // r8
  ULONG_PTR v50; // r13
  char v51; // bl
  struct _KTHREAD *v52; // rbx
  unsigned int v53; // edx
  unsigned int v54; // r10d
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rcx
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  ULONG_PTR v62; // r13
  __int64 v63; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v65; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v67; // r9
  int v68; // eax
  struct _KTHREAD *v69; // rbx
  unsigned int v70; // edx
  unsigned __int8 v71; // si
  unsigned int v72; // r10d
  __int64 v73; // rcx
  __int64 v74; // rdi
  int v75; // eax
  unsigned int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  struct _KTHREAD *v79; // r13
  ULONG_PTR SessionId; // r9
  unsigned int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // eax
  unsigned int v85; // ecx
  __int64 v86; // rdx
  unsigned __int8 v87; // al
  __int64 v88; // rcx
  _DWORD *v89; // r9
  __int64 v90; // rdx
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  volatile signed __int64 *v95; // rcx
  struct _KTHREAD *v96; // r13
  ULONG_PTR v97; // r9
  ULONG_PTR v98; // r10
  unsigned int v99; // r8d
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // eax
  unsigned int v103; // ecx
  unsigned __int8 v104; // r13
  __int64 v105; // rcx
  _QWORD *v106; // r13
  __int64 v107; // r8
  unsigned __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 PteLink; // rax
  unsigned __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int8 v126; // r14
  _DWORD *v127; // r10
  unsigned __int8 v128; // al
  struct _KPRCB *v129; // r9
  _DWORD *v130; // r8
  int v131; // eax
  unsigned __int8 v132; // al
  struct _KPRCB *v133; // r10
  _DWORD *v134; // r9
  int v135; // eax
  signed __int32 v136[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  _QWORD *p_Lock; // [rsp+38h] [rbp-C8h]
  unsigned int v139; // [rsp+40h] [rbp-C0h]
  unsigned int v140; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *v141; // [rsp+48h] [rbp-B8h]
  int v142; // [rsp+50h] [rbp-B0h]
  int v143; // [rsp+54h] [rbp-ACh]
  int v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+5Ch] [rbp-A4h]
  int v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+64h] [rbp-9Ch]
  int v148; // [rsp+68h] [rbp-98h]
  int v149; // [rsp+6Ch] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v151; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int64 *v152; // [rsp+90h] [rbp-70h]
  unsigned __int64 v153; // [rsp+98h] [rbp-68h] BYREF
  __int64 v154; // [rsp+A0h] [rbp-60h]
  __int64 v155; // [rsp+A8h] [rbp-58h]
  int v156; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v157; // [rsp+B4h] [rbp-4Ch]
  __int16 v158; // [rsp+B6h] [rbp-4Ah]
  __int64 v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C0h] [rbp-40h]
  __int64 v161; // [rsp+C8h] [rbp-38h]
  _BYTE v162[152]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v163[12]; // [rsp+170h] [rbp+70h] BYREF

  v151 = 0LL;
  v153 = 0LL;
  v158 = 0;
  memset(v162, 0, sizeof(v162));
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v163, 0, sizeof(v163));
  v159 = 20LL;
  CurrentThread = 0LL;
  v156 = 0;
  v4 = 0;
  v157 = 0;
  v160 = 0LL;
  v161 = 0LL;
  v141 = 0LL;
  v139 = 0;
  v140 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C4E3A8;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v2);
  if ( *(_BYTE *)(a1 + 6940) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v65 = KeGetCurrentIrql();
      if ( v65 <= 0xFu && CurrentIrql <= 0xFu && v65 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v67 = CurrentPrcb->SchedulerAssist;
        v68 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v55 = (v68 & v67[5]) == 0;
        v67[5] &= v68;
        if ( v55 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  v141 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v62 = a1 + 1856;
  ExAcquirePushLockExclusiveEx(a1 + 1856, 0LL);
  if ( *(_BYTE *)(a1 + 6940) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
    v79 = KeGetCurrentThread();
    v145 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v79->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v79->SpecialApcDisable;
    AbAllocationRegionCount = ++v79->AbAllocationRegionCount;
    v81 = ((char)v79->AbEntrySummary | (char)v79->AbOrphanedEntrySummary) ^ 0x3F;
    v55 = !_BitScanReverse((unsigned int *)&v82, v81);
    v144 = v82;
    if ( v55 )
      goto LABEL_125;
    while ( 1 )
    {
      v83 = (__int64)&v79->LockEntries[v82];
      p_Lock = (_QWORD *)v83;
      v81 &= ~(1 << v82);
      if ( (*(_BYTE *)(v83 + 26) & 1) != 0
        && (*(_DWORD *)(v83 + 32) & 1) == 0
        && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v83 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v83 + 26) &= ~1u;
        if ( *(_QWORD *)(v83 + 32) )
          break;
      }
      v55 = !_BitScanReverse((unsigned int *)&v82, v81);
      v144 = v82;
      if ( v55 )
        goto LABEL_125;
    }
    if ( !v83 )
    {
LABEL_125:
      if ( (*((_DWORD *)&v79->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v79, a1 + 1856, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v83 + 32) |= 2u;
      if ( *(__int64 *)(v83 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v83);
        v83 = (__int64)p_Lock;
      }
      v84 = *(_DWORD *)(v83 + 88) & 0x1FFFF;
      v85 = *(_DWORD *)(v83 + 88) & 0xFFFE0000;
      *(_BYTE *)(v83 + 25) &= ~1u;
      v145 = v84;
      *(_DWORD *)(v83 + 88) = v85;
      *(_QWORD *)(v83 + 32) = 0LL;
      v86 = (__int64)((unsigned __int128)((v83 - (unsigned __int64)v79->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v87 = 1 << (v86 + (v86 < 0));
      if ( AbAllocationRegionCount == 1 )
        v79->AbEntrySummary |= v87;
      else
        _InterlockedOr8((volatile signed __int8 *)&v79->AbOrphanedEntrySummary, v87);
    }
    --v79->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v79);
    v55 = v79->SpecialApcDisable++ == -1;
    if ( v55 && ($C459BD0D405E8E46662177FB3D0A143F *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
      KiCheckForKernelApcDelivery(v88);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    CurrentThread = 0LL;
    v141 = 0LL;
    goto LABEL_67;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_67:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v89 = KeGetCurrentPrcb()->SchedulerAssist;
      v63 = (-1 << (CurrentIrql + 1)) & 4u | v89[5];
      v89[5] = v63;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3A8;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v63);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6940) = 1;
LABEL_3:
    v6 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1784) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v152 = v6;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) != ((__int64)v6 - *(_QWORD *)(a1 + 1800)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache(a1, &v153) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v91 = KeGetCurrentIrql();
        if ( v91 <= 0xFu && CurrentIrql <= 0xFu && v91 >= 2u )
        {
          v92 = KeGetCurrentPrcb();
          v90 = -1LL << (CurrentIrql + 1);
          v93 = v92->SchedulerAssist;
          v94 = ~(unsigned __int16)v90;
          v55 = (v94 & v93[5]) == 0;
          v93[5] &= v94;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v92);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v95 = (volatile signed __int64 *)(a1 + 1856);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v95);
        v95 = (volatile signed __int64 *)(a1 + 1856);
      }
      v96 = KeGetCurrentThread();
      p_Lock = &v96->Header.Lock;
      v147 = 0;
      if ( (unsigned int)MiGetSystemRegionType(v95) == 1 )
        v97 = (unsigned int)MmGetSessionIdEx(v96->ApcState.Process);
      else
        v97 = 0xFFFFFFFFLL;
      --v96->SpecialApcDisable;
      v98 = (ULONG_PTR)v96;
      AbAllocationRegionCount = ++v96->AbAllocationRegionCount;
      v154 = (a1 + 1856) & 0x7FFFFFFFFFFFFFFCLL;
      v99 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
      v55 = !_BitScanReverse((unsigned int *)&v100, v99);
      v146 = v100;
      if ( v55 )
        goto LABEL_172;
      while ( 1 )
      {
        LODWORD(v141) = ~(1 << v100) & v99;
        v101 = (__int64)&v96->LockEntries[v100];
        v155 = v101;
        if ( (*(_BYTE *)(v101 + 26) & 1) != 0
          && (*(_DWORD *)(v101 + 32) & 1) == 0
          && (*(_QWORD *)(v101 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v154
          && *(_DWORD *)(v101 + 40) == (_DWORD)v97 )
        {
          *(_BYTE *)(v101 + 26) &= ~1u;
          if ( *(_QWORD *)(v101 + 32) )
            break;
        }
        v99 = (unsigned int)v141;
        v55 = !_BitScanReverse((unsigned int *)&v100, (unsigned int)v141);
        v146 = v100;
        if ( v55 )
          goto LABEL_172;
      }
      if ( !v101 )
      {
LABEL_172:
        if ( (*((_DWORD *)&v96->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v96, a1 + 1856, v97, 0LL);
      }
      else
      {
        *(_BYTE *)(v101 + 32) |= 2u;
        if ( *(__int64 *)(v101 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v101);
          v98 = (ULONG_PTR)p_Lock;
          v101 = v155;
        }
        v102 = *(_DWORD *)(v101 + 88) & 0x1FFFF;
        v103 = *(_DWORD *)(v101 + 88) & 0xFFFE0000;
        *(_BYTE *)(v101 + 25) &= ~1u;
        v147 = v102;
        *(_DWORD *)(v101 + 88) = v103;
        *(_QWORD *)(v101 + 32) = 0LL;
        v104 = 1 << ((char)(v101 - *(_BYTE *)(v98 + 800)) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v98 + 792) |= v104;
        else
          _InterlockedOr8((volatile signed __int8 *)(v98 + 870), v104);
      }
      --*(_BYTE *)(v98 + 794);
      KiAbThreadRemoveBoosts(v98);
      v106 = p_Lock;
      v55 = (*((_WORD *)p_Lock + 243))++ == 0xFFFF;
      if ( v55 && (_QWORD *)v106[19] != v106 + 19 )
        KiCheckForKernelApcDelivery(v105);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v141 = 0LL;
    }
    if ( v153 )
      MiReturnSystemVa(v153, v153 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 176), v90, 0LL, &v151) == 1 )
    {
      v108 = v151;
      v7 = ((v151 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( MiGetPteLink(*(_QWORD *)(v7 + 24)) == 2 )
      {
        PteLink = MiGetPteLink(*(_QWORD *)(v7 + 16));
        if ( (unsigned __int8)MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
        {
          MiInsertTbFlushEntry(&v156, v108, 64LL, 0LL);
          MiFlushTbList(&v156);
        }
      }
      v111 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v7, v109) )
      {
        if ( (unsigned int)MiPteHasShadow(v113, v112, v114, v115) )
        {
          if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
            v111 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v111;
          MiWritePteShadow(v7, v111);
LABEL_179:
          v116 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v7 + 8, v112) )
          {
            if ( (unsigned int)MiPteHasShadow(v118, v117, v119, v120) )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v116 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v7 + 8) = v116;
              MiWritePteShadow(v7 + 8, v116);
              goto LABEL_189;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v116 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v7 + 8) = v116;
LABEL_189:
          v121 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v7 + 16, v117) )
          {
            if ( (unsigned int)MiPteHasShadow(v123, v122, v124, v125) )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v121 = ZeroPte | 0x8000000000000000uLL;
              *(_QWORD *)(v7 + 16) = v121;
              MiWritePteShadow(v7 + 16, v121);
              return v7;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v121 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)(v7 + 16) = v121;
          return v7;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v111 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v111;
      goto LABEL_179;
    }
    v126 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v126 <= 0xFu )
    {
      v127 = KeGetCurrentPrcb()->SchedulerAssist;
      v107 = (-1LL << (v126 + 1)) & 4;
      v127[5] |= v107;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140C4E3A8;
    CurrentIrql = v126;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_140C4E3A8, v107);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1784)) == ((__int64)v6 - *(_QWORD *)(a1 + 1800)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v128 = KeGetCurrentIrql();
          if ( v128 <= 0xFu && v126 <= 0xFu && v128 >= 2u )
          {
            v129 = KeGetCurrentPrcb();
            v130 = v129->SchedulerAssist;
            v131 = ~(unsigned __int16)(-1LL << (v126 + 1));
            v55 = (v131 & v130[5]) == 0;
            v130[5] &= v131;
            if ( v55 )
              KiRemoveSystemWorkPriorityKick(v129);
          }
        }
      }
      __writecr8(v126);
      return 0LL;
    }
LABEL_5:
    v7 = (__int64)RemoveListHeadPte((__int64 *)(a1 + 1784));
    MiIncrementSystemCacheViewCount(v7 << 25 >> 16);
    v8 = (unsigned __int64 *)(v7 + 24);
    v9 = MiGetPteLink(*(_QWORD *)(v7 + 24));
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v4 = 1;
      }
      else
      {
        _InterlockedOr(v136, 0);
        v10 = MiGetPteLink(*(_QWORD *)(v7 + 16));
        v12 = (v11 - v10) & 0xFFFFF;
        if ( v12 <= 2 && ((v10 & 1) != 0 || v12 < 2) )
        {
          p_Lock = (_QWORD *)(v7 + 24);
          v36 = v7;
          v37 = v152;
          do
          {
            if ( HIDWORD(v159) )
            {
              v38 = v4++;
              v163[v38] = v36;
            }
            v151 = v36 << 25 >> 16;
            MiInsertTbFlushEntry(&v156, v151, 64LL, 0LL);
            v39 = *p_Lock;
            if ( qword_140C4DF40 )
            {
              if ( (v39 & 0x10) != 0 )
                LODWORD(v39) = v39 & 0xFFFFFFEF;
              else
                LODWORD(v39) = ~(_DWORD)qword_140C4DF40 & v39;
            }
            v40 = MiSwizzleInvalidPte(v39 & 0xFFFFFFF | 0x10000000);
            *v41 = v40;
            if ( v4 == 12 )
              break;
            v42 = MiGetPteLink(*(_QWORD *)v36);
            v43 = *(_QWORD *)(a1 + 1800);
            if ( v42 == ((__int64)v37 - v43) >> 3 )
              break;
            v36 = v43 + 8 * v42;
            v44 = *(_QWORD *)(v36 + 24);
            p_Lock = (_QWORD *)(v36 + 24);
          }
          while ( MiGetPteLink(v44) == 2 );
          v139 = v4;
          v8 = (unsigned __int64 *)(v7 + 24);
          v4 = v140;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v159) )
    {
      MiFlushTbList(&v156);
      v45 = v139;
      v140 = 0;
      if ( v139 )
      {
        v46 = v140;
        do
        {
          v152 = (volatile signed __int64 *)(v163[v46] + 24LL);
          v47 = MI_READ_PTE_LOCK_FREE(v152);
          v48 = v47;
          if ( qword_140C4DF40 )
          {
            if ( (v47 & 0x10) != 0 )
              v48 = v47 & 0xFFFFFFEF;
            else
              v48 = v47 & ~(_DWORD)qword_140C4DF40;
          }
          v13 = MiSwizzleInvalidPte(v48 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v152, v13, v49);
          ++v46;
        }
        while ( v46 != v45 );
        v8 = (unsigned __int64 *)(v7 + 24);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v132 = KeGetCurrentIrql();
        if ( v132 <= 0xFu && CurrentIrql <= 0xFu && v132 >= 2u )
        {
          v133 = KeGetCurrentPrcb();
          v13 = -1LL << (CurrentIrql + 1);
          v134 = v133->SchedulerAssist;
          v135 = ~(unsigned __int16)v13;
          v55 = (v135 & v134[5]) == 0;
          v134[5] &= v135;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick(v133);
        }
      }
    }
    __writecr8(CurrentIrql);
    v14 = v141;
    if ( v141 )
    {
      v50 = a1 + 1856;
      v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
      v52 = KeGetCurrentThread();
      v149 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
        v53 = MmGetSessionIdEx(v52->ApcState.Process);
      else
        v53 = -1;
      --v52->SpecialApcDisable;
      ++v52->AbAllocationRegionCount;
      v54 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v52->AbAllocationRegionCount;
      v55 = !_BitScanReverse((unsigned int *)&v56, v54);
      v148 = v56;
      if ( v55 )
        goto LABEL_52;
      while ( 1 )
      {
        v57 = (__int64)&v52->LockEntries[v56];
        v54 &= ~(1 << v56);
        if ( (*(_BYTE *)(v57 + 26) & 1) != 0
          && (*(_DWORD *)(v57 + 32) & 1) == 0
          && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v50 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v57 + 40) == v53 )
        {
          *(_BYTE *)(v57 + 26) &= ~1u;
          if ( *(_QWORD *)(v57 + 32) )
            break;
        }
        v55 = !_BitScanReverse((unsigned int *)&v56, v54);
        v148 = v56;
        if ( v55 )
          goto LABEL_52;
      }
      if ( !v57 )
      {
LABEL_52:
        if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, v50, v53, 0LL);
      }
      else
      {
        *(_BYTE *)(v57 + 32) |= 2u;
        if ( *(__int64 *)(v57 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v57);
        v59 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
        v60 = *(_DWORD *)(v57 + 88) & 0xFFFE0000;
        *(_BYTE *)(v57 + 25) &= ~1u;
        v149 = v59;
        *(_DWORD *)(v57 + 88) = v60;
        *(_QWORD *)(v57 + 32) = 0LL;
        v61 = (signed __int64)(v57 - (unsigned __int64)v52->LockEntries) / 96;
        if ( AbAllocationRegionCount == 1 )
          v52->AbEntrySummary |= 1 << v61;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v61);
      }
      --v52->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v52);
      v55 = v52->SpecialApcDisable++ == -1;
      if ( v55 && ($C459BD0D405E8E46662177FB3D0A143F *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery(v58);
      KiLeaveGuardedRegionUnsafe(v14);
    }
    if ( v4 == 1 )
      MiWaitForSystemCacheViewFlush(v7);
    v15 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v7, v13) )
    {
      if ( (unsigned int)MiPteHasShadow(v17, v16, v18, v19) )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v15 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v15;
        MiWritePteShadow(v7, v15);
LABEL_15:
        v20 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v7 + 8, v16) )
        {
          if ( (unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
          {
            if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
              v20 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)(v7 + 8) = v20;
            MiWritePteShadow(v7 + 8, v20);
LABEL_17:
            v25 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v7 + 16, v21) )
            {
              if ( (unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
              {
                if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                  v25 = ZeroPte | 0x8000000000000000uLL;
                *(_QWORD *)(v7 + 16) = v25;
                MiWritePteShadow(v7 + 16, v25);
                goto LABEL_19;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v25 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)(v7 + 16) = v25;
LABEL_19:
            v30 = ZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v8, v26) )
            {
              if ( (unsigned int)MiPteHasShadow(v32, v31, v33, v34) )
              {
                if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                  v30 = ZeroPte | 0x8000000000000000uLL;
                *v8 = v30;
                MiWritePteShadow(v8, v30);
                return v7;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v30 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v8 = v30;
            return v7;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v20 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v7 + 8) = v20;
        goto LABEL_17;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v15;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1856));
  v69 = KeGetCurrentThread();
  v143 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1856) == 1 )
    v70 = MmGetSessionIdEx(v69->ApcState.Process);
  else
    v70 = -1;
  --v69->SpecialApcDisable;
  v71 = ++v69->AbAllocationRegionCount;
  v72 = ((char)v69->AbEntrySummary | (char)v69->AbOrphanedEntrySummary) ^ 0x3F;
  v55 = !_BitScanReverse((unsigned int *)&v73, v72);
  v142 = v73;
  if ( v55 )
    goto LABEL_101;
  while ( 1 )
  {
    v74 = (__int64)&v69->LockEntries[v73];
    v72 &= ~(1 << v73);
    if ( (*(_BYTE *)(v74 + 26) & 1) != 0
      && (*(_DWORD *)(v74 + 32) & 1) == 0
      && (*(_QWORD *)(v74 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v62 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v74 + 40) == v70 )
    {
      *(_BYTE *)(v74 + 26) &= ~1u;
      if ( *(_QWORD *)(v74 + 32) )
        break;
    }
    v55 = !_BitScanReverse((unsigned int *)&v73, v72);
    v142 = v73;
    if ( v55 )
      goto LABEL_101;
  }
  if ( !v74 )
  {
LABEL_101:
    if ( (*((_DWORD *)&v69->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v69, v62, v70, 0LL);
  }
  else
  {
    *(_BYTE *)(v74 + 32) |= 2u;
    if ( *(__int64 *)(v74 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v74);
    v75 = *(_DWORD *)(v74 + 88) & 0x1FFFF;
    v76 = *(_DWORD *)(v74 + 88) & 0xFFFE0000;
    *(_BYTE *)(v74 + 25) &= ~1u;
    v143 = v75;
    *(_DWORD *)(v74 + 88) = v76;
    *(_QWORD *)(v74 + 32) = 0LL;
    v77 = (signed __int64)(v74 - (unsigned __int64)v69->LockEntries) / 96;
    if ( v71 == 1 )
      v69->AbEntrySummary |= 1 << v77;
    else
      _InterlockedOr8((volatile signed __int8 *)&v69->AbOrphanedEntrySummary, 1 << v77);
  }
  --v69->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v69);
  v55 = v69->SpecialApcDisable++ == -1;
  if ( v55 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
    KiCheckForKernelApcDelivery(v78);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
