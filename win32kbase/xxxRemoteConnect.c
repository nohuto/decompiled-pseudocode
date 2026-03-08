/*
 * XREFs of xxxRemoteConnect @ 0x1C000F480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     PopulateUMKMHandlePair @ 0x1C000FBD0 (PopulateUMKMHandlePair.c)
 *     SetConsoleSwitchInProgress @ 0x1C000FC10 (SetConsoleSwitchInProgress.c)
 *     GreMultiUserInitSession @ 0x1C000FCA0 (GreMultiUserInitSession.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C000FDC0 (DxgkEngNotifyDisplayChange.c)
 *     SetProtocolType @ 0x1C000FE10 (SetProtocolType.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C001064C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C001077C (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     InitVideo @ 0x1C0010AAC (InitVideo.c)
 *     InitLoadResources @ 0x1C0015CF0 (InitLoadResources.c)
 *     SetConnectCompletedState @ 0x1C0016780 (SetConnectCompletedState.c)
 *     PowerConnectionEvent @ 0x1C0016838 (PowerConnectionEvent.c)
 *     FastGetProfileIntW @ 0x1C0018FA0 (FastGetProfileIntW.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     CleanupRemoteHandles @ 0x1C00CFCE0 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00D8D30 (DrvEscapeRemoteDrivers.c)
 *     wcschr @ 0x1C00DA918 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     GreDrvConnect @ 0x1C01998F0 (GreDrvConnect.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r14
  PDEVICE_OBJECT v11; // rcx
  void *v12; // r9
  __int64 result; // rax
  NTSTATUS v14; // edi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  wchar_t *v25; // rax
  _DWORD *v26; // rax
  HANDLE v27; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v28; // rsi
  int v29; // eax
  __int64 Pool2; // rbx
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int *v39; // rax
  __int64 v40; // rcx
  int v41; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  char v47; // bl
  bool v48; // di
  _DWORD *v49; // rax
  int v50; // r8d
  int v51; // edx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // r10
  unsigned int v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+68h] [rbp-98h]
  unsigned __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  PVOID v59; // [rsp+78h] [rbp-88h] BYREF
  PVOID v60; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v63; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Value; // [rsp+190h] [rbp+90h] BYREF

  Value = 0;
  v10 = *(_QWORD *)(SGDGetSessionState() + 24) + 3016LL;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C02D6398 )
    {
      result = qword_1C02D6398();
      if ( (int)result < 0 )
        return result;
      if ( qword_1C02D63A0 )
        return qword_1C02D63A0(a1, a3, a4);
    }
    return 3221225659LL;
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  v12 = &WPP_8de2a1af8c7e334c4353e58308925ea3_Traceguids;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      10,
      (__int64)&WPP_8de2a1af8c7e334c4353e58308925ea3_Traceguids,
      (__int64)a3);
  gdwHydraHint |= 8u;
  if ( (PVOID)PsGetCurrentProcess(v11, v8, v9, v12) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
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
      SetProtocolType(*(unsigned __int16 *)(a1 + 264));
      LOWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = *(_WORD *)(a1 + 264);
      gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
      dword_1C02D1208 = *(_DWORD *)(a1 + 276);
      v15 = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 15912) = v15;
      v20 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 13820) = v20;
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemotePreviousMonitorsCount = gRemoteNumMonitors;
      *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      xmmword_1C02D1230 = *(_OWORD *)(a1 + 178);
      qword_1C02D1240 = *(_QWORD *)(a1 + 194);
      gWinStationInfo = *(_OWORD *)(a1 + 202);
      word_1C02D12B8 = *(_WORD *)(a1 + 218);
      xmmword_1C02D12BC = *(_OWORD *)(a1 + 220);
      dword_1C02D12CC = *(_DWORD *)(a1 + 236);
      memset(&gstrBaseWinStationName, 0, 0x40uLL);
      *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
      xmmword_1C02D1190 = *(_OWORD *)(a1 + 96);
      xmmword_1C02D11A0 = *(_OWORD *)(a1 + 112);
      xmmword_1C02D11B0 = *(_OWORD *)(a1 + 128);
      v25 = wcschr(&gstrBaseWinStationName, 0x23u);
      if ( v25 )
        *v25 = 0;
      v57 = gbRemoteFxSession;
      gbRemoteFxSession = *(_DWORD *)(a1 + 292);
      *(_DWORD *)(v10 + 64) = *(_DWORD *)(a1 + 292);
      if ( *(_DWORD *)(a1 + 292) )
        *(_QWORD *)(v10 + 68) = *(_QWORD *)(a1 + 296);
      gbConnected = 1;
      if ( qword_1C02D7438 && (unsigned int)qword_1C02D7438(0LL) )
      {
        FastGetProfileIntW(0, 39, (int)L"CursorBlinkEnable", 0, &Value, 0);
        v26 = gpsi;
        if ( !Value )
        {
          *((_DWORD *)gpsi + 559) &= ~4u;
LABEL_23:
          if ( gVideoFileObject )
          {
            if ( !ghRemoteVideoChannel )
            {
LABEL_25:
              if ( (unsigned int)GreMultiUserInitSession(
                                   v10,
                                   (int)ghRemoteThinwireChannel,
                                   gpThinWireCache,
                                   gRemoteNumMonitors,
                                   gRemotePrimaryMonitor,
                                   (__int64)gVideoFileObject,
                                   (__int64)gThinwireFileObject,
                                   a2,
                                   a3,
                                   19,
                                   &gRemoteDisplayDeviceName) )
                goto LABEL_26;
LABEL_90:
              v14 = -1073741823;
              goto LABEL_41;
            }
LABEL_26:
            v27 = ghRemoteBeepChannel;
            if ( ghRemoteBeepChannel )
            {
              Object[0] = 0LL;
              v14 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
              gpRemoteBeepDevice = Object[0];
              if ( v14 < 0 )
                goto LABEL_41;
            }
            if ( gbVideoInitialized || !gbNonServiceSession )
            {
              if ( qword_1C02D7438 )
                v41 = qword_1C02D7438(v27);
              else
                v41 = 0;
              DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
              LOBYTE(v43) = v41 == 0;
              (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 360))(v43);
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
                || (v47 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v47 = 0;
              }
              v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v49 = (_DWORD *)SGDGetUserSessionState(WPP_GLOBAL_Control, v44, v45, v46);
                LOBYTE(v50) = v48;
                LOBYTE(v51) = v47;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v51,
                  v50,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  15,
                  11,
                  (__int64)&WPP_8de2a1af8c7e334c4353e58308925ea3_Traceguids,
                  *v49);
              }
              v14 = 0;
              goto LABEL_41;
            }
            if ( InitVideo(a4) )
            {
              if ( !qword_1C02D63A8 || (int)qword_1C02D63A8() < 0 || qword_1C02D63B0 && (unsigned int)qword_1C02D63B0() )
              {
                InitLoadResources(0LL);
                v28 = gpLeakTrackingAllocator;
                v64 = 64LL;
                v56 = 1951101781;
                v62 = 68LL;
                v29 = *(_DWORD *)gpLeakTrackingAllocator;
                if ( !*(_DWORD *)gpLeakTrackingAllocator )
                {
                  Pool2 = ExAllocatePool2(68LL, 64LL, 1951101781LL);
                  if ( Pool2 )
                    _InterlockedIncrement64((volatile signed __int64 *)v28 + 14);
                  goto LABEL_37;
                }
                if ( v29 == 1 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                         gpLeakTrackingAllocator,
                         0x744B7355u) )
                  {
                    v54 = (_QWORD *)ExAllocatePool2(v62 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v56);
                    Pool2 = (__int64)v54;
                    if ( !v54
                      || (_InterlockedIncrement64((volatile signed __int64 *)v28 + 14),
                          *v54 = 1951101781LL,
                          Pool2 = (__int64)(v54 + 2),
                          v54 == (_QWORD *)-16LL) )
                    {
                      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                        *((NSInstrumentation::CPointerHashTable **)v28 + 1),
                        (const void *)0x744B7355);
                    }
LABEL_37:
                    gptmrWD = (PKTIMER)Pool2;
                    if ( Pool2 )
                    {
LABEL_38:
                      KeInitializeTimerEx((PKTIMER)Pool2, SynchronizationTimer);
                      if ( qword_1C02D7438 )
                        v32 = qword_1C02D7438(v31);
                      else
                        v32 = 0;
                      v33 = DxDdGetDxgkWin32kInterface();
                      LOBYTE(v34) = v32 == 0;
                      (*(void (__fastcall **)(__int64))(v33 + 360))(v34);
                      DispBrokerUpdateKernelDisplayPolicies();
                      DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
                      gbVideoInitialized = 1;
                      goto LABEL_41;
                    }
                    goto LABEL_93;
                  }
                }
                else if ( v29 == 2 )
                {
                  v58 = 0LL;
                  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                          gpLeakTrackingAllocator,
                          0x744B7355u,
                          &v58) )
                  {
                    Object[0] = &v62;
                    Object[1] = &v56;
                    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                              v28,
                              Object,
                              &v64);
                    goto LABEL_37;
                  }
                  Pool2 = ExAllocatePool2(v55, 80LL, 1951101781LL);
                  if ( Pool2 )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)v28 + 16);
                    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
                    {
                      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                              v28,
                                              Pool2,
                                              v58,
                                              BackTrace) )
                      {
                        gptmrWD = (PKTIMER)Pool2;
                        goto LABEL_38;
                      }
                    }
                    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                                 v28,
                                                 Pool2,
                                                 v58,
                                                 BackTrace) )
                    {
                      Pool2 += 16LL;
                      goto LABEL_37;
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)v28 + 17);
                    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
                  }
                }
                gptmrWD = 0LL;
              }
LABEL_93:
              v14 = -1073741801;
              goto LABEL_41;
            }
            gbConnected = 0;
            if ( gbConnectCompleted )
            {
              gbConnectCompleted = 0;
              PowerConnectionEvent();
            }
            goto LABEL_90;
          }
          if ( !ghRemoteVideoChannel )
            goto LABEL_25;
          v59 = 0LL;
          v14 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v59, 0LL);
          if ( v14 < 0 )
            goto LABEL_41;
          gVideoFileObject = v59;
          RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v59);
          v60 = 0LL;
          v14 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v60, 0LL);
          gThinwireFileObject = v60;
          if ( v14 < 0 )
            goto LABEL_41;
          if ( !(unsigned int)GreMultiUserInitSession(
                                v10,
                                (int)ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                gRemotePrimaryMonitor,
                                (__int64)gVideoFileObject,
                                (__int64)v60,
                                a2,
                                a3,
                                19,
                                &gRemoteDisplayDeviceName) )
            goto LABEL_90;
          if ( qword_1C02D7438 && (unsigned int)qword_1C02D7438(v53) )
          {
            v14 = GreDeviceIoControlImpl(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, &v63, 0, 1);
            if ( v14 < 0 )
              goto LABEL_41;
            v14 = GreDrvConnect(v10);
          }
          if ( v14 >= 0 )
            goto LABEL_26;
LABEL_41:
          KeSetEvent(gpevtVideoInitialized, 1, 0);
          if ( v14 )
          {
            if ( v14 < 0 )
            {
              gbRemoteFxSession = v57;
              *(_DWORD *)(v10 + 64) = v57;
              CleanupRemoteHandles(v10);
            }
          }
          else
          {
            if ( !gProtocolType )
            {
              v39 = (unsigned int *)SGDGetUserSessionState(v36, v35, v37, v38);
              RtlSetActiveConsoleId(*v39);
            }
            if ( qword_1C02D63B8 && (int)qword_1C02D63B8() >= 0 && qword_1C02D63C0 )
              qword_1C02D63C0();
            if ( qword_1C02D7438 )
            {
              if ( (unsigned int)qword_1C02D7438(v36) )
                DrvEscapeRemoteDrivers(
                  *((_QWORD *)gpDispInfo + 2),
                  (unsigned __int16)gProtocolType,
                  *(_QWORD *)(v10 + 40),
                  6,
                  0LL,
                  0);
            }
            SetConnectCompletedState(1LL);
          }
          SetConsoleSwitchInProgress(0LL);
          LOBYTE(v40) = 1;
          DxgkEngNotifyDisplayChange(v40);
          return (unsigned int)v14;
        }
      }
      else
      {
        v26 = gpsi;
      }
      v26[559] |= 4u;
      goto LABEL_23;
    }
  }
  return result;
}
