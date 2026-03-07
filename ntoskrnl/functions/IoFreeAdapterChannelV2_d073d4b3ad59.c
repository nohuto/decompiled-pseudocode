__int64 __fastcall IoFreeAdapterChannelV2(__int64 a1)
{
  char v1; // r14
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 MapRegisters; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r8

  v1 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v5 = 4;
      if ( CurrentIrql != 2 )
        v5 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v5;
    }
    v1 = 1;
  }
  while ( 1 )
  {
    v6 = *(unsigned int *)(a1 + 248);
    if ( (_DWORD)v6 )
      IoFreeMapRegistersV2(a1, *(_QWORD *)(a1 + 240), v6);
    result = (__int64)KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 184));
    v8 = result;
    if ( !result )
      break;
    *(_QWORD *)(a1 + 352) = result;
    *(_DWORD *)(a1 + 248) = *(_DWORD *)(result + 40);
    v9 = *(_DWORD *)(result + 40);
    if ( v9 && *(_QWORD *)(a1 + 160) )
    {
      MapRegisters = HalpDmaAllocateMapRegisters(a1, v9);
      *(_QWORD *)(a1 + 240) = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(a1);
        result = HalpQueueMapBufferWorker(a1, *(unsigned int *)(v8 + 40));
        break;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 248) = 0;
    }
    v16 = *(_QWORD *)(a1 + 240);
    *(_QWORD *)(a1 + 352) = v8;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v8 + 24))(
               *(_QWORD *)(v8 + 48),
               *(_QWORD *)(v8 + 56),
               v16,
               *(_QWORD *)(v8 + 32));
    if ( (_DWORD)result == 1 )
      break;
    if ( (_DWORD)result == 3 )
      *(_DWORD *)(a1 + 248) = 0;
  }
  if ( v1 )
  {
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
