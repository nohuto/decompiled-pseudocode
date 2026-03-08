/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x1403C4E10
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1402C3360 (ExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x1403C53E4 (ExpFindFastOwnerEntryForThread.c)
 *     ExIsFastResourceHeldExclusive2 @ 0x14040E7A0 (ExIsFastResourceHeldExclusive2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  char v1; // r10
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v6; // bl
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // si
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  v1 = 0;
  if ( FeatureFastResource2 )
    return ExIsFastResourceHeldExclusive2(BugCheckParameter2);
  v4 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v4 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (v4 & 0x80u) != 0 )
  {
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = 4;
      if ( v6 != 2 )
        v8 = (-1LL << (v6 + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    v9 = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL) != 0;
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && v6 <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    return v9;
  }
  return v1;
}
