/*
 * XREFs of PspJobIoRateQueryHistory @ 0x140274C98
 * Callers:
 *     PspQueryRateControlHistory @ 0x14067FA3C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  volatile LONG *v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  unsigned __int64 v15; // rdi
  int v16; // edx
  int v17; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf

  if ( !*(_QWORD *)(a1 + 1440) )
  {
    v8 = a1 + 1464;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( !v9 )
        return (unsigned int)-1073741275;
      v9 ^= v8;
    }
    if ( !v9 )
      return (unsigned int)-1073741275;
  }
  v12 = (volatile LONG *)(a1 + 1456);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1456));
  v14 = *(_DWORD *)(a1 + 1496);
  v15 = v13;
  if ( v14 )
  {
    v16 = *(_DWORD *)(a1 + 1488);
    *a2 = *(_QWORD *)(a1 + 1480);
    v17 = v16 - *(_DWORD *)(a1 + 1492);
    *(_DWORD *)(a1 + 1492) = v16;
    v10 = 0;
    *a4 = v17;
    *a3 = v14;
  }
  else
  {
    v10 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return v10;
}
