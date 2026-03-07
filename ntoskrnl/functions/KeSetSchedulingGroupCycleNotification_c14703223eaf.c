void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  __int64 *v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // r14
  __int64 v11; // rsi
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = 4;
      if ( CurrentIrql != 2 )
      {
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
        a2 = v18;
      }
      SchedulerAssist[5] |= v7;
    }
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v8 = KiProcessorBlock;
      v9 = (unsigned int)KeNumberProcessors_0;
      v10 = (_QWORD *)(a1 + 128);
      do
      {
        v11 = *v8;
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v17);
          while ( *(_QWORD *)(v11 + 48) );
        }
        v10[5] = *v10;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
        ++v8;
        v10 += 53;
        --v9;
      }
      while ( v9 );
      a2 = v18;
    }
    *(_QWORD *)(a1 + 72) = a2;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
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
    __writecr8(CurrentIrql);
  }
}
