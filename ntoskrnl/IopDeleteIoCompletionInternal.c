/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x140292B28
 * Callers:
 *     IopDeleteIoCompletion @ 0x1406F7A80 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1406F7AA0 (IopCloseIoCompletion.c)
 * Callees:
 *     IopFreeWaitCompletionPacket @ 0x14024F500 (IopFreeWaitCompletionPacket.c)
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     IopFreeCompletionListPackets @ 0x1406F7B38 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(KSPIN_LOCK *a1, __int64 a2)
{
  char v2; // bp
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int64 OldIrql; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(&v13, 0, sizeof(v13));
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &v13);
    LOBYTE(a2) = 0;
    *((_BYTE *)a1 + 72) = 1;
  }
  else
  {
    LOBYTE(a2) = 1;
  }
  result = KeRundownQueueEx(a1, a2);
  v5 = result;
  if ( result )
  {
    v7 = (_QWORD *)result;
    **(_QWORD **)(result + 8) = 0LL;
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      *v8 = 0LL;
      if ( *((_BYTE *)v8 + 16) == 2 )
      {
        v9 = v8[1];
        if ( v7 )
          v7[1] = v9;
        else
          *(_QWORD *)(v5 + 8) = v9;
        if ( (_QWORD *)v5 == v8 )
          v5 = (__int64)v7;
        result = IopFreeWaitCompletionPacket(v8, a1);
      }
    }
    while ( v7 );
  }
  if ( v2 )
  {
    result = KxReleaseQueuedSpinLock(&v13);
    OldIrql = v13.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && v13.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v13.OldIrql + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  if ( v5 )
    return IopFreeCompletionListPackets(v5);
  return result;
}
