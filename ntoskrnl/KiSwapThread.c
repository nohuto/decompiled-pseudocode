/*
 * XREFs of KiSwapThread @ 0x14025F500
 * Callers:
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x1402C0868 (KiInSwapSingleProcess.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KiExecuteDpcDelegate @ 0x14038D4D0 (KiExecuteDpcDelegate.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140239E10 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140282B80 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402AEDD4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402AF340 (KiRecomputeGroupSchedulingRank.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403554AC (KiInsertDeferredPreemptionApc.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x140357CB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140357DB4 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140358150 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035827C (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     EtwTraceContextSwap @ 0x140384B80 (EtwTraceContextSwap.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140459B66 (KiSendHeteroRescheduleIntRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiEndCounterAccumulation @ 0x140571E54 (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 */

struct _KPRCB *__fastcall KiSwapThread(ULONG_PTR BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  bool v4; // zf
  __int64 i; // rdi
  int v7; // r15d
  int v8; // ecx
  __int64 p_AbSelfIoBoostsList; // r12
  int v10; // ecx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONG_PTR v14; // rbx
  __int64 v15; // rax
  char v16; // cl
  __int128 *LockedHeadEntry; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // r14
  char v21; // al
  char v22; // dl
  int v23; // r10d
  char CpuPriorityKey; // r12
  __int64 v25; // r14
  _DWORD *v26; // rbx
  __int64 ExtensionTable; // rax
  _QWORD *v28; // rcx
  volatile signed __int16 *v29; // rbx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  char v34; // bl
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned int FrequencyBucket; // eax
  char v44; // cl
  __int64 v45; // r8
  _BOOL8 v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned int v52; // r8d
  int v53; // ecx
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *j; // rcx
  struct _KPRCB *v58; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v60; // eax
  signed __int32 v61; // ett
  int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rbx
  char v67; // al
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // r9
  unsigned __int64 *v70; // r8
  int v71; // edx
  unsigned __int8 v72; // si
  struct _KPRCB *v73; // rcx
  signed __int32 *v74; // r8
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  char v77; // di
  struct _KPRCB *v78; // rbx
  unsigned __int8 v79; // cf
  volatile signed __int32 *v80; // rbx
  char v81; // r14
  unsigned int v82; // esi
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // r11
  unsigned __int64 v86; // rax
  __int64 v87; // r12
  volatile signed __int32 *v88; // rdi
  char v89; // al
  __int64 v90; // r9
  unsigned __int16 v91; // r8
  _QWORD *v92; // rcx
  unsigned __int64 v93; // r14
  _QWORD *v94; // rax
  __int64 v95; // r15
  volatile signed __int32 *v96; // rsi
  __int64 v97; // rcx
  unsigned int v98; // edx
  volatile signed __int32 *v99; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v101; // rcx
  _DWORD *v102; // rdx
  unsigned __int8 v103; // cl
  struct _KPRCB *v104; // r10
  _DWORD *v105; // r9
  int v106; // edx
  signed __int32 v108[8]; // [rsp+0h] [rbp-100h] BYREF
  char v109; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v110; // [rsp+41h] [rbp-BFh]
  int v111; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v112; // [rsp+48h] [rbp-B8h]
  __int64 v113; // [rsp+50h] [rbp-B0h]
  int v114; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v115; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v116; // [rsp+68h] [rbp-98h]
  int v117; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v118; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v119; // [rsp+80h] [rbp-80h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+88h] [rbp-78h]
  __int64 v121; // [rsp+90h] [rbp-70h] BYREF
  int v122; // [rsp+98h] [rbp-68h]
  int v123; // [rsp+9Ch] [rbp-64h] BYREF
  int v124; // [rsp+A0h] [rbp-60h] BYREF
  int v125; // [rsp+A4h] [rbp-5Ch] BYREF
  int v126; // [rsp+A8h] [rbp-58h] BYREF
  int v127; // [rsp+ACh] [rbp-54h] BYREF
  int v128; // [rsp+B0h] [rbp-50h] BYREF
  int v129; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned __int64 v130; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-40h]
  _QWORD *v132; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v134; // [rsp+E8h] [rbp-18h]
  _QWORD v135[2]; // [rsp+F8h] [rbp-8h] BYREF

  v4 = *(_QWORD *)(a2 + 11528) == 0LL;
  i = a2;
  v132 = a3;
  v121 = a2;
  if ( !v4 )
    KiProcessThreadWaitList(a2, 1u, 0, 2u);
  v7 = 0;
  v8 = *(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870);
  v118 = 0LL;
  if ( v8 == 63 )
    goto LABEL_59;
  CurrentPrcb = KeGetCurrentPrcb();
  v115 = 0LL;
  v112 = 0;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v10 = *(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870);
  v116 = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  if ( v10 == 63 )
    goto LABEL_58;
  v11 = (*(unsigned __int8 *)(BugCheckParameter1 + 792) | *(unsigned __int8 *)(BugCheckParameter1 + 870)) ^ 0x3F;
  v4 = !_BitScanForward((unsigned int *)&v12, v11);
  v112 = v12;
  if ( v4 )
    goto LABEL_58;
  do
  {
    v11 &= v11 - 1;
    v13 = 96 * v12;
    v14 = v13 + BugCheckParameter1 + 1696;
    v112 = v11;
    v134 = 0LL;
    v15 = *(_QWORD *)v14;
    *(_QWORD *)&v134 = v15;
    if ( v15 && (v15 & 2) == 0 && (v15 & 1) == 0 )
    {
      if ( v15 >= 0 )
        goto LABEL_17;
      if ( (*(_BYTE *)(v14 + 19) & 1) != 0 )
        goto LABEL_53;
      if ( *(_BYTE *)(v14 + 17) )
      {
        v16 = *(_BYTE *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1501);
        if ( v16 > 30 )
          v16 = 30;
        if ( v16 != *(_BYTE *)(v14 + 48) )
        {
LABEL_17:
          v111 = 0;
          v114 = 0;
          memset(&v133, 0, sizeof(v133));
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)v14, 1, &v133);
          v18 = (__int64)LockedHeadEntry;
          if ( !LockedHeadEntry )
            goto LABEL_52;
          if ( !*(_BYTE *)(v14 + 17) )
          {
            if ( (__int128 *)v14 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition(v14, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v18, (__int64)&v111);
            if ( v111 )
            {
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v14,
                                   (unsigned int)&v111,
                                   (unsigned int)&v118,
                                   (unsigned int)&v115,
                                   p_AbSelfIoBoostsList,
                                   (__int64)&v114)
                && v14 != v18 )
              {
                KiAbEntryUpdateOwnerTreePosition(v14, v18);
              }
              v7 = v114;
LABEL_43:
              KxReleaseQueuedSpinLock(&v133);
              if ( v7 )
              {
                v26 = (_DWORD *)(v14 - 96LL * *(unsigned __int8 *)(v14 + 16) - 1696);
                if ( ObReferenceObjectSafeWithTag((__int64)v26) )
                {
                  if ( (v7 & 1) != 0 )
                    IoBoostThreadIoPriority(v26, 2LL, 0x80000000LL);
                  if ( (v7 & 2) != 0 )
                  {
                    if ( v26[362] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v26);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                  }
                  ObDereferenceObjectDeferDeleteWithTag(v26, 0x746C6644u);
                }
              }
LABEL_52:
              v7 = 0;
              goto LABEL_53;
            }
LABEL_38:
            KxReleaseQueuedSpinLock(&v133);
            goto LABEL_52;
          }
          if ( (__int128 *)v14 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v14, LockedHeadEntry);
          v19 = *(_QWORD *)(v18 + 56);
          if ( v19 )
            v20 = *(_BYTE *)(v19 + 24);
          else
            v20 = 30;
          v4 = *(_BYTE *)(v18 + 17) == 0;
          LOBYTE(v111) = v20;
          if ( v4 )
          {
            v21 = KiAbOwnerComputeCpuPriorityKey(v18);
            v22 = v20;
            if ( v21 < v20 )
              v22 = v21;
            v20 = v22;
            LOBYTE(v111) = v22;
          }
          KiAbTryIncrementIoWaiterCounts(v14, v18);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v14);
          if ( v20 < CpuPriorityKey )
          {
            if ( v23 )
              goto LABEL_40;
            v25 = v116;
          }
          else
          {
            if ( !v23 )
            {
              v11 = v112;
              p_AbSelfIoBoostsList = v116;
              goto LABEL_38;
            }
LABEL_40:
            v25 = v116;
            KiAbIoBoostOwners(v18, v23, (unsigned int)&v118, (unsigned int)&v115, v116);
          }
          KiAbCpuBoostOwners(v18, (unsigned __int8)CpuPriorityKey, (unsigned int)&v118, (unsigned int)&v115, v25);
          v11 = v112;
          p_AbSelfIoBoostsList = v116;
          goto LABEL_43;
        }
      }
      else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v13 + BugCheckParameter1 + 1696) != *(_BYTE *)(v14 + 48) )
      {
        goto LABEL_17;
      }
    }
