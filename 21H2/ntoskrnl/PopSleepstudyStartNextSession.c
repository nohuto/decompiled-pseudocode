/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140809838
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorStartNextSession @ 0x1408095C4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     PopSetModernStandbyTransitionReason @ 0x14039A8F4 (PopSetModernStandbyTransitionReason.c)
 *     PopCalculateIdleInformation @ 0x14039AD4C (PopCalculateIdleInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopThermalCsEntry @ 0x1405D03D0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1405D0450 (PopThermalCsExit.c)
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140809614 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140809E5C (PopSleepstudySendSessionChangeEvent.c)
 *     PopSleepstudySendWnfNotification @ 0x14080A040 (PopSleepstudySendWnfNotification.c)
 *     PopDiagTraceSleepStudyStart @ 0x14080A52C (PopDiagTraceSleepStudyStart.c)
 *     PopTransitionTelemetryOsState @ 0x14081B500 (PopTransitionTelemetryOsState.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140997C84 (PopSleepstudyCaptureResiliencyStatistics.c)
 */

void __fastcall PopSleepstudyStartNextSession(int a1, unsigned int a2)
{
  char *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 InterruptTimePrecise; // rax
  __int64 v8; // r14
  int v9; // eax
  int v10; // esi
  int v11; // edi
  __int64 v12; // r8
  char LowPart; // si
  int v14; // r15d
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 i; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  LARGE_INTEGER v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C8h]
  _OWORD v40[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+70h] [rbp-98h] BYREF
  __int128 v43; // [rsp+80h] [rbp-88h]
  _BYTE v44[336]; // [rsp+98h] [rbp-70h] BYREF

  memset(v44, 0, 0x144uLL);
  memset(v40, 0, sizeof(v40));
  v42 = 0LL;
  v43 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v4 = (char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048;
  v5 = ((_BYTE)dword_140C20048 + 1) & 7;
  dword_140C20048 = ((_BYTE)dword_140C20048 + 1) & 7;
  v6 = 13 * (v5 + 2);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v38);
  v41 = -2500000LL;
  v8 = InterruptTimePrecise;
  v9 = PopCurrentPowerStatePrecise(v40, (__int64)&v41);
  v10 = DWORD2(v40[0]);
  v11 = HIDWORD(v40[0]);
  *((_QWORD *)v4 + 3) = v8;
  v38.LowPart = v9 != 258;
  *((_DWORD *)v4 + 9) = a2;
  *((_DWORD *)v4 + 11) = v11;
  *((_DWORD *)v4 + 13) = v10;
  memset((char *)&PopSleepstudySessionContext[v6] + 4, 0, 0x64uLL);
  LODWORD(PopSleepstudySessionContext[v6]) = a1;
  v12 = *((_QWORD *)v4 + 1);
  PopSleepstudySessionContext[v6 + 2] = v8;
  PopSleepstudySessionContext[v6 + 1] = v12 + 1;
  LOBYTE(PopSleepstudySessionContext[v6 + 7]) = v40[0];
  LODWORD(PopSleepstudySessionContext[v6 + 4]) = a2;
  LODWORD(PopSleepstudySessionContext[v6 + 5]) = v11;
  LODWORD(PopSleepstudySessionContext[v6 + 6]) = v10;
  if ( *(_DWORD *)v4 == 1 )
  {
    LowPart = v38.LowPart;
  }
  else
  {
    if ( *(_DWORD *)v4 != 2 )
    {
      LowPart = v38.LowPart;
      goto LABEL_4;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &NullGuid);
    LowPart = v38.LowPart;
    LOBYTE(v35) = v38.LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v4, v40, v35, 0LL);
  }
  if ( PopPlatformAoAc )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        goto LABEL_4;
      PopTransitionTelemetryOsState(4LL, 6LL);
      PopThermalCsExit();
    }
  }
  else if ( a1 == 2 )
  {
    goto LABEL_4;
  }
  if ( *(_DWORD *)v4 == 1 )
    ++PopSleepstudySessionContext[v6 + 1];
  if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140C54214 = 1, a1 != 3) )
  {
    if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
      PopSleepstudyStopReason = 17;
  }
  else
  {
    PopSleepstudyStopReason = dword_140C227D4;
  }
  PopSetModernStandbyTransitionReason(0, a2);
  PopSleepstudyCaptureSessionStatistics(v18, &NullGuid, PopSleepstudySessionContext[v6 + 1], (__int64)v40, v44);
  if ( !byte_140C1FF98 )
  {
    v19 = 2LL;
    v20 = &PopWdiScenarioStopEventData;
    v21 = v44;
    do
    {
      v22 = v21[1];
      *v20 = *v21;
      v23 = v21[2];
      v20[1] = v22;
      v24 = v21[3];
      v20[2] = v23;
      v25 = v21[4];
      v20[3] = v24;
      v26 = v21[5];
      v20[4] = v25;
      v27 = v21[6];
      v20[5] = v26;
      v28 = v21[7];
      v21 += 8;
      v20[6] = v27;
      v20 += 8;
      *(v20 - 1) = v28;
      --v19;
    }
    while ( v19 );
    v29 = *v21;
    v38.QuadPart = 0LL;
    v30 = v21[1];
    v39 = -1LL;
    *v20 = v29;
    v31 = v21[2];
    v20[1] = v30;
    v32 = v21[3];
    v33 = *((_QWORD *)v21 + 8);
    v20[2] = v31;
    v20[3] = v32;
    *((_QWORD *)v20 + 8) = v33;
    KeSetTimer2((__int64)&unk_140C1FFA0, -50000000LL, 0LL, (__int64)&v38);
    v34 = PopSleepstudySessionContext[v6 + 1] - 2;
    byte_140C1FF98 = 1;
    qword_140C1FF90 = v34;
  }
  PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &NullGuid);
LABEL_4:
  PopSleepstudySendSessionChangeEvent(v4, &PopSleepstudySessionContext[v6]);
  v14 = a1 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_10;
    PopCalculateIdleInformation((__int64)&v42);
    PopSleepstudySessionContext[v6 + 8] = v43;
    LOBYTE(v36) = 1;
    LOBYTE(v37) = LowPart;
    PopSleepstudySessionContext[v6 + 9] = *((_QWORD *)&v42 + 1);
    PopSleepstudyCaptureResiliencyStatistics(&PopSleepstudySessionContext[v6], v40, v37, v36);
    v16 = &WNF_PO_SCENARIO_CHANGE;
  }
  else
  {
    if ( PopPlatformAoAc && (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    {
      PopTransitionTelemetryOsState(3LL, 6LL);
      PopThermalCsEntry(a2 == 23);
    }
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(
      v15,
      &GUID_SPM_LOW_POWER_CS,
      PopSleepstudySessionContext[v6 + 1],
      (__int64)v40,
      v44);
    if ( !byte_140C1FF98 )
      PopDiagTraceSleepStudyStart();
    v16 = &WNF_PO_UMPO_SCENARIO_CHANGE;
  }
  PopSleepstudySendWnfNotification(v16, &GUID_SPM_LOW_POWER_CS);
LABEL_10:
  for ( i = PopSleepstudySessionContext[0]; (__int64 *)i != PopSleepstudySessionContext; i = *(_QWORD *)i )
    (*(void (__fastcall **)(_QWORD, __int64))(i + 16))(
      LODWORD(PopSleepstudySessionContext[v6]),
      PopSleepstudySessionContext[v6 + 1]);
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
