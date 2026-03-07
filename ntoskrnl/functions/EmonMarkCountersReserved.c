__int64 __fastcall EmonMarkCountersReserved(__int64 a1)
{
  unsigned int Number; // r11d
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int HalCounters; // ebx
  __int64 v10; // r9
  __int64 v11; // r11
  char v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int64 v23; // rdx
  char v24; // r8
  __int64 v25; // rax

  Number = KeGetPcr()->Prcb.Number;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 8);
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v4 = HalpCounterStatus;
  else
    v4 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  HalCounters = HalpAllocateHalCounters();
  if ( HalCounters >= 0 )
  {
    while ( 1 )
    {
      v16 = !_BitScanForward64((unsigned __int64 *)&v13, v8);
      if ( v16 )
        break;
      v12 = v13;
      if ( (unsigned int)v13 >= 0x20 )
        v13 = (unsigned int)(v13 + EmonNumberArchCounters - 32);
      v14 = (unsigned int)v13;
      v15 = *(_QWORD *)(v4 + 8 * v13);
      if ( *(_DWORD *)(v15 + 24) != 3 )
      {
        v23 = *(_QWORD *)(v10 + 16) ^ v8;
        HalCounters = -1073741670;
        if ( v23 )
        {
          while ( 1 )
          {
            v16 = !_BitScanForward64((unsigned __int64 *)&v25, v23);
            if ( v16 )
              break;
            v24 = v25;
            if ( (unsigned int)v25 >= 0x20 )
              v25 = (unsigned int)(v25 + EmonNumberArchCounters - 32);
            v23 ^= 1LL << v24;
            *(_DWORD *)(*(_QWORD *)(v4 + 8 * v25) + 24LL) = 3;
          }
        }
        goto LABEL_20;
      }
      *(_DWORD *)(v15 + 24) = 2;
      v8 ^= 1LL << v12;
      *(_BYTE *)(*(_QWORD *)(v4 + 8 * v14) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v4 + 8 * v14) + 28LL) = *(_DWORD *)v10;
    }
    v17 = 10 * v11;
    *(_QWORD *)(v3 + 8 * v17 + 32) = *(_QWORD *)(v10 + 16);
    *(_BYTE *)(v3 + 8 * v17 + 40) = 1;
    if ( v2 )
    {
      HalCounters = EmonConfigurePebsBuffer(v11, *(_DWORD *)(v2 + 12));
      if ( HalCounters < 0 )
LABEL_20:
        _InterlockedExchangeAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2], 0xFFFFFFFE);
    }
  }
  else
  {
    HalCounters = -1073741670;
  }
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return (unsigned int)HalCounters;
}
