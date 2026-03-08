/*
 * XREFs of MiCompleteProtoPteFault @ 0x14026F5F0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C9700 (MiCheckAndUpdateIoAttribution.c)
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     MiMakeTransitionPteValid @ 0x1402CD590 (MiMakeTransitionPteValid.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUserPdeOrAbove @ 0x1402D39A0 (MiUserPdeOrAbove.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402D54E0 (MiSystemImageHasPrivateFixups.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402D7118 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     PfSnGetFileInformation @ 0x140307D00 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiOffsetToProtos @ 0x140331B90 (MiOffsetToProtos.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiGetSubsectionDriverProtos @ 0x1403443A4 (MiGetSubsectionDriverProtos.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     ObpFastReplenishReference @ 0x1403520A4 (ObpFastReplenishReference.c)
 *     ExAcquireRundownProtectionEx @ 0x14035AFC0 (ExAcquireRundownProtectionEx.c)
 *     PfSnTraceBufferAllocate @ 0x14035AFEC (PfSnTraceBufferAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     MiIsAddressInDriverView @ 0x140631A9C (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x1406441A8 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(ULONG_PTR *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // edi
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  struct _KTHREAD *v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char v18; // al
  int v19; // ebx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int64 HasPrivateFixups; // rsi
  char v28; // r8
  unsigned int v29; // r15d
  __int64 v30; // rax
  int v31; // edx
  unsigned __int64 v32; // r9
  unsigned __int64 *v33; // r13
  int v34; // esi
  int v35; // eax
  _BYTE *v36; // r12
  _BYTE *v37; // rcx
  ULONG_PTR *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  volatile signed __int64 *v43; // rbx
  signed __int64 v44; // rdx
  signed __int64 v45; // rax
  signed __int64 v46; // rax
  unsigned int v47; // edx
  void *v48; // rax
  unsigned __int64 v49; // rbx
  _KPROCESS *v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned int SessionId; // r10d
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  _KPROCESS *Process; // r8
  signed __int64 v57; // rdx
  signed __int64 v58; // rax
  unsigned __int64 v59; // r9
  unsigned int v60; // edx
  BOOLEAN v61; // al
  signed __int64 *v62; // roff
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  int v65; // ecx
  unsigned __int64 v66; // r8
  struct _KTHREAD *v67; // rax
  unsigned __int64 v68; // rbx
  BOOL v69; // r8d
  int v70; // eax
  __int64 v71; // rcx
  signed __int32 v72; // eax
  char v73; // cc
  signed __int32 v74; // eax
  unsigned __int64 *v75; // rdx
  signed __int64 *v76; // roff
  signed __int64 v77; // rax
  signed __int64 v78; // rtt
  _KPROCESS *v79; // rcx
  __int64 v80; // rcx
  int v81; // eax
  __int16 v82; // ax
  __int64 v83; // rbx
  ULONG_PTR v84; // rax
  int PagingFileOffset; // eax
  int v86; // eax
  _QWORD *v87; // rcx
  __int64 **Address; // rax
  __int64 v89; // rdx
  __int64 **v90; // rbx
  int v91; // eax
  __int64 v92; // r9
  ULONG_PTR v93; // rbx
  int LogEntry; // eax
  unsigned __int64 *v95; // rcx
  int v96; // eax
  KIRQL v97; // al
  void *v98; // rcx
  KIRQL v99; // bl
  _QWORD *v100; // rdx
  _QWORD *v101; // r8
  signed __int32 v102; // eax
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  _DWORD *v105; // r9
  int v106; // eax
  bool v107; // zf
  __int64 SharedProtos; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v112; // eax
  signed __int64 v113; // rdx
  signed __int64 v114; // rax
  unsigned __int64 v115; // rdx
  unsigned __int8 v116; // dl
  struct _KPRCB *v117; // r10
  _DWORD *v118; // r9
  int v119; // eax
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  _DWORD *v122; // r9
  int v123; // eax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v125; // rcx
  struct _LIST_ENTRY *v126; // r8
  __int64 v127; // rcx
  char PagePrivilege; // al
  unsigned __int64 v129; // rbx
  unsigned __int8 v130; // al
  unsigned __int64 v131; // r15
  unsigned __int8 v132; // al
  __int64 v133; // rax
  unsigned __int8 v134; // cl
  struct _KPRCB *v135; // r10
  _DWORD *v136; // r9
  int v137; // eax
  KIRQL v138; // [rsp+40h] [rbp-C0h]
  KIRQL v139; // [rsp+40h] [rbp-C0h]
  KIRQL v140; // [rsp+40h] [rbp-C0h]
  char v141; // [rsp+44h] [rbp-BCh]
  bool v142; // [rsp+44h] [rbp-BCh]
  unsigned int v143; // [rsp+44h] [rbp-BCh]
  __int64 v144; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v145; // [rsp+48h] [rbp-B8h]
  BOOLEAN v146; // [rsp+50h] [rbp-B0h]
  __int64 v147; // [rsp+58h] [rbp-A8h]
  __int64 TransitionPteValid; // [rsp+68h] [rbp-98h] BYREF
  int v149; // [rsp+70h] [rbp-90h] BYREF
  __int64 v150; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v154; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v156; // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v157; // [rsp+B0h] [rbp-50h]
  __int64 v158; // [rsp+B8h] [rbp-48h] BYREF
  int v159; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 *v160; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v161; // [rsp+D0h] [rbp-30h]
  __int64 v162; // [rsp+D8h] [rbp-28h]
  volatile signed __int64 *v163; // [rsp+E0h] [rbp-20h]
  __int64 v164; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v165; // [rsp+F0h] [rbp-10h]
  __int64 v166; // [rsp+100h] [rbp+0h]
  __int64 v168; // [rsp+168h] [rbp+68h] BYREF
  __int64 v169; // [rsp+170h] [rbp+70h]
  int v170; // [rsp+178h] [rbp+78h]

  v170 = a4;
  v169 = a3;
  v168 = a2;
  v5 = a5;
  v157 = a1 + 7;
  v6 = 0;
  v162 = a1[7];
  BugCheckParameter2 = *a1;
  TransitionPteValid = 0LL;
  v149 = 0;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v156 = v7;
  v154 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v168) >> 12) & 0xFFFFFFFFFFLL;
  v147 = 48 * v154 - 0x220000000000LL;
  v8 = *(_QWORD *)(v147 + 16);
  v158 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v147 + 40) >> 43) & 0x3FFLL));
  if ( (v8 & 0x400) == 0 )
  {
    v10 = 0LL;
    v150 = 0LL;
    goto LABEL_6;
  }
  v9 = v8;
  if ( qword_140C657C0 && (v8 & 0x10) == 0 )
    v9 = v8 & ~qword_140C657C0;
  v10 = v9 >> 16;
  v11 = *(_QWORD *)v10;
  v150 = *(_QWORD *)v10;
  if ( PfSnNumActiveTraces )
  {
    v43 = (volatile signed __int64 *)(v11 + 64);
    _m_prefetchw((const void *)(v11 + 64));
    v44 = *(_QWORD *)(v11 + 64);
    if ( (v44 & 0xF) != 0 )
    {
      do
      {
        v45 = _InterlockedCompareExchange64(v43, v44 - 1, v44);
        if ( v44 == v45 )
          break;
        v44 = v45;
      }
      while ( (v45 & 0xF) != 0 );
    }
    v46 = v44;
    v47 = v44 & 0xF;
    v48 = (void *)(v46 & 0xFFFFFFFFFFFFFFF0uLL);
    Object = v48;
    if ( v47 <= 1 )
    {
      if ( !v47 )
        goto LABEL_202;
      ObpFastReplenishReference(v11 + 64, v48);
      v48 = Object;
      v11 = v150;
    }
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo((_DWORD)v48 - 48);
      v48 = Object;
      v11 = v150;
    }
    if ( v48 )
    {
LABEL_59:
      v49 = *(_QWORD *)(v147 + 8) | 0x8000000000000000uLL;
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
      {
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        {
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
LABEL_63:
          v53 = *(_QWORD *)(v10 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)v10 + 56LL) & 0x20) != 0 )
          {
            if ( v49 < v53 || v49 >= v53 + 8LL * *(unsigned int *)(v10 + 44) )
            {
              if ( (*(_BYTE *)(v10 + 34) & 2) != 0 )
                SharedProtos = MiGetSharedProtos(*(_QWORD *)v10, SessionId, v10);
              else
                SharedProtos = MiGetSubsectionDriverProtos(v10);
              v54 = (v49 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
            }
            else
            {
              v54 = (v49 << 9) - (v53 << 9);
            }
            v55 = ((unsigned __int64)*(unsigned int *)(v10 + 36) << 9) + (v54 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            if ( v53 )
              v83 = (__int64)(v49 - v53) >> 3 << 12;
            else
              v83 = 0LL;
            v55 = ((*(unsigned int *)(v10 + 36) | ((unsigned __int64)(*(_WORD *)(v10 + 32) & 0xFFC0) << 26)) << 12)
                + v83;
          }
          v142 = (*(_DWORD *)(v150 + 56) & 0x20) != 0;
          CurrentThread = KeGetCurrentThread();
          Process = CurrentThread->ApcState.Process;
          P = Process;
          _m_prefetchw(&Process[1].ActiveProcessors.StaticBitmap[10]);
          v57 = Process[1].ActiveProcessors.StaticBitmap[10];
          if ( (v57 & 0xF) != 0 )
          {
            do
            {
              v58 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&Process[1].ActiveProcessors.StaticBitmap[10],
                      v57 - 1,
                      v57);
              if ( v57 == v58 )
                break;
              v57 = v58;
            }
            while ( (v58 & 0xF) != 0 );
          }
          v59 = v57 & 0xFFFFFFFFFFFFFFF0uLL;
          v145 = v57 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v57 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            v60 = v57 & 0xF;
            if ( v60 > 1 )
              goto LABEL_84;
            if ( v60 )
            {
              v61 = ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v59 + 360), 0xFu);
              v59 = v145;
              if ( v61 )
              {
                v62 = (signed __int64 *)((char *)P + 1536);
                _m_prefetchw((char *)P + 1536);
                v63 = *v62;
                while ( (v63 & 0xF) == 0 )
                {
                  if ( v145 != (v63 & 0xFFFFFFFFFFFFFFF0uLL) )
                    break;
                  v64 = v63;
                  v63 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 192, v63 + 15, v63);
                  if ( v64 == v63 )
                    goto LABEL_84;
                }
                v165 = 0LL;
                v166 = 0LL;
                _m_prefetchw((const void *)(v145 + 360));
                v113 = *(_QWORD *)(v145 + 360);
                if ( (v113 & 1) != 0 )
                {
LABEL_252:
                  v115 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v115, 0xFFFFFFFFFFFFFFF1uLL) == 15
                    && !_interlockedbittestandreset((volatile signed __int32 *)(v115 + 32), 0) )
                  {
                    KeSetEvent((PRKEVENT)(v115 + 8), 0, 0);
                    v59 = v145;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v114 = _InterlockedCompareExchange64((volatile signed __int64 *)(v145 + 360), v113 - 30, v113);
                    v107 = v113 == v114;
                    v113 = v114;
                    if ( v107 )
                      break;
                    if ( (v114 & 1) != 0 )
                      goto LABEL_252;
                  }
                }
              }
              goto LABEL_84;
            }
            v146 = 1;
            v138 = KeAcquireSpinLockRaiseToDpc(&qword_140C6A290);
            v145 = *((_QWORD *)P + 192) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v145 )
              v146 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)((*((_QWORD *)P + 192) & 0xFFFFFFFFFFFFFFF0uLL) + 360));
            KxReleaseSpinLock((volatile signed __int64 *)&qword_140C6A290);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v138 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v112 = ~(unsigned __int16)(-1LL << (v138 + 1));
                v107 = (v112 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v112;
                if ( v107 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v138);
            if ( v146 )
            {
              v59 = v145;
            }
            else
            {
              v59 = 0LL;
              v145 = 0LL;
            }
          }
          if ( !v59 )
          {
LABEL_100:
            v76 = (signed __int64 *)(v150 + 64);
            _m_prefetchw((const void *)(v150 + 64));
            v77 = *v76;
            if ( ((unsigned __int64)Object ^ *v76) >= 0xF )
            {
LABEL_226:
              ObDereferenceObjectDeferDeleteWithTag(Object, 0x63536D4Du);
            }
            else
            {
              while ( 1 )
              {
                v78 = v77;
                v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v150 + 64), v77 + 1, v77);
                if ( v78 == v77 )
                  break;
                if ( ((unsigned __int64)Object ^ v77) >= 0xF )
                  goto LABEL_226;
              }
              if ( ObpTraceFlags )
                ObpPushStackInfo((_DWORD)Object - 48);
            }
            goto LABEL_6;
          }
LABEL_84:
          if ( (((v142 & 2) == 0) & (LOBYTE(CurrentThread[1].Queue) >> 6)) == 0 )
          {
            v65 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
            v66 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
            if ( v66 && v65 >= *(_DWORD *)(v66 + 1068) )
              v65 = *(_DWORD *)(v66 + 1068);
            if ( v65 >= 2
              || CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
            {
              v67 = *(struct _KTHREAD **)(v59 + 432);
              if ( !v67 || v67 == CurrentThread && *(_QWORD *)(v59 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
              {
                CurrentThread = (struct _KTHREAD *)*((_QWORD *)Object + 3);
                PfSnGetFileInformation(v59, Object);
                v59 = v145;
                if ( (*(_BYTE *)(v145 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v145 + 352) + 1850LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v145 + 484), 1u);
                if ( v55 < 0x20000000000LL )
                {
                  v68 = v55 >> 9;
                  v69 = v142;
                  v70 = *(_DWORD *)(v145 + 404);
                  v143 = v69;
                  v160 = 0LL;
                  LODWORD(P) = dword_140D0BE90;
                  if ( dword_140D0BE90 != v70 )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v145, 1LL, &v160);
                    v59 = v145;
                    v69 = v143;
                    if ( LogEntry >= 0 )
                    {
                      v95 = v160;
                      *v160 = *v160 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                      v96 = (int)P;
                      *((_DWORD *)v95 + 2) = (_DWORD)P;
                      *(_DWORD *)(v145 + 404) = v96;
                      *(_QWORD *)(v145 + 408) = v145 + 416;
                    }
                  }
                  if ( v69
                    || (v87 = *(_QWORD **)(v59 + 408), *v87 >> 3 != v68)
                    || (struct _KTHREAD *)v87[1] != CurrentThread )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v59 + 344)) > *(_DWORD *)(v59 + 340) )
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v59 + 400), 3, 0) )
                      {
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v59 + 368), DelayedWorkQueue);
                        v59 = v145;
                      }
                    }
                    else
                    {
                      v71 = *(_QWORD *)(v59 + 96);
                      v161 = v71;
                      v72 = _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 1u);
                      v73 = (v72 + 1 < 0) ^ __OFADD__(1, v72) | (v72 == -1);
                      v74 = v72 + 1;
                      if ( v73 )
                      {
LABEL_276:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v74 > *(_DWORD *)(v71 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 0xFFFFFFFF);
                          P = (PVOID)PfSnTraceBufferAllocate();
                          if ( !P )
                          {
                            v59 = v145;
                            goto LABEL_276;
                          }
                          v163 = (volatile signed __int64 *)(v145 + 128);
                          v140 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v145 + 128));
                          if ( *(_QWORD *)(v145 + 96) == v161 )
                          {
                            v100 = *(_QWORD **)(v145 + 112);
                            if ( *v100 != v145 + 104 )
                              __fastfail(3u);
                            v101 = P;
                            *(_QWORD *)P = v145 + 104;
                            v101[1] = v100;
                            *v100 = v101;
                            *(_QWORD *)(v145 + 112) = v101;
                            ++*(_DWORD *)(v145 + 120);
                            *(_QWORD *)(v145 + 96) = v101;
                            KxReleaseSpinLock((volatile signed __int64 *)(v145 + 128));
                            if ( KiIrqlFlags )
                            {
                              v120 = KeGetCurrentIrql();
                              if ( (KiIrqlFlags & 1) != 0 && v120 <= 0xFu && v140 <= 0xFu && v120 >= 2u )
                              {
                                v121 = KeGetCurrentPrcb();
                                v122 = v121->SchedulerAssist;
                                v123 = ~(unsigned __int16)(-1LL << (v140 + 1));
                                v107 = (v123 & v122[5]) == 0;
                                v122[5] &= v123;
                                if ( v107 )
                                  KiRemoveSystemWorkPriorityKick(v121);
                              }
                            }
                            __writecr8(v140);
                          }
                          else
                          {
                            KxReleaseSpinLock(v163);
                            if ( KiIrqlFlags )
                            {
                              v116 = KeGetCurrentIrql();
                              if ( (KiIrqlFlags & 1) != 0 && v116 <= 0xFu && v140 <= 0xFu && v116 >= 2u )
                              {
                                v117 = KeGetCurrentPrcb();
                                v118 = v117->SchedulerAssist;
                                v119 = ~(unsigned __int16)(-1LL << (v140 + 1));
                                v107 = (v119 & v118[5]) == 0;
                                v118[5] &= v119;
                                if ( v107 )
                                  KiRemoveSystemWorkPriorityKick(v117);
                              }
                            }
                            __writecr8(v140);
                            ExFreePoolWithTag(P, 0);
                          }
                          v59 = v145;
                          v71 = *(_QWORD *)(v145 + 96);
                          v161 = v71;
                          v102 = _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 16), 1u);
                          v73 = (v102 + 1 < 0) ^ __OFADD__(1, v102) | (v102 == -1);
                          v74 = v102 + 1;
                          if ( v73 )
                            goto LABEL_276;
                        }
                        v75 = (unsigned __int64 *)(16LL * v74 + v71 + 8);
                        v75[1] = (unsigned __int64)CurrentThread;
                        *v75 = v143 | (8 * v68);
                        _InterlockedIncrement((volatile signed __int32 *)(v59 + 332));
                        if ( !v143 )
                          *(_QWORD *)(v59 + 408) = v75;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v59 + 336));
            }
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v59 + 360));
          goto LABEL_100;
        }
      }
      else
      {
        v50 = KeGetCurrentThread()->ApcState.Process;
        v51 = v50[1].Affinity.StaticBitmap[25];
        if ( v51 && (HIDWORD(v50[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          SessionId = *(_DWORD *)(v51 + 8);
          goto LABEL_63;
        }
      }
      SessionId = -1;
      goto LABEL_63;
    }
LABEL_202:
    v97 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v11 + 72));
    v98 = (void *)(*v43 & 0xFFFFFFFFFFFFFFF0uLL);
    v139 = v97;
    Object = v98;
    if ( v98 )
      ObfReferenceObjectWithTag(v98, 0x63536D4Du);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v150 + 72));
    if ( KiIrqlFlags && (v103 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v103 <= 0xFu )
    {
      v99 = v139;
      if ( v139 <= 0xFu && v103 >= 2u )
      {
        v104 = KeGetCurrentPrcb();
        v105 = v104->SchedulerAssist;
        v106 = ~(unsigned __int16)(-1LL << (v139 + 1));
        v107 = (v106 & v105[5]) == 0;
        v105[5] &= v106;
        if ( v107 )
          KiRemoveSystemWorkPriorityKick(v104);
      }
    }
    else
    {
      v99 = v139;
    }
    __writecr8(v99);
    goto LABEL_59;
  }
LABEL_6:
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL
    && v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v125 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
      if ( (v125 & 0x20) != 0 )
        v13 |= 0x20uLL;
      if ( (v125 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
  }
  v164 = v13;
  v14 = (struct _KTHREAD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v164) >> 12) & 0xFFFFFFFFFFLL)
                          - 0x220000000000LL);
  v159 = 0;
  CurrentThread = v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->SListFaultAddress, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v159);
    while ( (__int64)v14->SListFaultAddress < 0 );
  }
  v15 = 0x7FFFFFFFFFFFFFFFLL;
  v14->SListFaultAddress = (void *)((__int64)v14->SListFaultAddress ^ ((__int64)v14->SListFaultAddress ^ ((__int64)v14->SListFaultAddress + 1)) & 0x3FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64((volatile signed __int64 *)&v14->SListFaultAddress, 0x7FFFFFFFFFFFFFFFuLL);
  v16 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v126 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v126 )
    {
      v127 = *((_QWORD *)&v126->Flink + ((v7 >> 3) & 0x1FF));
      if ( (v127 & 0x20) != 0 )
        v16 |= 0x20uLL;
      if ( (v127 & 0x42) != 0 )
        v16 |= 0x42uLL;
    }
    v15 = 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (v16 & 0x400) == 0 )
    goto LABEL_14;
  v17 = v16;
  if ( qword_140C657C0 && (v16 & 0x10) == 0 )
    v17 = v16 & ~qword_140C657C0;
  if ( HIDWORD(v17) == 0xFFFFFFFF )
  {
    LODWORD(v144) = (v16 >> 5) & 0x1F;
  }
  else
  {
LABEL_14:
    v144 = (v8 >> 5) & 0x1F;
    v6 = 1;
    if ( (v16 & 8) != 0 )
    {
      v18 = 1;
      LODWORD(v144) = 1;
    }
    else
    {
      v18 = (v8 >> 5) & 0x1F;
    }
    if ( v169 && (v18 & 4) == 0 )
      v169 = 0LL;
  }
  if ( (MiFlags & 0x8000) == 0
    || BugCheckParameter2 < 0xFFFF800000000000uLL
    || BugCheckParameter2 >= 0xFFFFF68000000000uLL && BugCheckParameter2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v19 = v144;
    goto LABEL_19;
  }
  v19 = v144;
  if ( (v144 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v147);
    if ( _bittest((const signed __int32 *)&MiFlags, 0x10u)
      || (PagePrivilege & 1) != 0
      || *(__int64 *)(v147 + 40) >= 0
      || (*(_DWORD *)(v147 + 16) & 0x400LL) != 0 )
    {
      if ( (PagePrivilege & 1) == 0 )
      {
        if ( (PagePrivilege & 8) == 0 )
        {
LABEL_307:
          v19 = v144 & 0xFFFFFFFD;
          if ( (v144 & 0xFFFFFFFD) == 0 )
            v19 = 1;
          goto LABEL_309;
        }
        v19 = 1;
LABEL_314:
        v169 = 0LL;
LABEL_309:
        LODWORD(v144) = v19;
        v15 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
    }
    else if ( !(unsigned int)MiIsAddressInDriverView(BugCheckParameter2) )
    {
      goto LABEL_307;
    }
    v19 = 3;
    goto LABEL_314;
  }
LABEL_19:
  v20 = v19 & 0xFFFFFFE7;
  v21 = *(_BYTE *)(v147 + 34) >> 6;
  if ( v21 != 1 )
  {
    if ( v21 )
    {
      if ( v21 == 2 )
        v20 = (unsigned int)v20 | 0x18;
    }
    else
    {
      v20 = (unsigned int)v20 | 8;
    }
  }
  v22 = (v154 << 12) | MmProtectToPteMask[v20] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_321:
    v22 |= 0x100uLL;
    goto LABEL_28;
  }
  v23 = (__int64)(v7 << 25) >> 16;
  if ( v156 >= 0xFFFFF6FB40000000uLL && v156 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    v22 = v156 == 0xFFFFF6FB7DBEDF68uLL
        ? (v154 << 12) | MmProtectToPteMask[v20] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
        : (v154 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v20] & 0x7FF0000000000E7FLL | 0x21;
    if ( (unsigned int)MiUserPdeOrAbove(v156) )
      v22 |= 4uLL;
  }
  v24 = v22;
  v22 |= 4uLL;
  if ( v156 > 0xFFFFF6BFFFFFFF78uLL )
    v22 = v24;
  if ( v23 < 0xFFFF800000000000uLL )
  {
    v25 = HIBYTE(word_140C6697C);
    goto LABEL_27;
  }
  if ( (unsigned int)MiGetSystemRegionType(v23) != 1 && (v23 < 0xFFFFF68000000000uLL || v23 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v23 < qword_140C6A1D8 || v23 > qword_140C66CF0 )
      v25 = (unsigned __int8)word_140C6697C;
    else
      v25 = HIBYTE(word_140C6697C);
LABEL_27:
    if ( !v25 )
      goto LABEL_28;
    goto LABEL_321;
  }
LABEL_28:
  v26 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v26;
  if ( v169 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(v26, *a1, v15) )
    {
      if ( (v144 & 5) != 5 )
      {
        v26 |= 0x42uLL;
        TransitionPteValid = v26;
        if ( (!_bittest64((const signed __int64 *)(v147 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(v147 + 34) >> 4)) != 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset(v147 + 16);
          v80 = v147;
          if ( PagingFileOffset )
          {
            v129 = 0LL;
            v130 = MiLockPageInline(v147);
            v80 = v147;
            v131 = v130;
            v132 = *(_BYTE *)(v147 + 34);
            if ( (!_bittest64((const signed __int64 *)(v147 + 16), 0xAu) & (unsigned __int8)~(v132 >> 4)) != 0 )
            {
              if ( (v132 & 8) == 0 )
              {
                v133 = MiCapturePageFileInfoInline(v147 + 16, 1LL, 0LL);
                v80 = v147;
                v129 = v133;
              }
              *(_BYTE *)(v80 + 34) |= 0x10u;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v80 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v129 )
            {
              MiReleasePageFileInfo(v158, v129, 1);
              v80 = v147;
            }
            if ( KiIrqlFlags )
            {
              v134 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v134 <= 0xFu && (unsigned __int8)v131 <= 0xFu && v134 >= 2u )
              {
                v135 = KeGetCurrentPrcb();
                v136 = v135->SchedulerAssist;
                v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v131 + 1));
                v107 = (v137 & v136[5]) == 0;
                v136[5] &= v137;
                if ( v107 )
                  KiRemoveSystemWorkPriorityKick(v135);
              }
              v80 = v147;
            }
            __writecr8(v131);
            v26 = TransitionPteValid;
          }
        }
        else
        {
          v80 = v147;
        }
        if ( (v8 & 0x400) != 0 && (*(_BYTE *)(v162 + 184) & 7) != 2 )
          MiCheckAndUpdateIoAttribution(v80);
      }
    }
    else
    {
      v169 = 0LL;
    }
  }
  HasPrivateFixups = 0LL;
  v149 = 0;
  v28 = 0;
  v141 = 0;
  v29 = 0;
  if ( v170 )
  {
    v32 = v147;
    goto LABEL_41;
  }
  v154 = 0LL;
  if ( !_bittest64((const signed __int64 *)(v147 + 40), 0x28u) )
  {
    v30 = *(_QWORD *)(v147 + 8);
    if ( v30 >= 0 )
    {
      if ( v30 )
        goto LABEL_109;
    }
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    if ( !v150 || (*(_DWORD *)(v150 + 56) & 0x20) != 0 )
    {
      HasPrivateFixups = MiSystemImageHasPrivateFixups(BugCheckParameter2, &v154, &v149);
      if ( HasPrivateFixups )
      {
        LODWORD(v10) = v154;
        v31 = 1;
        LOBYTE(v6) = v6 | 2;
        goto LABEL_39;
      }
    }
LABEL_109:
    v31 = 0;
    goto LABEL_39;
  }
  if ( v10 )
  {
    if ( (*(_DWORD *)(v150 + 56) & 0x20) != 0 )
      v6 |= 4u;
  }
  else
  {
    v6 |= 4u;
    v79 = KeGetCurrentThread()->ApcState.Process;
    if ( v79[1].Affinity.StaticBitmap[12] && MiLocateCloneAddress(v79, *(_QWORD *)(v147 + 8) | 0x8000000000000000uLL) )
      v6 &= ~4u;
    v26 = TransitionPteValid;
  }
  if ( v6 < 4 )
    goto LABEL_109;
  v31 = 0;
  v158 = 0LL;
  if ( !*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 368) )
  {
LABEL_38:
    v26 = TransitionPteValid;
    goto LABEL_39;
  }
  MiLockVadTree(1LL);
  Address = MiLocateAddress(BugCheckParameter2);
  LOBYTE(v89) = 17;
  v154 = (unsigned __int64)Address;
  v90 = Address;
  MiUnlockVadTree(1LL, v89);
  if ( !v90
    || (v91 = *((_DWORD *)v90 + 12), (v91 & 0x70) != 0x20)
    || (v91 & 0x200000) != 0
    || (v91 & 0x400000) == 0
    || (v92 = *v90[9],
        v93 = (BugCheckParameter2 >> 12)
            + (((__int64)v90[10] - *(_QWORD *)(v92 + 136)) >> 3)
            - (*((unsigned int *)v90 + 6) | ((unsigned __int64)*((unsigned __int8 *)v90 + 32) << 32)),
        ((*(char *)(((unsigned __int64)(unsigned int)v93 >> 3) + *(_QWORD *)(v154 + 160)) >> (v93 & 7)) & 1) == 0) )
  {
    v31 = 0;
    goto LABEL_38;
  }
  LODWORD(v10) = MiOffsetToProtos(v92, v93 << 12, &v158);
  v149 = v93;
  LOBYTE(v6) = v6 | 2;
  v26 = TransitionPteValid;
  HasPrivateFixups = *(_QWORD *)(v154 + 144);
  v31 = *(_DWORD *)(v154 + 136);
LABEL_39:
  v32 = v147;
  if ( (v6 & 2) == 0 )
  {
    v28 = 0;
LABEL_41:
    v33 = (unsigned __int64 *)v156;
    goto LABEL_42;
  }
  v29 = MiPrivateFixup((_DWORD)a1, v10, v149, v147, HasPrivateFixups, v31);
  MiLockAndDecrementShareCount(v147, 0);
  if ( v29 == 297 || v29 == -1073741670 )
  {
    MiLockAndDecrementShareCount((__int64)CurrentThread, 0);
    if ( v29 == 297 )
      return (unsigned int)-1073740748;
    return v29;
  }
  if ( (v29 & 0x80000000) != 0 )
    return v29;
  v33 = (unsigned __int64 *)v156;
  TransitionPteValid = MiMakeTransitionPteValid(v156);
  v26 = TransitionPteValid;
  v32 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPteValid) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v147 = v32;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v32 + 35) & 8) != 0 )
  {
    v28 = 2;
    v141 = 2;
  }
  else
  {
    v28 = 0;
  }
  LODWORD(v144) = 0;
  LOBYTE(v6) = v6 & 0xFE;
LABEL_42:
  v34 = 0;
  if ( (v6 & 1) == 0 )
    v34 = v144;
  v35 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v36 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v36 == 5 )
      goto LABEL_47;
  }
  else
  {
    v36 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  v37 = v36;
  v36 = 0LL;
  if ( v35 && *v37 == 3 )
  {
    v28 |= 1u;
    v141 = v28;
  }
LABEL_47:
  if ( v169 && (v26 & 0x800) == 0 && (v26 & 0x200) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[10] )
    {
      v26 = TransitionPteValid;
    }
    else
    {
      if ( v36 || (MiFlags & 0x2000000) != 0 || (byte_140C6570F & 1) == 0 )
      {
        v26 = TransitionPteValid;
      }
      else
      {
        v26 = TransitionPteValid & 0xFFFFFFFFFFFFFFDFuLL;
        LOBYTE(v6) = v6 | 0x10;
      }
      LOBYTE(v6) = v6 | 8;
    }
  }
  v38 = v157;
  v39 = *((unsigned __int8 *)v157 + 13);
  if ( (v39 & 8) != 0 )
  {
    v84 = a1[2];
    if ( (v84 & 1) == 0 || *(_BYTE *)(v84 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v26 &= ~0x20uLL;
  }
  if ( (v39 & 5) != 4 || (v39 & 2) != 0 )
    goto LABEL_50;
  v81 = *((unsigned __int16 *)v157 + 5);
  if ( (_WORD)v81 )
  {
    if ( v81 + *((unsigned __int16 *)v157 + 4) == (((unsigned int)v33 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(v32 + 40) >= 0 )
      {
        if ( (v39 & 0x10) != 0 )
          goto LABEL_138;
      }
      else if ( (v39 & 0x10) == 0 )
      {
        goto LABEL_138;
      }
    }
    MiEmptyDeferredWorkingSetEntries(v157, v39, 511LL);
    v38 = v157;
  }
LABEL_138:
  v82 = *((_WORD *)v38 + 5);
  if ( v82 )
  {
    *((_WORD *)v38 + 5) = v82 + 1;
LABEL_140:
    v28 = v141 | 4;
    v141 |= 4u;
    goto LABEL_50;
  }
  *((_WORD *)v38 + 5) = 1;
  *((_WORD *)v38 + 4) = ((unsigned int)v33 >> 3) & 0x1FF;
  if ( *(__int64 *)(v147 + 40) >= 0 )
  {
    *((_BYTE *)v38 + 13) |= 0x10u;
    goto LABEL_140;
  }
  *((_BYTE *)v38 + 13) &= ~0x10u;
  v28 = v141 | 4;
  v141 |= 4u;
LABEL_50:
  if ( !(unsigned int)MiAllocateWsle(v162, v33, (_QWORD *)v147, v34, v26, v28, (__int64)v36) )
  {
    if ( (v141 & 4) != 0 )
      --*((_WORD *)v157 + 5);
    MiLockAndDecrementShareCount(v147, 0);
    if ( (v6 & 2) == 0 )
      MiLockAndDecrementShareCount((__int64)CurrentThread, 0);
    return (unsigned int)-1073741801;
  }
  if ( (v6 & 8) == 0 )
    return v29;
  if ( v157[2] && (*((_BYTE *)v157 + 13) & 1) == 0 )
  {
    if ( *((_WORD *)v157 + 5) )
      MiEmptyDeferredWorkingSetEntries(v157, v40, v41);
  }
  v86 = MiCopyOnWrite(BugCheckParameter2);
  v29 = v86;
  if ( v86 >= 0 )
    return v29;
  MiSetFaultPacketDirectives(a1, (unsigned int)v86);
  return 3221226548LL;
}
