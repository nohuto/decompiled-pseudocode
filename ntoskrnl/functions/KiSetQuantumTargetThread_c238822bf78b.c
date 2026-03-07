__int64 __fastcall KiSetQuantumTargetThread(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int FrequencyBucket; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v22; // r9
  unsigned __int64 *v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rax

  if ( !a3 || *(_BYTE *)(a2 + 32) )
  {
    v7 = *(_QWORD *)(a1 + 72);
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 32) = 1;
    v5 = __rdtsc();
    v6 = v5 - *(_QWORD *)(a2 + 33152);
    v7 = v6 + *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v7;
    v8 = ((v6 * *(unsigned int *)(a2 + 33208)) >> 16) + *(unsigned int *)(a1 + 80);
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    *(_QWORD *)(a2 + 33152) = v5;
    v9 = (*(_BYTE *)(a1 + 2) & 0xBE) == 0;
    *(_DWORD *)(a1 + 80) = v8;
    if ( !v9 )
      KiEndThreadAccountingPeriodEx(a2, a1, v6, 0LL);
    v10 = __rdtsc();
    v11 = v10 - *(_QWORD *)(a2 + 33152) + *(_QWORD *)(a2 + 33400);
    *(_QWORD *)(a2 + 33400) = v11;
    if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
    {
      FrequencyBucket = PoGetFrequencyBucket(a2);
      ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(a2, v19, v20, FrequencyBucket);
      v23 = (unsigned __int64 *)(a2 + 8 * (ProcessorEfficiencyClass + 2 * v22 + 4176));
      v11 = v24 + *v23;
      *v23 = v11;
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x40) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 968);
      if ( v25 )
        *(_BYTE *)(v25 + 64) = 1;
    }
    *(_QWORD *)(a2 + 33152) = v10;
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(a1, 0LL);
    v9 = *(_BYTE *)(a2 + 6) == 0;
    *(_BYTE *)(a2 + 32) = 0;
    if ( !v9 )
    {
      LOBYTE(v11) = 2;
      *(_BYTE *)(a2 + 6) = 0;
      HalRequestSoftwareInterrupt(v11);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  result = *(unsigned int *)(a1 + 120);
  v15 = v7 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
  if ( (result & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v15;
  return result;
}
