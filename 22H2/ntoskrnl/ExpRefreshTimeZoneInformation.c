/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x140840928
 * Callers:
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140854624 (ExpReadLeapSecondData.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1409F8340 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140AAAD24 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CAB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5480 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F8114 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x140840DF8 (RtlCutoverTimeToSystemTime.c)
 *     RtlSetActiveTimeBias @ 0x140840F74 (RtlSetActiveTimeBias.c)
 *     ExpWriteTimeZoneBias @ 0x14084101C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x14084105C (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1408410A8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x140841378 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140841504 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     ExpInitializeTimeZoneInformation @ 0x140841A60 (ExpInitializeTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD87C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409E5DFC (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7D20 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F7EFC (ExpLogRefreshTimeZoneInformationQueryFail.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1409F8008 (ExpReadSiloTimeZoneMarker.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  struct _LIST_ENTRY *v2; // rdi
  char v3; // r12
  char v4; // r13
  __int64 CurrentServerSilo; // rax
  void *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  int TimeZoneInformationWorker; // ebx
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  LARGE_INTEGER v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // ecx
  _QWORD *v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int16 Year; // di
  __int64 v28; // rdx
  int v29; // edx
  __int16 v30; // bx
  int v31; // r9d
  char SiloTimeZoneMarker; // al
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  int v37; // r9d
  int v38; // ecx
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v41; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v46; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v47; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v48; // [rsp+90h] [rbp-78h] BYREF
  TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR v52[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v46.QuadPart = 0LL;
  v2 = 0LL;
  v47.QuadPart = 0LL;
  v41.QuadPart = 0LL;
  v3 = 1;
  v44 = 0LL;
  TimeFields = 0LL;
  v4 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v7 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 157);
  if ( *(_QWORD *)(v7 + 592) )
    v3 = 0;
  else
    ExpInitializeTimeZoneInformation(v6);
  if ( a1 )
  {
    if ( !(unsigned __int8)ExpReadSiloTimeZoneMarker() )
      v2 = PsAttachSiloToCurrentThread(0LL);
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
    if ( v2 )
      PsDetachSiloFromCurrentThread(v2);
  }
  else if ( !PsIsCurrentThreadInServerSilo()
         || (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v34 = Buf2, SiloTimeZoneMarker) )
  {
    TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v35 = (_OWORD *)v7;
    v8 = 3LL;
    do
    {
      *v34 = *v35;
      v34[1] = v35[1];
      v34[2] = v35[2];
      v34[3] = v35[3];
      v34[4] = v35[4];
      v34[5] = v35[5];
      v34[6] = v35[6];
      v34 += 8;
      v36 = v35[7];
      v35 += 8;
      *(v34 - 1) = v36;
      --v8;
    }
    while ( v8 );
    TimeZoneInformationWorker = 0;
    *v34 = *v35;
    v34[1] = v35[1];
    v34[2] = v35[2];
  }
  if ( TimeZoneInformationWorker < 0 )
  {
    LOBYTE(v8) = v3;
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)TimeZoneInformationWorker, v8);
    v37 = 0;
    v38 = 1;
LABEL_49:
    EtwTraceTimeZoneInformationRefresh(v38, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v37, v3);
    return 0;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  v11.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v11;
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
              v52,
              0x208u,
              (unsigned int *)&v50) >= 0 )
  {
    Handle = 0LL;
    if ( (unsigned int)RtlpGetRegistryHandle(0, v52, 0, &Handle) == -1073741772 )
      v4 = 1;
    if ( Handle )
      ZwClose(Handle);
    if ( v4 )
      goto LABEL_56;
  }
LABEL_12:
  v12 = Buf2[0];
  v42.QuadPart = -1LL;
  v48.QuadPart = -1LL;
  LODWORD(v43) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v20 = (_QWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v18.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v46, &Time) )
  {
    ++*(_DWORD *)(v7 + 1000);
    LOBYTE(v13) = v3;
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v13, &v42, 2LL);
    LOBYTE(v37) = v4;
    v38 = 2;
    goto LABEL_49;
  }
  v14 = v46;
  v42 = v46;
  v15 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v47, &Time);
  v17 = 0;
  if ( !v15 )
  {
    ++*(_DWORD *)(v7 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v16) = v3;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v16, &v42, 3LL);
    LOBYTE(v37) = v4;
    v38 = 3;
    goto LABEL_49;
  }
  v48 = v47;
  if ( v11.QuadPart < v14.QuadPart || v11.QuadPart < v47.QuadPart )
  {
    if ( v47.QuadPart >= v14.QuadPart )
    {
      if ( v11.QuadPart < v14.QuadPart || v11.QuadPart >= v47.QuadPart )
      {
        v18 = v14;
        LocalTime = v14;
        v20 = (_QWORD *)(v7 + 432);
        *(_DWORD *)(v7 + 432) = 2;
        goto LABEL_22;
      }
      v18 = v47;
      LocalTime = v47;
      *(_DWORD *)(v7 + 432) = 1;
      v20 = (_QWORD *)(v7 + 432);
LABEL_64:
      v21 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v11.QuadPart < v47.QuadPart || v11.QuadPart >= v14.QuadPart )
    {
      v18 = v47;
      LocalTime = v47;
      v19 = 1;
    }
    else
    {
      v18 = v14;
      v19 = 2;
      LocalTime = v14;
    }
  }
  else
  {
    LocalTime.QuadPart = 0LL;
    v18.QuadPart = 0LL;
    LOBYTE(v17) = v14.QuadPart <= v47.QuadPart;
    v19 = v17 + 1;
  }
  v20 = (_QWORD *)(v7 + 432);
  *(_DWORD *)(v7 + 432) = v19;
  if ( v19 != 2 )
    goto LABEL_64;
