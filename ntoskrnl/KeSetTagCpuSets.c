/*
 * XREFs of KeSetTagCpuSets @ 0x140573EE8
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiValidateCpuSetMasks @ 0x140399340 (KiValidateCpuSetMasks.c)
 *     RtlWriteAcquireTickLock @ 0x1403BB750 (RtlWriteAcquireTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = 4;
      if ( CurrentIrql != 2 )
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; *(_QWORD *)(KiCpuSetData + 16LL * ((i << 6) + (unsigned int)v12) + 8) = a3 )
      {
        _BitScanForward64(&v12, j);
        j &= ~(1LL << v12);
      }
      ++i;
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
