/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1407A9984
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     ExpRefreshSystemTime @ 0x1407A94CC (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407A95E8 (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140998FB8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     ExLocalTimeToSystemTime @ 0x14030CC80 (ExLocalTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x14030D050 (RtlTimeFieldsToTime.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     RtlTimeToTimeFields @ 0x14036DE60 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlSetSystemGlobalData @ 0x1403F7C14 (RtlSetSystemGlobalData.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpInitializeTimeChangeWorker @ 0x1405D19CC (ExpInitializeTimeChangeWorker.c)
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406A6830 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlGetPersistedStateLocation @ 0x1406B87A0 (RtlGetPersistedStateLocation.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407AA100 (RtlCutoverTimeToSystemTime.c)
 *     EtwTraceTimeZoneInformationRefresh @ 0x1407AA274 (EtwTraceTimeZoneInformationRefresh.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407AA368 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA58C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407AA824 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407AA8CC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091515C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwTraceTimeZoneBiasChange @ 0x1409367E8 (EtwTraceTimeZoneBiasChange.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094B950 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     ExpLogRefreshTimeZoneInformationQueryFail @ 0x14094BB38 (ExpLogRefreshTimeZoneInformationQueryFail.c)
 */

char __fastcall ExpRefreshTimeZoneInformation(char a1)
{
  BOOL v1; // r15d
  struct _LIST_ENTRY *v3; // rdi
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *CurrentServerSilo; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // r9
  int DynamicTimeZoneInformation; // ebx
  __int64 v15; // r13
  __int64 v16; // rdx
  BOOLEAN v17; // r9
  int v18; // r9d
  int v19; // ecx
  bool SiloTimeZoneMarker; // al
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rsi
  LARGE_INTEGER v26; // rbx
  unsigned int v27; // edi
  __int64 v28; // rdx
  BOOLEAN v29; // r9
  LARGE_INTEGER v30; // rdi
  BOOLEAN v31; // al
  DWORD v32; // r8d
  LARGE_INTEGER v33; // rbx
  int v34; // ecx
  _DWORD *v35; // r15
  int v36; // eax
  _OWORD *v37; // rcx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int16 Year; // di
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // edx
  __int16 v45; // bx
  int v46; // r9d
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v50; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER v51; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h]
  unsigned __int64 Buffer; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v56; // [rsp+90h] [rbp-78h] BYREF
  LARGE_INTEGER v57; // [rsp+98h] [rbp-70h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-68h] BYREF
  ULONG BufferLengthOut; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  LOBYTE(v1) = 0;
  SystemTime.QuadPart = 0LL;
  v56.QuadPart = 0LL;
  v3 = 0LL;
  v50.QuadPart = 0LL;
  v4 = 1;
  Buffer = 0LL;
  TimeFields = 0LL;
  LODWORD(v48) = v1;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo(v6, v5);
  v11 = *((_QWORD *)PsGetServerSiloGlobals((__int64)CurrentServerSilo) + 133);
  if ( *(_QWORD *)(v11 + 592) )
  {
    v4 = 0;
  }
  else
  {
    ExpInitializeTimeChangeWorker(
      v11 + 448,
      (KDEFERRED_ROUTINE *)ExpTimeZoneDpcRoutine,
      CurrentServerSilo,
      v10,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v11 + 768,
      (KDEFERRED_ROUTINE *)ExpNextYearDpcRoutine,
      CurrentServerSilo,
      v12,
      (__int64)CurrentServerSilo);
    ExpInitializeTimeChangeWorker(
      v11 + 608,
      (KDEFERRED_ROUTINE *)ExpCenturyDpcRoutine,
      CurrentServerSilo,
      v13,
      (__int64)CurrentServerSilo);
    *(_OWORD *)(v11 + 944) = 0LL;
    *(_OWORD *)(v11 + 968) = 0LL;
    *(_DWORD *)(v11 + 946) = 65537;
    *(_WORD *)(v11 + 956) = 1;
    *(_DWORD *)(v11 + 970) = 65537;
    *(_WORD *)(v11 + 980) = 1;
  }
  DynamicTimeZoneInformation = 0;
  v15 = 3LL;
  if ( a1 )
  {
    if ( !ExpReadSiloTimeZoneMarker() )
      v3 = PsAttachSiloToCurrentThread(0LL);
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
    if ( v3 )
      PsDetachSiloFromCurrentThread(v3);
  }
  else if ( PsIsCurrentThreadInServerSilo(v9, v8)
         && (SiloTimeZoneMarker = ExpReadSiloTimeZoneMarker(), v22 = Buf2, !SiloTimeZoneMarker) )
  {
    v23 = (_OWORD *)v11;
    v16 = 3LL;
    do
    {
      *v22 = *v23;
      v22[1] = v23[1];
      v22[2] = v23[2];
      v22[3] = v23[3];
      v22[4] = v23[4];
      v22[5] = v23[5];
      v22[6] = v23[6];
      v22 += 8;
      v24 = v23[7];
      v23 += 8;
      *(v22 - 1) = v24;
      --v16;
    }
    while ( v16 );
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
  }
  else
  {
    DynamicTimeZoneInformation = RtlQueryDynamicTimeZoneInformation(Buf2);
  }
  if ( DynamicTimeZoneInformation < 0 )
  {
    LOBYTE(v16) = v4;
    ++*(_DWORD *)(v11 + 1000);
    ExpSystemIsInCmosMode = 1;
    ExpLogRefreshTimeZoneInformationQueryFail((unsigned int)DynamicTimeZoneInformation, v16);
    v18 = 0;
    v19 = 1;
LABEL_11:
    EtwTraceTimeZoneInformationRefresh(v19, *(_DWORD *)(v11 + 436), *(_DWORD *)(v11 + 432), v18, v4);
    return 0;
  }
  v25 = MEMORY[0xFFFFF78000000014];
  v26.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v11 + 440);
  Time = v26;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(Buf2) )
      {
        LOBYTE(v1) = 1;
        LODWORD(v48) = 1;
LABEL_28:
        RtlpSetTimeZoneInformationWorker(Buf2);
        goto LABEL_29;
      }
    }
  }
  if ( v4
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         &BufferLengthOut) >= 0 )
  {
    Handle = 0LL;
    v1 = RtlpGetRegistryHandle(0, TargetPath, 0, &Handle) == -1073741772;
    LODWORD(v48) = v1;
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      goto LABEL_28;
  }
LABEL_29:
  v27 = Buf2[0];
  v51.QuadPart = -1LL;
  v57.QuadPart = -1LL;
  LODWORD(v52) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v11 + 512));
    v35 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = 0;
    v33.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_52;
  }
  if ( !RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&Buf2[8] + 4), &SystemTime, &Time, v17) )
  {
    LODWORD(v15) = 2;
LABEL_33:
    ++*(_DWORD *)(v11 + 1000);
    ExpSystemIsInCmosMode = 1;
    LOBYTE(v28) = v4;
    ExpLogRefreshTimeZoneInformationCutoverFail(Buf2, v28, &v51, (unsigned int)v15);
    LOBYTE(v18) = v1;
    v19 = v15;
    goto LABEL_11;
  }
  v30 = SystemTime;
  v51 = SystemTime;
  v31 = RtlCutoverTimeToSystemTime((PTIME_FIELDS)&Buf2[19], &v56, &Time, v29);
  v28 = 0LL;
  if ( !v31 )
    goto LABEL_33;
  v57 = v56;
  if ( v26.QuadPart >= v56.QuadPart && v26.QuadPart >= v30.QuadPart )
  {
    LocalTime.QuadPart = 0LL;
    v33.QuadPart = 0LL;
    v34 = (v30.QuadPart <= v56.QuadPart) + 1;
LABEL_43:
    v35 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = v34;
    goto LABEL_48;
  }
  if ( v56.QuadPart < v30.QuadPart )
  {
    if ( v26.QuadPart < v56.QuadPart || v26.QuadPart >= v30.QuadPart )
    {
      v33 = v56;
      LocalTime = v56;
      v34 = 1;
    }
    else
    {
      v33 = v30;
      v34 = 2;
      LocalTime = v30;
    }
    goto LABEL_43;
  }
  if ( v26.QuadPart >= v30.QuadPart && v26.QuadPart < v56.QuadPart )
  {
    v33 = v56;
    LocalTime = v56;
    v35 = (_DWORD *)(v11 + 432);
    *(_DWORD *)(v11 + 432) = 1;
LABEL_49:
    v36 = HIDWORD(Buf2[10]);
    goto LABEL_50;
  }
  v33 = v30;
  v35 = (_DWORD *)(v11 + 432);
  LocalTime = v30;
  v34 = 2;
  *(_DWORD *)(v11 + 432) = 2;
