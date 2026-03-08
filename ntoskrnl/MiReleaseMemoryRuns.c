/*
 * XREFs of MiReleaseMemoryRuns @ 0x14061FEB0
 * Callers:
 *     MmAllocateMemoryRanges @ 0x140A2B5D0 (MmAllocateMemoryRanges.c)
 *     MmFreeMemoryRanges @ 0x140A2B7D0 (MmFreeMemoryRanges.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x14061E808 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 */

void __fastcall MiReleaseMemoryRuns(ULONG_PTR a1, __int64 *a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r12
  int v6; // r9d
  ULONG_PTR v8; // r10
  unsigned __int64 v9; // r8
  _QWORD *v10; // r15
  __int64 v11; // rbp
  char v12; // di
  __int64 v13; // r11
  unsigned __int64 v14; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  v3 = *a2;
  v4 = 0LL;
  v5 = (_QWORD *)a2[2];
  v6 = a3;
  v8 = a1;
  if ( *a2 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      v4 ^= (v4 ^ (*v5 / v9)) & 0x3FFFFF;
      v10 = (_QWORD *)(qword_140C67A70 + 8 * (v4 & 0x3FFFFF));
      v11 = *v5 % v9 + 1;
      do
      {
        --v11;
        v12 = 0;
        if ( v6 )
        {
          if ( (*(_BYTE *)v10 & 7) != 3 )
            KeBugCheckEx(0x1Au, 0x30000004uLL, a1, v4 & 0x3FFFFF, *a2 - v3);
        }
        else
        {
          MiHugePfnPartition(v10);
          if ( (*(_DWORD *)(qword_140C67A70 + 8 * (v13 & v4)) & 0x10000) == 0 )
            v12 = 2;
        }
        v14 = MiLockHugePfn((__int64)v10);
        MiInsertHugeRangeInList(0LL, v4, v12);
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78
                                    + 4 * (((((__int64)v10 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((((__int64)v10 - qword_140C67A70) >> 3) & 0x1F)));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v19 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v14);
        v6 = a3;
        ++v10;
        v4 ^= (v4 ^ (v4 + 1)) & 0x3FFFFF;
      }
      while ( v11 );
      ++v5;
      if ( !--v3 )
        break;
      v8 = a1;
    }
  }
  *a2 = 0LL;
}
