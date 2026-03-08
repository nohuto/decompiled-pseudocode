/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1402F7748
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // rsi
  __int64 *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rbp
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // edx
  bool v14; // zf
  int v15; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    v4 = a1 + 128;
    v5 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v6 = *v3;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(v6 + 48) );
      }
      v2 += *(_QWORD *)(v4 + 56);
      if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v4 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      ++v3;
      v4 += 424LL;
      --v5;
    }
    while ( v5 );
  }
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
