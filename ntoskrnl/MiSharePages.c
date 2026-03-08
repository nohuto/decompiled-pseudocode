/*
 * XREFs of MiSharePages @ 0x140228990
 * Callers:
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14020CC48 (KeForceDetachProcess.c)
 *     MiMakeCombineCandidateClean @ 0x140210FE0 (MiMakeCombineCandidateClean.c)
 *     MiConfirmPageIsZero @ 0x140213880 (MiConfirmPageIsZero.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiVadSupportsCombine @ 0x1402285E0 (MiVadSupportsCombine.c)
 *     MiFlushTbListEarly @ 0x140229404 (MiFlushTbListEarly.c)
 *     MiRelinkDeferredCrcEntries @ 0x140229494 (MiRelinkDeferredCrcEntries.c)
 *     MiProcessSuitableForCombining @ 0x140229534 (MiProcessSuitableForCombining.c)
 *     MiReplenishCombineResources @ 0x1402295AC (MiReplenishCombineResources.c)
 *     MiActivePageCombineCandidate @ 0x1402296F4 (MiActivePageCombineCandidate.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiAttachThreadDone @ 0x14029C9D4 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x14029CA64 (MiPrepareAttachThread.c)
 *     MiFreeCombineBlock @ 0x14029DDE0 (MiFreeCombineBlock.c)
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 *     MiAllocateCombineBlock @ 0x1402A14C4 (MiAllocateCombineBlock.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiCheckProcessCombineSequence @ 0x1402E0F04 (MiCheckProcessCombineSequence.c)
 *     KeForceAttachProcess @ 0x1402E6610 (KeForceAttachProcess.c)
 *     MiGetCombineDomain @ 0x1402E8D88 (MiGetCombineDomain.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiPageMightBeZero @ 0x14032BE90 (MiPageMightBeZero.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     MiConvertPrivateToProto @ 0x14034A20C (MiConvertPrivateToProto.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiSharePages(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _BYTE *v9; // r13
  _QWORD *v10; // r12
  int v11; // r15d
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  _KPROCESS *v14; // rsi
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int8 v20; // r9
  char v21; // si
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  unsigned __int64 valid; // rax
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // r14
  int v30; // eax
  int v31; // r12d
  int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // si
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  int v40; // eax
  _QWORD *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *result; // rax
  __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // r15
  BOOL IsZero; // eax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  bool v54; // zf
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  char v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+21h] [rbp-DFh]
  _QWORD *v61; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v62; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+38h] [rbp-C8h]
  _BYTE *Pool; // [rsp+40h] [rbp-C0h]
  __int64 v65; // [rsp+48h] [rbp-B8h]
  unsigned int v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+54h] [rbp-ACh]
  int v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  _QWORD *v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  int v75; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v76; // [rsp+94h] [rbp-6Ch]
  int v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v85[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v86[24]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE P[192]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v88[10]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v89; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v90; // [rsp+318h] [rbp+218h] BYREF

  v78 = 0LL;
  v83 = 0LL;
  memset(v85, 0, sizeof(v85));
  memset(v86, 0, 0xB8uLL);
  memset(P, 0, 0xB8uLL);
  v6 = a2[4];
  v79 = *a1;
  v76 = *((_DWORD *)a1 + 35);
  v73 = (_QWORD *)a1[13];
  v66 = 0;
  v74 = 0LL;
  v65 = v6;
  v67 = MiTbFlushType(v6);
  MiInitializePageColorBase(v7, (unsigned int)(a3 + 1), a1 + 40);
  v8 = a2[3];
  v9 = P;
  v10 = (_QWORD *)a2[6];
  v11 = 0;
  v69 = (__int64)v10;
  v71 = 0;
  Pool = P;
  if ( v8 > 0x14 )
  {
    v12 = 509LL;
    if ( v8 < 0x1FD )
      v12 = a2[3];
    Pool = (_BYTE *)MiAllocatePool(64LL, 8 * v12 + 24, 1935109453LL);
    v9 = Pool;
    if ( !Pool )
    {
      v9 = P;
      LODWORD(v12) = 20;
      Pool = P;
    }
  }
  else
  {
    LODWORD(v12) = a2[3];
  }
  *((_DWORD *)v9 + 2) = v12;
  v13 = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_DWORD *)v9 + 3) = 0;
  *(_DWORD *)v9 = v67;
  *((_WORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 2) = 0LL;
  v14 = (_KPROCESS *)a2[5];
  BugCheckParameter1 = (ULONG_PTR)v14;
  if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    v71 = MiPrepareAttachThread(v14, &v14[1].ActiveProcessors.StaticBitmap[26]);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v54 = (v53 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v53;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !v71 )
      goto LABEL_58;
    v14 = (_KPROCESS *)BugCheckParameter1;
    KeForceAttachProcess(BugCheckParameter1);
    v13 = 0LL;
  }
  a1[39] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 2 )
  {
    v16 = a1[39];
    v88[0] = 0LL;
    v88[5] = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    if ( v16 > 1 )
    {
      if ( (unsigned int)MiReplenishSlabAllocator(v16, 16LL) )
        a1[39] = 0LL;
      else
        a1[39] = 1LL;
    }
    if ( !a1[37] )
      a1[37] = MiAllocateCombineBlock(v79);
    v59 = 0;
    v63 = 0LL;
    v60 = 0;
    v17 = MiLockWorkingSetShared(v65);
    v20 = v17;
    v62 = v17;
    if ( !a1[37] || v14 && !(unsigned int)MiProcessSuitableForCombining(v14, v18, v19, v17) )
    {
      MiUnlockWorkingSetShared(v65, v20);
      break;
    }
    while ( 1 )
    {
      v21 = 0;
      if ( v59 )
      {
        v59 = 0;
        v11 = 0;
      }
      else
      {
        ++v11;
      }
      v68 = v11;
      if ( !a1[37] || (unsigned __int64)a1[39] > 1 )
        goto LABEL_66;
      if ( v60 )
      {
        v60 = 0;
LABEL_66:
        v21 = 1;
        goto LABEL_24;
      }
      if ( (v11 & 7) == 0
        && ((unsigned int)MiWorkingSetIsContended(v65) || v13 && (unsigned int)MiPageTableLockIsContended(v19, v13))
        || KeShouldYieldProcessor()
        || (unsigned int)MiFlushTbListEarly(v9, 2LL) )
      {
        goto LABEL_66;
      }
LABEL_24:
      if ( !v10 )
        break;
      if ( v21 )
        goto LABEL_52;
      v19 = 0x7FFFFFFFF8LL;
      v61 = (_QWORD *)*v10;
      v22 = v10[2] & 0xFFFFFFFFFFFFFFFEuLL;
      v80 = v10[1];
      v72 = v22;
      v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v13 == v24 )
        goto LABEL_29;
      if ( v13 )
      {
        v11 = v68;
        v69 = (__int64)v10;
        v60 = 1;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v65, v23, &v83);
        v63 = valid;
        v13 = valid;
        if ( valid == v24 )
        {
LABEL_29:
          v26 = MiReplenishCombineResources(a1);
          if ( v26 < 0 )
          {
            if ( v26 != -1073741267 )
              goto LABEL_71;
            v11 = v68;
            v69 = (__int64)v10;
          }
          else
          {
            v27 = MI_READ_PTE_LOCK_FREE(v23);
            v78 = v27;
            if ( (v27 & 1) != 0 )
            {
              v28 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v78) >> 12) & 0xFFFFFFFFFFLL;
              if ( v28 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL), 0x36u) )
              {
                v29 = 48 * v28 - 0x220000000000LL;
                v75 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v75);
                  while ( *(__int64 *)(v29 + 24) < 0 );
                }
                goto LABEL_34;
              }
LABEL_71:
              v11 = v68;
              v10 = v61;
              v69 = (__int64)v61;
            }
            else
            {
              if ( (v27 & 0x400) != 0 || (v27 & 0x800) == 0 )
                goto LABEL_71;
              v29 = MiLockTransitionLeafPageEx(v23);
              if ( !v29 )
                goto LABEL_70;
              v28 = 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4);
LABEL_34:
              v30 = MiCombineCandidate(v79, v76, v29);
              v31 = v30;
              if ( !v30 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_70;
              }
              *((_DWORD *)a1 + 38) = v30;
              a1[18] = v28;
              v32 = (*(_DWORD *)(v29 + 16) >> 5) & 0x1F;
              *(_DWORD *)(v69 + 32) = v32;
              v81 = *(_QWORD *)(v69 + 24);
              if ( *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4)) + 8) != a3 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_93;
              }
              v35 = *(_BYTE *)(v29 + 34) & 7;
              if ( v35 != 6 )
              {
                v39 = v81;
                goto LABEL_48;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !(unsigned int)MiActivePageCombineCandidate(v34, v33, v29, v23) )
                goto LABEL_93;
              v37 = 0LL;
              if ( v31 == 1 )
              {
                v37 = MiVadSupportsCombine(v36, v72);
                if ( !v37 )
                  goto LABEL_93;
              }
              if ( (v78 & 0x42) != 0 )
              {
                if ( v66 < 8 )
                {
                  v45 = &v89;
                  goto LABEL_69;
                }
                MiMakeCombineCandidateClean(v23, v37);
                WORD2(v86[0]) = 0;
                v86[2] = 0LL;
                v86[3] = 0LL;
                v86[1] = 1LL;
                LODWORD(v86[0]) = v67;
                MiInsertTbFlushEntry(v86, v72, 1LL);
                MiFlushTbList(v86);
                v38 = v80;
              }
              else
              {
                v38 = v80;
                if ( v80 != qword_140C693A8 )
                  goto LABEL_42;
                if ( (v32 & 0x18) == 0 && (v78 & 0x20) != 0 && v66 < 3 )
                {
                  v45 = &v90;
LABEL_69:
                  v9 = Pool;
                  MiInsertTbFlushEntry(Pool, v72, 1LL);
                  v46 = *v45;
                  *v45 = v69;
                  *(_QWORD *)v69 = v46;
                  goto LABEL_70;
                }
              }
              if ( v38 == qword_140C693A8 && (unsigned int)MiPageMightBeZero(v65, v29, v23) )
              {
                v77 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v77);
                  while ( *(__int64 *)(v29 + 24) < 0 );
                }
                IsZero = MiConfirmPageIsZero(v29);
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( IsZero )
                {
                  v86[2] = 0LL;
                  v86[3] = 0LL;
                  v86[1] = 1LL;
                  LODWORD(v86[0]) = v67;
                  WORD2(v86[0]) = 4;
                  MiInsertTbFlushEntry(v86, v72, 1LL);
                  MiFreeWsleList(v65, v86, 0LL);
                  ++v74;
                  ++v73[1];
                  goto LABEL_93;
                }
              }
LABEL_42:
              v39 = v81;
              if ( v81 != qword_140C66ED0
                && v31 == 1
                && (v81 != *(_QWORD *)(v65 + 864)
                 || (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x1000) != 0
                 || !(unsigned int)MiCheckProcessCombineSequence(BugCheckParameter1, *((unsigned int *)a1 + 72))) )
              {
                goto LABEL_93;
              }
              if ( (v32 & 0x18) != 0 )
              {
                v59 = 1;
                a1[12] = MiGetUltraMapping(a1 + 32, 3LL, 2LL);
                goto LABEL_49;
              }
LABEL_48:
              a1[12] = MiGetUltraMapping(a1 + 32, 3LL, 2LL);
              if ( v35 != 6 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v39 != qword_140C66ED0
                  && v31 == 1
                  && (v39 != MiGetCombineDomain(1LL, v65)
                   || (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x1000) != 0
                   || !(unsigned int)MiCheckProcessCombineSequence(BugCheckParameter1, *((unsigned int *)a1 + 72))) )
                {
                  a1[12] = 0LL;
LABEL_93:
                  v9 = Pool;
LABEL_70:
                  v13 = v63;
                  goto LABEL_71;
                }
                if ( (v32 & 0x18) != 0 )
                  v59 = 1;
                v40 = MiConvertStandbyToProto(a1, v69);
                v9 = Pool;
                goto LABEL_80;
              }
LABEL_49:
              v9 = Pool;
              v40 = MiConvertPrivateToProto(a1, v69, Pool);
              if ( v40 >= 0 )
              {
                *(_QWORD *)v69 = v88[0];
                a1[12] = 0LL;
                v88[0] = v69;
                goto LABEL_81;
              }
LABEL_80:
              a1[12] = 0LL;
              if ( v40 < 0 )
                goto LABEL_70;
LABEL_81:
              v13 = v63;
              ++v73[1];
              if ( !BugCheckParameter1 )
                goto LABEL_71;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
              v11 = v68;
              v10 = v61;
              v69 = (__int64)v61;
            }
          }
        }
        else
        {
          MiUnlockPageTableInternal(v65, valid);
          v13 = 0LL;
          v11 = v68;
          v10 = v61;
          v63 = 0LL;
          v69 = (__int64)v61;
        }
      }
    }
    ++v66;
LABEL_52:
    v69 = MiRelinkDeferredCrcEntries(a1, v88, v19, v10);
    v10 = (_QWORD *)v69;
    MiFlushTbList(v9);
    if ( v13 )
      MiUnlockPageTableInternal(v65, v13);
    MiUnlockWorkingSetShared(v65, v62);
    v41 = (_QWORD *)v88[0];
    if ( v88[0] )
    {
      do
      {
        v47 = v41[2];
        v48 = (unsigned __int8)MiLockPageInline(v47);
        *(_BYTE *)(v47 + 34) = *(_BYTE *)(v47 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v47);
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v55 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
            v54 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        __writecr8(v48);
        v41 = (_QWORD *)*v41;
      }
      while ( v41 );
      v11 = v68;
      v9 = Pool;
    }
    if ( v69 )
    {
      v14 = (_KPROCESS *)BugCheckParameter1;
      v13 = 0LL;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( v71 )
  {
    KeForceDetachProcess(v85, 0);
    MiAttachThreadDone(BugCheckParameter1 + 1664);
  }
LABEL_58:
  if ( v9 != P )
    ExFreePoolWithTag(v9, 0);
  v42 = a1[38];
  if ( v42 )
  {
    MiReleaseFreshPage(v42);
    a1[38] = 0LL;
  }
  v43 = a1[37];
  if ( v43 )
  {
    *(_QWORD *)(v43 + 24) = 0LL;
    MiFreeCombineBlock(a1[37]);
    a1[37] = 0LL;
  }
  result = v73;
  *v73 += v74;
  return result;
}
