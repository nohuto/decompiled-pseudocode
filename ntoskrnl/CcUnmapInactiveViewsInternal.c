/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x140535FC0
 * Callers:
 *     CcUnmapInactiveViews @ 0x140535E58 (CcUnmapInactiveViews.c)
 * Callees:
 *     SetVacb @ 0x14021804C (SetVacb.c)
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     CcGetVacbLargeOffset @ 0x14021BBE0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x14021BC58 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14021BCF0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14021BD30 (CcAcquireBcbLockAndVacbLock.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     CcReferenceVacbArray @ 0x140335D48 (CcReferenceVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x140535A7C (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x140535B1C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140535BC4 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x140535C64 (CcRecalculateVacbArrayHighwaterMark.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 *     RtlRandom @ 0x140797410 (RtlRandom.c)
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
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rsi
  bool CanReuseVacb; // al
  __int64 v17; // r9
  KIRQL v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned int v23; // r12d
  int v24; // r12d
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 VacbLargeOffset; // r14
  int v28; // r15d
  unsigned int v29; // ecx
  KIRQL v30; // bl
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int64 v47; // r14
  int v48; // esi
  __int64 v49; // rbx
  bool v51; // [rsp+28h] [rbp-49h]
  unsigned int v52; // [rsp+2Ch] [rbp-45h]
  unsigned int v53; // [rsp+30h] [rbp-41h]
  int v54; // [rsp+34h] [rbp-3Dh]
  unsigned int v55; // [rsp+38h] [rbp-39h]
  int v56; // [rsp+3Ch] [rbp-35h]
  int v57; // [rsp+40h] [rbp-31h]
  int v58; // [rsp+44h] [rbp-2Dh]
  __int64 v59; // [rsp+48h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v60; // [rsp+50h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v63; // [rsp+E0h] [rbp+6Fh]
  int v64; // [rsp+E8h] [rbp+77h]

  v63 = a2;
  v54 = -1;
  v52 = 0;
  v55 = 0;
  v58 = 0;
  v57 = 0;
  v4 = 0;
  v56 = 0;
  RandomVacbArrayWithReference = 0LL;
  v59 = 0LL;
  v6 = 0;
  v53 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v60, 0, sizeof(v60));
  if ( a4 )
  {
    *a4 = 0LL;
    v57 = 1;
  }
  v64 = a3 & 1;
  v9 = !(a3 & 1);
  v51 = v9;
  do
  {
LABEL_4:
    if ( v4 < a2 )
    {
      while ( v8 <= CcVacbArraysHighestUsedIndex )
      {
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = v54;
          goto LABEL_19;
        }
        LODWORD(v10) = -1;
        v54 = -1;
        if ( v9 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
          if ( RandomVacbArrayWithReference[1] == 1 )
          {
LABEL_73:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            a2 = v63;
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_4;
          }
LABEL_19:
          if ( v9 )
          {
            v13 = 0;
            do
            {
              v14 = RtlRandom(&CcRandomSeed);
              v15 = (__int64)&RandomVacbArrayWithReference[8 * (v14 % (RandomVacbArrayWithReference[2] + 1))
                                                         + 4
                                                         + 2 * (v14 % (RandomVacbArrayWithReference[2] + 1))];
              if ( CcCanReuseVacb(v15, 0LL) )
              {
                if ( v15 )
                  goto LABEL_32;
              }
              else
              {
                ++v13;
              }
            }
            while ( v13 <= 0x10 );
            ++CcDbgRandomFailed;
            v9 = 0;
            v51 = 0;
            goto LABEL_73;
          }
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v54 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_73;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10],
                             v7);
          }
          while ( !CanReuseVacb && (_DWORD)v10 );
          v54 = v10;
          v15 = v17 & -(__int64)CanReuseVacb;
          if ( !v15 )
          {
            v9 = v51;
            goto LABEL_73;
          }
LABEL_32:
          v18 = KeAcquireQueuedSpinLock(4uLL);
          if ( CcCanReuseVacb(v15, v7) )
          {
            v19 = *(_QWORD *)(v15 + 8);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v19 + 536) + 768LL), &LockHandle);
            v20 = *(_QWORD *)(v15 + 8);
            if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v20 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v20 )
            {
              ++*(_DWORD *)(v20 + 4);
              ++*(_DWORD *)(v20 + 544);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v21 = *(_QWORD *)(v15 + 16);
              v22 = *(_QWORD *)(v15 + 8);
              v23 = *(_DWORD *)(v22 + 152);
              KeReleaseQueuedSpinLock(4uLL, v18);
              v24 = (v23 >> 9) & 1;
              CcAcquireBcbLockAndVacbLock(v24, v22);
              v25 = *(_QWORD *)(v22 + 536);
              if ( a1 == v25
                && v21 >= 0
                && (v26 = *(_QWORD *)(v22 + 32), v21 < v26)
                && (v26 <= 0x2000000
                  ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v22 + 88)
                                                 + 8 * ((unsigned __int64)(unsigned int)v21 >> 18)))
                  : (VacbLargeOffset = CcGetVacbLargeOffset(v22, v21)),
                    VacbLargeOffset && !*(_WORD *)(VacbLargeOffset + 16)) )
              {
                SetVacb(v22, v21, 0LL);
                if ( *(_DWORD *)(v25 + 1248) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v28 = 1;
                  goto LABEL_44;
                }
                v28 = 0;
                if ( v57 )
                {
LABEL_44:
                  v29 = v56 | 2;
                  v59 = 0LL;
                  v56 |= 2u;
                }
                else
                {
                  v29 = v56 & 0xFFFFFFFD;
                  v56 &= ~2u;
                  if ( !v59 && v64 )
                    v59 = *(_QWORD *)VacbLargeOffset;
                }
                CcUnmapVacb(VacbLargeOffset, v22, v29);
                CcReleaseBcbLockAndVacbLock(v24, v22);
                v4 = v52;
                if ( v28 )
                {
LABEL_52:
                  v52 = v4;
                }
                else
                {
                  v4 = v52 + 1;
                  v55 = 1;
                  ++v52;
                  if ( v57 )
                  {
                    v57 = 0;
                    v55 = 1;
                    *a4 = *(_QWORD *)VacbLargeOffset;
                    *(_QWORD *)VacbLargeOffset = 0LL;
                    goto LABEL_52;
                  }
                }
                v30 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
                CcSetVacbInFreeList(v25, (_QWORD *)VacbLargeOffset, v28);
                KeReleaseQueuedSpinLock(4uLL, v30);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 768), &v60);
                CcDecrementOpenCount(v22, v31, v32, v33);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&v60);
                OldIrql = v60.OldIrql;
                if ( KiIrqlFlags )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v60.OldIrql <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v38 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
                    v39 = (v38 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v38;
                    if ( v39 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                v7 = v59;
              }
              else
              {
                CcReleaseBcbLockAndVacbLock(v24, v22);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 768), &v60);
                CcDecrementOpenCount(v22, v40, v41, v42);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&v60);
                OldIrql = v60.OldIrql;
                if ( KiIrqlFlags )
                {
                  v43 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v60.OldIrql <= 0xFu && v43 >= 2u )
                  {
                    v44 = KeGetCurrentPrcb();
                    v45 = v44->SchedulerAssist;
                    v46 = ~(unsigned __int16)(-1LL << (v60.OldIrql + 1));
                    v39 = (v46 & v45[5]) == 0;
                    v45[5] &= v46;
                    if ( v39 )
                      KiRemoveSystemWorkPriorityKick(v44);
                  }
                }
                v4 = v52;
              }
              __writecr8(OldIrql);
              v9 = v51;
              v8 = v53;
              a2 = v63;
              v6 = v58;
              goto LABEL_4;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          }
          v59 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v18);
          a2 = v63;
          v9 = v51;
          v8 = v53;
          goto LABEL_4;
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
        v9 = v51;
        v53 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
      }
      a2 = v63;
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v63;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v47 = (a2 - v4) << 18;
    v48 = 0;
    v58 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v49 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        ExReleaseFastMutex(&CcBcbTrimNotificationListLock);
        v48 |= (*(__int64 (__fastcall **)(__int64))(v49 + 16))(v47);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v49 = *(_QWORD *)v49;
      }
      while ( (__int64 *)v49 != &CcBcbTrimNotificationList );
      v7 = v59;
    }
    ExReleaseFastMutex(&CcBcbTrimNotificationListLock);
    v8 = v53;
    a2 = v63;
    v39 = v48 == 0;
    v9 = v51;
  }
  while ( !v39 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v55;
}
