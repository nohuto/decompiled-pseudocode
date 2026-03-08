/*
 * XREFs of MiInsertNewProcess @ 0x1402A5E9C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1408598B8 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v4 = (_QWORD *)qword_140C656A0;
  v5 = a1 + 248;
  if ( *(__int64 **)qword_140C656A0 != &qword_140C65698 )
    goto LABEL_7;
  *v5 = &qword_140C65698;
  a1[249] = v4;
  *v4 = v5;
  qword_140C656A0 = (__int64)(a1 + 248);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a2 + 24);
    v7 = a1 + 148;
    if ( *v6 == a2 + 16 )
    {
      *v7 = a2 + 16;
      a1[149] = v6;
      *v6 = v7;
      *(_QWORD *)(a2 + 24) = v7;
      goto LABEL_5;
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_5:
  result = KxReleaseQueuedSpinLock(&LockHandle);
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
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
