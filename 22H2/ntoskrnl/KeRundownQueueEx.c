/*
 * XREFs of KeRundownQueueEx @ 0x140302618
 * Callers:
 *     KeRundownQueue @ 0x140302490 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1403024A8 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x1408BD738 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x1403026FC (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140302B34 (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rax
  __int64 v8; // rdi
  _QWORD *v10; // rcx

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  v7 = (_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 == a1 + 24 )
  {
    v8 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v10 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v8 + 8) != v7 || (_QWORD *)*v10 != v7 )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v7 = v7;
  }
  KeRundownQueueCommon(a1, a1 + 48, a1 + 40, 1, v4);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v4 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
  return v8;
}
