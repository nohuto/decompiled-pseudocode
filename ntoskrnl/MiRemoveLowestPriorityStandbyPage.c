/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x14064F264
 * Callers:
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x140464A50 (MiPruneStandbyPages.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiLockStandbyLookasidePage @ 0x140464910 (MiLockStandbyLookasidePage.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiGetExtendedStandbyPage @ 0x14064E0CC (MiGetExtendedStandbyPage.c)
 *     MiLockStandbyOldestPage @ 0x14064E72C (MiLockStandbyOldestPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x14064F5DC (MiRepointPteAtExtendedStandby.c)
 *     MiShouldUseExtendedStandby @ 0x14064F750 (MiShouldUseExtendedStandby.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // al
  ULONG_PTR v16; // rcx
  __int64 *v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v20; // al
  char v21; // al
  int v22; // r9d
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // edx
  bool v27; // zf
  int v31; // [rsp+40h] [rbp-71h] BYREF
  int v32; // [rsp+44h] [rbp-6Dh]
  __int64 v33; // [rsp+48h] [rbp-69h] BYREF
  __int64 v34; // [rsp+50h] [rbp-61h]
  __int64 v35; // [rsp+58h] [rbp-59h]
  unsigned __int8 v36[112]; // [rsp+68h] [rbp-49h] BYREF

  v3 = 0;
  v31 = 0;
  memset(v36, 0, 0x68uLL);
  v5 = a2;
  v33 = 0LL;
  v6 = -1LL;
  v34 = -1LL;
  v7 = 0LL;
  v32 = 0;
  v8 = 0LL;
  v35 = -1LL;
  v9 = -1LL;
  CurrentIrql = 17;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = 88LL * v3 + a1 + 2944;
      if ( *(_QWORD *)(v8 + 16) != 0x3FFFFFFFFFLL )
      {
        memset(v36, 0, 0x68uLL);
        if ( CurrentIrql == 17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( CurrentIrql == 2 )
                LODWORD(v13) = 4;
              else
                v13 = (-1LL << (CurrentIrql + 1)) & 4;
              v11 = (unsigned int)v13 | SchedulerAssist[5];
              SchedulerAssist[5] = v11;
            }
          }
        }
        MiGetExtendedStandbyPage(a1, a3, v11, (__int64)&v33);
        v9 = MiLockStandbyLookasidePage(a1, v36, v3);
        if ( v9 != -1LL || (v9 = MiLockStandbyOldestPage(a1, v14, v3, &v31), v9 != -1LL) )
        {
          v7 = 48 * v9 - 0x220000000000LL;
          if ( !(unsigned int)MiCheckSlabPfnBitmap(v7, 1LL, 0) )
            goto LABEL_22;
          MiReleasePageListLock(v8, (__int64)v36);
          v15 = MiUnlinkPageFromListEx(48 * v9 - 0x220000000000LL, 0LL);
          v16 = 48 * v9 - 0x220000000000LL;
          if ( (v15 & 3) != 0 )
          {
            MiDiscardTransitionPteEx(v16, 0);
          }
          else
          {
            *(_BYTE *)(v7 + 35) &= 0xF8u;
            MiInsertPageInList(v16, 0x800u);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_20:
          --v3;
          goto LABEL_21;
        }
        if ( v31 )
          goto LABEL_20;
      }
LABEL_21:
      if ( ++v3 >= a2 )
      {
LABEL_22:
        v6 = v34;
        v5 = a2;
        break;
      }
    }
  }
  if ( v3 != v5 )
  {
    v17 = (__int64 *)(v7 + 16);
    if ( (unsigned int)MiShouldUseExtendedStandby(a1, v7, &v33) )
    {
      MiRepointPteAtExtendedStandby(v7, (__int64)&v33);
    }
    else
    {
      MiUnlinkStandbyPage(a1, (__int64)v36, v8, v9, a3);
      v18 = *v17;
      if ( (*v17 & 0x400) != 0 )
        v19 = v18 >> 11;
      else
        v19 = v18 >> 3;
      if ( (v19 & 1) != 0 )
        v32 = 1;
    }
    v20 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)(v7 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v7 + 34) = v20 & 0xC7;
    *(_BYTE *)(v7 + 35) &= ~0x20u;
    v21 = *(_BYTE *)(v7 + 34);
    *(_QWORD *)v7 = 0LL;
    *(_BYTE *)(v7 + 34) = v21 & 0xF8 | 5;
    *v17 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v7 + 16));
    if ( v32 )
      *v17 = MiUpdatePageFileHighInPte(*v17, 4294967293LL);
    if ( v22 )
      v35 = v9;
    else
      MiReturnFreeZeroPage(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = v34;
  }
  if ( v6 != -1 )
    MiReleaseFreshPage(48 * v6 - 0x220000000000LL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v35;
}
