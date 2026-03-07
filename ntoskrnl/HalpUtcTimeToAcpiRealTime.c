__int64 __fastcall HalpUtcTimeToAcpiRealTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER Timeout)
{
  __int64 LowPart_high; // rcx
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp+18h] BYREF

  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  HIWORD(Timeout[1].u.LowPart) = 2047;
  HalpQueryAcpiRealTimeClock(Timeout);
  LowPart_high = SHIWORD(Timeout[1].u.LowPart);
  if ( (unsigned __int64)(LowPart_high + 1440) > 0xB40 )
  {
    if ( ExRealTimeIsUniversal() )
    {
      HIWORD(Timeout[1].u.LowPart) = 0;
      BYTE4(Timeout[1].QuadPart) = 0;
      LocalTime = *SystemTime;
    }
    else
    {
      HIWORD(Timeout[1].u.LowPart) = (__int16)MEMORY[0xFFFFF78000000020] / 17920;
      ExSystemTimeToLocalTime(SystemTime, &LocalTime);
      if ( MEMORY[0xFFFFF78000000240] )
      {
        if ( MEMORY[0xFFFFF78000000240] == 1 )
        {
          BYTE4(Timeout[1].QuadPart) = 1;
        }
        else if ( MEMORY[0xFFFFF78000000240] == 2 )
        {
          BYTE4(Timeout[1].QuadPart) = 3;
        }
      }
      else
      {
        BYTE4(Timeout[1].QuadPart) = 0;
      }
    }
  }
  else
  {
    LocalTime.QuadPart = SystemTime->QuadPart - 600000000 * LowPart_high;
  }
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  LOWORD(Timeout->LowPart) = TimeFields.Year;
  BYTE2(Timeout->u.LowPart) = TimeFields.Month;
  BYTE3(Timeout->QuadPart) = TimeFields.Day;
  BYTE4(Timeout->QuadPart) = TimeFields.Hour;
  BYTE5(Timeout->QuadPart) = TimeFields.Minute;
  BYTE6(Timeout->QuadPart) = TimeFields.Second;
  LOWORD(Timeout[1].LowPart) = TimeFields.Milliseconds;
  return 0LL;
}
