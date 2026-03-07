char __fastcall ExAcquireFastResourceWithFlags(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  __int64 v3; // rbp
  char v7; // di
  KSPIN_LOCK *CurrentThread; // r15
  __int16 v9; // r9
  int v10; // r14d
  unsigned __int8 v11; // dl
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v13; // r8
  __int64 v14; // rdx
  ULONG_PTR v15; // rsi
  signed __int64 v16; // rax
  char v17; // r14
  char v18; // r13
  int v19; // r12d
  bool v20; // r14
  int v21; // r13d
  char v22; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 *v29; // rdx
  __int16 v30; // r9
  int v31; // r11d
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // cl
  struct _KTHREAD *v34; // rdx
  ULONG_PTR v35; // r9
  char v36; // al
  ULONG_PTR v37; // r9
  int v38; // ecx
  __int64 v39; // rax
  char v40; // r14
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  volatile signed __int64 v43; // rtt
  int v44; // r13d
  int v45; // r12d
  int v46; // r14d
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // rdx
  signed __int32 *v50; // r8
  signed __int32 v51; // eax
  signed __int32 v52; // ett

  v3 = 0LL;
  if ( !FeatureFastResource2 )
    KeBugCheckEx(0x1C6u, 0x18uLL, 0LL, 0LL, 0LL);
  v7 = 1;
  if ( (a3 & 1) != 0 )
  {
    CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
    v9 = *(_WORD *)(BugCheckParameter2 + 26);
    v10 = a3 & 8;
    v11 = 2 - (v10 != 0);
    if ( (v9 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v13 = KeGetCurrentThread();
      if ( CurrentIrql > v11 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v11, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (v9 & 8) != 0 || (v13->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (v13->MiscFlags & 0x400) != 0 || v13->WaitBlock[3].SpareLong )
          {
            v15 = KeAbPreAcquire(BugCheckParameter2, 0LL);
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 0LL);
            if ( v16 )
            {
              if ( *(KSPIN_LOCK **)(BugCheckParameter2 + 80) == CurrentThread )
              {
                ++*(_DWORD *)(BugCheckParameter2 + 96);
                if ( v15 )
                  KeAbPostReleaseEx(BugCheckParameter2, v15);
              }
              else if ( v10 )
              {
                ExpAcquireFastResourceExclusiveSlow(BugCheckParameter2, v16, CurrentThread, v15, a3);
              }
              else
              {
                if ( v15 )
                  KeAbPostReleaseEx(BugCheckParameter2, v15);
                return 0;
              }
            }
            else
            {
              *(_DWORD *)(BugCheckParameter2 + 96) = 1;
              v17 = 3;
              if ( (a3 & 0x10) != 0 )
                v17 = 15;
              v18 = v17;
              v19 = v17 & 2;
              v20 = (v17 & 8) != 0;
              v21 = v18 & 4;
              *(_QWORD *)(BugCheckParameter2 + 80) = (unsigned __int64)CurrentThread | (v21 != 0);
              if ( v15 )
              {
                v22 = 2 * *(_BYTE *)(v15 + 16);
                *(_BYTE *)(v15 + 18) = 1;
                *(_BYTE *)(BugCheckParameter2 + 100) = v22 | 1;
              }
              if ( v19 )
                _disable();
              if ( v21 )
              {
                KxAcquireSpinLock(CurrentThread + 209);
                LOBYTE(v24) = 1;
                ExpAddFastOwnerEntryToThreadList2(CurrentThread, v25, v24, BugCheckParameter2 + 64);
                KeReleaseSpinLockFromDpcLevel(CurrentThread + 209);
              }
              else
              {
                ExpAddFastOwnerEntryToThreadList2(CurrentThread, v14, 0LL, BugCheckParameter2 + 64);
              }
              if ( v19 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v27 = *SchedulerAssist;
                  do
                  {
                    v28 = v27;
                    v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
                  }
                  while ( v28 != v27 );
                  if ( (v27 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                _enable();
              }
              if ( v21 )
              {
                if ( v20 && v15 )
                {
                  v29 = (__int64 *)v15;
LABEL_88:
                  KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, v29);
                }
LABEL_89:
                ObfReferenceObject(CurrentThread);
                return v7;
              }
            }
            return v7;
          }
LABEL_98:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_97:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_96:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_94:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( (a3 & 6) == 0 )
    return 0;
  v30 = *(_WORD *)(BugCheckParameter2 + 26);
  v31 = a3 & 0x10;
  v32 = 2 - ((a3 & 8) != 0);
  if ( (v30 & 1) == 0 )
    goto LABEL_94;
  v33 = KeGetCurrentIrql();
  v34 = KeGetCurrentThread();
  if ( v33 > v32 )
    KeBugCheckEx(0x1C6u, 0LL, v33, v32, 0LL);
  if ( v33 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_96;
  if ( (v30 & 8) == 0 && (v34->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_97;
  if ( !v33 && (v34->MiscFlags & 0x400) == 0 && !v34->WaitBlock[3].SpareLong )
    goto LABEL_98;
  v35 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v35 != v34 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v35, 0LL);
  v36 = *(_BYTE *)(a2 + 37);
  if ( (v36 & 2) == 0 )
  {
    v37 = *(_QWORD *)(a2 + 24);
    if ( v37 )
    {
      if ( v37 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v37, 0LL);
    }
  }
  v38 = *(_DWORD *)(a2 + 32);
  if ( !v38 || (v36 & 4) != 0 )
  {
    CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
    if ( !*(_BYTE *)(a2 + 36) )
    {
      v39 = KeAbPreAcquire(BugCheckParameter2, 0LL);
      v31 = a3 & 0x10;
      v3 = v39;
    }
    v40 = 3;
    do
    {
      _m_prefetchw((const void *)BugCheckParameter2);
      v41 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 || (a3 & 4) == 0 && (v41 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow(BugCheckParameter2, a3);
      v42 = v41 + 4;
      v43 = *(_QWORD *)BugCheckParameter2;
    }
    while ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v41 + 4, v41) );
    if ( v31 )
      v40 = 15;
    v44 = v40 & 2;
    v45 = v40 & 4;
    v46 = v40 & 8;
    if ( a2 != BugCheckParameter2 + 64 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = (unsigned __int64)CurrentThread | (v45 != 0);
    if ( v3 )
    {
      v47 = 2 * *(_BYTE *)(v3 + 16);
      *(_BYTE *)(v3 + 18) = 1;
      *(_BYTE *)(a2 + 36) = v47 | 1;
    }
    if ( v44 )
      _disable();
    if ( v45 )
    {
      KxAcquireSpinLock(CurrentThread + 209);
      LOBYTE(v48) = 1;
      ExpAddFastOwnerEntryToThreadList2(CurrentThread, v49, v48, a2);
      KeReleaseSpinLockFromDpcLevel(CurrentThread + 209);
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList2(CurrentThread, v42, 0LL, a2);
    }
    if ( v44 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v50 )
      {
        _m_prefetchw(v50);
        v51 = *v50;
        do
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange(v50, v51 & 0xFFDFFFFF, v51);
        }
        while ( v52 != v51 );
        if ( (v51 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    if ( v45 )
    {
      if ( v46 && v3 )
      {
        v29 = (__int64 *)v3;
        goto LABEL_88;
      }
      goto LABEL_89;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v38 + 1;
  }
  return v7;
}
