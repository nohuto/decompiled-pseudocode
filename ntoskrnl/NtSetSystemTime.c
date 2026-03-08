/*
 * XREFs of NtSetSystemTime @ 0x1409F54B0
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1409F484C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
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
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404FCC40 (HalSetRealTimeClock.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x1407447E0 (RtlIsMultiSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExpSetSystemTime @ 0x140AA7AF4 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(LARGE_INTEGER *a1, LARGE_INTEGER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER v12; // rax
  int v13; // ecx
  unsigned int v14; // ebx
  unsigned __int8 v15; // di
  LARGE_INTEGER v16; // rax
  int v17; // [rsp+28h] [rbp-70h]
  char v18[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER v20; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+70h] [rbp-28h] BYREF

  SystemTime.QuadPart = 0LL;
  v20.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v18[0] = 0;
  *(_QWORD *)&String2.Length = 2228256LL;
  String2.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( a1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku(v9, v8) || (int)RtlCapabilityCheck(0LL, &String2, v18) < 0 || !v18[0])
      || PsIsCurrentThreadInServerSilo(v9, v8) )
    {
      return 3221225569LL;
    }
    if ( !PreviousMode )
    {
      v12 = *a1;
      v20 = *a1;
      goto LABEL_18;
    }
    if ( ((unsigned __int8)a1 & 3) == 0 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( !a2 )
      {
LABEL_15:
        v12 = *a1;
        v20 = *a1;
LABEL_18:
        if ( v12.HighPart > 0x20000000u )
          return 3221225485LL;
        ExAcquireTimeRefreshLock(1u);
        LOBYTE(v13) = 1;
        ExpSetSystemTime(v13, 0, 1, v20.LowPart, (__int64)&SystemTime);
        SeAuditSystemTimeChange(SystemTime.QuadPart, v20.QuadPart);
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        if ( a2 )
          *a2 = SystemTime;
        return 0;
      }
      if ( ((unsigned __int8)a2 & 3) == 0 )
      {
        if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a2;
        *(_BYTE *)v11 = *(_BYTE *)v11;
        *(_BYTE *)(v11 + 7) = *(_BYTE *)(v11 + 7);
        goto LABEL_15;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( PsIsCurrentThreadInServerSilo(v5, v4) )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  v14 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v15 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v16.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v15 )
      {
        ExLocalTimeToSystemTime(&Time, &v20);
        KeSetSystemTime((__int64)&v20, (__int64)&SystemTime, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v16 = SystemTime;
    }
    v20 = v16;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&v20,
      (__int64 *)&SystemTime,
      3,
      (int)&Time,
      HIDWORD(CurrentServerSiloGlobals[78].Blink[27].Flink),
      v17,
      v15);
    v14 = 0;
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  return v14;
}
