/*
 * XREFs of KeQueryPrimaryGroupAffinityThread @ 0x14056C854
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = 4;
    if ( CurrentIrql != 2 )
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 584);
  v7 = *(_WORD **)(a1 + 576);
  v8 = *(unsigned __int16 *)(a1 + 584);
  if ( (unsigned __int16)v8 >= *v7 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v7[4 * v8 + 4];
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a1 + 64) = 0LL;
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
