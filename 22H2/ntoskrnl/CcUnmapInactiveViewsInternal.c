/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x1404EB484
 * Callers:
 *     CcUnmapInactiveViews @ 0x1404EB320 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x14029027C (CcSetVacbInFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402913A4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140291424 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReferenceVacbArray @ 0x140293434 (CcReferenceVacbArray.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     SetVacb @ 0x140294000 (SetVacb.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     CcGetVacbLargeOffset @ 0x140305C88 (CcGetVacbLargeOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1404EAF40 (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x1404EAFE0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB088 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1404EB128 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcUnmapVacb @ 0x140637A98 (CcUnmapVacb.c)
 *     RtlRandom @ 0x14069FF60 (RtlRandom.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r13d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  ULONG v15; // eax
  bool CanReuseVacb; // al
  bool v17; // dl
  __int64 v18; // r9
  __int64 v19; // rsi
  bool v20; // al
  __int64 v21; // r9
  KIRQL v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  _QWORD *v26; // rcx
  __int64 Partition; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned int v31; // r12d
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // r15d
  unsigned int v40; // ecx
  KIRQL v41; // bl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  bool v47; // zf
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  __int64 v52; // r14
  int v53; // esi
  __int64 v54; // rbx
  bool v56; // [rsp+28h] [rbp-49h]
  unsigned int v57; // [rsp+2Ch] [rbp-45h]
  int v58; // [rsp+30h] [rbp-41h]
  unsigned int v59; // [rsp+34h] [rbp-3Dh]
  int v60; // [rsp+38h] [rbp-39h]
  int v61; // [rsp+3Ch] [rbp-35h]
  int v62; // [rsp+40h] [rbp-31h]
  __int64 v63; // [rsp+48h] [rbp-29h]
  unsigned int v64; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v65; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v68; // [rsp+E0h] [rbp+6Fh]
  int v69; // [rsp+E8h] [rbp+77h]

  v68 = a2;
  v58 = -1;
  v59 = 0;
  v64 = 0;
  v62 = 0;
  v61 = 0;
  v4 = 0;
  v60 = 0;
  RandomVacbArrayWithReference = 0LL;
  v63 = 0LL;
  v6 = 0;
  v57 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v65, 0, sizeof(v65));
  if ( a4 )
  {
    *a4 = 0LL;
    v61 = 1;
  }
  v69 = a3 & 1;
  v9 = !(a3 & 1);
  v56 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v58;
LABEL_19:
        if ( v9 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v13;
            v15 = RtlRandom(&CcRandomSeed);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * (v15 % (RandomVacbArrayWithReference[2] + 1))
                                                                  + 4
                                                                  + 2 * (v15 % (RandomVacbArrayWithReference[2] + 1))],
                             0LL);
            v13 = v14 + 1;
            if ( CanReuseVacb )
              v13 = v14;
            v19 = v18 & -(__int64)CanReuseVacb;
            if ( v19 )
              break;
            if ( v13 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = v17;
              v56 = v17;
              goto LABEL_72;
            }
          }
        }
        else
        {
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v58 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_72;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            v20 = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
          }
          while ( !v20 && (_DWORD)v10 );
          v58 = v10;
          v19 = v21 & -(__int64)v20;
          if ( !v19 )
          {
            v9 = v56;
LABEL_72:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_73;
          }
        }
        v22 = KeAcquireQueuedSpinLock(4uLL);
        if ( CcCanReuseVacb(v19, v7) )
        {
          v26 = *(_QWORD **)(v19 + 8);
          memset(&LockHandle, 0, sizeof(LockHandle));
          Partition = CcGetPartition(v26, v23, v24, v25);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
          v28 = *(_QWORD *)(v19 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v28 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_70;
          }
          ++*(_DWORD *)(v28 + 4);
          ++*(_DWORD *)(v28 + 536);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v29 = *(_QWORD *)(v19 + 16);
          v30 = *(_QWORD *)(v19 + 8);
          v31 = *(_DWORD *)(v30 + 152);
          KeReleaseQueuedSpinLock(4uLL, v22);
          v32 = (v31 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
          v36 = CcGetPartition((_QWORD *)v30, v33, v34, v35);
          if ( a1 == v36 && v29 >= 0 )
          {
            v37 = *(_QWORD *)(v30 + 32);
            if ( v29 < v37 )
            {
              v38 = v37 <= 0x2000000
                  ? *(_QWORD *)(*(_QWORD *)(v30 + 88) + 8 * ((unsigned __int64)(unsigned int)v29 >> 18))
                  : CcGetVacbLargeOffset(v30, v29);
              if ( v38 && !*(_WORD *)(v38 + 16) )
              {
                SetVacb(v30, v29, 0LL, 0LL);
                if ( *(_DWORD *)(v36 + 920) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v39 = 0;
                  if ( !v61 )
                  {
                    v40 = v60 & 0xFFFFFFFD;
                    v60 &= ~2u;
                    if ( !v63 && v69 )
                      v63 = *(_QWORD *)v38;
                    goto LABEL_45;
                  }
                }
                else
                {
                  v39 = 1;
                }
                v40 = v60 | 2;
                v63 = 0LL;
                v60 |= 2u;
LABEL_45:
                CcUnmapVacb(v38, v30, v40);
                CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
                v4 = v59;
                if ( !v39 )
                {
                  v4 = v59 + 1;
                  v64 = 1;
                  ++v59;
                  if ( v61 )
                  {
                    v61 = 0;
                    *a4 = *(_QWORD *)v38;
                    *(_QWORD *)v38 = 0LL;
                  }
                }
                v41 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(v38 + 8) = 0LL;
                CcSetVacbInFreeList(v36, (_QWORD *)v38, v39);
                KeReleaseQueuedSpinLock(4uLL, v41);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 128), &v65);
                CcDecrementOpenCount(v30);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v65);
                OldIrql = v65.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && v65.OldIrql <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v46 = ~(unsigned __int16)(-1LL << (v65.OldIrql + 1));
                      v47 = (v46 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v46;
                      if ( v47 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                v7 = v63;
                goto LABEL_68;
              }
            }
          }
          CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 128), &v65);
          CcDecrementOpenCount(v30);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v65);
          OldIrql = v65.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v48 = KeGetCurrentIrql();
              if ( v48 <= 0xFu && v65.OldIrql <= 0xFu && v48 >= 2u )
              {
                v49 = KeGetCurrentPrcb();
                v50 = v49->SchedulerAssist;
                v51 = ~(unsigned __int16)(-1LL << (v65.OldIrql + 1));
                v47 = (v51 & v50[5]) == 0;
                v50[5] &= v51;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick((__int64)v49);
              }
            }
          }
          v4 = v59;
LABEL_68:
          v9 = v56;
          __writecr8(OldIrql);
          v8 = v57;
          a2 = v68;
          v6 = v62;
        }
        else
        {
LABEL_70:
          v63 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v22);
          a2 = v68;
          v9 = v56;
          v8 = v57;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v58 = -1;
        if ( v9 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
          if ( RandomVacbArrayWithReference[1] == 1 )
            goto LABEL_72;
          goto LABEL_19;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          RandomVacbArrayWithReference = CcReferenceVacbArray(v11);
          if ( RandomVacbArrayWithReference )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark((__int64)RandomVacbArrayWithReference);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v56;
        v57 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_73:
        a2 = v68;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v68;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v52 = (a2 - v4) << 18;
    v53 = 0;
    v62 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v54 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v53 |= (*(__int64 (__fastcall **)(__int64))(v54 + 16))(v52);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v54 = *(_QWORD *)v54;
      }
      while ( (__int64 *)v54 != &CcBcbTrimNotificationList );
      v7 = v63;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v8 = v57;
    a2 = v68;
    v47 = v53 == 0;
    v9 = v56;
  }
  while ( !v47 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v64;
}
