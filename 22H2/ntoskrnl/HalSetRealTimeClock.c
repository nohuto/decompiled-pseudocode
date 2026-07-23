/*
 * XREFs of HalSetRealTimeClock @ 0x1404B6A90
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407A94CC (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140998FB8 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140A7182C (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14030D154 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     HalpSetVirtualRtc @ 0x14030D8CC (HalpSetVirtualRtc.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalEfiSetTime @ 0x1404C3C00 (HalEfiSetTime.c)
 *     HalpWriteCmosTime @ 0x1404CC2AC (HalpWriteCmosTime.c)
 *     HalpSetAcpiRealTimeClock @ 0x140864020 (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140864104 (HalpUtcTimeToAcpiRealTime.c)
 */

char __fastcall HalSetRealTimeClock(__int16 *a1)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER v7; // rbx
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // ecx
  char v12; // al
  char v13; // cl
  signed __int32 v14[8]; // [rsp+0h] [rbp-50h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF

  SystemTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  v2 = (char *)ExLeapSecondData;
  InputBuffer = 0LL;
  if ( ExLeapSecondData && *(_BYTE *)ExLeapSecondData )
  {
    v3 = *((_DWORD *)ExLeapSecondData + 1);
    _InterlockedOr(v14, 0);
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v16) )
      return 0;
    v6 = 0LL;
    if ( !v3 )
    {
      v7 = v16;
      goto LABEL_18;
    }
    v4 = (__int64 *)(v2 + 8);
    v7 = v16;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 < 0 )
      {
        v5 &= ~0x8000000000000000uLL;
        if ( v7.QuadPart < v5 + 10000000 )
        {
          if ( v7.QuadPart < v5 )
          {
LABEL_18:
            SystemTime = v7;
            goto LABEL_22;
          }
          return 0;
        }
        v7.QuadPart -= 10000000LL;
      }
      else if ( v7.QuadPart < v5 + 10000000 )
      {
        if ( v7.QuadPart < v5 )
          goto LABEL_18;
        v7.QuadPart = 2 * v7.QuadPart - v5;
      }
      else
      {
        v7.QuadPart += 10000000LL;
      }
      v6 = (unsigned int)(v6 + 1);
      ++v4;
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_18;
    }
  }
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &SystemTime) )
    return 0;
  v7 = SystemTime;
LABEL_22:
  if ( !ExpRealTimeIsUniversal )
  {
    v4 = (__int64 *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v5, (__int64)v4) + 133);
    SystemTime.QuadPart = v4[55] + v7.QuadPart;
  }
  v9 = ((unsigned int)HalpPlatformFlags >> 2) & 1;
  if ( v9 )
    HalpWriteCmosTime(a1, v4, v6);
  v10 = SystemPowerPhase;
  v11 = -1073741823;
  if ( KeGetCurrentIrql() >= 2u
    || SystemPowerPhase
    || (v11 = HalpUtcTimeToAcpiRealTime(&SystemTime, (PLARGE_INTEGER)&InputBuffer), v11 < 0)
    || (v11 = HalpSetAcpiRealTimeClock(&InputBuffer), v11 < 0) )
  {
    if ( (_BYTE)v9 != 1 && HalFirmwareTypeEfi && v10 && (HalpPlatformFlags & 8) == 0 )
      v11 = HalEfiSetTime(&SystemTime, v4, v6);
  }
  if ( v11 >= 0 )
    LOBYTE(v9) = 1;
  v12 = HalpSetVirtualRtc(&SystemTime, (__int64)v4, v6);
  v13 = v9;
  if ( v12 )
    return 1;
  return v13;
}
