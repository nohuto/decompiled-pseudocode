/*
 * XREFs of IopQueueIrpToFileObject @ 0x140315880
 * Callers:
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140457E30 (KiAcquireSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v4; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_SystemAffinityTokenListHead; // rbp
  signed __int64 v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // r8
  _DWORD *SchedulerAssist; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v20) = 4;
    else
      v20 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v20;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 || a3 && !*(_QWORD *)(a2 + 176) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)v4);
    if ( KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v8 = (__int64 *)(a2 + 192);
    v9 = (_QWORD *)(a1 + 32);
    v10 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 40) = v8;
    *v9 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    *v8 = (__int64)v9;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].ExtendedFeatureDisableMask);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    p_SystemAffinityTokenListHead = (volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    v15 = _InterlockedIncrement64(p_SystemAffinityTokenListHead);
    if ( v15 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_SystemAffinityTokenListHead + 6), 0x10uLL, v15);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v16 = *(_QWORD *)(a1 + 88);
    do
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v16 & 0xFFFFFFFFFFFFFFF9uLL | ((v16 & 6) + 2),
              v16);
    }
    while ( v17 != v16 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    if ( KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
