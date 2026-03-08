/*
 * XREFs of IopIoRingSetupCompletionWait @ 0x140557278
 * Callers:
 *     NtSubmitIoRing @ 0x1405575D0 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x140947008 (IopProcessIoRingEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopIoRingSetupCompletionWait(__int64 a1, unsigned int a2, unsigned int a3, char a4, _BYTE *a5)
{
  unsigned int v6; // ebx
  unsigned int v9; // edi
  KIRQL v10; // al
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  unsigned int v13; // r8d
  unsigned __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf

  v6 = a3;
  *a5 = 0;
  if ( a3 != -1 && a3 > *(_DWORD *)(a1 + 28) )
    return 3221225713LL;
  v9 = 0;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v11 = *(_QWORD *)(a1 + 120);
  v12 = v10;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL) - **(_DWORD **)(a1 + 80);
  v14 = *(_QWORD *)(a1 + 112) - v11 + v13 + a2;
  if ( v14 > *(unsigned int *)(a1 + 28) )
  {
    v9 = -1069154296;
    goto LABEL_13;
  }
  if ( v6 == -1 )
    goto LABEL_10;
  if ( v6 <= (unsigned int)v14 )
    goto LABEL_11;
  if ( a4 )
  {
LABEL_10:
    v6 = *(_DWORD *)(a1 + 112) - v11 + v13 + a2;
LABEL_11:
    if ( v6 > v13 )
    {
      *(_BYTE *)(a1 + 160) = 1;
      *(_QWORD *)(a1 + 128) = v11 + v6 - v13;
      *a5 = 1;
    }
    goto LABEL_13;
  }
  v9 = -1073741583;
LABEL_13:
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  return v9;
}
