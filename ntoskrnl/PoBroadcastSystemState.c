/*
 * XREFs of PoBroadcastSystemState @ 0x140AA38F8
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x140980BC4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 *     PnprQuiesceDevices @ 0x140A9A284 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 *     PopSetDevicesSystemState @ 0x140AA42D0 (PopSetDevicesSystemState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     PopMapInternalActionToIrpAction @ 0x140584D54 (PopMapInternalActionToIrpAction.c)
 *     PopFxActivateDevicesForSx @ 0x1405865A4 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x1405880C0 (PopFxIdleDevicesFromSx.c)
 *     PopSleepDeviceList @ 0x14058E578 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x14058E81C (PopWakeDeviceList.c)
 *     ExReleaseTimeRefreshLock @ 0x1407E2A30 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     EmPowerPagingEnabled @ 0x140939B3C (EmPowerPagingEnabled.c)
 *     IoNotifyPowerOperationVetoed @ 0x1409536C4 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x140980AFC (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopFxNotifySxTransitionState @ 0x1409825D4 (PopFxNotifySxTransitionState.c)
 *     PopUpdateSmbiosData @ 0x140988D5C (PopUpdateSmbiosData.c)
 *     PopDiagTraceDevicesSuspend @ 0x14098B694 (PopDiagTraceDevicesSuspend.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x14098B75C (PopDiagTraceDevicesWakeEnd.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1409DC79C (WmiAcquireSmbiosLockExclusive.c)
 *     WmipReleaseSmbiosLockShared @ 0x1409DC84C (WmipReleaseSmbiosLockShared.c)
 *     PopBootLoaderSiData @ 0x140A9E9C8 (PopBootLoaderSiData.c)
 *     PopSetupSleepNotifies @ 0x140AA4370 (PopSetupSleepNotifies.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140AA46C4 (PopVerifierFlushMemoryBeforeSleep.c)
 *     PopDiagTraceDevicesLevel @ 0x140AA47F8 (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 *     MmShutdownSystem @ 0x140AA8E60 (MmShutdownSystem.c)
 *     BgDisplayFade @ 0x140AEC4BC (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int *v5; // r13
  char *v6; // rbx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  bool v11; // zf
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r14
  _DWORD *v18; // r15
  int v19; // esi
  __int64 v20; // r12
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r10
  int v25; // esi
  _DWORD *v26; // r14
  __int64 v27; // r8
  __int64 v28; // rcx
  char v30; // [rsp+30h] [rbp-30h]
  int v31; // [rsp+34h] [rbp-2Ch] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-28h] BYREF
  LARGE_INTEGER *p_Interval; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+48h] [rbp-18h]

  v5 = (unsigned int *)(a1 + 16);
  v6 = (char *)qword_140C3C9F0;
  v30 = *(_BYTE *)(a1 + 25);
  v4 = v30;
  *(_BYTE *)qword_140C3C9F0 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v30;
  DWORD1(PopCurrentBroadcast) = 0;
  v8 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(PopCurrentBroadcast) = v8;
  if ( v30 )
  {
    v10 = v8 | 0x1100;
  }
  else
  {
    DWORD1(PopCurrentBroadcast) = v8 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v9 = DWORD1(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    DWORD1(PopCurrentBroadcast) = v9;
    if ( *v5 != 5 )
      goto LABEL_6;
    v10 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v9;
  }
  DWORD1(PopCurrentBroadcast) = v10;
LABEL_6:
  DWORD2(PopCurrentBroadcast) = *v5;
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    Interval.QuadPart = *((unsigned int *)v6 + 1);
    BYTE6(Interval.QuadPart) = *(_BYTE *)(a1 + 26);
    BYTE5(Interval.QuadPart) = *(_BYTE *)(a1 + 24);
    p_Interval = &Interval;
    BYTE4(Interval.QuadPart) = v30;
    v34 = 8LL;
    EtwTraceKernelEvent((__int64)&p_Interval, 1u, 0x80008000, 0x1224u, 0x401802u);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    DWORD1(PopCurrentBroadcast) |= 0x200000u;
  v11 = (*(_DWORD *)(a1 + 20) & 0x4000000) == 0;
  v12 = *(_DWORD *)(a1 + 20) & 0x4000000;
  v31 = v12;
  if ( !v11 )
    DWORD1(PopCurrentBroadcast) |= 0x800000u;
  if ( v30 )
  {
LABEL_66:
    v6[464] = v4;
    if ( !v4 )
      goto LABEL_99;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(1);
  if ( *((int *)v6 + 112) >= 0 )
  {
    PopSetupSleepNotifies(v6);
    PopDiagTraceDevicesSuspend(
      *(_BYTE *)(a1 + 26) == 3,
      (DWORD1(PopCurrentBroadcast) >> 8) & 0xF,
      WORD2(PopCurrentBroadcast) >> 12);
    v13 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v13 = 14LL;
    PopCheckpointSystemSleep(v13);
    v16 = *v5;
    if ( *v5 == 4 )
    {
      if ( PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140C3CD90 )
      {
        v17 = 4LL;
LABEL_32:
        v18 = v6 + 352;
        v19 = 4;
        v20 = 4LL;
        while ( 1 )
        {
          if ( v19 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v31 )
          {
            if ( dword_140C3CD88 == 5 )
              WmiAcquireSmbiosLockExclusive();
            EmPowerPagingEnabled(0);
            PopVerifierFlushMemoryBeforeSleep();
            _InterlockedExchange(&PopPagingEnabled, 0);
            if ( *(_BYTE *)(a1 + 24) )
            {
              IoConfigureCrashDump(0LL, 1);
              if ( (PopShutdownCleanly & 0x10) != 0 )
                ObShutdownSystem(1);
              MmShutdownSystem(1LL);
            }
            else
            {
              ExAcquireTimeRefreshLock(1u);
              v6[468] = 1;
            }
          }
          LOBYTE(v14) = *v6;
          LOBYTE(v15) = 1;
          PopDiagTraceDevicesLevel((unsigned int)v19, 0LL, v14, v15);
          if ( *v18 )
          {
            if ( *(int *)(a1 + 20) < 0 )
              **((_QWORD **)v6 + 7) = 0LL;
            PopSleepDeviceList((__int64)v6, (__int64)&v6[64 * v19 + 64 + 8 * v19]);
          }
          LOBYTE(v21) = *v6;
          PopDiagTraceDevicesLevel((unsigned int)v19, 0LL, v21, 0LL);
          if ( *((int *)v6 + 112) < 0 )
            break;
          --v19;
          --v20;
          v18 -= 18;
          if ( v20 < v17 )
          {
            v12 = v31;
            v4 = v30;
            goto LABEL_58;
          }
        }
        v4 = 1;
        v30 = 1;
        if ( !*((_QWORD *)v6 + 57) || *(_DWORD *)(a1 + 12) != 1 )
          goto LABEL_56;
        v22 = PopMapInternalActionToIrpAction(*v5, *((_DWORD *)v6 + 1), 0);
        if ( v22 == 7 )
        {
          v23 = **((_QWORD **)v6 + 7);
        }
        else if ( *(int *)(a1 + 20) < 0 )
        {
LABEL_56:
          v12 = v31;
          if ( v31 )
            PopDirectedDripsNotifyTransitionFailed(*((_QWORD *)v6 + 57));
LABEL_58:
          if ( *v6 == 2 && v12 )
            PopFxIdleDevicesFromSx();
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
          if ( *(_BYTE *)(a1 + 26) == 3 )
            PopCheckpointSystemSleep(12LL);
          goto LABEL_63;
        }
        IoNotifyPowerOperationVetoed(v22, v23, v24);
        goto LABEL_56;
      }
    }
    else if ( v16 == 2 )
    {
      goto LABEL_30;
    }
    v17 = 0LL;
    if ( v16 != 3 )
      goto LABEL_32;
LABEL_30:
    v17 = 0LL;
    if ( *v6 == 2 )
      PopFxActivateDevicesForSx(1u);
    goto LABEL_32;
  }
LABEL_63:
  if ( (PopSimulate & 0x20000) == 0 || *(_BYTE *)(a1 + 26) != 2 )
    goto LABEL_66;
  DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
  v30 = 1;
  *((_DWORD *)v6 + 112) = -1073741823;
  v6[464] = 1;
LABEL_67:
  v6[466] = 1;
  *v6 = 2;
  *((_DWORD *)v6 + 1) = 1;
  if ( *(_BYTE *)(a1 + 26) != 2
    || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
        qword_140C3CF98 = KeQueryPerformanceCounter(0LL).QuadPart,
        *v6 == 2) )
  {
    if ( v12 )
      PopFxActivateDevicesForSx(1u);
  }
  v25 = 0;
  v26 = v6 + 64;
  do
  {
    if ( PoResumeFromHibernate && !v25 )
    {
      if ( byte_140C3CAA0 )
        qword_140C3D160 = KeQueryPerformanceCounter(0LL).QuadPart;
      if ( byte_140D17C58 )
      {
        BgDisplayFade();
        byte_140C6A809 = 0;
        byte_140C6A7F0 = 0;
      }
    }
    LOBYTE(a3) = *v6;
    LOBYTE(a4) = 1;
    PopDiagTraceDevicesLevel((unsigned int)v25, 1LL, a3, a4);
    if ( v26[1] < *v26 )
      PopWakeDeviceList(v6, (__int64)&v6[64 * v25 + 64 + 8 * v25]);
    LOBYTE(v27) = *v6;
    PopDiagTraceDevicesLevel((unsigned int)v25, 1LL, v27, 0LL);
    if ( v25 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v12 )
    {
      if ( v6[468] )
      {
        v6[468] = 0;
        ExReleaseTimeRefreshLock();
      }
      if ( PoResumeFromHibernate )
      {
        if ( qword_140C3CDA0 )
        {
          v28 = *(_QWORD *)(qword_140C3CDA0 + 216);
          if ( v28 )
            PopBootLoaderSiData(v28);
        }
        PopUpdateSmbiosData(
          *(_BYTE *)(*(_QWORD *)(qword_140C3CDA0 + 200) + 1084LL),
          *(_BYTE *)(*(_QWORD *)(qword_140C3CDA0 + 200) + 1085LL),
          *(_DWORD *)(*(_QWORD *)(qword_140C3CDA0 + 200) + 1080LL),
          *(_QWORD *)(*(_QWORD *)(qword_140C3CDA0 + 200) + 1072LL));
      }
      if ( dword_140C3CD88 == 5 )
        WmipReleaseSmbiosLockShared();
      EmPowerPagingEnabled(1);
      _InterlockedExchange(&PopPagingEnabled, 1);
      if ( (PopDebugFlags & 4) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
      }
    }
    ++v25;
    v26 += 18;
  }
  while ( v25 <= 4 );
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    PopFxIdleDevicesFromSx();
    qword_140C3CFA0 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopDiagTraceDevicesWakeEnd();
    PopCheckpointSystemSleep(36LL);
    if ( (PopDebugFlags & 8) != 0 )
    {
      Interval.QuadPart = -50000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
    }
  }
  v4 = v30;
  *v6 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
LABEL_99:
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v31 = *((_DWORD *)v6 + 112);
    v34 = 4LL;
    p_Interval = (LARGE_INTEGER *)&v31;
    EtwTraceKernelEvent((__int64)&p_Interval, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  if ( v4 && *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(0);
  DWORD1(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
