__int64 __fastcall HaliSetWakeAlarm(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  TIME_FIELDS TimeFields; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+18h] BYREF

  Time.QuadPart = 0LL;
  HalpWakeupState = 1;
  TimeFields = 0LL;
  v2 = HalpAdjustWakeSecondsDue(a1, MEMORY[0xFFFFF78000000008], MEMORY[0xFFFFF78000000008], a2);
  v5 = HalpAdjustWakeSecondsDue(v4, v3, v3, v4);
  v6 = v5;
  DbgPrintEx(0x65u, 3u, "HAL: Wake in %lu seconds on AC and in %lu seconds on DC\n", v2, v5);
  if ( (int)HalpArmAcpiWakeAlarm(v2) < 0 )
  {
    if ( (HalpPlatformFlags & 4) == 0 )
      return 3221225473LL;
    if ( v2 < (unsigned int)v6 )
      v6 = v2;
    if ( v6 != 0xFFFFFFFFLL )
    {
      if ( HalQueryRealTimeClock((__int64)&TimeFields) )
      {
        RtlTimeFieldsToTime(&TimeFields, &Time);
        Time.QuadPart += 10000000 * v6;
        RtlTimeToTimeFields(&Time, &TimeFields);
        HIBYTE(HalpWakeupState) = 1;
        xmmword_140C60462 = (__int128)TimeFields;
        return HalpSetWakeAlarm(v7, (unsigned __int8 *)&TimeFields);
      }
      return 3221225473LL;
    }
  }
  return 0LL;
}
