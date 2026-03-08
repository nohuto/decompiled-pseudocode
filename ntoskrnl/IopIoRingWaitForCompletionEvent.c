/*
 * XREFs of IopIoRingWaitForCompletionEvent @ 0x1405574BC
 * Callers:
 *     NtSubmitIoRing @ 0x1405575D0 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x140947008 (IopProcessIoRingEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopIoRingWaitForCompletionEvent(__int64 a1, KPROCESSOR_MODE a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  void *v4; // r15
  unsigned int v6; // esi
  char v7; // bp
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v4 = (void *)(a1 + 136);
  v6 = KeWaitForSingleObject((PVOID)(a1 + 136), WrIoRing, a2, a3, a4);
  if ( v6 )
  {
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    if ( *(_BYTE *)(a1 + 160) )
      *(_BYTE *)(a1 + 160) = 0;
    else
      v7 = 1;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( v7 )
      return (unsigned int)KeWaitForSingleObject(v4, WrIoRing, 0, 0, 0LL);
  }
  return v6;
}
