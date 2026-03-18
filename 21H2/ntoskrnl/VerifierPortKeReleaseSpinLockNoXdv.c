/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140A96730
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 */

void __fastcall VerifierPortKeReleaseSpinLockNoXdv(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  char *v3; // rdi
  PKSPIN_LOCK v4; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v8; // eax
  bool v9; // zf

  v2 = a2;
  v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  ViKeIrqlLogCommon((__int64)v3, 1u);
}
