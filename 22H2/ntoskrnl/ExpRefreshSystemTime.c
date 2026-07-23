/*
 * XREFs of ExpRefreshSystemTime @ 0x1407A94CC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079A330 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExLocalTimeToSystemTime @ 0x14030CC80 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x14030CCC0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14030D050 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14032C4F0 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036DE60 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7104 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7348 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x1404B6A90 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 */

void __fastcall ExpRefreshSystemTime(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // si
  int v4; // edi
  LARGE_INTEGER v5; // rax
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp+20h] BYREF
  LARGE_INTEGER v8; // [rsp+58h] [rbp+28h] BYREF
  LARGE_INTEGER Time; // [rsp+60h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v8.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 133);
  ExAcquireTimeRefreshLock(1u);
  v3 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v4 = *(_DWORD *)(v2 + 436);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( v4 != *(_DWORD *)(v2 + 436) )
        {
          v5.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v3 )
            {
              ExLocalTimeToSystemTime(&Time, &v8);
              KeSetSystemTime((__int64)&v8, (__int64)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v5 = SystemTime;
          }
          v8 = v5;
LABEL_9:
          PoNotifySystemTimeSet((__int64 *)&v8, (__int64 *)&SystemTime);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
