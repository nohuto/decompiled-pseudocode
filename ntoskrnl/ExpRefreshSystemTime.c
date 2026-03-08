/*
 * XREFs of ExpRefreshSystemTime @ 0x1408132EC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 *     ExLocalTimeToSystemTime @ 0x1402D10A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D10F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x1402D1150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1403B0A8C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1403B11A8 (PoNotifySystemTimeSet.c)
 *     HalSetRealTimeClock @ 0x1404FCC40 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 */

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
