/*
 * XREFs of CmpRefreshHive @ 0x14087D448
 * Callers:
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockKcbShared @ 0x140640230 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanUpKCBCacheTable @ 0x14066D23C (CmpCleanUpKCBCacheTable.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x14071CD6C (CmpRebuildKcbCache.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     HvUnlockHiveWriter @ 0x14071FE3C (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14071FE6C (HvLockHiveWriter.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079F008 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F9E4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F204 (CmpSearchKeyControlBlockTree.c)
 *     CmpSwapHiveStorage @ 0x14087315C (CmpSwapHiveStorage.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  struct _PRIVILEGE_SET *v4; // r12
  ULONG_PTR v5; // r14
  __int64 v6; // rdi
  int Hive; // ebx
  __int64 v9; // r13
  PLOOKASIDE_LIST_EX v10; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  __int64 v21; // [rsp+68h] [rbp-31h]
  __int128 v22; // [rsp+78h] [rbp-21h] BYREF
  _OWORD v23[6]; // [rsp+88h] [rbp-11h] BYREF
  char v24; // [rsp+100h] [rbp+67h]
  BOOLEAN v25; // [rsp+108h] [rbp+6Fh]
  PVOID P; // [rsp+110h] [rbp+77h] BYREF
  __int64 v27; // [rsp+118h] [rbp+7Fh] BYREF

  v27 = 0xFFFFFFFFLL;
  v20 = 0xFFFFFFFFLL;
  v2 = 0;
  P = 0LL;
  memset(v23, 0, 32);
  v3 = 0;
  v4 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  CmpInitializeDelayDerefContext(&v22);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  v25 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( !v25 )
  {
    Hive = -1073740763;
    goto LABEL_7;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v2 = 1;
  CmpLockRegistry();
  CmpLockKcbShared(v5);
  v24 = 1;
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_6;
  if ( *(_BYTE *)(v6 + 2936) == 1 )
  {
    Hive = -1073741431;
LABEL_6:
    CmpUnlockKcb(v5);
    v3 = 1;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
  {
LABEL_19:
    Hive = -1073741811;
    goto LABEL_6;
  }
  HvLockHiveFlusherShared(v6);
  HvLockHiveWriter(v6);
  if ( *(_DWORD *)(v6 + 904) )
  {
    Hive = -1073741823;
    HvUnlockHiveWriter(v6);
    HvUnlockHiveFlusherShared(v6);
    v9 = 0LL;
LABEL_45:
    if ( v21 )
      (*(void (__fastcall **)(__int64, __int64 *))(v6 + 16))(v6, &v27);
    if ( v9 )
      (*((void (__fastcall **)(PVOID, __int64 *))P + 2))(P, &v20);
    v3 = 1;
    if ( v24 )
      goto LABEL_6;
    goto LABEL_7;
  }
  HvUnlockHiveWriter(v6);
  HvUnlockHiveFlusherShared(v6);
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(v6 + 2912) )
  {
    Hive = -1073741823;
    goto LABEL_6;
  }
  CmpUnlockKcb(v5);
  v24 = 0;
  CmpUnlockRegistry();
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v10);
  v4 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    Hive = -1073741670;
    goto LABEL_7;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  memset((char *)v23 + 8, 0, 24);
  *(_QWORD *)&v23[0] = *(_QWORD *)(v6 + 1536);
  v12 = *(_DWORD *)(v6 + 164);
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = 1;
      *((_QWORD *)&v23[0] + 1) = *(_QWORD *)(v6 + 1544);
    }
    else
    {
      v13 = 2;
      *(_OWORD *)((char *)v23 + 8) = *(_OWORD *)(v6 + 1568);
    }
  }
  else
  {
    v13 = 0;
  }
  Hive = CmpCreateHive(
           (ULONG_PTR *)&P,
           2u,
           *(_DWORD *)(v6 + 160) & 0xFFFEFFFF,
           v13,
           0LL,
           v23,
           0LL,
           (*(_DWORD *)(v6 + 4152) & 0x10000) != 0 ? 18415650 : 18415682,
           0LL,
           0LL,
           0LL,
           (__int64)v4);
  if ( Hive >= 0 )
  {
    CmpLockRegistryExclusive();
    v3 = 1;
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive >= 0 )
    {
      if ( *(_BYTE *)(v6 + 2936) == 1 )
      {
        Hive = -1073741431;
        goto LABEL_7;
      }
      if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v6 + 904) )
      {
LABEL_39:
        Hive = -1073741823;
        goto LABEL_7;
      }
      if ( (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
      {
        if ( *(_DWORD *)(v6 + 2912) )
          goto LABEL_39;
        v14 = *(unsigned int *)(*((_QWORD *)P + 8) + 36LL);
        if ( (_DWORD)v14 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
        {
          v9 = (*((__int64 (__fastcall **)(PVOID, __int64, __int64 *))P + 1))(P, v14, &v20);
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL),
                  &v27);
          v21 = v15;
          if ( HvMarkCellDirty((ULONG_PTR)P, *(unsigned int *)(*((_QWORD *)P + 8) + 36LL), 0) )
          {
            v16 = *(_DWORD *)(v15 + 16);
            *(_WORD *)(v9 + 2) |= 0xCu;
            *(_DWORD *)(v9 + 16) = v16;
            (*(void (__fastcall **)(__int64, __int64 *))(v6 + 16))(v6, &v27);
            (*((void (__fastcall **)(PVOID, __int64 *))P + 2))(P, &v20);
            CmpCleanUpKCBCacheTable(v6, v17, v18, v19);
            CmpSearchKeyControlBlockTree((__int64)CmpRefreshWorkerRoutine, v6, (__int64)&v22);
            CmpFlushNotifiesOnKeyBodyList(v5, 0LL, (__int64)&v22, 1);
            CmpSwapHiveStorage(v6, (__int64)P);
            CmpRebuildKcbCache(v5, (__int64)&v22);
            ++*(_DWORD *)(v6 + 204);
            Hive = 0;
            goto LABEL_7;
          }
          Hive = -1073741443;
          goto LABEL_45;
        }
      }
LABEL_37:
      Hive = -1073741811;
    }
  }
LABEL_7:
  CmpDrainDelayDerefContext((_QWORD **)&v22);
  if ( v3 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v6);
  if ( v25 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( P )
    CmpDestroyHive((volatile signed __int32 *)P);
  if ( v4 )
    CmSiFreeMemory(v4);
  return (unsigned int)Hive;
}
