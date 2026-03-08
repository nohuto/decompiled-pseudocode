/*
 * XREFs of MiGetControlAreaPtes @ 0x140331C60
 * Callers:
 *     MiOffsetToProtos @ 0x140331B90 (MiOffsetToProtos.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpTryAcquireSpinLockShared @ 0x140321970 (ExpTryAcquireSpinLockShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 i; // r8
  unsigned __int64 v8; // rbx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v17; // r9
  int v18; // edx
  bool v19; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v10 = 0LL;
      v11 = a1 + 128;
      if ( a1 != -128 )
      {
        do
        {
          v12 = *(unsigned int *)(v11 + 44);
          v11 = *(_QWORD *)(v11 + 16);
          v10 += v12;
        }
        while ( v11 );
      }
      return v10;
    }
    else
    {
      return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
    }
  }
  else
  {
    v3 = (volatile signed __int32 *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v14) = 4;
      else
        v14 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v14;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3, CurrentIrql);
    }
    else if ( !ExpTryAcquireSpinLockShared(v3) )
    {
      ExpWaitForSpinLockSharedAndAcquire(v5, CurrentIrql);
    }
    v6 = *(_QWORD *)(a1 + 280);
    for ( i = 0LL; v6; v6 = *(_QWORD *)(v6 + 8) )
      i = v6;
    v8 = (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26))
       + *(unsigned int *)(i - 12)
       - (unsigned __int64)(*(_DWORD *)(i - 4) & 0x3FFFFFFF);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
    }
    else
    {
      _InterlockedAnd(v3, 0xBFFFFFFF);
      _InterlockedDecrement(v3);
    }
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
    __writecr8(CurrentIrql);
    return v8;
  }
}
