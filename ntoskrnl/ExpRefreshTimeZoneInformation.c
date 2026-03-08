/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140811500
 * Callers:
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140850DB4 (ExpReadLeapSecondData.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AA7AF4 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x1402D10A0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1402D1150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     RtlSetSystemGlobalData @ 0x1402EF650 (RtlSetSystemGlobalData.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140773434 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x1408119D0 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x140811B4C (RtlSetActiveTimeBias.c)
 *     ExpWriteTimeZoneBias @ 0x140811BF4 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140811C34 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140811C80 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140811F50 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1408120DC (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408122E8 (RtlpUpdateDynamicTimeZones.c)
 *     ExpInitializeTimeZoneInformation @ 0x140812638 (ExpInitializeTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA84C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409E2F5C (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F4E90 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F506C (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1409F5178 (ExpReadSiloTimeZoneMarker.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // r12
  char v4; // r13
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  int TimeZoneInformationWorker; // ebx
  __int64 v11; // rsi
  LARGE_INTEGER v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  LARGE_INTEGER v15; // rdi
  char v16; // al
  __int64 v17; // rdx
  int v18; // ecx
  LARGE_INTEGER v19; // rbx
  int v20; // ecx
  _QWORD *v21; // r15
  int v22; // eax
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int16 Year; // di
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // edx
  __int16 v33; // bx
  int v34; // r9d
  char SiloTimeZoneMarker; // al
  _OWORD *v37; // rcx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  int v40; // r9d
  int v41; // ecx
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v44; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v49; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v50; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v51; // [rsp+90h] [rbp-78h] BYREF
  TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v55[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v49.QuadPart = 0LL;
  v2 = 0LL;
  v50.QuadPart = 0LL;
  v44.QuadPart = 0LL;
  v3 = 1;
  v47 = 0LL;
  TimeFields = 0LL;
  v4 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v8 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 157);
  if ( *(_QWORD *)(v8 + 592) )
    v3 = 0;
  else
    ExpInitializeTimeZoneInformation(v7);
  if ( a1 )
  {
    if ( !(unsigned __int8)ExpReadSiloTimeZoneMarker() )
      v2 = PsAttachSiloToCurrentThread(0LL);
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
    if ( v2 )
      PsDetachSiloFromCurrentThread(v2);
  }
  else if ( !PsIsCurrentThreadInServerSilo((__int64)v7, v6)
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v37 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v38 = (_OWORD *)v8;
    v9 = 3LL;
    do
    {
      *v37 = *v38;
      v37[1] = v38[1];
      v37[2] = v38[2];
      v37[3] = v38[3];
      v37[4] = v38[4];
      v37[5] = v38[5];
      v37[6] = v38[6];
      v37 += 8;
      v39 = v38[7];
      v38 += 8;
      *(v37 - 1) = v39;
      --v9;
    }
    while ( v9 );
    TimeZoneInformationWorker = 0;
    *v37 = *v38;
    v37[1] = v38[1];
    v37[2] = v38[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    LOBYTE(v9) = v3;
    ++*(_DWORD *)(v8 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v9);
    v40 = 0;
    v41 = 1;
LABEL_49:
    EtwTraceTimeZoneInformationRefresh(v41, *(_DWORD *)(v8 + 436), *(_DWORD *)(v8 + 432), v40, v3);
    return 0;
  }
  v11 = MEMORY[0xFFFFF78000000014];
  v12.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v8 + 440);
  Time = v12;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        v4 = 1;
LABEL_56:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_12;
      }
    }
  }
  if ( v3
    && (int)RtlGetPersistedStateLocation(
              L"TimeZoneInformationSettings",
              L"TargetNtPath",
              0LL,
              0,
              v55,
              0x208u,
              (unsigned int *)&v53) >= 0 )
  {
    Handle = 0LL;
    if ( (unsigned int)RtlpGetRegistryHandle(0, v55, 0, &Handle) == -1073741772 )
      v4 = 1;
    if ( Handle )
      ZwClose(Handle);
    if ( v4 )
      goto LABEL_56;
  }
LABEL_12:
  v13 = Buf2[0];
  v45.QuadPart = -1LL;
  v51.QuadPart = -1LL;
  LODWORD(v46) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v8 + 512));
    v21 = (_QWORD *)(v8 + 432);
    *(_DWORD *)(v8 + 432) = 0;
    v19.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v49, &Time) )
  {
    ++*(_DWORD *)(v8 + 1000);
    LOBYTE(v14) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v14, &v45, 2LL);
    LOBYTE(v40) = v4;
    v41 = 2;
    goto LABEL_49;
  }
  v15 = v49;
  v45 = v49;
  v16 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v50, &Time);
  v18 = 0;
  if ( !v16 )
  {
    ++*(_DWORD *)(v8 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v17) = v3;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v17, &v45, 3LL);
    LOBYTE(v40) = v4;
    v41 = 3;
    goto LABEL_49;
  }
  v51 = v50;
  if ( v12.QuadPart < v15.QuadPart || v12.QuadPart < v50.QuadPart )
  {
    if ( v50.QuadPart >= v15.QuadPart )
    {
      if ( v12.QuadPart < v15.QuadPart || v12.QuadPart >= v50.QuadPart )
      {
        v19 = v15;
        LocalTime = v15;
        v21 = (_QWORD *)(v8 + 432);
        *(_DWORD *)(v8 + 432) = 2;
        goto LABEL_22;
      }
      v19 = v50;
      LocalTime = v50;
      *(_DWORD *)(v8 + 432) = 1;
      v21 = (_QWORD *)(v8 + 432);
LABEL_64:
      v22 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v12.QuadPart < v50.QuadPart || v12.QuadPart >= v15.QuadPart )
    {
      v19 = v50;
      LocalTime = v50;
      v20 = 1;
    }
    else
    {
      v19 = v15;
      v20 = 2;
      LocalTime = v15;
    }
  }
  else
  {
    LocalTime.QuadPart = 0LL;
    v19.QuadPart = 0LL;
    LOBYTE(v18) = v15.QuadPart <= v50.QuadPart;
    v20 = v18 + 1;
  }
  v21 = (_QWORD *)(v8 + 432);
  *(_DWORD *)(v8 + 432) = v20;
  if ( v20 != 2 )
    goto LABEL_64;
