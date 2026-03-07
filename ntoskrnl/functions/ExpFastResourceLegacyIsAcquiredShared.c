__int64 __fastcall ExpFastResourceLegacyIsAcquiredShared(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  __int64 *FastOwnerEntryForThread; // rax
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 *v10; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyIsAcquiredShared2(a1, a2);
  if ( *(_DWORD *)(a1 + 64) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v6 = 4;
      if ( CurrentIrql != 2 )
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v6;
    }
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread((__int64)KeGetCurrentThread(), a1, 0, 0);
    if ( FastOwnerEntryForThread )
    {
      v9 = FastOwnerEntryForThread + 5;
      v3 = 1;
      v10 = (__int64 *)FastOwnerEntryForThread[5];
      while ( v10 != v9 )
      {
        v10 = (__int64 *)*v10;
        ++v3;
      }
    }
    else
    {
      v3 = 0;
    }
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(v8 << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    return 0;
  }
  return v3;
}
