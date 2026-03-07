__int64 __fastcall HalpAcpiRealTimeToUtcTime(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp+10h] BYREF

  TimeFields.Year = *(_WORD *)a1;
  TimeFields.Month = *(unsigned __int8 *)(a1 + 2);
  v4 = 0;
  TimeFields.Day = *(unsigned __int8 *)(a1 + 3);
  TimeFields.Hour = *(unsigned __int8 *)(a1 + 4);
  TimeFields.Minute = *(unsigned __int8 *)(a1 + 5);
  TimeFields.Second = *(unsigned __int8 *)(a1 + 6);
  TimeFields.Milliseconds = *(_WORD *)(a1 + 8);
  Time.QuadPart = 0LL;
  TimeFields.Weekday = 0;
  if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
  {
    v5 = *(__int16 *)(a1 + 10);
    if ( (unsigned __int16)(v5 + 1440) > 0xB40u )
      ExLocalTimeToSystemTime(&Time, a2);
    else
      a2->QuadPart = Time.QuadPart + 600000000 * v5;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
