/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1402AF0A0
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 * Callees:
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402AEFF0 (PoCopyDeepIdleMask.c)
 *     KiComplementAffinityEx @ 0x1402AF184 (KiComplementAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int16 *v5; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v14, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  PoCopyDeepIdleMask(a1);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(a2, *(unsigned __int16 *)(a2 + 2), a1);
  return KiAndAffinityEx(v5, (unsigned __int16 *)KeActiveProcessors, (_BYTE *)a2, *(_WORD *)(a2 + 2));
}