LABEL_22:
  v22 = Buf2[21];
LABEL_23:
  v13 = v22 + v46;
LABEL_24:
  if ( *(_DWORD *)(v8 + 436) != v13 )
  {
    v47 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v47);
    EtwTraceTimeZoneBiasChange(v13, *(unsigned int *)(v8 + 436));
  }
  v23 = 3LL;
  *(_DWORD *)(v8 + 436) = v13;
  v24 = Buf2;
  *(_QWORD *)(v8 + 440) = 10000000LL * (int)(60 * v13);
  v25 = (_OWORD *)v8;
  do
  {
    *v25 = *v24;
    v25[1] = v24[1];
    v25[2] = v24[2];
    v25[3] = v24[3];
    v25[4] = v24[4];
    v25[5] = v24[5];
    v25[6] = v24[6];
    v25 += 8;
    v26 = v24[7];
    v24 += 8;
    *(v25 - 1) = v26;
    --v23;
  }
  while ( v23 );
  v27 = *v24;
  ExpSystemIsInCmosMode = 0;
  *v25 = v27;
  v25[1] = v24[1];
  v25[2] = v24[2];
  RtlSetSystemGlobalData(6, v21, 4);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v19.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v8 + 992));
    KiSetTimerEx(v8 + 512, *(_QWORD *)(v8 + 992), 0, 0, v8 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v8 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 944), &v44);
  ExLocalTimeToSystemTime(&v44, (PLARGE_INTEGER)(v8 + 936));
  KiSetTimerEx(v8 + 672, *(_QWORD *)(v8 + 936), 0, 0, v8 + 608);
  *(_WORD *)(v8 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v8 + 968), &v44);
  ExLocalTimeToSystemTime(&v44, (PLARGE_INTEGER)(v8 + 960));
  KiSetTimerEx(v8 + 832, *(_QWORD *)(v8 + 960), 0, 0, v8 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v8 + 440, 1LL, v29, v30);
  if ( LocalTime.QuadPart )
    v31 = *(_QWORD *)(v8 + 992);
  else
    v31 = *(_QWORD *)(v8 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v11, v31);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v8 + 436));
  v33 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v8 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v8 + 984) = v33;
  }
  LOBYTE(v32) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v32,
    (unsigned int)&v45,
    (unsigned int)&v51,
    (__int64)&LocalTime);
  LOBYTE(v34) = v4;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v8 + 436), *(_DWORD *)v21, v34, v3);
  return 1;
}
