/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C
 * Callers:
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01B2398 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00405A4 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0040C3C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0041518 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0041978 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0041CD0 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0058230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C008FEA0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C00A7250 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00A9870 (ResetAccessibilityCountersOnMouseInput.c)
 *     IsRemoteConnection @ 0x1C00B1D58 (IsRemoteConnection.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceMouseInputApc @ 0x1C0123440 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF65C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01C0644 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C06C0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C01C22F4 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionStopSonar @ 0x1C01CE2CC (ApiSetEditionStopSonar.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        CMouseProcessor *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // rdi
  CMouseProcessor *v8; // r12
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _MousePacketPerf *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int ExtraInformation; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // edi
  char v21; // al
  _QWORD *v22; // rdx
  int v23; // edi
  USHORT Flags; // cx
  int v25; // edx
  __int64 v27; // rdx
  int v28; // [rsp+40h] [rbp-C0h]
  unsigned int v29; // [rsp+44h] [rbp-BCh]
  struct tagUIPI_INFO_INT *v30; // [rsp+48h] [rbp-B8h]
  char *v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+58h] [rbp-A8h]
  __int64 *v34; // [rsp+78h] [rbp-88h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  struct tagPOINT v39; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-10h]
  _QWORD v44[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+138h] [rbp+38h]
  LARGE_INTEGER v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  struct _MOUSE_INPUT_DATA v53[2]; // [rsp+150h] [rbp+50h] BYREF
  int v54; // [rsp+180h] [rbp+80h]
  int y_low; // [rsp+184h] [rbp+84h]
  struct tagPOINT v56; // [rsp+190h] [rbp+90h] BYREF

  v7 = (unsigned int)a4;
  v8 = a1;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v34, "ProcessMouseInput", 0LL, a4);
  v9 = 0;
  v46 = 0LL;
  v52 = 0;
  v45 = 0LL;
  if ( a5 )
    v9 = 2;
  v28 = v9;
  v51 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v44[0] = *(_QWORD *)(a2 + 2248);
  v44[1] = *(_QWORD *)(a2 + 2264);
  v47 = *(_QWORD *)(a2 + 2272);
  v48 = *(_QWORD *)(a2 + 2288);
  v29 = 0;
  EtwTraceMouseInputApc(v10);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    InputTraceLogging::Mouse::DropInput();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v11, 6, 12, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    goto LABEL_46;
  }
  if ( gptiBlockInput )
  {
LABEL_7:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_46;
  }
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  ApiSetEditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v12, 6, 13, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    if ( !(unsigned int)IsRemoteConnection(v13, v12) && *(_DWORD *)(a2 + 256) != -1073741738 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 888);
    goto LABEL_7;
  }
  if ( IsMouseIVEnabled() && isChildPartition() )
    CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v8 + 3864));
  v14 = (struct _MousePacketPerf *)gptCursorAsync;
  if ( a3 )
  {
    v15 = (unsigned __int64)a3 + v7;
    v31 = (char *)a3 + v7;
    do
    {
      v16 = (unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v15);
      v30 = (struct tagUIPI_INFO_INT *)v16;
      if ( (a3->Flags & 4) != 0 )
      {
        v29 = 1;
      }
      else
      {
        if ( a5 && (ExtraInformation = a3->ExtraInformation) != 0 )
        {
          v18 = UpconvertTime(ExtraInformation);
          a3->ExtraInformation = 0;
          *(_QWORD *)&v32 = v18;
          v19 = v18 * gliQpcFreq.QuadPart / 0x3E8;
          *((_QWORD *)&v32 + 1) = v19;
        }
        else
        {
          *(_QWORD *)&v32 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          *((LARGE_INTEGER *)&v32 + 1) = KeQueryPerformanceCounter(0LL);
          v28 = v51;
        }
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v19, a3, (struct DEVICEINFO *)a2);
        v20 = v16 == 0 ? 0x100 : 0;
        v21 = IsMouseIVEnabled();
        v22 = 0LL;
        if ( v21 && isChildPartition() )
          v20 |= 4u;
        if ( a5 == (_BYTE)v22 )
        {
          Flags = a3->Flags;
          v23 = v20 | 0x40;
          if ( (Flags & 1) != 0 && (*(_DWORD *)(a2 + 912) & 1) != 0 )
            a3->Flags = Flags | 2;
          if ( a3->LastX == (_DWORD)v22 && a3->LastY == (_DWORD)v22 )
            v23 |= 8u;
        }
        else
        {
          v23 = v20 | (*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) != 0 ? 112 : 48);
        }
        LODWORD(v35) = 2;
        *((_QWORD *)&v35 + 1) = *(_QWORD *)a2;
        v36 = *(_QWORD *)(a2 + 24);
        v37 = v32;
        v38 = *((_QWORD *)&v32 + 1);
        v40 = v35;
        v41 = v36;
        v42 = v32;
        v43 = *((_QWORD *)&v32 + 1);
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v56, (__int64)a3, &v42, v23, (__int64)&v40, v22);
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)&v56,
          0LL);
        v8 = a1;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                             (__int64)a1,
                             (const struct CMouseProcessor::MouseInputDataEx *)&v56) == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v25) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v25, 6, 14, (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v16 = (__int64)v30;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v56, 2048) && (v56.y & 0x2AA) != 0 )
            PoLatencySensitivityHint(0LL, v27);
          v16 = (__int64)v30;
          v54 = v28;
          y_low = LOWORD(v56.y);
          memset(v53, 0, sizeof(v53));
          v14 = **(struct _MousePacketPerf ***)&CMouseProcessor::ProcessMouseInputData(
                                                  a1,
                                                  &v39,
                                                  (struct tagPOINT)&v56,
                                                  v14,
                                                  v53,
                                                  v30,
                                                  (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
        }
        v15 = (unsigned __int64)v31;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v16;
    }
    while ( v16 );
  }
  v50 = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)v8 + 3416);
  MousePerfSummary::CollectMousePerfTelemetry((CMouseProcessor *)((char *)v8 + 2800), (const struct _MousePerf *)v44);
  CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)v8 + 3416));
LABEL_46:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v34);
  return v29;
}
