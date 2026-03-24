/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x140310E44
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140617BCC (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // r14
  _DWORD *v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // edx
  bool v22; // zf
  int v23; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v5 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = a1 + 128;
    v8 = (unsigned int)KeNumberProcessors_0;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 0;
      v10 = *v6;
      while ( 1 )
      {
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v11[6];
            v11[6] = v15 + 1;
            if ( v15 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
          break;
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v14[6] - 1;
            v14[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v23, a2, a3, (__int64)SchedulerAssist);
        while ( *(_QWORD *)(v10 + 48) );
      }
      v5 += *(_QWORD *)(v7 + 56);
      if ( (*(_BYTE *)(v7 + 112) & 1) != 0 )
        v5 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v7 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v12 = KeGetCurrentPrcb();
      a2 = (__int64)v12->SchedulerAssist;
      if ( a2 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v17 = *(_DWORD *)(a2 + 24) - 1;
          *(_DWORD *)(a2 + 24) = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      ++v6;
      v7 += 424LL;
      --v8;
    }
    while ( v8 );
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
