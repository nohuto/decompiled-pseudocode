unsigned __int64 __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rdx
  bool v12; // r8
  _QWORD *v13; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+90h] [rbp+8h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 || (v3 = PsInitialSystemProcess) != 0LL )
  {
    v8 = v3[1].ActiveProcessors.StaticBitmap[11];
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 32) )
      {
        result = (unsigned __int64)ExAllocateFromNPagedLookasideList(&stru_140C67F80);
        v10 = result;
        if ( result )
        {
          *(_QWORD *)(result + 24) = BugCheckParameter3;
          *(_QWORD *)(result + 40) = a2;
          *(_QWORD *)(result + 32) = *(_QWORD *)(BugCheckParameter3 + 32);
          *(_DWORD *)(result + 48) = *(_DWORD *)(BugCheckParameter3 + 44);
          *(_DWORD *)(result + 52) = *(_DWORD *)(BugCheckParameter3 + 40);
          *(_QWORD *)(result + 64) = *(_QWORD *)(BugCheckParameter3 + 48);
          v21 = 0LL;
          MetroHash64::Hash(
            (const unsigned __int8 *)(BugCheckParameter3 + 48),
            8 * a2,
            (unsigned __int8 *const)&v21,
            v9);
          *(_DWORD *)(v10 + 60) = v21;
          BackTraceHash = 0;
          memset((void *)(v10 + 72), 0, 0x40uLL);
          if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v10 + 72), &BackTraceHash) )
          {
            *(_QWORD *)(v10 + 80) = retaddr;
            *(_QWORD *)(v10 + 72) = MiGetInstructionPointer();
          }
          *(_DWORD *)(v10 + 56) = a3;
          *(_QWORD *)(v10 + 136) = v3;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 24), &LockHandle);
          v11 = *(_QWORD **)v8;
          v12 = 0;
          if ( *(_QWORD *)v8 )
          {
            while ( 1 )
            {
              if ( BugCheckParameter3 >= v11[3] )
              {
                if ( BugCheckParameter3 <= v11[3] )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v11, BugCheckParameter3, *(_QWORD *)(v8 + 16));
                v13 = (_QWORD *)v11[1];
                if ( !v13 )
                {
                  v12 = 1;
                  break;
                }
              }
              else
              {
                v13 = (_QWORD *)*v11;
                if ( !*v11 )
                  break;
              }
              v11 = v13;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v11, v12, v10);
          *(_QWORD *)(v8 + 16) += a2;
          result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            result = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0
              && (unsigned __int8)result <= 0xFu
              && LockHandle.OldIrql <= 0xFu
              && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v17 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
        }
        else
        {
          *(_DWORD *)(v8 + 32) = 0;
        }
      }
    }
  }
  return result;
}
