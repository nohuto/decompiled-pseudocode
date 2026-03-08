/*
 * XREFs of MiFreePartitionPageRun @ 0x140657734
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x14027AF50 (MiFreeMdlPageRun.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 */

__int64 __fastcall MiFreePartitionPageRun(unsigned __int16 *a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  __int64 i; // rbp
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  if ( a2 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * a2 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    MiFreeMdlPageRun(a2, a3, a4 != 0, 0LL);
    result = (__int64)MiSystemPartition;
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140C69630, -(__int64)a3);
  }
  else
  {
    result = qword_140C67A70;
    v7 = (a2 >> 18) & 0x3FFFFF;
    v8 = a3 >> 18;
    v9 = a4 != 0 ? 2 : 0;
    for ( i = qword_140C67A70 + 8 * v7; v8; --v8 )
    {
      v11 = MiLockHugePfn(i);
      MiInsertHugeRangeInList(0LL, v7, v9);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((i - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((i - qword_140C67A70) >> 3) & 0x1F)));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v11);
      i += 8LL;
      result = (v7 ^ (v7 + 1)) & 0x3FFFFF;
      v7 ^= result;
    }
  }
  return result;
}
