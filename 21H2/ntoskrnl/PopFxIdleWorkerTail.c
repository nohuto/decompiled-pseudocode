/*
 * XREFs of PopFxIdleWorkerTail @ 0x140355534
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     PopFxIdleWorker @ 0x140355424 (PopFxIdleWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x140355350 (PopFxAddRefDevice.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1403556F4 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x140355774 (PopFxCompleteComponentActivation.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1403559B0 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1403559E4 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxDeactivateComponentDependencies @ 0x140355D70 (PopFxDeactivateComponentDependencies.c)
 *     PopPluginComponentActive @ 0x140356350 (PopPluginComponentActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // r9
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  __int64 result; // rax
  unsigned __int64 v15; // rbp
  _DWORD *v16; // r8
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax

  v6 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) > 0 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL, 0LL);
    *(_BYTE *)(v6 + 208) = v9;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(BugCheckParameter2 + 63, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v11 = *(_DWORD *)(v6 + 88);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v11, v11);
  }
  while ( v12 != v11 );
  if ( v11 == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v10, a3) == 1 )
      PopFxProcessWork(0LL, a3, v13);
    PopFxDeactivateComponentDependencies(v6);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) > 0 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v16 = v24->SchedulerAssist;
          v22 = (v25 & v16[5]) == 0;
          v16[5] &= v25;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v15);
    LOBYTE(v16) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v16);
    v17 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[14];
    if ( v17 )
      v17(BugCheckParameter2[24], a2);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
