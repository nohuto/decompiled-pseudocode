/*
 * XREFs of ExIsFastResourceHeld2 @ 0x14040E5CC
 * Callers:
 *     ExIsFastResourceHeld @ 0x1403C4F80 (ExIsFastResourceHeld.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread2 @ 0x140410518 (ExpFindFastOwnerEntryForThread2.c)
 *     ExpIsFastResourceOwned @ 0x14041057C (ExpIsFastResourceOwned.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExIsFastResourceHeld2(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int CurrentThread; // ebp
  int v3; // ebx
  unsigned __int8 CurrentIrql; // al
  int v5; // r8d
  bool v6; // bl
  __int64 FastOwnerEntryForThread2; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rdi
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int8 v13; // di
  _DWORD *v14; // r9
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf

  CurrentThread = (unsigned int)KeGetCurrentThread();
  v3 = BugCheckParameter2;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !(unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, a2) )
    return 0;
  _disable();
  FastOwnerEntryForThread2 = ExpFindFastOwnerEntryForThread2(CurrentThread, v3, v5, 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = FastOwnerEntryForThread2;
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v11 = *SchedulerAssist;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  if ( !v9 )
    return 0;
  if ( v9 != 1 )
    return 1;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    v14 = KeGetCurrentPrcb()->SchedulerAssist;
    v15 = 4;
    if ( v13 != 2 )
      v15 = (-1LL << (v13 + 1)) & 4;
    LODWORD(SchedulerAssist) = v15 | v14[5];
    v14[5] = (_DWORD)SchedulerAssist;
  }
  v6 = ExpFindFastOwnerEntryForThread2(CurrentThread, v3, (_DWORD)SchedulerAssist, 0) != 0;
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && v13 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(v13);
  return v6;
}
