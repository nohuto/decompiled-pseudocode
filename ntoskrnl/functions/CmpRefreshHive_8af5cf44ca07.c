__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  ULONG_PTR v4; // r13
  ULONG_PTR v5; // rdi
  int Hive; // ebx
  struct _PRIVILEGE_SET *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // r9d
  ULONG_PTR v21; // rdx
  __int64 CellFlat; // rax
  __int64 v23; // r14
  ULONG_PTR v24; // rdx
  __int64 CellPaged; // rax
  __int64 v26; // r15
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v33; // [rsp+20h] [rbp-79h]
  __int64 v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v37; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v38[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v39; // [rsp+108h] [rbp+6Fh]
  char UnloadRundown; // [rsp+110h] [rbp+77h]
  PPRIVILEGE_SET Privileges; // [rsp+118h] [rbp+7Fh]

  v34 = 0LL;
  v35 = 0LL;
  memset(v38, 0, 32);
  v39 = 0;
  v2 = 0;
  v3 = 0;
  BugCheckParameter3[0] = 0LL;
  v37 = 0LL;
  HvpGetCellContextReinitialize(&v34);
  HvpGetCellContextReinitialize(&v35);
  CmpInitializeDelayDerefContext(&v37);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
LABEL_5:
    v7 = 0LL;
    goto LABEL_67;
  }
  v39 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1640));
  if ( !v39 )
  {
    Hive = -1073740763;
    goto LABEL_5;
  }
  CmpBecomeActiveFlusherAndReconciler(v5);
  v2 = 1;
  CmpLockRegistry(v9, v8, v10, v11);
  CmpLockKcbShared(v4);
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_9;
  if ( *(_BYTE *)(v5 + 2944) == 1 )
  {
    Hive = -1073741431;
LABEL_9:
    CmpUnlockKcb(v4);
    v7 = 0LL;
    v3 = 1;
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(v5 + 160) & 2) == 0 )
    goto LABEL_30;
  v12 = KeAbPreAcquire(v5 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 72), 0, v12, v5 + 72);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v13 = KeAbPreAcquire(v5 + 80, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 80), v13, v5 + 80);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v3 = 0;
  if ( *(_DWORD *)(v5 + 912) )
  {
    Hive = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 80));
    KeAbPostRelease(v5 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 72));
    KeAbPostRelease(v5 + 72);
    goto LABEL_9;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 80));
  KeAbPostRelease(v5 + 80);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v5 + 72));
  KeAbPostRelease(v5 + 72);
  if ( (*(_DWORD *)(v4 + 184) & 0x40000) == 0 )
  {
LABEL_30:
    Hive = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v5 + 2920) )
  {
    Hive = -1073741823;
    goto LABEL_9;
  }
  CmpUnlockKcb(v4);
  CmpUnlockRegistry(v16, v15, v17, v18);
  Privileges = (PPRIVILEGE_SET)CmpAllocatePool(256LL, 432LL, 859393347LL);
  v7 = Privileges;
  if ( !Privileges )
  {
    Hive = -1073741670;
    goto LABEL_67;
  }
  memset((char *)v38 + 8, 0, 24);
  *(_QWORD *)&v38[0] = *(_QWORD *)(v5 + 1544);
  v19 = *(_DWORD *)(v5 + 168);
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v20 = 1;
      *((_QWORD *)&v38[0] + 1) = *(_QWORD *)(v5 + 1552);
    }
    else
    {
      v20 = 2;
      *(_OWORD *)((char *)v38 + 8) = *(_OWORD *)(v5 + 1576);
    }
  }
  else
  {
    v20 = 0;
  }
  Hive = CmpCreateHive(
           BugCheckParameter3,
           2u,
           *(_DWORD *)(v5 + 160) & 0xFFFEFFFF,
           v20,
           0LL,
           (__int64)v38,
           0LL,
           18415618,
           0LL,
           0LL,
           0LL,
           (__int64)Privileges);
  if ( Hive >= 0 )
  {
    CmpLockRegistryExclusive();
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive < 0 )
    {
LABEL_66:
      v3 = 1;
      goto LABEL_67;
    }
    if ( *(_BYTE *)(v5 + 2944) == 1 )
    {
      Hive = -1073741431;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v5 + 160) & 2) == 0 )
    {
LABEL_45:
      Hive = -1073741811;
      goto LABEL_66;
    }
    if ( !*(_DWORD *)(v5 + 912) )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0x40000) == 0 )
        goto LABEL_45;
      if ( !*(_DWORD *)(v5 + 2920) )
      {
        v21 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 36LL);
        if ( (_DWORD)v21 == *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3[0], v21, &v35);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3[0], v21, (unsigned int *)&v35);
          v23 = CellFlat;
          v24 = *(unsigned int *)(*(_QWORD *)(v5 + 64) + 36LL);
          if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v5, v24, &v34);
          else
            CellPaged = HvpGetCellPaged(v5, v24, (unsigned int *)&v34);
          v26 = CellPaged;
          Hive = HvpMarkCellDirty(
                   BugCheckParameter3[0],
                   *(unsigned int *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 36LL),
                   0);
          if ( Hive < 0 )
          {
            if ( v26 )
            {
              if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v5, &v34);
              else
                HvpReleaseCellPaged(v5, (unsigned int *)&v34);
            }
            if ( v23 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3[0], &v35);
              else
                HvpReleaseCellPaged(BugCheckParameter3[0], (unsigned int *)&v35);
            }
          }
          else
          {
            v27 = *(_DWORD *)(v26 + 16);
            *(_WORD *)(v23 + 2) |= 0xCu;
            *(_DWORD *)(v23 + 16) = v27;
            if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v5, &v34);
            else
              HvpReleaseCellPaged(v5, (unsigned int *)&v34);
            if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3[0], &v35);
            else
              HvpReleaseCellPaged(BugCheckParameter3[0], (unsigned int *)&v35);
            CmpCleanUpKCBCacheTable(v5);
            LOBYTE(v33) = 1;
            CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v5, &v37, 0LL, v33);
            CmpFlushNotifiesOnKeyBodyList(v4, 0LL, (__int64)&v37, 1);
            CmpSwapHiveStorage(v5, BugCheckParameter3[0]);
            CmpRebuildKcbCache(v4);
            ++*(_DWORD *)(v5 + 212);
            Hive = 0;
          }
          v7 = Privileges;
          goto LABEL_66;
        }
        goto LABEL_45;
      }
    }
    Hive = -1073741823;
    goto LABEL_66;
  }
LABEL_67:
  CmpDrainDelayDerefContext((_QWORD **)&v37);
  if ( v3 )
    CmpUnlockRegistry(v29, v28, v30, v31);
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v5, v28, v30, v31);
  if ( v39 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1640));
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3[0] )
    CmpDestroyHive((PVOID)BugCheckParameter3[0]);
  if ( v7 )
    CmSiFreeMemory(v7);
  return (unsigned int)Hive;
}
