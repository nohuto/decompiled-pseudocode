/*
 * XREFs of MiTrimSection @ 0x1402A0034
 * Callers:
 *     MmTrimSection @ 0x14029FF98 (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1403A0EBC (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1402A0CE4 (MiUnlockControlAreaFileObjectShared.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402A0D4C (MiLockControlAreaFileObjectShared.c)
 *     MiViewMayContainPage @ 0x1402A12A0 (MiViewMayContainPage.c)
 *     MiAnyProtosAreMapped @ 0x1402A35A0 (MiAnyProtosAreMapped.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MiReferenceSubsection @ 0x1403327C0 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsection @ 0x1403A118C (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, __int64 a2, int a3, int a4)
{
  int MayContainPage; // ebp
  _QWORD *v5; // r12
  unsigned __int64 v6; // rcx
  ULONG_PTR v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rcx
  _QWORD *v13; // r13
  KIRQL v14; // al
  volatile LONG *v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r13d
  _QWORD *i; // rdi
  _QWORD *v20; // rdi
  unsigned int v21; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  _QWORD *v39; // [rsp+40h] [rbp-88h]
  _QWORD *v40; // [rsp+48h] [rbp-80h] BYREF
  __int64 v41; // [rsp+50h] [rbp-78h]
  unsigned __int64 v42; // [rsp+58h] [rbp-70h]
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  _QWORD *v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  int v49; // [rsp+E8h] [rbp+20h]

  MayContainPage = 0;
  v5 = a1;
  v6 = a1[1];
  v40 = 0LL;
  v45 = 0LL;
  v8 = v5[3];
  v43 = v6;
  v49 = a4 & 1;
  v9 = *(_QWORD *)v8;
  if ( (a4 & 1) != 0 && (!*(_QWORD *)(v9 + 64) || (*(_DWORD *)(v9 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v10 = MiStartingOffset((__int64 *)v8, v6, 0xFFFFFFFF);
  v11 = v5[2];
  v12 = (__int64 *)v5[4];
  v42 = v10;
  v39 = 0LL;
  v41 = MiStartingOffset(v12, v11, 0xFFFFFFFF) + 4096;
  v13 = 0LL;
  MiLockControlAreaFileObjectShared(v9);
  v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v9 + 72));
  v15 = (volatile LONG *)(v9 + 72);
  v16 = v14;
  if ( *(_QWORD *)(v9 + 40) )
  {
    v44 = *(_QWORD **)(v9 + 8);
    ExReleaseSpinLockSharedFromDpcLevel(v15);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v30 = (v34 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v34;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v16);
    if ( (*(_DWORD *)(v9 + 56) & 0x20) == 0 && *(_QWORD *)(v9 + 64) )
    {
      v17 = v5[4];
      while ( 1 )
      {
        v18 = 1;
        if ( v8 == v5[3] || v8 == v17 )
          goto LABEL_70;
        v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
        if ( *(_DWORD *)(v8 + 104) && (int)MiReferenceSubsection(v8, 0LL) > 1 )
          v18 = 2;
        else
          v18 = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
        if ( KiIrqlFlags )
        {
          v35 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
            v30 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        __writecr8(v25);
        if ( v18 )
        {
LABEL_70:
          if ( !v49 && (a4 & 0x20) == 0 || (unsigned int)MiAnyProtosAreMapped(v8, v5) )
          {
            for ( i = *(_QWORD **)(v8 + 80); ; i = (_QWORD *)*i )
            {
              if ( i == (_QWORD *)(v8 + 80) )
              {
                v5 = a1;
                goto LABEL_13;
              }
              MayContainPage = MiViewMayContainPage(v9, a2, a4, (_DWORD)i, v42, v41, (__int64)&v40);
              if ( MayContainPage < 0 )
                break;
              v23 = v40;
              if ( v40 )
              {
                *v40 = v39;
                v39 = v23;
              }
            }
            v5 = a1;
            v8 = a1[4];
LABEL_13:
            if ( v18 == 2 )
              MiDecrementSubsection(v8);
          }
        }
        v17 = v5[4];
        if ( v8 == v17 )
          break;
        v8 = *(_QWORD *)(v8 + 16);
      }
      if ( MayContainPage < 0 )
        goto LABEL_19;
      v13 = v39;
    }
    v20 = v44;
    if ( v44 != (_QWORD *)(v9 + 8) )
    {
      do
      {
        MayContainPage = MiViewMayContainPage(v9, a2, a4, (_DWORD)v20, v42, v41, (__int64)&v40);
        if ( MayContainPage < 0 )
          break;
        v24 = v40;
        if ( v40 )
        {
          *v40 = v13;
          v13 = v24;
        }
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != (_QWORD *)(v9 + 8) );
      v39 = v13;
    }
LABEL_19:
    MiUnlockControlAreaFileObjectShared(v9);
    if ( a2 )
    {
      *(_QWORD *)(a2 + 8) = v39;
    }
    else
    {
      v21 = MiTrimSharedPageFromViews((_DWORD)v39, a3, a4, v9, v43);
      if ( MayContainPage >= 0 )
        return v21;
    }
    return (unsigned int)MayContainPage;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v15);
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v16);
  MiUnlockControlAreaFileObjectShared(v9);
  return 0LL;
}
