/*
 * XREFs of KeAlertResumeThread @ 0x14056C6FC
 * Callers:
 *     NtAlertResumeThread @ 0x1409B2E40 (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x140354130 (KeResumeThread.c)
 *     KeAlertThread @ 0x140354F40 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  unsigned int v5; // esi
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = 4;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  KeAlertThread(a1, 0);
  v5 = KeResumeThread(a1, 1u);
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
