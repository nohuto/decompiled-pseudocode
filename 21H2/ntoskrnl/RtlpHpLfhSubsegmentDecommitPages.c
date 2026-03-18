/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1403650F0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1403645A4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x140365560 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpScheduleCompaction @ 0x140365798 (RtlpHpScheduleCompaction.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x140367768 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  unsigned int v6; // ebx
  int v9; // r15d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  ULONG_PTR v16; // r14
  unsigned __int8 v17; // bl
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  char v20; // cl
  unsigned int v21; // esi
  unsigned int v22; // edi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  __int64 p_Process; // rbx
  unsigned int i; // edx
  int v31; // r8d
  struct _KTHREAD *v32; // rcx
  unsigned __int8 v33; // al
  KIRQL v34; // bl
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  KIRQL v39; // [rsp+30h] [rbp-38h]
  unsigned int v40[13]; // [rsp+34h] [rbp-34h] BYREF
  char v41; // [rsp+80h] [rbp+18h]

  v39 = -1;
  v40[0] = 0;
  v5 = a4;
  v41 = -1;
  v6 = a3;
  v9 = 0;
  if ( a3 < 0 )
  {
    v6 = 1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) == 0 )
    goto LABEL_80;
  if ( v10 )
    goto LABEL_80;
  v11 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) != 0 )
    goto LABEL_80;
  v12 = *(__int16 *)(v11 + 22);
  v13 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 11);
  if ( v13 <= 8 )
    v13 = 8LL;
  v14 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 12);
  if ( v14 <= 8 )
    v14 = 8LL;
  if ( (v15 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24), v15 > v13)
    && (LODWORD(v13) = RtlpHpScheduleCompaction(*(_QWORD *)(v11 + 56), v11, v12, a4), (v13 & 0x80000000) != 0LL)
    || v15 > v14 )
  {
LABEL_80:
    LODWORD(v13) = *(unsigned __int8 *)(a2 + 45);
    if ( v6 < (unsigned int)v13 )
    {
      do
      {
        LODWORD(v13) = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v6, v40);
        v6 = v13;
        if ( (_DWORD)v13 == -1 )
          break;
        LOBYTE(v13) = v40[0];
        if ( v40[0] < v5 )
        {
          if ( !v10 )
            break;
          v6 += v40[0];
        }
        else if ( v9 )
        {
          v20 = *(_BYTE *)(a2 + 44);
          v21 = v6 << v20;
          v22 = v40[0] << v20;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            a2 + (v6 << v20),
            v40[0] << v20);
          RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v21, v22);
          if ( !v10 )
            goto LABEL_16;
          v6 += v40[0];
        }
        else
        {
          if ( (a5 & 1) == 0 )
            v39 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
          v9 = 2;
          v41 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57));
        }
        LODWORD(v13) = *(unsigned __int8 *)(a2 + 45);
      }
      while ( v6 < (unsigned int)v13 );
      if ( !v9 )
        return v13;
LABEL_16:
      v16 = a2 + 24;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v17 = v41;
          if ( (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v19 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v17 = v41;
        }
        LOBYTE(v13) = v17;
        __writecr8(v17);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v16);
        CurrentThread = KeGetCurrentThread();
        if ( v16 - qword_140C50630 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        _disable();
        p_Process = (__int64)&CurrentThread[1].Process;
        for ( i = 0; i < 6; ++i )
        {
          if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_BYTE *)(p_Process + 18)
            && (*(_DWORD *)p_Process & 1) == 0
            && *(_DWORD *)(p_Process + 8) == SessionId )
          {
            *(_BYTE *)(p_Process + 18) = 0;
            if ( *(__int64 *)p_Process < 0 )
            {
              *(_BYTE *)p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process);
              _disable();
            }
            v31 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            LODWORD(v13) = CurrentThread->AbEntrySummary | (1 << *(_BYTE *)(p_Process + 16));
            CurrentThread->AbEntrySummary = v13;
            _enable();
            if ( v31 )
              LOBYTE(v13) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v16, v31);
            goto LABEL_64;
          }
          p_Process += 96LL;
        }
        LODWORD(v13) = *((_DWORD *)&CurrentThread->0 + 1);
        if ( (v13 & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v16, SessionId, 0LL);
        _enable();
LABEL_64:
        v32 = KeGetCurrentThread();
        v19 = v32->SpecialApcDisable++ == -1;
        if ( v19 )
        {
          v13 = (unsigned __int64)&v32->152;
          if ( *(_QWORD *)v13 != v13 )
            LOBYTE(v13) = KiCheckForKernelApcDelivery();
        }
      }
      if ( (a5 & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v33 = KeGetCurrentIrql(), v33 <= 0xFu) )
          {
            v34 = v39;
            if ( v39 <= 0xFu && v33 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = ~(unsigned __int16)(-1LL << (v39 + 1));
              v37 = v35->SchedulerAssist;
              v19 = (v36 & v37[5]) == 0;
              v37[5] &= v36;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v35);
            }
          }
          else
          {
            v34 = v39;
          }
          LOBYTE(v13) = v34;
          __writecr8(v34);
        }
        else
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
          LOBYTE(v13) = KeAbPostRelease(a1 + 72);
          v18 = KeGetCurrentThread();
          v19 = v18->SpecialApcDisable++ == -1;
          if ( v19 )
          {
            v13 = (unsigned __int64)&v18->152;
            if ( *(_QWORD *)v13 != v13 )
              LOBYTE(v13) = KiCheckForKernelApcDelivery();
          }
        }
      }
    }
  }
  return v13;
}
