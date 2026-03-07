__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _WORD *v3; // r15
  _WORD *v4; // r12
  _BYTE *v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v14) = 4;
    if ( CurrentIrql != 2 )
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v3 = (_WORD *)(a1 + 40632);
  v4 = (_WORD *)(a1 + 40632);
  v5 = (_BYTE *)(KiCpuSetData
               + 16 * (*(unsigned __int8 *)(a1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6)));
  *v5 = *(_BYTE *)(a1 + 208);
  v5[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v6, *(_QWORD *)(a1 + 34912));
  v7 = 0LL;
  v5[2] = v6;
  v8 = 5LL;
  do
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(v4) )
    {
      v9 = *(unsigned __int8 *)(a1 + 208);
      if ( (unsigned __int16)v9 >= *v3 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)&v3[4 * v9 + 4];
    }
    v4 += 132;
    v3 += 132;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    _BitScanForward64(&v10, v7);
    v5[3] = v10;
  }
  _BitScanForward64(&v11, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL));
  v5[4] = v11;
  v5[5] = KiGetProcessorEfficiencyClass(a1);
  v5[6] = *(_BYTE *)(a1 + 34057);
  ++KiCpuSetSequence;
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
