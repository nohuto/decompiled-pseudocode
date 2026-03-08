/*
 * XREFs of KeQueryUserAffinityThread @ 0x140301774
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryUserAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v7) = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiCopyAffinityEx(a2, *(_WORD *)(a2 + 2), *(unsigned __int16 **)(a1 + 552));
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
