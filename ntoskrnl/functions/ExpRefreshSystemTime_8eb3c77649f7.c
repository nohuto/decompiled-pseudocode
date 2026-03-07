void ExpRefreshSystemTime()
{
  struct _LIST_ENTRY *Blink; // rbx
  unsigned __int8 v1; // di
  int Flink_high; // esi
  LARGE_INTEGER v3; // rax
  int v4; // [rsp+28h] [rbp-28h]
  TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+20h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp+28h] BYREF
  LARGE_INTEGER v8; // [rsp+80h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v8.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[78].Blink;
  ExAcquireTimeRefreshLock(1u);
  v1 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      Flink_high = HIDWORD(Blink[27].Flink);
      if ( ExpRefreshTimeZoneInformation(0) )
      {
        if ( Flink_high != HIDWORD(Blink[27].Flink) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v8);
              KeSetSystemTime((__int64)&v8, (__int64)&SystemTime, 0);
              goto LABEL_10;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v3 = SystemTime;
          }
          v8 = v3;
LABEL_10:
          PoNotifySystemTimeSet((__int64 *)&v8, (__int64 *)&SystemTime, 3, (int)&Time, HIDWORD(Blink[27].Flink), v4, v1);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
