/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x14033FBD0
 * Callers:
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14035538C (KiTryUnwaitThreadWithPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, _BYTE *a2, int a3)
{
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  char v8; // al
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *v10; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8

  v5 = 0;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *a2 < *(_BYTE *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 871) )
      {
        v10 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-35696LL )
          {
            v10->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v10;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = *a2;
    v5 = *(_DWORD *)a2;
  }
  v8 = *(_BYTE *)(a1 + 564);
  if ( !v8 )
    return v5;
  if ( (v8 & 0xF) != 0 )
    *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
  if ( a3 )
  {
    result = *(char *)(a1 + 195) - (*(_BYTE *)(a1 + 564) & 0xFu);
    *(_BYTE *)(a1 + 564) &= 0xF0u;
  }
  else
  {
    *(_BYTE *)(a1 + 564) = 0;
    return v5;
  }
  return result;
}
