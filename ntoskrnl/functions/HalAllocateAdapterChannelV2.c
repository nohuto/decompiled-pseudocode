__int64 __fastcall HalAllocateAdapterChannelV2(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, __int64, _QWORD))
{
  char v4; // r12
  char v5; // r15
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 MapRegisters; // rax
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax

  *(_DWORD *)(a2 + 20) &= ~4u;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(a2 + 24) = a4;
  CurrentIrql = 0;
  *(_DWORD *)(a2 + 40) = a3;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = 4;
      if ( CurrentIrql != 2 )
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v12;
    }
    v5 = 1;
  }
  if ( !KeInsertDeviceQueue((PKDEVICE_QUEUE)(a1 + 184), (PKDEVICE_QUEUE_ENTRY)a2) )
  {
    *(_DWORD *)(a1 + 248) = a3;
    *(_QWORD *)(a1 + 352) = a2;
    if ( a3 && (*(_BYTE *)(a1 + 440) || !*(_BYTE *)(a1 + 445)) )
    {
      if ( a3 > *(_DWORD *)(a1 + 232) )
      {
        *(_DWORD *)(a1 + 248) = 0;
        IoFreeAdapterChannelV2(a1);
        if ( v5 )
        {
          if ( KiIrqlFlags )
          {
            v13 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v15 = CurrentPrcb->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v16 & v15[5]) == 0;
              v15[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
        }
        return 3221225626LL;
      }
      MapRegisters = HalpDmaAllocateMapRegisters(a1, a3);
      *(_QWORD *)(a1 + 240) = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(a1);
        v4 = 1;
        HalpQueueMapBufferWorker(a1, a3);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 248) = 0;
    }
    if ( *(_QWORD *)(a1 + 432) )
      (*(void (**)(void))(DmaDispatch + 32))();
    if ( !v4 )
    {
      v20 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 352) = a2;
      v21 = a4(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), v20, *(_QWORD *)(a2 + 32));
      if ( v21 == 2 )
      {
LABEL_33:
        IoFreeAdapterChannelV2(a1);
        goto LABEL_34;
      }
      if ( v21 == 3 )
      {
        *(_DWORD *)(a1 + 248) = 0;
        goto LABEL_33;
      }
    }
  }
LABEL_34:
  if ( v5 )
  {
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
