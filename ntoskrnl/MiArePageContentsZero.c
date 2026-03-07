__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rbp
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  __int64 result; // rax

  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v8 = *(unsigned __int8 *)(v4 + 34) >> 6;
    if ( v8 == 3 )
    {
      a2 = 0LL;
    }
    else if ( v8 != 1 && a2 > 0x10 )
    {
      a2 = 16LL;
    }
    while ( a2 )
    {
      if ( (*(_BYTE *)(v4 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v4) )
      {
        v9 = MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
        if ( KeCheckForZeroPage(v9) )
          MiPageNotZero(v9, v3);
        MiUnmapPageInHyperSpaceWorker(v9, 0x11u);
      }
      v4 += 48LL;
      ++v3;
      if ( (--a2 & 0x3F) == 0 && KeShouldYieldProcessor() )
      {
        if ( CurrentIrql == 2 )
          break;
        if ( KiIrqlFlags )
        {
          v10 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        goto LABEL_2;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
