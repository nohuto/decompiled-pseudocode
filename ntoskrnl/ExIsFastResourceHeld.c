char __fastcall ExIsFastResourceHeld(ULONG_PTR BugCheckParameter2)
{
  char v1; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v4; // bl
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // si
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  v1 = 0;
  if ( FeatureFastResource2 )
    return ExIsFastResourceHeld2(BugCheckParameter2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    v4 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v4 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v6 = 4;
      if ( v4 != 2 )
        v6 = (-1LL << (v4 + 1)) & 4;
      SchedulerAssist[5] |= v6;
    }
    v7 = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL) != 0;
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && v4 <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    return v7;
  }
  return v1;
}
