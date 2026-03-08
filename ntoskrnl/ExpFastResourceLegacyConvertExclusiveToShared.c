/*
 * XREFs of ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403C50F0
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1402DCE90 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x1403C53E4 (ExpFindFastOwnerEntryForThread.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403C5DA8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared2 @ 0x140410128 (ExpFastResourceLegacyConvertExclusiveToShared2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpFastResourceLegacyConvertExclusiveToShared(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  int v8; // eax
  __int64 FastOwnerEntryForThread; // rsi
  unsigned __int8 v10; // r9
  __int64 v11; // r10
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyConvertExclusiveToShared2(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
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
  LOBYTE(SchedulerAssist) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, SchedulerAssist);
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & v10) != 0 && v13 <= v12 && CurrentIrql <= v12 && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(v11 << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( !*(_BYTE *)(FastOwnerEntryForThread + 18)
    || *(_QWORD *)(FastOwnerEntryForThread + 40) != FastOwnerEntryForThread + 40 )
  {
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( *(char *)(BugCheckParameter2 + 26) >= 0 )
    KeBugCheckEx(0x1C6u, 0x16uLL, BugCheckParameter2, (ULONG_PTR)CurrentThread, 0LL);
  return ExpConvertFastResourceExclusiveToShared(BugCheckParameter2, FastOwnerEntryForThread);
}
