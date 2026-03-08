/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x14056AB30
 * Callers:
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiResetProcessorTraceBuffer()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v2) = 0x8000;
    else
      v2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v2;
  }
  v3 = __readmsr(0x570u);
  if ( (v3 & 1) != 0 )
  {
    __writemsr(0x570u, v3 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v3);
  }
  if ( KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
