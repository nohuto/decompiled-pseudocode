/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404FF9C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404551EE (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14050DA08 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409315C0 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409316C4 (HalpDmaGrowScatterMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(PVOID P)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // r9d
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r10
  int v8; // eax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v2 = *((_QWORD *)P + 4);
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    HalpDmaGrowScatterMapBuffers(v2, v3);
  else
    HalpDmaGrowContiguousMapBuffers(v2, v3);
  v5 = 4;
  *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + (-(__int64)(*((_BYTE *)P + 40) != 0) & 4)) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
    {
      v4 = -1LL << (CurrentIrql + 1);
      v5 = v4 & 4;
    }
    SchedulerAssist[5] |= v5;
  }
  v8 = *((_DWORD *)P + 12);
  if ( v8 == 2 )
  {
    HalpDmaProcessMapRegisterQueueV2(v2, *((_BYTE *)P + 40));
  }
  else if ( v8 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV3(v2, v4);
  }
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
  ExFreePoolWithTag(P, 0);
}
