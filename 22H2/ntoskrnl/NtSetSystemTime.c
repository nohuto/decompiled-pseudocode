/*
 * XREFs of NtSetSystemTime @ 0x14094BD60
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x14094B3CC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     ExLocalTimeToSystemTime @ 0x14030CC80 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x14030CCC0 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14030D050 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14032C4F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14036DE60 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x1403A7104 (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x1403A7348 (KeSetSystemTime.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404B6A90 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     RtlIsMultiSessionSku @ 0x1406816A0 (RtlIsMultiSessionSku.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     SeAuditSystemTimeChange @ 0x14091E414 (SeAuditSystemTimeChange.c)
 *     ExpSetSystemTime @ 0x140998FB8 (ExpSetSystemTime.c)
 */

NTSTATUS __cdecl NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  LONGLONG QuadPart; // rax
  int v10; // ecx
  NTSTATUS v11; // ebx
  char v12; // di
  LARGE_INTEGER v13; // rax
  BOOLEAN HasCapability[8]; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+50h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+60h] [rbp-28h] BYREF

  SystemTimea.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  HasCapability[0] = 0;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = L"systemManagement";
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
      || PsIsCurrentThreadInServerSilo(v6, v5) )
    {
      return -1073741727;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( PreviousTime )
      {
        if ( ((unsigned __int8)PreviousTime & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)PreviousTime < 0x7FFFFFFF0000LL )
          v8 = (__int64)PreviousTime;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + 7) = *(_BYTE *)(v8 + 7);
      }
      QuadPart = SystemTime->QuadPart;
      v16 = *SystemTime;
    }
    else
    {
      QuadPart = SystemTime->QuadPart;
      v16 = *SystemTime;
    }
    if ( HIDWORD(QuadPart) > 0x20000000 )
      return -1073741811;
    ExAcquireTimeRefreshLock(1u);
    LOBYTE(v10) = 1;
    ExpSetSystemTime(v10, 0, 1, v16.LowPart, (__int64)&SystemTimea);
    SeAuditSystemTimeChange(SystemTimea.QuadPart, v16.QuadPart);
    ExReleaseTimeRefreshLock();
    if ( PreviousTime )
      *PreviousTime = SystemTimea;
    return 0;
  }
  if ( PsIsCurrentThreadInServerSilo(0LL, (__int64)PreviousTime) )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseTimeRefreshLock();
    return 0;
  }
  v11 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v12 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v13.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v12 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTimea, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v13 = SystemTimea;
    }
    v16 = v13;
LABEL_29:
    PoNotifySystemTimeSet((__int64 *)&v16, (__int64 *)&SystemTimea);
    v11 = 0;
  }
  ExReleaseTimeRefreshLock();
  return v11;
}
