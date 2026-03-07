__int64 __fastcall MiStackTheftFreezeProcessors(ULONG_PTR Context)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax

  v2 = 48LL * *(_QWORD *)(Context + 8) - 0x220000000000LL;
  MiLockNestedPageAtDpcInline(v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v5) = 4096;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v5;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(Context + 68) = ActiveProcessorCount;
  *(_DWORD *)(Context + 64) = ActiveProcessorCount;
  KeIpiGenericCall(MiStackTheftIsr, Context);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
