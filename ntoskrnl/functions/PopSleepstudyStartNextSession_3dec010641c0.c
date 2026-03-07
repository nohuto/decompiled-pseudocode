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
  __int64 *v14; // rdi
  int v15; // r15d
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 i; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  LARGE_INTEGER v39; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h]
  _OWORD v41[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+70h] [rbp-98h] BYREF
  __int128 v44; // [rsp+80h] [rbp-88h]
  _QWORD v45[42]; // [rsp+98h] [rbp-70h] BYREF

  memset(v45, 0, 0x14CuLL);
  memset(v41, 0, sizeof(v41));
  v43 = 0LL;
  v44 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v4 = (char *)&unk_140C3B930 + 104 * (unsigned int)dword_140C3B928;
  v5 = ((_BYTE)dword_140C3B928 + 1) & 7;
  dword_140C3B928 = ((_BYTE)dword_140C3B928 + 1) & 7;
  v6 = 13 * v5;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v39);
  v42 = -2500000LL;
  v8 = InterruptTimePrecise;
  v9 = PopCurrentPowerStatePrecise(v41, (__int64)&v42);
  v10 = DWORD2(v41[0]);
  *((_QWORD *)v4 + 3) = v8;
  v11 = HIDWORD(v41[0]);
  *((_DWORD *)v4 + 9) = a2;
  *((_DWORD *)v4 + 11) = v11;
  v39.LowPart = v9 != 258;
  *((_DWORD *)v4 + 13) = v10;
  memset((char *)&PopSleepstudySessionContext[v6 + 26] + 4, 0, 0x64uLL);
  LODWORD(PopSleepstudySessionContext[v6 + 26]) = a1;
  v12 = *((_QWORD *)v4 + 1);
  PopSleepstudySessionContext[v6 + 28] = v8;
  PopSleepstudySessionContext[v6 + 27] = v12 + 1;
  LOBYTE(PopSleepstudySessionContext[v6 + 33]) = v41[0];
  LODWORD(PopSleepstudySessionContext[v6 + 30]) = a2;
  LODWORD(PopSleepstudySessionContext[v6 + 31]) = v11;
  LODWORD(PopSleepstudySessionContext[v6 + 32]) = v10;
  if ( *(_DWORD *)v4 == 1 )
  {
    LowPart = v39.LowPart;
  }
  else
  {
    if ( *(_DWORD *)v4 != 2 )
    {
      LowPart = v39.LowPart;
      goto LABEL_4;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &NullGuid);
    LowPart = v39.LowPart;
    LOBYTE(v19) = v39.LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v4, v41, v19, 0LL);
  }
  if ( PopPlatformAoAc )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        goto LABEL_4;
      PopTransitionTelemetryOsState(4, 6);
      PopThermalCsExit();
    }
  }
  else if ( a1 == 2 )
  {
    goto LABEL_4;
  }
  if ( *(_DWORD *)v4 == 1 )
    ++PopSleepstudySessionContext[v6 + 27];
  if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140CF7954 = 1, a1 != 3) )
  {
    if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
      PopSleepstudyStopReason = 17;
  }
  else
  {
    PopSleepstudyStopReason = dword_140C3CD74;
  }
  PopSetModernStandbyTransitionReason(0, a2);
  PopSleepstudyCaptureSessionStatistics(v20, &NullGuid, PopSleepstudySessionContext[v6 + 27], (__int64)v41, v45);
  if ( !byte_140C3B878 )
  {
    v21 = 2LL;
    v22 = &PopWdiScenarioStopEventData;
    v23 = v45;
    do
    {
      v24 = v23[1];
      *v22 = *v23;
      v25 = v23[2];
      v22[1] = v24;
      v26 = v23[3];
      v22[2] = v25;
      v27 = v23[4];
      v22[3] = v26;
      v28 = v23[5];
      v22[4] = v27;
      v29 = v23[6];
      v22[5] = v28;
      v30 = v23[7];
      v23 += 8;
      v22[6] = v29;
      v22 += 8;
      *(v22 - 1) = v30;
      --v21;
    }
    while ( v21 );
    v31 = *v23;
    v39.QuadPart = 0LL;
    v32 = v23[1];
    v40 = -1LL;
    *v22 = v31;
    v33 = v23[2];
    v22[1] = v32;
    v34 = v23[3];
    v22[2] = v33;
    v35 = v23[4];
    v22[3] = v34;
    v22[4] = v35;
    KeSetTimer2((__int64)&unk_140C3B880, -50000000LL, 0LL, (__int64)&v39);
    v36 = PopSleepstudySessionContext[v6 + 27] - 2;
    byte_140C3B878 = 1;
    qword_140C3B870 = v36;
  }
  PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &NullGuid);
LABEL_4:
  v14 = &PopSleepstudySessionContext[v6];
  PopSleepstudySendSessionChangeEvent(v4, &PopSleepstudySessionContext[v6 + 26]);
  v15 = a1 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_10;
    PopCalculateIdleInformation((__int64)&v43);
    PopSleepstudySessionContext[v6 + 34] = v44;
    LOBYTE(v37) = 1;
    LOBYTE(v38) = LowPart;
    PopSleepstudySessionContext[v6 + 35] = *((_QWORD *)&v43 + 1);
    PopSleepstudyCaptureResiliencyStatistics(v14 + 26, v41, v38, v37);
    v17 = &WNF_PO_SCENARIO_CHANGE;
  }
  else
  {
    if ( PopPlatformAoAc && (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    {
      PopTransitionTelemetryOsState(3, 6);
      PopThermalCsEntry(a2 == 23);
    }
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(
      v16,
      &GUID_SPM_LOW_POWER_CS,
      PopSleepstudySessionContext[v6 + 27],
      (__int64)v41,
      v45);
    if ( !byte_140C3B878 )
      PopDiagTraceSleepStudyStart();
    v17 = &WNF_PO_UMPO_SCENARIO_CHANGE;
  }
  PopSleepstudySendWnfNotification(v17, &GUID_SPM_LOW_POWER_CS);
LABEL_10:
  for ( i = PopSleepstudySessionContext[0]; (__int64 *)i != PopSleepstudySessionContext; i = *(_QWORD *)i )
    (*(void (__fastcall **)(_QWORD, __int64))(i + 16))(
      *((unsigned int *)v14 + 52),
      PopSleepstudySessionContext[v6 + 27]);
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
