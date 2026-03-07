__int64 __fastcall HalpCmcPollProcessor(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rcx
  __int64 result; // rax
  char v11; // si
  char v12; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  char CpuVendor; // [rsp+31h] [rbp-57h]
  int v31; // [rsp+34h] [rbp-54h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v31 = 0;
  v32 = a1;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  v6 = 0;
  v7 = 0;
  CurrentIrql = 0;
  CpuVendor = HalpGetCpuVendor();
  while ( 1 )
  {
    result = HalpMcaReadErrorPresence(v9, a3);
    if ( (int)result < 0 )
      break;
    v11 = 0;
    v12 = 0;
    if ( !a2 )
      goto LABEL_25;
    v11 = 1;
    if ( KeGetCurrentIrql() < 2u )
    {
      v12 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
          {
            LODWORD(v14) = 4;
          }
          else
          {
            v9 = (unsigned int)CurrentIrql + 1;
            v14 = (-1LL << (CurrentIrql + 1)) & 4;
          }
          SchedulerAssist[5] |= v14;
        }
      }
    }
    if ( _InterlockedCompareExchange(&HalpCmcLock, 1, 0) )
    {
      if ( v12 )
      {
        if ( KiIrqlFlags )
        {
          v9 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v9 <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)v9 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = (unsigned int)CurrentIrql + 1;
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    else
    {
LABEL_25:
      result = HalpMcaReadError(1, (int)v32 + 80, (unsigned int)&v31, 0, a3);
      if ( (int)result < 0 )
      {
        if ( a2 )
        {
          if ( v11 )
            result = (unsigned int)_InterlockedExchange(&HalpCmcLock, 0);
          if ( v12 )
          {
            if ( KiIrqlFlags )
            {
              v25 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
              {
                v26 = KeGetCurrentPrcb();
                v27 = v26->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v18 = (v28 & v27[5]) == 0;
                v27[5] &= v28;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v26);
              }
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v19 = v32;
      if ( CpuVendor == 2 )
        v6 += (*(_QWORD *)(v32 + 120) >> 38) & 0x7FFF;
      else
        ++v6;
      v20 = v31;
      v21 = v32 + 80;
      *(_DWORD *)(v32 + 12) = 0;
      *(_DWORD *)(v19 + 20) = v20;
      HalpMcaReportError(v19, v21, a3);
      HalpMcaClearError(v32 + 80, a3);
      if ( a2 )
      {
        if ( v11 )
          _InterlockedExchange(&HalpCmcLock, 0);
        if ( v12 )
        {
          if ( KiIrqlFlags )
          {
            v9 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0
              && (unsigned __int8)v9 <= 0xFu
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v9 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v9 = (unsigned int)CurrentIrql + 1;
              v23 = v22->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v24 & v23[5]) == 0;
              v23[5] &= v24;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      ++v7;
      if ( HalpCmcPollCount != -1 )
      {
        if ( HalpCmcPollCount )
        {
          result = (unsigned int)HalpCmcPollCount;
          if ( v7 >= HalpCmcPollCount )
            break;
        }
      }
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)HalpCmcIsDpcTimeRunningLow(&WatchdogInformation) )
        {
          result = HalpCmcLogPollingTimeoutEvent(&WatchdogInformation, v7);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 164) = v6;
  if ( v6 > *(_DWORD *)(a4 + 168) )
    *(_DWORD *)(a4 + 168) = v6;
  return result;
}
