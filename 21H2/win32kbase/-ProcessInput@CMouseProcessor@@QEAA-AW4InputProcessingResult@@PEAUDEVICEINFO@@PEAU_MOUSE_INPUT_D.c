/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01FB694
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00E92C8 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0035C74 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C00363B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0038074 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0038790 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     UpconvertTime @ 0x1C007ED60 (UpconvertTime.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C009A4B4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00BBF90 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionStopSonar @ 0x1C00EA0A8 (ApiSetEditionStopSonar.c)
 *     EtwTraceMouseInputApc @ 0x1C014E060 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01DDDC4 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01FAB80 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01FABFC (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01FCA08 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        CMouseProcessor *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  __int64 v7; // rdi
  CMouseProcessor *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r8d
  bool v12; // di
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  PDEVICE_OBJECT v16; // rcx
  bool v17; // di
  int v18; // edx
  struct _MousePacketPerf *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  unsigned int ExtraInformation; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // r14d
  int v26; // r14d
  USHORT Flags; // cx
  int v28; // edx
  __int64 v29; // r8
  int v31; // [rsp+40h] [rbp-C0h]
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v33; // [rsp+48h] [rbp-B8h]
  char *v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int64 *v37; // [rsp+78h] [rbp-88h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v42; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  _QWORD v47[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51; // [rsp+130h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  struct _MOUSE_INPUT_DATA v56[2]; // [rsp+150h] [rbp+50h] BYREF
  int v57; // [rsp+180h] [rbp+80h]
  int y_low; // [rsp+184h] [rbp+84h]
  struct tagPOINT v59; // [rsp+190h] [rbp+90h] BYREF

  v7 = a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v37, "ProcessMouseInput", 0LL);
  v9 = 0;
  v49 = 0LL;
  v55 = 0;
  v48 = 0LL;
  if ( a5 )
    v9 = 2;
  v31 = v9;
  v54 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v47[0] = *(_QWORD *)(a2 + 2256);
  v47[1] = *(_QWORD *)(a2 + 2272);
  v50 = *(_QWORD *)(a2 + 2280);
  v51 = *(_QWORD *)(a2 + 2296);
  v32 = 0;
  EtwTraceMouseInputApc(v10);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput();
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 12;
      LOBYTE(v13) = v12;
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        12,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    goto LABEL_65;
  }
  if ( gptiBlockInput )
  {
LABEL_13:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_65;
  }
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  ApiSetEditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 13;
      LOBYTE(v18) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        13,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    if ( (!qword_1C029CC70 || !(unsigned int)qword_1C029CC70(v16, v14, v15)) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v15);
    goto LABEL_13;
  }
  if ( IsMouseIVEnabled() && isChildPartition() )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v8 + 3872));
  v19 = (struct _MousePacketPerf *)gptCursorAsync;
  if ( a3 )
  {
    v20 = (unsigned __int64)a3 + v7;
    v34 = (char *)a3 + v7;
    do
    {
      v21 = (unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v20);
      v33 = (struct tagUIPI_INFO_INT *)v21;
      if ( (a3->Flags & 4) != 0 )
      {
        v32 = 1;
      }
      else
      {
        if ( a5 && (ExtraInformation = a3->ExtraInformation) != 0 )
        {
          v23 = UpconvertTime(ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v35 = v23;
          v24 = v23 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v35 + 1) = v24;
        }
        else
        {
          *(_QWORD *)&v35 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v35 + 1) = KeQueryPerformanceCounter(0LL);
          v31 = v54;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v24, a3, (struct DEVICEINFO *)a2);
        v25 = v21 == 0 ? 0x100 : 0;
        if ( IsMouseIVEnabled() && isChildPartition() )
          v25 |= 4u;
        if ( a5 )
        {
          v26 = (*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) != 0 ? 112 : 48) | v25;
        }
        else
        {
          Flags = a3->Flags;
          v26 = v25 | 0x40;
          if ( (Flags & 1) != 0 && (*(_DWORD *)(a2 + 904) & 1) != 0 )
            a3->Flags = Flags | 2;
          if ( !a3->LastX && !a3->LastY )
            v26 |= 8u;
        }
        LODWORD(v38) = 2;
        *((_QWORD *)&v38 + 1) = *(_QWORD *)a2;
        v39 = *(_QWORD *)(a2 + 24);
        v40 = v35;
        v41 = *((_QWORD *)&v35 + 1);
        v43 = v38;
        v44 = v39;
        v45 = v35;
        v46 = *((_QWORD *)&v35 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v59, (__int64)a3, &v45, v26, (__int64)&v43, 0LL);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v59);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             (__int64)a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v59) == 1 )
        {
          LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v28,
              v29,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              6,
              14,
              (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
          }
          v21 = (__int64)v33;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v59, 2048LL, v29)
            && (v59.y & 0x2AA) != 0 )
          {
            PoLatencySensitivityHint(0LL);
          }
          v21 = (__int64)v33;
          v57 = v31;
          y_low = LOWORD(v59.y);
          memset(v56, 0, sizeof(v56));
          v19 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v42,
                                                  (struct tagPOINT)&v59,
                                                  v19,
                                                  v56,
                                                  v33,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v20 = (unsigned __int64)v34;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v21;
    }
    while ( v21 );
  }
  v53 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)v8 + 3416);
  MousePerfSummary::CollectMousePerfTelemetry((CMouseProcessor *)((char *)v8 + 2792), (const struct _MousePerf *)v47);
  *((_QWORD *)v8 + 428) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v8 + 3416, 0LL);
  KeLeaveCriticalRegion();
LABEL_65:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v37);
  return v32;
}
