void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  const void *v4; // r15
  int v5; // r14d
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // r8
  int v15; // r8d
  ULONG v16; // esi
  __int64 v17; // rcx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v19; // r11
  __int64 *v20; // r15
  volatile LONG *v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  struct _WORK_QUEUE_ITEM *v36; // rdi
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // eax
  _DWORD *v41; // r9
  __int64 v42; // rdx
  unsigned int BugCheckParameter3; // [rsp+40h] [rbp-78h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-74h]
  __int64 *v45; // [rsp+48h] [rbp-70h]
  volatile LONG *SpinLock; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  unsigned __int64 v48; // [rsp+60h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  int v52; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 720);
  v3 = *(_DWORD *)(a1 + 716);
  v4 = *(const void **)(a1 + 17824);
  v5 = v3;
  v7 = a2;
  BugCheckParameter2 = (ULONG_PTR)v4;
  if ( v2 >= 0 )
    v2 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( v3 >= 0 )
    v5 = v2;
  v10 = *(_DWORD *)(a1 + 17048);
  v11 = (*(_DWORD *)(a1 + 720) >> 31) | 2;
  BugCheckParameter3_4 = v5;
  if ( v3 >= 0 )
    v11 = *(_DWORD *)(a1 + 720) >> 31;
  if ( !v10 )
    goto LABEL_13;
  v12 = a1 + 17056;
  v13 = v10;
  do
  {
    v14 = *(_QWORD **)v12;
    if ( (*(_WORD *)(*(_QWORD *)v12 + 204LL) & 0x50) == 0 )
    {
      v8 += v14[1] - *v14;
      v9 += v14[3];
    }
    v12 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v9 < 0x400 )
LABEL_13:
    v11 |= 4u;
  v15 = v11 | 8;
  if ( v8 >= 0x400 )
    v15 = v11;
  BugCheckParameter3 = v15;
  if ( dword_140C67AC4 )
  {
    v16 = 243;
  }
  else if ( *(_QWORD *)(a1 + 17728) < *(_QWORD *)(a1 + 17600) >> 2 )
  {
    v16 = *(_QWORD *)(a1 + 17824) < *(_QWORD *)(a1 + 17600) >> 2 ? 235 : 77;
  }
  else
  {
    v4 = *(const void **)(a1 + 17728);
    v16 = 253;
    BugCheckParameter2 = (ULONG_PTR)v4;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 112LL);
  if ( *(_QWORD *)(v17 + 1296) )
  {
    PsGetJobLastThrottledIoTime(*(_QWORD *)(v17 + 1296));
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime - v19 < (unsigned __int64)-MiNoPagesTimeout )
      return;
    v15 = BugCheckParameter3;
  }
  if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    v52 = 0;
  }
  else
  {
    DbgPrintEx(
      0x66u,
      0,
      "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
      v16,
      *(const void **)(a1 + 17600),
      v4,
      v15,
      v5);
    if ( (MiFlags & 8) != 0 )
      __debugbreak();
    v52 = 1;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, v7)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 15836), 1, 0) )
  {
    v20 = (__int64 *)(a1 + 5328);
    v21 = (volatile LONG *)(a1 + 5344);
    v48 = 0LL;
    v45 = (__int64 *)(a1 + 5328);
    v22 = 0LL;
    SpinLock = (volatile LONG *)(a1 + 5344);
    v23 = 16LL;
    v47 = 16LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v26) = 4;
        else
          v26 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v26;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(v21);
      v27 = *v20;
      if ( *v20 != 0x3FFFFFFFFFLL )
      {
        while ( 1 )
        {
          v50 = 48 * v27;
          v28 = 48 * v27 - 0x220000000000LL;
          v27 = *(_QWORD *)v28 & 0xFFFFFFFFFFLL;
          v29 = *(_QWORD *)(v28 + 16);
          if ( qword_140C657C0 && (v29 & 0x10) == 0 )
            v29 &= ~qword_140C657C0;
          v30 = *(_QWORD *)(v29 >> 16);
          if ( (*(_DWORD *)(v30 + 56) & 0x28) == 0
            && (!v22 || v22 == v30)
            && !_interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
            if ( (*(_DWORD *)(v30 + 56) & 8) == 0 )
            {
              if ( !v22 )
              {
                v48 = *(_QWORD *)(v30 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
                if ( v48 )
                  ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v30 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x644C6D4Du);
                v22 = v30;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
              MiUnlinkPageFromListEx(v28, 1uLL);
              v21 = SpinLock;
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
              *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
              *(_BYTE *)(v28 + 34) &= ~0x10u;
              MiPfnReferenceCountIsZero(v28, 0xAAAAAAAAAAAAAAABuLL * (v50 >> 4));
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                v37 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v39 = CurrentPrcb->SchedulerAssist;
                  v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v35 = (v40 & v39[5]) == 0;
                  v39[5] &= v40;
                  if ( v35 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(CurrentIrql);
              ++dword_140C6548C;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                v41 = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql == 2 )
                  LODWORD(v42) = 4;
                else
                  v42 = (-1LL << (CurrentIrql + 1)) & 4;
                v41[5] |= v42;
              }
              ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
              v20 = v45;
              v27 = *v45;
              goto LABEL_51;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v21 = SpinLock;
          }
          v20 = v45;
LABEL_51:
          if ( v27 == 0x3FFFFFFFFFLL )
          {
            v23 = v47;
            break;
          }
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      if ( KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v35 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
      __writecr8(CurrentIrql);
      v21 += 22;
      v20 += 11;
      --v23;
      SpinLock = v21;
      v47 = v23;
      v45 = v20;
    }
    while ( v23 );
    v35 = v22 == 0;
    v36 = (struct _WORK_QUEUE_ITEM *)(a1 + 15792);
    if ( v35 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 15836), 0);
      if ( !v52 )
        KeBugCheckEx(v16, *(_QWORD *)(a1 + 17600), BugCheckParameter2, BugCheckParameter3, BugCheckParameter3_4);
    }
    else
    {
      *(_QWORD *)(a1 + 15824) = v48;
      *(_DWORD *)(a1 + 15832) = -1073741566;
      *(_QWORD *)(a1 + 15808) = MiLdwPopupWorker;
      *(_QWORD *)(a1 + 15816) = a1 + 15792;
      v36->List.Flink = 0LL;
      ExQueueWorkItem(v36, DelayedWorkQueue);
      ++dword_140C65488;
    }
  }
}
