__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared2(_QWORD *BugCheckParameter2, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  ULONG_PTR v8; // rdx
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = v7 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( !ExpFindFastOwnerEntryForThread2((_DWORD)CurrentThread, (_DWORD)BugCheckParameter2, a3, 1) )
    KeBugCheckEx(0xE3u, v8, (ULONG_PTR)CurrentThread, 0LL, 0LL);
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
  if ( (*BugCheckParameter2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL);
  ExpAllocateOwnerEntryForLegacyShim2();
  return ExpConvertFastResourceExclusiveToShared2((__int64)BugCheckParameter2);
}