LABEL_48:
  v36 = Buf2[21];
  if ( v34 != 2 )
    goto LABEL_49;
LABEL_50:
  v15 = 3LL;
  v27 = v36 + v52;
LABEL_52:
  if ( *(_DWORD *)(v11 + 436) != v27 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    EtwTraceTimeZoneBiasChange(v27, *(unsigned int *)(v11 + 436));
  }
  *(_DWORD *)(v11 + 436) = v27;
  v37 = Buf2;
  *(_QWORD *)(v11 + 440) = 10000000LL * (int)(60 * v27);
  v38 = (_OWORD *)v11;
  do
  {
    *v38 = *v37;
    v38[1] = v37[1];
    v38[2] = v37[2];
    v38[3] = v37[3];
    v38[4] = v37[4];
    v38[5] = v37[5];
    v38[6] = v37[6];
    v38 += 8;
    v39 = v37[7];
    v37 += 8;
    *(v38 - 1) = v39;
    --v15;
  }
  while ( v15 );
  v40 = *v37;
  ExpSystemIsInCmosMode = 0;
  *v38 = v40;
  v38[1] = v37[1];
  v38[2] = v37[2];
  RtlSetSystemGlobalData((RTL_SYSTEM_GLOBAL_DATA_ID)v37, v35, v32);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v33.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v11 + 992));
    KiSetTimerEx(v11 + 512, *(_QWORD *)(v11 + 992), 0, 0, v11 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v11 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v11 + 944), &v50);
  ExLocalTimeToSystemTime(&v50, (PLARGE_INTEGER)(v11 + 936));
  KiSetTimerEx(v11 + 672, *(_QWORD *)(v11 + 936), 0, 0, v11 + 608);
  *(_WORD *)(v11 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v11 + 968), &v50);
  ExLocalTimeToSystemTime(&v50, (PLARGE_INTEGER)(v11 + 960));
  KiSetTimerEx(v11 + 832, *(_QWORD *)(v11 + 960), 0, 0, v11 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  ExpWriteTimeZoneBias((_DWORD *)(v11 + 440), v42);
  if ( LocalTime.QuadPart )
    v43 = *(_QWORD *)(v11 + 992);
  else
    v43 = *(_QWORD *)(v11 + 960) - 10000LL;
  ExpWriteTimeZoneBiasStartEnd(v25, v43);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias(*(unsigned int *)(v11 + 436));
  v45 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v11 + 984) )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v11 + 984) = v45;
  }
  LOBYTE(v44) = v4;
  ExpLogRefreshTimeZoneInformationSuccess(
    (unsigned int)Buf2,
    v44,
    (unsigned int)&v51,
    (unsigned int)&v57,
    (__int64)&LocalTime);
  LOBYTE(v46) = v48;
  EtwTraceTimeZoneInformationRefresh(0, *(_DWORD *)(v11 + 436), *v35, v46, v4);
  return 1;
}
