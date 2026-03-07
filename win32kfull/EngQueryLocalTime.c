void __stdcall EngQueryLocalTime(PENG_TIME_FIELDS ptf)
{
  union _LARGE_INTEGER Time; // [rsp+20h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+28h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  GreQuerySystemTime(&Time);
  GreSystemTimeToLocalTime(&Time, &Time);
  RtlTimeToTimeFields(&Time, &TimeFields);
  *(_TIME_FIELDS *)ptf = TimeFields;
}
