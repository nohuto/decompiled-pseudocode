/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x140236A00
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140351880 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140236C14 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        __int64 SpinLock,
        unsigned __int8 *a6)
{
  int v8; // esi
  unsigned __int8 v9; // r12
  signed __int16 v10; // di
  __int16 v11; // r14
  __int16 v12; // bx
  unsigned __int16 v13; // bx
  bool v14; // zf
  signed __int16 v15; // ax
  unsigned int v16; // edx
  signed __int16 v18; // bx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v24; // r8d
  struct _KTHREAD *v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  __int64 v30; // [rsp+70h] [rbp+8h]
  char v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v30 = a1;
  v8 = 0;
  v9 = 0;
LABEL_2:
  v10 = *a2;
  while ( 1 )
  {
    v11 = v10;
    if ( a3 > 0 )
    {
      if ( (v10 & 0x4000) != 0 )
      {
        _mm_pause();
        goto LABEL_2;
      }
      if ( (v10 & 0x7FF) != 0 )
        goto LABEL_6;
      if ( (a4 & 3) != 0 )
      {
        if ( (a4 & 2) != 0 )
        {
          v18 = v10;
          goto LABEL_27;
        }
      }
      else if ( (unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0LL, 1LL) )
      {
        v18 = v10;
LABEL_27:
        v12 = v18 | 0x4000;
        goto LABEL_7;
      }
LABEL_6:
      v12 = v10;
LABEL_7:
      a1 = v30;
LABEL_8:
      v13 = a3 + v12;
      goto LABEL_9;
    }
    if ( v10 >= 0 )
    {
      v16 = -1073741567;
      goto LABEL_15;
    }
    v12 = v10;
    if ( a3 + (v10 & 0x7FF) )
      goto LABEL_8;
    v13 = v10 | 0x4000;
LABEL_9:
    if ( (v13 & 0x4000) != 0 )
    {
      v8 = 1;
      v9 = RtlpHpAcquireLockExclusive(SpinLock, *(_DWORD *)(a1 + 40) & 1);
    }
    v15 = _InterlockedCompareExchange16(a2, v13, v10);
    v14 = v10 == v15;
    v10 = v15;
    if ( v14 )
      break;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v30 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v14 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(SpinLock);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned __int64)(SpinLock - qword_140C50630) >= 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        _disable();
        p_Process = (char *)&CurrentThread[1].Process;
        v22 = 0LL;
        v23 = SpinLock & 0x7FFFFFFFFFFFFFFCLL;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v23
             || !p_Process[18]
             || (*(_DWORD *)p_Process & 1) != 0
             || *((_DWORD *)p_Process + 2) != SessionId )
        {
          v22 = (unsigned int)(v22 + 1);
          p_Process += 96;
          if ( (unsigned int)v22 >= 6 )
            goto LABEL_53;
        }
        p_Process[18] = 0;
        if ( p_Process )
        {
          if ( *(__int64 *)p_Process < 0 )
          {
            *p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process, v22, v23);
            _disable();
          }
          v24 = *((_DWORD *)p_Process + 22);
          *((_DWORD *)p_Process + 22) = 0;
          p_Process[17] = 0;
          *(_QWORD *)p_Process = 0LL;
          CurrentThread->AbEntrySummary |= 1 << p_Process[16];
          _enable();
          if ( v24 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, SpinLock, v24);
          goto LABEL_55;
        }
LABEL_53:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, SessionId, 0LL);
        _enable();
LABEL_55:
        v25 = KeGetCurrentThread();
        v14 = v25->SpecialApcDisable++ == -1;
        if ( v14 && ($CEA84C04E3712D858E5667A507841A2A *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
          KiCheckForKernelApcDelivery();
      }
      v8 = 0;
    }
    a1 = v30;
    a4 = v31;
  }
  if ( a3 <= 0 )
  {
    v16 = (v13 >> 13) & 2 | 0xC0000100;
  }
  else if ( v11 >= 0 )
  {
    v16 = ((v13 & 0x4000) != 0) - 1073741567;
  }
  else
  {
    v16 = -1073741568;
  }
LABEL_15:
  if ( v8 )
    *a6 = v9;
  return v16;
}
