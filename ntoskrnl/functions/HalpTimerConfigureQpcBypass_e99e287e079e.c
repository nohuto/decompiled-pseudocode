__int64 HalpTimerConfigureQpcBypass()
{
  char v0; // bl
  int SystemInformation; // esi
  ULONG_PTR *Timer; // rax
  unsigned __int64 v3; // rdi
  int v4; // eax
  int v5; // r8d
  __int16 *v6; // rdx
  int v7; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+40h] BYREF
  char v16; // [rsp+90h] [rbp+48h] BYREF
  __int16 v17; // [rsp+98h] [rbp+50h] BYREF

  v14 = 0;
  v13[0] = 0LL;
  v17 = 0;
  LOBYTE(v15) = 0;
  v0 = 0;
  SystemInformation = NtQuerySystemInformation(197LL, v13, 8LL, 0LL);
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    if ( (Timer[28] & 0x1000000) != 0 )
    {
      v0 = 0x80;
    }
    else if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v14) )
    {
      if ( v14 == 2 )
      {
        v0 = 32;
      }
      else if ( v14 == 1 )
      {
        v0 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpTscFallbackLock);
  v4 = *(_DWORD *)(HalpPerformanceCounter + 228);
  if ( (v4 == 5 || v4 == 7) && SystemInformation >= 0 && v13[0] )
  {
    v16 = v0 | 3;
    RtlSetSystemGlobalData(16, &v15, 1);
    _InterlockedOr(v12, 0);
    v5 = 1;
    v6 = (__int16 *)&v16;
    v7 = 17;
  }
  else
  {
    v5 = 2;
    v6 = &v17;
    v7 = 18;
  }
  RtlSetSystemGlobalData(v7, v6, v5);
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpTscFallbackLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
