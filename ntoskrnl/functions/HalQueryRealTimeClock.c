char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char v2; // r14
  char *v3; // rdi
  char v4; // bl
  unsigned int v5; // esi
  LARGE_INTEGER v6; // rax
  unsigned int v7; // edx
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  int Time; // edi
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  char v24[8]; // [rsp+20h] [rbp-50h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-48h] BYREF
  LARGE_INTEGER v26; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v27[2]; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+58h] [rbp-18h] BYREF

  LocalTime.QuadPart = 0LL;
  v24[0] = 0;
  v2 = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v27[0] = 0LL;
  HalpSetVirtualRtc(0LL);
  if ( (HalpPlatformFlags & 4) == 0 )
    goto LABEL_30;
  HalpReadCmosTime(v27);
  v26.QuadPart = 0LL;
  v3 = (char *)ExLeapSecondData;
  v4 = 1;
  v27[1] = 0LL;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( (unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v27, &LocalTime) )
      goto LABEL_7;
    goto LABEL_30;
  }
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v23, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v27, &v26) )
    goto LABEL_30;
  v6 = v26;
  v7 = 0;
  if ( !v5 )
    goto LABEL_6;
  v9 = (__int64 *)(v3 + 8);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 < 0 )
      break;
    if ( v6.QuadPart < v10 + 10000000 )
    {
      if ( v6.QuadPart < v10 || v6.QuadPart >= v10 + 10000000 )
        goto LABEL_6;
      v6.QuadPart = 2 * v6.QuadPart - v10;
    }
    else
    {
      v6.QuadPart += 10000000LL;
    }
LABEL_24:
    ++v7;
    v26 = v6;
    ++v9;
    if ( v7 >= v5 )
      goto LABEL_6;
  }
  v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v6.QuadPart >= v11 + 10000000 )
  {
    v6.QuadPart -= 10000000LL;
    goto LABEL_24;
  }
  if ( v6.QuadPart < v11 || v6.QuadPart >= v11 + 10000000 )
  {
LABEL_6:
    LocalTime = v6;
LABEL_7:
    if ( !ExpRealTimeIsUniversal )
      ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
LABEL_9:
    if ( MEMORY[0xFFFFF78000000014] > LocalTime.QuadPart + 864000000000LL )
    {
      LocalTime.QuadPart = MEMORY[0xFFFFF78000000014];
      _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
    }
    if ( !ExpRealTimeIsUniversal )
      ExSystemTimeToLocalTime(&LocalTime, &LocalTime);
    RtlpTimeToTimeFields(&LocalTime, a1);
    return v4;
  }
LABEL_30:
  v12 = SystemPowerPhase;
  if ( KeGetCurrentIrql() < 2u && !SystemPowerPhase )
  {
    AcpiRealTimeClock = HalpQueryAcpiRealTimeClock(Timeout);
    if ( AcpiRealTimeClock < 0 )
    {
      if ( AcpiRealTimeClock == -1073740651 )
      {
        v2 = 1;
      }
      else if ( AcpiRealTimeClock != -1073741822 )
      {
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
      }
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &LocalTime) >= 0 )
    {
LABEL_34:
      v4 = 1;
      goto LABEL_9;
    }
  }
  if ( HalFirmwareTypeEfi && v12 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&LocalTime);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v16) = 4;
        else
          v16 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v16;
      }
      Time = HalEfiGetTime(&LocalTime);
      if ( KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( Time >= 0 )
      goto LABEL_34;
    if ( Time != -1073741822 )
      _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
  }
  v4 = HalpQueryVirtualRtc(&LocalTime, v24);
  if ( v4 )
  {
    if ( !v24[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
    goto LABEL_9;
  }
  if ( !v2 )
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  return v4;
}
