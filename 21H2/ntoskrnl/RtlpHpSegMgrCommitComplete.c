/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x140242FF4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140351880 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int16 __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        __int64 SpinLock,
        unsigned __int8 a6)
{
  __int64 v6; // rax
  __int16 v9; // bx
  signed __int16 v10; // cx
  __int16 v11; // tt
  __int16 v12; // dx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // r8d
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // edx

  LOWORD(v6) = *a2;
  while ( 1 )
  {
    v9 = v6;
    v10 = v6;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v12 = 0x8000;
      else
        v12 = 0;
      v10 = v12 | v6 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v10 += a3;
    }
    else if ( !a4 )
    {
      v10 -= a3;
    }
    if ( v10 == (_WORD)v6 )
      return v6;
    v11 = v6;
    LOWORD(v6) = _InterlockedCompareExchange16(a2, v10, v6);
    if ( v11 == (_WORD)v6 )
    {
      if ( (v9 & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
          LOWORD(v6) = KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              LOWORD(v6) = KeGetCurrentIrql();
              if ( (unsigned __int8)v6 <= 0xFu && a6 <= 0xFu && (unsigned __int8)v6 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v6 = -1LL << (a6 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)v6;
                v20 = (v23 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v23;
                if ( v20 )
                  LOWORD(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(a6);
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
          v16 = 0LL;
          v17 = SpinLock & 0x7FFFFFFFFFFFFFFCLL;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v17
               || !p_Process[18]
               || (*(_DWORD *)p_Process & 1) != 0
               || *((_DWORD *)p_Process + 2) != SessionId )
          {
            v16 = (unsigned int)(v16 + 1);
            p_Process += 96;
            if ( (unsigned int)v16 >= 6 )
              goto LABEL_35;
          }
          p_Process[18] = 0;
          if ( p_Process )
          {
            if ( *(__int64 *)p_Process < 0 )
            {
              *p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process, v16, v17);
              _disable();
            }
            v18 = *((_DWORD *)p_Process + 22);
            *((_DWORD *)p_Process + 22) = 0;
            p_Process[17] = 0;
            *(_QWORD *)p_Process = 0LL;
            LOWORD(v6) = (unsigned __int8)p_Process[16];
            CurrentThread->AbEntrySummary |= 1 << v6;
            _enable();
            if ( v18 )
              LOWORD(v6) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, SpinLock, v18);
            goto LABEL_38;
          }
LABEL_35:
          LODWORD(v6) = *((_DWORD *)&CurrentThread->0 + 1);
          if ( (v6 & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, SpinLock, SessionId, 0LL);
          _enable();
LABEL_38:
          v19 = KeGetCurrentThread();
          v20 = v19->SpecialApcDisable++ == -1;
          if ( v20 )
          {
            v6 = (__int64)&v19->152;
            if ( *(_QWORD *)v6 != v6 )
              LOWORD(v6) = KiCheckForKernelApcDelivery();
          }
        }
      }
      return v6;
    }
  }
}