LABEL_22:
  v21 = Buf2[21];
LABEL_23:
  v12 = v21 + v43;
LABEL_24:
  if ( *(_DWORD *)(v7 + 436) != v12 )
  {
    v44 = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData((__int64)&WNF_SEB_TIME_ZONE_CHANGE, (__int64)&v44);
    EtwTraceTimeZoneBiasChange(v12, *(unsigned int *)(v7 + 436));
  }
  v22 = 3LL;
  *(_DWORD *)(v7 + 436) = v12;
  v23 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v12);
  v24 = (_OWORD *)v7;
  do
  {
    *v24 = *v23;
    v24[1] = v23[1];
    v24[2] = v23[2];
    v24[3] = v23[3];
    v24[4] = v23[4];
    v24[5] = v23[5];
    v24[6] = v23[6];
    v24 += 8;
    v25 = v23[7];
    v23 += 8;
    *(v24 - 1) = v25;
    --v22;
  }
  while ( v22 );
  v26 = *v23;
  ExpSystemIsInCmosMode = 0;
  *v24 = v26;
  v24[1] = v23[1];
  v24[2] = v23[2];
  RtlSetSystemGlobalData(6, v20, 4);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v18.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v7 + 992));
    KiSetTimerEx(v7 + 512, *(_QWORD *)(v7 + 992), 0, 0, v7 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v7 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v41);
  ExLocalTimeToSystemTime(&v41, (PLARGE_INTEGER)(v7 + 936));
  KiSetTimerEx(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v41);
  ExLocalTimeToSystemTime(&v41, (PLARGE_INTEGER)(v7 + 960));
  KiSetTimerEx(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  ExpWriteTimeZoneBias(v7 + 440);
  if ( LocalTime.QuadPart )
    v28 = *(_QWORD *)(v7 + 992);
  else
    v28 = *(_QWORD *)(v7 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v10, v28);
  _InterlockedAdd((volatile signed __int32 *)(MmWriteableSharedUserData + 604), 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v7 + 436));
  v30 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v30;
  }
  LOBYTE(v29) = v3;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v29,
    (unsigned int)&v42,
    (unsigned int)&v48,
    (__int64)&LocalTime);
  LOBYTE(v31) = v4;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v7 + 436), *(_DWORD *)v20, v31, v3);
  return 1;
}
