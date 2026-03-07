__int64 __fastcall IommuDevicePowerChange(__int64 a1, __int64 a2, char a3)
{
  char v4; // r14
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 256LL))(
      *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL),
      *(_QWORD *)(a2 + 48),
      *(unsigned int *)(a2 + 60));
    _InterlockedExchange64((volatile __int64 *)(a2 + 64), 0LL);
  }
  else
  {
    v4 = 0;
    CurrentIrql = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      v4 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v7 = 4;
          if ( CurrentIrql != 2 )
            v7 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v7;
        }
      }
    }
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 64));
    if ( v4 )
    {
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
      __writecr8(CurrentIrql);
    }
    ExRundownCompleted((PEX_RUNDOWN_REF)(a2 + 64));
  }
  return 0LL;
}
