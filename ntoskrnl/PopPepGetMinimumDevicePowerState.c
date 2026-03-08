/*
 * XREFs of PopPepGetMinimumDevicePowerState @ 0x14059CC00
 * Callers:
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059D9D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409818B0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetMinimumDevicePowerState(__int64 a1, char a2, char a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // si
  int v7; // r14d
  KIRQL CurrentIrql; // bl
  unsigned int v11; // ecx
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  _DWORD *v14; // rdx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf

  v6 = 0;
  v7 = 1 << a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( a3 )
    CurrentIrql = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v11 = 0;
    v12 = (_DWORD *)(a1 + 144);
    do
    {
      if ( (v7 & *v12) == 0 )
        break;
      ++v11;
      ++v12;
    }
    while ( v11 < 3 );
    *a4 = v11 + 1;
    if ( a5 )
    {
      v13 = 0;
      v14 = (_DWORD *)(a1 + 156);
      do
      {
        if ( (v7 & *v14) == 0 )
          break;
        ++v13;
        ++v14;
      }
      while ( v13 < 3 );
      *a5 = v13 + 1;
    }
    v6 = 1;
  }
  if ( a3 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
