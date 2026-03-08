/*
 * XREFs of HalpMceInitProcessor @ 0x140A87C98
 * Callers:
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpMceInitializeErrorPacket @ 0x140A87D2C (HalpMceInitializeErrorPacket.c)
 *     HalpMcaSetProcessorConfig @ 0x140A87E04 (HalpMcaSetProcessorConfig.c)
 */

__int64 __fastcall HalpMceInitProcessor(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  if ( HalpMcaEnabled )
    HalpMceInitializeErrorPacket();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  HalpMcaSetProcessorConfig(a1, a2);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
