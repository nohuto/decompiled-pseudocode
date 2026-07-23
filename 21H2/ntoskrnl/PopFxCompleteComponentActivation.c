/*
 * XREFs of PopFxCompleteComponentActivation @ 0x1402825D4
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140281BAC (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x140282390 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopFxIdleComponent @ 0x1402826C0 (PopFxIdleComponent.c)
 *     PopPluginComponentActive @ 0x140282E50 (PopPluginComponentActive.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 i; // rbp
  LONG result; // eax
  __int64 v8; // rax
  bool v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  KIRQL v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  bool v15; // zf
  __int64 v16; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  unsigned int v21; // [rsp+60h] [rbp+18h]

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 188); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(a2 + 192);
      v9 = 0;
      v10 = *(unsigned int *)(v8 + 8 * i + 4);
      v21 = *(_DWORD *)(v8 + 8 * i);
      v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * v21);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 128));
      v13 = *(_QWORD *)(v11 + 176);
      v14 = v12;
      if ( *(_BYTE *)(v13 + 8 * v10 + 4) == 1 )
      {
        *(_BYTE *)(v13 + 8 * v10 + 4) = 0;
        v15 = (*(_DWORD *)(v11 + 184))-- == 1;
        v9 = v15;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 128));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v15 = (v20 & SchedulerAssist[5]) == 0;
            v16 = (unsigned int)v20 & SchedulerAssist[5];
            SchedulerAssist[5] = v16;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      if ( v9 )
      {
        LOBYTE(v16) = 1;
        PopPluginComponentActive(BugCheckParameter2, v21, v16, 0LL);
      }
    }
  }
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
