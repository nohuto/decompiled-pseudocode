/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x140293F0C
 * Callers:
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     IopCopyCompleteReadRequest @ 0x1402F9BA0 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1405570DC (IopIoRingCompleteIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v2 = (volatile signed __int64 *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = (_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(v7 + 8) != a1 + 32 || (_QWORD *)*v8 != v5 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v5 = v5;
  ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  result = KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
