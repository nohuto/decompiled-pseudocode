/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x140204A14
 * Callers:
 *     PspJobIoRateControlDisable @ 0x1405D9EA0 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PspIoRateEntryVolumeDelete @ 0x1405822F0 (PspIoRateEntryVolumeDelete.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  char v8; // al
  int v9; // esi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v2 = (volatile LONG *)(a1 + 1456);
  v4 = a1 + 1464;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1456));
  v6 = *(_QWORD *)v4;
  v7 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  v8 = *(_BYTE *)(v4 + 8);
  v9 = v8 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v10 = (_QWORD *)v6;
          if ( v9 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v6 + 8);
        if ( !v11 )
          break;
        v12 = v6;
        if ( v9 )
          v6 ^= v11;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v6;
      PspIoRateEntryVolumeDelete(v6, a2);
      if ( !v13 )
        break;
      v6 = v13;
    }
    v8 = *(_BYTE *)(v4 + 8);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
