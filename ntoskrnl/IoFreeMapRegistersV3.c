/*
 * XREFs of IoFreeMapRegistersV3 @ 0x14050DE60
 * Callers:
 *     IoFreeMapRegistersThunk @ 0x1404FF0F4 (IoFreeMapRegistersThunk.c)
 *     HalPutScatterGatherListV3 @ 0x14050CE18 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14050DDE4 (IoFreeAdapterChannelV3Internal.c)
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x140453EF6 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14050DA08 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IoFreeMapRegistersV3(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r14
  char v5; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r11
  int v8; // eax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 && a2 )
  {
    v5 = 0;
    CurrentIrql = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v8 = 4;
        if ( CurrentIrql != 2 )
          v8 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v8;
      }
      v5 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(a1, a2, a3);
    HalpDmaProcessMapRegisterQueueV3(v3, *(_BYTE *)(a1 + 442));
    if ( v5 )
    {
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
    }
  }
}
