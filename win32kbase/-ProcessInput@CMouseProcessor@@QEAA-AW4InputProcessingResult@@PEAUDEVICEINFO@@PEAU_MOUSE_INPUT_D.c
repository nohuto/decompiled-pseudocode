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
  __int64 v11; // r8
  int v12; // r8d
  bool v13; // di
  int v14; // edx
  __int64 v15; // rdx
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
  int v29; // r8d
  int v31; // [rsp+40h] [rbp-C0h]
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v33; // [rsp+48h] [rbp-B8h]
  char *v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int64 *v37; // [rsp+78h] [rbp-88h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  struct tagPOINT v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-20h]
  _QWORD v45[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  LARGE_INTEGER PerformanceCounter; // [rsp+128h] [rbp+28h]
  LARGE_INTEGER v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+138h] [rbp+38h]
  int v53; // [rsp+13Ch] [rbp+3Ch]
  struct _MOUSE_INPUT_DATA v54[2]; // [rsp+140h] [rbp+40h] BYREF
  int v55; // [rsp+170h] [rbp+70h]
  int y_low; // [rsp+174h] [rbp+74h]
  struct tagPOINT v57; // [rsp+180h] [rbp+80h] BYREF

  v7 = a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v37, "ProcessMouseInput", 0LL);
  v9 = 0;
  v47 = 0LL;
  v53 = 0;
  v46 = 0LL;
  if ( a5 )
    v9 = 2;
  v31 = v9;
  v52 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v45[0] = *(_QWORD *)(a2 + 2256);
  v45[1] = *(_QWORD *)(a2 + 2272);
  v48 = *(_QWORD *)(a2 + 2280);
  v49 = *(_QWORD *)(a2 + 2296);
  v32 = 0;
  EtwTraceMouseInputApc(v10);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput(0LL, 7LL, v11);
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
      LOBYTE(v14) = v13;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        12,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    goto LABEL_66;
  }
  if ( gptiBlockInput )
  {
    v15 = 8LL;
LABEL_14:
    InputTraceLogging::Mouse::DropInput(0LL, v15, v11);
    goto LABEL_66;
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
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 13;
      LOBYTE(v18) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        13,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
    if ( (!qword_1C02D7438 || !(unsigned int)qword_1C02D7438(v16)) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 841);
    v15 = 9LL;
    goto LABEL_14;
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
          v24 = gliQpcFreq.QuadPart * v23 / 0x3E8;
          *((_QWORD *)&v35 + 1) = v24;
        }
        else
        {
          *(_QWORD *)&v35 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v35 + 1) = KeQueryPerformanceCounter(0LL);
          v31 = v52;
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
        *((_QWORD *)&v38 + 1) = *(_QWORD *)a2;
        v39 = *(_QWORD *)(a2 + 24);
        v40 = v35;
        v41 = *((_QWORD *)&v35 + 1);
        *(_QWORD *)&v38 = 2LL;
        v43 = v38;
        v44 = v39;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v57, (__int64)a3, &v40, v26, (__int64)&v43, 0LL);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v57);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(a1, &v57) == 1 )
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
              (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
          }
          v21 = (__int64)v33;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v57, 2048) && (v57.y & 0x2AA) != 0 )
            PoLatencySensitivityHint(0LL);
          v21 = (__int64)v33;
          v55 = v31;
          y_low = LOWORD(v57.y);
          memset(v54, 0, sizeof(v54));
          v19 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v42,
                                                  (struct tagPOINT)&v57,
                                                  v19,
                                                  v54,
                                                  v33,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v20 = (unsigned __int64)v34;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v21;
    }
    while ( v21 );
  }
  v51 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)v8 + 3416);
  MousePerfSummary::CollectMousePerfTelemetry((CMouseProcessor *)((char *)v8 + 2792), (const struct _MousePerf *)v45);
  *((_QWORD *)v8 + 428) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v8 + 3416, 0LL);
  KeLeaveCriticalRegion();
LABEL_66:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v37);
  return v32;
}
