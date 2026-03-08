/*
 * XREFs of ExpFastResourceLegacyRelease2 @ 0x1404103B8
 * Callers:
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 * Callees:
 *     ExReleaseFastResource2 @ 0x14040EBEC (ExReleaseFastResource2.c)
 *     ExpFindFastOwnerEntryForThread2 @ 0x140410518 (ExpFindFastOwnerEntryForThread2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease2(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  __int64 FastOwnerEntryForThread2; // rax
  ULONG_PTR v9; // rdx
  _BYTE *v10; // rbx
  char v11; // al
  char v12; // si
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

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
  FastOwnerEntryForThread2 = ExpFindFastOwnerEntryForThread2((_DWORD)CurrentThread, BugCheckParameter2, a3, 1);
  v10 = (_BYTE *)FastOwnerEntryForThread2;
  if ( !FastOwnerEntryForThread2 )
    KeBugCheckEx(0xE3u, v9, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  v11 = *(_BYTE *)(FastOwnerEntryForThread2 + 37);
  if ( (v11 & 2) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    v10[37] = v11 & 0xFE;
  }
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource2(BugCheckParameter2, (ULONG_PTR)v10);
  if ( v12 )
    ExFreePoolWithTag(v10, 0);
}
