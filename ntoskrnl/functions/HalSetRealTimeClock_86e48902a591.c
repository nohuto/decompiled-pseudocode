char __fastcall HalSetRealTimeClock(__int16 *a1)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  LARGE_INTEGER v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rbx
  char v8; // bl
  int v10; // edi
  int v11; // ecx
  char v12; // al
  char v13; // cl
  signed __int32 v14[8]; // [rsp+0h] [rbp-50h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF

  LocalTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  v2 = (char *)ExLeapSecondData;
  InputBuffer = 0LL;
  if ( ExLeapSecondData && *(_BYTE *)ExLeapSecondData )
  {
    v3 = *((_DWORD *)ExLeapSecondData + 1);
    _InterlockedOr(v14, 0);
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v16) )
      return 0;
    v5 = v16;
    v6 = 0LL;
    if ( !v3 )
      goto LABEL_16;
    v7 = (__int64 *)(v2 + 8);
    while ( 1 )
    {
      v4 = *v7;
      if ( *v7 < 0 )
      {
        v4 &= ~0x8000000000000000uLL;
        if ( v5.QuadPart < v4 + 10000000 )
        {
          if ( v5.QuadPart < v4 )
          {
LABEL_16:
            LocalTime = v5;
            goto LABEL_17;
          }
          return 0;
        }
        v5.QuadPart -= 10000000LL;
      }
      else if ( v5.QuadPart < v4 + 10000000 )
      {
        if ( v5.QuadPart < v4 )
          goto LABEL_16;
        v5.QuadPart = 2 * v5.QuadPart - v4;
      }
      else
      {
        v5.QuadPart += 10000000LL;
      }
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_16;
    }
  }
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &LocalTime) )
    return 0;
LABEL_17:
  if ( !ExpRealTimeIsUniversal )
    ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    HalpWriteCmosTime(a1, v4, v6);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v10 = SystemPowerPhase;
  v11 = -1073741823;
  if ( KeGetCurrentIrql() >= 2u
    || SystemPowerPhase
    || (v11 = HalpUtcTimeToAcpiRealTime(&LocalTime, (PLARGE_INTEGER)&InputBuffer), v11 < 0)
    || (v11 = HalpSetAcpiRealTimeClock(&InputBuffer), v11 < 0) )
  {
    if ( v8 != 1 && HalFirmwareTypeEfi && v10 && (HalpPlatformFlags & 8) == 0 )
      v11 = HalEfiSetTime(&LocalTime);
  }
  if ( v11 >= 0 )
    v8 = 1;
  v12 = HalpSetVirtualRtc((__int64 *)&LocalTime);
  v13 = v8;
  if ( v12 )
    return 1;
  return v13;
}
