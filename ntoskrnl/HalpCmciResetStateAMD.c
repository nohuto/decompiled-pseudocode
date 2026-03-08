/*
 * XREFs of HalpCmciResetStateAMD @ 0x1405039DC
 * Callers:
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 * Callees:
 *     HalpCmciSetProcessorConfigAMD @ 0x140503AC8 (HalpCmciSetProcessorConfigAMD.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpCmciResetStateAMD(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v4; // r8
  __int64 v5; // r8
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  v5 = a2;
  LOBYTE(a2) = 1;
  HalpCmciSetProcessorConfigAMD(a1, a2, v5);
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
  return result;
}
