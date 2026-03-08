/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1402F8100
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  v1 = *(_DWORD *)(a1 + 13144);
  result = v1 | *(_DWORD *)(a1 + 13192);
  if ( v1 | *(_DWORD *)(a1 + 13192) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v5 = 4;
      if ( CurrentIrql != 2 )
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v5;
    }
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
