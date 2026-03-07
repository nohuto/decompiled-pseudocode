char HalpCmciHandler()
{
  KPCR *Pcr; // rax
  __int64 v1; // rdi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // eax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v16 = 0LL;
  if ( !HalpMcaWheaReady )
    return (char)Pcr;
  Pcr = KeGetPcr();
  v1 = *(_QWORD *)&Pcr->HalReserved[6];
  if ( !v1 )
    return (char)Pcr;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 172);
    if ( *(_QWORD *)(v1 + 16) )
    {
      if ( *(_QWORD *)(v1 + 24) )
        break;
    }
LABEL_28:
    LOBYTE(Pcr) = -72;
    v1 = *(_QWORD *)(v1 + 184);
    if ( !v1 )
      return (char)Pcr;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*(_DWORD *)(v1 + 124);
  if ( PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 112) >= HalpCmciThresholdTime )
  {
    *(LARGE_INTEGER *)(v1 + 112) = PerformanceCounter;
    v4 = 1;
    *(_DWORD *)(v1 + 120) = 1;
  }
  else
  {
    v4 = ++*(_DWORD *)(v1 + 120);
  }
  if ( v4 <= HalpCmciThresholdCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 14 )
        LODWORD(v7) = 0x4000;
      else
        v7 = (-1LL << (CurrentIrql + 1)) & 0x7FFC;
      SchedulerAssist[5] |= v7;
    }
    if ( !*(_BYTE *)(v1 + 128) )
    {
      v8 = *(_QWORD *)(v1 + 24);
      if ( HalpGetCpuVendor() == 1 )
        HalpCmciResetStateAMD(v8, v2);
      KiInsertQueueDpc(v1 + 48, 0LL, 0LL, 0LL, 0);
    }
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    goto LABEL_28;
  }
  LODWORD(Pcr) = _InterlockedIncrement(&HalpCmciRevertToPolledMode);
  if ( (_DWORD)Pcr == 1 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 0x100000020LL;
    *(_QWORD *)&v16 = 0x80000003204C4148uLL;
    *((_QWORD *)&v16 + 1) = 2LL;
    WheaLogInternalEvent(&Src);
    KeIpiGenericCall(HalpDisableCmciOnProcessor, 0LL);
    LOBYTE(Pcr) = KiInsertQueueDpc(v1 + 48, 0LL, 0LL, 0LL, 0);
  }
  return (char)Pcr;
}
