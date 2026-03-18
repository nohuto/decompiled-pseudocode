/*
 * XREFs of xxxRemoteConnect @ 0x1C007EDC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     FastGetProfileIntW @ 0x1C0061160 (FastGetProfileIntW.c)
 *     InitVideo @ 0x1C0068398 (InitVideo.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C006856C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C006863C (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     InitLoadResources @ 0x1C006C520 (InitLoadResources.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     SetConnectCompletedState @ 0x1C007AD40 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C007AD94 (PowerConnectionEvent.c)
 *     SetProtocolType @ 0x1C007E790 (SetProtocolType.c)
 *     PopulateUMKMHandlePair @ 0x1C007F490 (PopulateUMKMHandlePair.c)
 *     SetConsoleSwitchInProgress @ 0x1C007F4D0 (SetConsoleSwitchInProgress.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C007F550 (DxgkEngNotifyDisplayChange.c)
 *     GreMultiUserInitSession @ 0x1C007F590 (GreMultiUserInitSession.c)
 *     CleanupRemoteHandles @ 0x1C00C2980 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00D4750 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00D5E68 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     GreDrvConnect @ 0x1C016C570 (GreDrvConnect.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int16 *v5; // rsi
  int v6; // r15d
  PDEVICE_OBJECT v8; // rcx
  void *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  NTSTATUS v14; // ebx
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  _DWORD *v20; // rax
  PVOID v21; // rdx
  HANDLE v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  PVOID v25; // rsi
  __int64 Pool2; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  int v37; // r8d
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  PVOID Object[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  ULONG Value; // [rsp+148h] [rbp+40h] BYREF

  v5 = a3;
  v6 = a2;
  Value = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C029BAE0 )
    {
      result = qword_1C029BAE0();
      if ( (int)result < 0 )
        return result;
      if ( qword_1C029BAE8 )
        return qword_1C029BAE8(a1, v5, a4);
    }
    return 3221225659LL;
  }
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v9 = &WPP_55a08082dbd636251a5824c03d734996_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      10,
      (__int64)&WPP_55a08082dbd636251a5824c03d734996_Traceguids,
      (__int64)v5);
  gdwHydraHint |= 8u;
  if ( (PVOID)PsGetCurrentProcess(v8, a2, a3, v9) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( gfSwitchInProgress )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  *(_QWORD *)&gpThinWireCache = &ThinWireCache;
  result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 48), &gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 56), &gRemoteKeyboardChannelHandlePair);
    v14 = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
      ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
      ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
      SetProtocolType(*(_WORD *)(a1 + 264));
      gPreviousProtocolType = *(_WORD *)(a1 + 264);
      gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
      dword_1C0295010 = *(_DWORD *)(a1 + 276);
      gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
      gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemotePreviousMonitorsCount = gRemoteNumMonitors;
      *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      xmmword_1C0295038 = *(_OWORD *)(a1 + 178);
      qword_1C0295048 = *(_QWORD *)(a1 + 194);
      gWinStationInfo = *(_OWORD *)(a1 + 202);
      word_1C02950C0 = *(_WORD *)(a1 + 218);
      xmmword_1C02950C4 = *(_OWORD *)(a1 + 220);
      dword_1C02950D4 = *(_DWORD *)(a1 + 236);
      memset(&gstrBaseWinStationName, 0, 0x40uLL);
      *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
      xmmword_1C0294F80 = *(_OWORD *)(a1 + 96);
      xmmword_1C0294F90 = *(_OWORD *)(a1 + 112);
      xmmword_1C0294FA0 = *(_OWORD *)(a1 + 128);
      v15 = wcschr(&gstrBaseWinStationName, 0x23u);
      if ( v15 )
        *v15 = 0;
      v19 = gbRemoteFxSession;
      gbRemoteFxSession = *(_DWORD *)(a1 + 292);
      dword_1C0297080 = *(_DWORD *)(a1 + 292);
      if ( *(_DWORD *)(a1 + 292) )
        qword_1C0297084 = *(_QWORD *)(a1 + 296);
      gbConnected = 1;
      if ( qword_1C029CC70 && (unsigned int)qword_1C029CC70(v17, v16, v18) )
      {
        FastGetProfileIntW(0LL, 39LL, (const WCHAR *)L"CursorBlinkEnable", 0, &Value, 0);
        v20 = gpsi;
        if ( !Value )
        {
          *((_DWORD *)gpsi + 559) &= ~4u;
LABEL_23:
          v21 = gVideoFileObject;
          if ( gVideoFileObject )
          {
            if ( ghRemoteVideoChannel )
            {
LABEL_26:
              v22 = ghRemoteBeepChannel;
              if ( ghRemoteBeepChannel )
              {
                Object[0] = 0LL;
                v14 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
                gpRemoteBeepDevice = Object[0];
                if ( v14 < 0 )
                  goto LABEL_40;
              }
              if ( gbVideoInitialized || !gbNonServiceSession )
              {
                if ( qword_1C029CC70 )
                  v35 = qword_1C029CC70(v22, v21, v18);
                else
                  v35 = 0;
                LOBYTE(v22) = v35 == 0;
                ((void (__fastcall *)(HANDLE))qword_1C02967C8)(v22);
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
                  || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v36) = 0;
                }
                if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_D(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v36,
                    v37,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    4,
                    15,
                    11,
                    (__int64)&WPP_55a08082dbd636251a5824c03d734996_Traceguids,
                    gSessionId);
                }
                v14 = 0;
                goto LABEL_40;
              }
              if ( InitVideo(a4) )
              {
                if ( qword_1C029BAF0
                  && (int)qword_1C029BAF0() >= 0
                  && (!qword_1C029BAF8 || !(unsigned int)qword_1C029BAF8()) )
                {
                  goto LABEL_92;
                }
                InitLoadResources(0, v23, v24);
                v25 = gpLeakTrackingAllocator;
                if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x744B7355) == 0x744B7355
                  && (v40 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
                {
                  while ( *((_DWORD *)gpLeakTrackingAllocator + v40) != 1951101781 )
                  {
                    if ( ++v40 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                      goto LABEL_35;
                  }
                  Pool2 = ExAllocatePool2(68LL, 80LL);
                  if ( !Pool2 )
                    goto LABEL_91;
                  memset(BackTrace, 0, sizeof(BackTrace));
                  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
                  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
                  {
                    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                            v25,
                                            Pool2,
                                            BackTrace) )
                    {
                      gptmrWD = (PKTIMER)Pool2;
                      goto LABEL_37;
                    }
                    goto LABEL_90;
                  }
                  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                           v25,
                                           Pool2,
                                           BackTrace) )
                  {
LABEL_90:
                    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_91:
                    gptmrWD = 0LL;
LABEL_92:
                    v14 = -1073741801;
                    goto LABEL_40;
                  }
                  Pool2 += 16LL;
                }
                else
                {
LABEL_35:
                  Pool2 = ExAllocatePool2(68LL, 64LL);
                }
                gptmrWD = (PKTIMER)Pool2;
                if ( Pool2 )
                {
LABEL_37:
                  KeInitializeTimerEx((PKTIMER)Pool2, SynchronizationTimer);
                  if ( qword_1C029CC70 )
                    v30 = qword_1C029CC70(v28, v27, v29);
                  else
                    v30 = 0;
                  LOBYTE(v28) = v30 == 0;
                  ((void (__fastcall *)(__int64))qword_1C02967C8)(v28);
                  DispBrokerUpdateKernelDisplayPolicies();
                  DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
                  gbVideoInitialized = 1;
                  goto LABEL_40;
                }
                goto LABEL_92;
              }
              gbConnected = 0;
              if ( gbConnectCompleted )
              {
                gbConnectCompleted = 0;
                PowerConnectionEvent();
              }
              goto LABEL_89;
            }
          }
          else if ( ghRemoteVideoChannel )
          {
            Object[0] = 0LL;
            v14 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
            if ( v14 < 0 )
              goto LABEL_40;
            gVideoFileObject = Object[0];
            RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
            Object[0] = 0LL;
            v14 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
            gThinwireFileObject = Object[0];
            if ( v14 < 0 )
              goto LABEL_40;
            if ( (unsigned int)GreMultiUserInitSession(
                                 (int)&gRemoteContext,
                                 (int)ghRemoteThinwireChannel,
                                 gpThinWireCache,
                                 gRemoteNumMonitors,
                                 gRemotePrimaryMonitor,
                                 (__int64)gVideoFileObject,
                                 (__int64)Object[0],
                                 v6,
                                 v5,
                                 19,
                                 &gRemoteDisplayDeviceName) )
            {
              if ( qword_1C029CC70 && (unsigned int)qword_1C029CC70(v39, v21, v18) )
              {
                v14 = GreDeviceIoControlImpl(
                        RelatedDeviceObject,
                        0x381004u,
                        0LL,
                        0,
                        0LL,
                        0,
                        (unsigned int *)Object,
                        0,
                        1);
                if ( v14 < 0 )
                {
LABEL_40:
                  KeSetEvent(gpevtVideoInitialized, 1, 0);
                  if ( v14 )
                  {
                    if ( v14 < 0 )
                    {
                      gbRemoteFxSession = v19;
                      dword_1C0297080 = v19;
                      CleanupRemoteHandles(&gRemoteContext);
                    }
                  }
                  else
                  {
                    if ( !gProtocolType )
                      RtlSetActiveConsoleId((unsigned int)gSessionId);
                    if ( qword_1C029BB00 && (int)qword_1C029BB00() >= 0 && qword_1C029BB08 )
                      qword_1C029BB08();
                    if ( qword_1C029CC70 )
                    {
                      if ( (unsigned int)qword_1C029CC70(v32, v31, v33) )
                        DrvEscapeRemoteDrivers(
                          *((_QWORD *)gpDispInfo + 2),
                          (unsigned __int16)gProtocolType,
                          (_DWORD)qword_1C0297068,
                          6,
                          0LL,
                          0);
                    }
                    SetConnectCompletedState(1);
                  }
                  SetConsoleSwitchInProgress(0LL);
                  LOBYTE(v34) = 1;
                  DxgkEngNotifyDisplayChange(v34);
                  return (unsigned int)v14;
                }
                v14 = GreDrvConnect(&gRemoteContext);
              }
              if ( v14 < 0 )
                goto LABEL_40;
              goto LABEL_26;
            }
            goto LABEL_89;
          }
          if ( (unsigned int)GreMultiUserInitSession(
                               (int)&gRemoteContext,
                               (int)ghRemoteThinwireChannel,
                               gpThinWireCache,
                               gRemoteNumMonitors,
                               gRemotePrimaryMonitor,
                               (__int64)gVideoFileObject,
                               (__int64)gThinwireFileObject,
                               v6,
                               v5,
                               19,
                               &gRemoteDisplayDeviceName) )
            goto LABEL_26;
LABEL_89:
          v14 = -1073741823;
          goto LABEL_40;
        }
      }
      else
      {
        v20 = gpsi;
      }
      v20[559] |= 4u;
      goto LABEL_23;
    }
  }
  return result;
}