LABEL_53:
    v4 = !_BitScanForward((unsigned int *)&v12, v11);
    v112 = v12;
  }
  while ( !v4 );
  v28 = v115;
  for ( i = v121; v115; v28 = v115 )
  {
    v29 = (volatile signed __int16 *)(v28 - 101);
    v115 = (_QWORD *)*v28;
    *v28 = 1LL;
    _InterlockedOr(v108, 0);
    if ( *((_BYTE *)v28 - 15) )
      KiAbProcessThreadLocks((__int64)(v28 - 101), 0, 1, 0, (__int64)&v118, (__int64)&v115, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v29 + 434);
  }
LABEL_58:
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v118);
LABEL_59:
  _disable();
  *(_BYTE *)(i + 32) = 1;
  v30 = __rdtsc();
  v31 = v30 - *(_QWORD *)(i + 33152);
  *(_QWORD *)(BugCheckParameter1 + 72) += v31;
  v32 = *(unsigned int *)(BugCheckParameter1 + 80);
  v33 = v31 * *(unsigned int *)(i + 33208);
  *(_QWORD *)(i + 33152) = v30;
  v34 = *(_BYTE *)(BugCheckParameter1 + 2);
  v35 = (v33 >> 16) + v32;
  if ( v35 > 0xFFFFFFFF )
    LODWORD(v35) = -1;
  *(_DWORD *)(BugCheckParameter1 + 80) = v35;
  if ( (v34 & 0xBE) != 0 )
  {
    if ( v34 < 0 )
    {
      v36 = *(_QWORD *)(i + 34480);
      a4 = (*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1024LL) >> 4) & 0x1FFLL;
      v37 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1024LL) >> 13) & 0x3FFFF;
      _BitScanReverse(&v38, v37);
      v39 = 1 << v38;
      v40 = v38 - 2;
      v122 = v40;
      v41 = *(_QWORD *)(*(_QWORD *)(v36 + 8 * v40) + 8LL * (v37 ^ v39) + 8);
      *(_QWORD *)(v41 + 8 * a4) += v31;
      v34 &= ~0x80u;
    }
    if ( (v34 & 0x10) != 0 )
    {
      v42 = i + 8LL * *(unsigned __int8 *)(BugCheckParameter1 + 124);
      *(_QWORD *)(v42 + 33160) += v31;
      v34 &= ~0x10u;
    }
    if ( (v34 & 0x20) != 0 )
    {
      a4 = *(_QWORD *)(BugCheckParameter1 + 1608);
      if ( a4 )
      {
        FrequencyBucket = PoGetFrequencyBucket(i);
        if ( KeHeteroSystem )
          v44 = *(_BYTE *)(i + 34056);
        else
          v44 = *(_BYTE *)(i + 34059);
        v45 = FrequencyBucket;
        v46 = v44 != 0;
        *(_QWORD *)(a4 + 8 * (v46 + 2LL * FrequencyBucket)) += v31;
        v47 = *(_DWORD *)(a4 + 192);
        if ( KiTimelineBitmapTime <= v47 )
        {
          v48 = v47 - KiTimelineBitmapTime;
          if ( v48 < 0x20 )
            *(_DWORD *)(a4 + 196) |= 1 << v48;
        }
        else
        {
          LODWORD(v113) = KiTimelineBitmapTime;
          if ( KiTimelineBitmapTime - v47 >= 0x20 )
            HIDWORD(v113) = 1;
          else
            HIDWORD(v113) = (*(_DWORD *)(a4 + 196) << (KiTimelineBitmapTime - v47)) | 1;
          *(_QWORD *)(a4 + 192) = v113;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v49 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512);
          if ( v49 == 2 || (unsigned int)(v49 - 5) <= 1 )
            *(_QWORD *)(a4 + 16 * v45 + 8) += v31;
        }
        if ( *(_QWORD *)(BugCheckParameter1 + 1552) )
        {
          *(_QWORD *)(a4 + 8 * (v46 + 2 * (v45 + 8))) += v31;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 1552) + 1608LL)
                                      + 8 * (v46 + 2 * (v45 + 4))),
            v31);
        }
      }
      v34 &= ~0x20u;
    }
    if ( (v34 & 0x40) != 0 )
    {
      v50 = *(_QWORD *)(BugCheckParameter1 + 968);
      if ( v50 )
        *(_BYTE *)(v50 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
    {
      LOBYTE(a4) = 1;
      KiUpdateThreadHgsFeedback(i, BugCheckParameter1, v31, a4);
    }
    v51 = *(_QWORD *)(i + 33200);
    if ( v51 )
    {
      if ( *(_BYTE *)(BugCheckParameter1 + 125) )
      {
        v52 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512);
        if ( v52 < 7 )
        {
          v53 = 0;
          v54 = *(_DWORD *)(BugCheckParameter1 + 80);
          if ( v54 <= *(_DWORD *)(BugCheckParameter1 + 84) )
            v54 = *(_DWORD *)(BugCheckParameter1 + 84);
          LOBYTE(v53) = v54 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v55 = *(unsigned __int8 *)(BugCheckParameter1 + 516) + (unsigned int)KiHgsPlusConfiguration * (v53 + 2 * v52);
          *(_QWORD *)(v51 + 8 * v55) += v31;
        }
      }
    }
    if ( (v34 & 0xBE) != 0 )
    {
      v56 = *(_QWORD *)(BugCheckParameter1 + 104);
      if ( v56 )
      {
        for ( j = (_QWORD *)(*(unsigned int *)(i + 216) + v56); j; j = (_QWORD *)j[51] )
          *j += v31;
      }
      if ( (*(_BYTE *)(BugCheckParameter1 + 2) & 8) != 0
        && (*(_QWORD *)(*(_QWORD *)(i + 192) + 128LL) & *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 576)
                                                                  + 8LL
                                                                  * *(unsigned __int16 *)(*(_QWORD *)(i + 192) + 136LL)
                                                                  + 8)) != *(_QWORD *)(*(_QWORD *)(i + 192) + 128LL) )
      {
        *(_QWORD *)(i + 33192) += v31;
      }
      if ( *(_QWORD *)(BugCheckParameter1 + 360) )
        KiEndCounterAccumulation(BugCheckParameter1);
    }
  }
  v58 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v58->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v60 = *SchedulerAssist;
    do
    {
      v61 = v60;
      v60 = _InterlockedCompareExchange(SchedulerAssist, v60 & 0xFFDFFFFF, v60);
    }
    while ( v61 != v60 );
    if ( (v60 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v58);
  }
  _enable();
  v62 = (*(_DWORD *)(BugCheckParameter1 + 80) >> 1) + (*(_DWORD *)(BugCheckParameter1 + 84) >> 1);
  *(_DWORD *)(BugCheckParameter1 + 80) = 0;
  *(_DWORD *)(BugCheckParameter1 + 84) = v62;
  v123 = 0;
  v119 = i & 0xFFFFFFFFFFFFFFFEuLL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(i + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v123);
    while ( *(_QWORD *)(i + 48) );
  }
  v63 = *(_QWORD *)(BugCheckParameter1 + 104);
  v64 = v63;
  if ( v63 )
  {
    v65 = *(unsigned int *)(i + 216) + v63;
    if ( v65 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v65 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v65, v64) )
          {
            if ( (*(_BYTE *)(v65 + 112) & 1) != 0 )
            {
              LOBYTE(SchedulerAssist) = 1;
              KiRemoveSchedulingGroupQueue(i, v65, SchedulerAssist);
            }
          }
          else if ( *(_QWORD *)v65 >= *(_QWORD *)(v65 + 24) && (*(_BYTE *)(v65 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v64, v65, i);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v64, i, SchedulerAssist, v65);
        }
        v65 = *(_QWORD *)(v65 + 408);
        if ( !v65 )
          break;
        v64 = v65 - *(unsigned int *)(i + 216);
      }
    }
  }
  v66 = KiSearchForNewThread(i, 0LL, &v119);
  if ( v66 == *(_QWORD *)(i + 24) && KeHeteroSystem && !KeHeteroSystemVirtual )
  {
    KiReleasePrcbLocksForIsolationUnit(&v119);
    KiSendHeteroRescheduleIntRequest(i);
    KiAcquirePrcbLocksForIsolationUnit(i, 0, (__int64 *)&v119);
    v66 = *(_QWORD *)(i + 16);
  }
  if ( v66 == *(_QWORD *)(i + 24) || v66 == BugCheckParameter1 || !*(_BYTE *)(v66 + 113) )
    *(_QWORD *)(i + 16) = 0LL;
  else
    v66 = *(_QWORD *)(i + 24);
  *(_QWORD *)(i + 8) = v66;
  if ( *(_BYTE *)(v66 + 388) == 1 )
    *(_DWORD *)(v66 + 132) = *(_DWORD *)(v66 + 132) - *(_DWORD *)(v66 + 436) + MEMORY[0xFFFFF78000000320];
  v67 = v119;
  v68 = v119;
  *(_BYTE *)(v66 + 388) = 2;
  v69 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
  v130 = v69;
  if ( (v67 & 1) != 0 )
  {
    v70 = (unsigned __int64 *)(*(_QWORD *)(v69 + 34904) + 8LL);
    v71 = **(unsigned __int8 **)(v69 + 34904);
    if ( **(_BYTE **)(v69 + 34904) )
      goto LABEL_141;
  }
  else
  {
    v70 = &v130;
    v71 = 1;
    do
LABEL_141:
      _InterlockedAnd64((volatile signed __int64 *)(v70[--v71] + 48), 0LL);
    while ( v71 );
  }
  v72 = *(_BYTE *)(BugCheckParameter1 + 390);
  v110 = v72;
  v119 = 0LL;
  if ( BugCheckParameter1 == v66 )
  {
    if ( !*(_BYTE *)(v66 + 193) || *(_WORD *)(v66 + 486) || (v109 = 1, v72) )
      v109 = 0;
    _disable();
    KiStartThreadCycleAccumulation(i, v66, 0);
    v73 = KeGetCurrentPrcb();
    v74 = (signed __int32 *)v73->SchedulerAssist;
    if ( v74 )
    {
      _m_prefetchw(v74);
      v75 = *v74;
      do
      {
        v76 = v75;
        v75 = _InterlockedCompareExchange(v74, v75 & 0xFFDFFFFF, v75);
      }
      while ( v76 != v75 );
      if ( (v75 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v73);
    }
    _enable();
    if ( (*(_DWORD *)(v66 + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v66 + 120), 0xBu);
      KiInsertDeferredPreemptionApc(i, v66, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(BugCheckParameter1, BugCheckParameter1);
  }
  else
  {
    v77 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
    {
      if ( !*(_BYTE *)(BugCheckParameter1 + 793) )
      {
        v109 = KiSwapContext(BugCheckParameter1, v66, v72);
        goto LABEL_172;
      }
      v124 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v124);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
          _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x40000u);
        KiUpdateVPBackingThreadPriority(BugCheckParameter1);
        v77 = 1;
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    }
    v109 = KiSwapContext(BugCheckParameter1, v66, v72);
    if ( v77 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFFBFFFF);
  }
LABEL_172:
  v78 = *(struct _KPRCB **)(BugCheckParameter1 + 200);
  v79 = _bittestandreset((signed __int32 *)(BugCheckParameter1 + 116), 9u);
  CurrentPrcb = v78;
  if ( v79 )
  {
    v80 = (volatile signed __int32 *)(BugCheckParameter1 + 256);
    v121 = 0LL;
    v117 = 0;
    v81 = 0;
    v82 = -129;
    while ( 1 )
    {
      v125 = 0;
      while ( _interlockedbittestandset(v80, 7u) )
      {
        do
          KeYieldProcessorEx(&v125);
        while ( (*v80 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter1 + 259) & 0xC0) == 0 )
        break;
      v83 = *(unsigned __int8 *)(BugCheckParameter1 + 258);
      v84 = *(unsigned __int16 *)(BugCheckParameter1 + 312);
      LODWORD(v116) = *(unsigned __int8 *)(BugCheckParameter1 + 258);
      v113 = v83;
      v126 = 0;
      v85 = KiProcessorBlock[v84];
      v86 = (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter1 + 314) << 8;
      v131 = v85;
      v87 = v85 + 15360;
      v88 = (volatile signed __int32 *)(v85 + 15360 + 32 * (v86 + v83 + 16));
      while ( _interlockedbittestandset64(v88, 0LL) )
      {
        do
          KeYieldProcessorEx(&v126);
        while ( *(_QWORD *)v88 );
      }
      if ( *(char *)(BugCheckParameter1 + 259) >= 0 )
      {
        v90 = v113;
        v91 = *(_WORD *)(BugCheckParameter1 + 314);
        v92 = *(_QWORD **)(BugCheckParameter1 + 288);
        v93 = 32 * (((unsigned __int64)v91 << 8) + v113 + 16);
        v94 = *(_QWORD **)(BugCheckParameter1 + 296);
        v95 = 32 * (((v91 ^ 1LL) << 8) + v113 + 16);
        if ( v92[1] != BugCheckParameter1 + 288 || *v94 != BugCheckParameter1 + 288 )
          __fastfail(3u);
        *v94 = v92;
        v92[1] = v94;
        if ( v94 == v92 )
        {
          *(_DWORD *)(v93 + v87 + 28) = -1;
          if ( !v91 )
          {
            v127 = 0;
            v96 = (volatile signed __int32 *)(v87 + 32 * (v90 + 272));
            while ( _interlockedbittestandset64(v96, 0LL) )
            {
              do
                KeYieldProcessorEx(&v127);
              while ( *(_QWORD *)v96 );
            }
            goto LABEL_211;
          }
          v96 = (volatile signed __int32 *)(v87 + 32 * (v90 + 16));
          if ( _interlockedbittestandset64(v96, 0LL) )
          {
            _mm_pause();
            goto LABEL_203;
          }
          if ( !v96 )
          {
LABEL_203:
            _InterlockedAnd64((volatile signed __int64 *)v88, 0LL);
            v128 = 0;
            while ( _interlockedbittestandset64(v96, 0LL) )
            {
              do
                KeYieldProcessorEx(&v128);
              while ( *(_QWORD *)v96 );
            }
            v129 = 0;
            v88 = (volatile signed __int32 *)(v87 + 32 * (v113 + 272));
            while ( _interlockedbittestandset64(v88, 0LL) )
            {
              do
                KeYieldProcessorEx(&v129);
              while ( *(_QWORD *)v88 );
            }
LABEL_211:
            v90 = v113;
          }
          if ( *(_DWORD *)(v93 + v87 + 28) == -1 && *(_DWORD *)(v95 + v87 + 28) == -1 )
          {
            v97 = qword_140D20278[2 * *(unsigned __int8 *)(v131 + 208)];
            if ( KiSerializeTimerExpiration )
            {
              v98 = v116 & 0x3F;
              v99 = (volatile signed __int32 *)(v97 + 8LL * ((unsigned int)v116 >> 6));
            }
            else
            {
              v98 = *(unsigned __int8 *)(v131 + 209);
              v99 = (volatile signed __int32 *)((v90 << 6) + v97);
            }
            _interlockedbittestandreset64(v99, v98);
          }
          _InterlockedAnd64((volatile signed __int64 *)v96, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)v88, 0LL);
        v81 = 1;
        v82 = -1073741953;
        break;
      }
      _InterlockedAnd64((volatile signed __int64 *)v88, 0LL);
      if ( _InterlockedExchange64((volatile __int64 *)(v87 + 8LL * (*(_BYTE *)(BugCheckParameter1 + 259) & 0x3F)), 0LL) )
      {
        v81 = 1;
        v82 = 16777087;
        break;
      }
      _InterlockedAnd(v80, 0xFFFFFF7F);
      v89 = *(_BYTE *)(BugCheckParameter1 + 259);
      v117 = 0;
      if ( v89 < 0 )
      {
        do
          KeYieldProcessorEx(&v117);
        while ( *(char *)(BugCheckParameter1 + 259) < 0 );
      }
    }
    _InterlockedAnd(v80, v82);
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      if ( v81 )
      {
        v121 = BugCheckParameter1 + 256;
        v135[0] = &v121;
        v135[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v135, 1, 1073872896, 3925, 1538);
        v72 = v110;
        v78 = CurrentPrcb;
        goto LABEL_224;
      }
LABEL_222:
      *(_BYTE *)(BugCheckParameter1 + 481) = 4;
      *(_QWORD *)(BugCheckParameter1 + 264) = BugCheckParameter1 + 464;
      *(_QWORD *)(BugCheckParameter1 + 272) = BugCheckParameter1 + 464;
    }
    else if ( !v81 )
    {
      goto LABEL_222;
    }
    v78 = CurrentPrcb;
    v72 = v110;
  }
LABEL_224:
  if ( v132 )
    *v132 = *(_QWORD *)(BugCheckParameter1 + 976);
  if ( v109 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        v101 = KeGetCurrentPrcb();
        v102 = v101->SchedulerAssist;
        v4 = (v102[5] & 0xFFFF0003) == 0;
        v102[5] &= 0xFFFF0003;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(v101);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  if ( KiIrqlFlags )
  {
    v103 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v103 <= 0xFu && v72 <= 0xFu && v103 >= 2u )
    {
      v104 = KeGetCurrentPrcb();
      v105 = v104->SchedulerAssist;
      v106 = ~(unsigned __int16)(-1LL << (v72 + 1));
      v4 = (v106 & v105[5]) == 0;
      v105[5] &= v106;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(v104);
    }
  }
  __writecr8(v72);
  return v78;
}
