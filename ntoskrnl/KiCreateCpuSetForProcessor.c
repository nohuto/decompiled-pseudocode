/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x140A89FC8
 * Callers:
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x140B3AC30 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x14037E0E0 (RtlWriteReleaseTickLock.c)
 *     RtlWriteAcquireTickLock @ 0x1403BB750 (RtlWriteAcquireTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_UNKNOWN **__fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 *v9; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v11) = 4;
      if ( CurrentIrql != 2 )
        v11 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v11;
    }
    v4 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v5 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v4];
    v6 = (unsigned int)v4;
    v7 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v8 = (unsigned int)(v5 + ((_DWORD)v4 << 6));
    *((_QWORD *)KiCpuSetAffinities + v8) = v7;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v8) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[2 * (unsigned int)v6] |= 1LL << v5;
    KiNonParkedCpuSets[v6] |= 1LL << v5;
    v9 = &PsInitialSystemProcess[2].Affinity.StaticBitmap[16];
    if ( (HIDWORD(PsInitialSystemProcess[2].Header.WaitListHead.Flink) & 0x80u) != 0 )
      v9 = (unsigned __int64 *)*v9;
    v9[v6] |= 1LL << v5;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
