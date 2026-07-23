/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140775738
 * Callers:
 *     PopPowerAggregatorStartNextSession @ 0x1407756F4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE09C (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x140382B80 (PopGetMonitorReasonFromPowerEventId.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopCalculateIdleInformation @ 0x140570350 (PopCalculateIdleInformation.c)
 *     PopSetModernStandbyTransitionReason @ 0x1405766B4 (PopSetModernStandbyTransitionReason.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E344 (PopCurrentPowerStatePrecise.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408EB2D8 (PopDiagTraceSleepStudyStart.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FA0C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408FA218 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopSleepstudySendWnfNotification @ 0x1408FA3E0 (PopSleepstudySendWnfNotification.c)
 */

void __fastcall PopSleepstudyStartNextSession(ULONG a1, int a2)
{
  LARGE_INTEGER *v4; // r12
  __int64 v5; // rax
  LARGE_INTEGER *v6; // r14
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v8; // rsi
  int MonitorReasonFromPowerEventId; // eax
  ULONG v10; // edi
  ULONG v11; // ebx
  int v12; // r13d
  __int64 v13; // r8
  char LowPart; // di
  ULONG v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
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
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 *v36; // rcx
  __int64 v37; // rcx
  LARGE_INTEGER v38[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v41[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-90h]
  _BYTE v44[336]; // [rsp+88h] [rbp-80h] BYREF

  LODWORD(v39) = a2;
  memset(v44, 0, 0x148uLL);
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v43 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v4 = (LARGE_INTEGER *)((char *)&unk_140C1E518 + 96 * (unsigned int)dword_140C1E510);
  v5 = ((_BYTE)dword_140C1E510 + 1) & 7;
  dword_140C1E510 = ((_BYTE)dword_140C1E510 + 1) & 7;
  v6 = (LARGE_INTEGER *)((char *)&unk_140C1E518 + 96 * v5);
  InterruptTimePrecise = KeQueryInterruptTimePrecise(v38);
  v40 = -2500000LL;
  v8 = InterruptTimePrecise;
  v38[0].LowPart = PopCurrentPowerStatePrecise(v41, &v40) != 258;
  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(a2);
  v10 = HIDWORD(v41[1]);
  v4[4].HighPart = a2;
  v11 = v41[1];
  v12 = MonitorReasonFromPowerEventId;
  v4[3] = v8;
  v4[5].HighPart = v10;
  v4[6].HighPart = v11;
  memset((char *)&v6->QuadPart + 4, 0, 0x5CuLL);
  v6->LowPart = a1;
  v13 = v4[1].QuadPart + 1;
  v6[2] = v8;
  v6[1].QuadPart = v13;
  v6[5].LowPart = v10;
  v6[6].LowPart = v11;
  if ( v4->LowPart == 1 )
  {
    LowPart = v38[0].LowPart;
  }
  else
  {
    if ( v4->LowPart != 2 )
    {
      LowPart = v38[0].LowPart;
      goto LABEL_4;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &NullGuid);
    LowPart = v38[0].LowPart;
    LOBYTE(v16) = v38[0].LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v4, v41, v16, 0LL);
  }
  v17 = 2LL;
  if ( a1 != 2 )
  {
    if ( v4->LowPart == 1 )
      ++v6[1].QuadPart;
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140C4FFCC = 1, a1 != 3) )
    {
      v18 = 17;
      if ( (_DWORD)v39 == 45 )
        v18 = 2;
    }
    else
    {
      v18 = dword_140C23A54;
    }
    PopSleepstudyStopReason = v18;
    PopSetModernStandbyTransitionReason(0, v12);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PopSleepstudyCaptureSessionStatistics)(
      v19,
      &NullGuid,
      (LARGE_INTEGER)v6[1].QuadPart,
      v44);
    if ( !PopSleepstudySessionContext )
    {
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
        --v17;
      }
      while ( v17 );
      v29 = *v21;
      v38[0].QuadPart = 0LL;
      v30 = v21[1];
      v38[1].QuadPart = -1LL;
      *v20 = v29;
      v31 = v21[2];
      v20[1] = v30;
      v32 = v21[3];
      v33 = *((_QWORD *)v21 + 8);
      v20[2] = v31;
      v20[3] = v32;
      *((_QWORD *)v20 + 8) = v33;
      KeSetTimer2((__int64)&unk_140C1E468, -50000000LL, 0LL, (__int64)v38);
      PopSleepstudySessionContext = 1;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &NullGuid);
  }
LABEL_4:
  v15 = a1 - 1;
  if ( !v15 )
  {
    PopSetModernStandbyTransitionReason(1, v12);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PopSleepstudyCaptureSessionStatistics)(
      v37,
      &GUID_SPM_LOW_POWER_CS,
      (LARGE_INTEGER)v6[1].QuadPart,
      v44);
    if ( !PopSleepstudySessionContext )
      PopDiagTraceSleepStudyStart();
    v36 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_26;
  }
  if ( v15 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v42);
    v6[7].QuadPart = v43;
    LOBYTE(v34) = 1;
    LOBYTE(v35) = LowPart;
    v6[10] = *(LARGE_INTEGER *)((char *)&v42 + 8);
    PopSleepstudyCaptureResiliencyStatistics(v6, v41, v35, v34);
    v36 = &WNF_PO_SCENARIO_CHANGE;
LABEL_26:
    PopSleepstudySendWnfNotification(v36, &GUID_SPM_LOW_POWER_CS);
  }
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
