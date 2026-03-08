/*
 * XREFs of KeRundownQueueEx @ 0x140292C14
 * Callers:
 *     KeRundownQueue @ 0x1402919B0 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x140292B28 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x140693BC0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x140292D44 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14029319C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  _QWORD *v10; // rcx
  char v11; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  KiAcquireKobjectLockSafe(a1);
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a1 + 24 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v10 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v10 != v5 )
      __fastfail(3u);
    *v10 = v6;
    *(_QWORD *)(v6 + 8) = v10;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v5 = v5;
  }
  v11 = a2;
  KeRundownQueueCommon(a1, a1 + 48, a1 + 40, 1, v11);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v6;
}
