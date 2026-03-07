void __fastcall CTouchProcessor::ForwardInputToManipulationThread(CTouchProcessor *a1, __int64 a2, int a3)
{
  unsigned int v6; // r14d
  int v7; // r8d
  PDEVICE_OBJECT v8; // rcx
  bool v9; // bl
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // r8d
  __int64 v14; // r15
  CTouchProcessor *v15; // rcx
  unsigned int v16; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v18; // r13
  CTouchProcessor *v19; // rcx
  __int64 v20; // r9
  char v21; // di
  char v22; // si
  unsigned int v23; // r14d
  __int64 v24; // r12
  struct CInputPointerNode *NodeById; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  char v30; // cf
  bool v31; // bl
  int v32; // edx
  __int16 v33; // [rsp+38h] [rbp-79h]
  __int64 v34; // [rsp+60h] [rbp-51h] BYREF
  int v35; // [rsp+68h] [rbp-49h]
  int v36; // [rsp+6Ch] [rbp-45h]
  int v37; // [rsp+70h] [rbp-41h]
  int v38; // [rsp+74h] [rbp-3Dh]
  __int128 v39; // [rsp+78h] [rbp-39h]
  __int128 v40; // [rsp+88h] [rbp-29h]

  v6 = CTouchProcessor::CountMTNodesReadyForRouting(a1, (const struct CPointerInputFrame *)a2);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3128);
  if ( (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() && !v6 )
  {
    v8 = WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 81;
      v33 = 81;
LABEL_13:
      LOBYTE(v10) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v8->AttachedDevice,
        v10,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        v33,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      return;
    }
    return;
  }
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked((struct _KTHREAD **)a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3137);
  v11 = 240LL * (v6 - 1);
  if ( v11 > 0xFFFFFFFF || (v12 = v11 + 408, (unsigned int)(v11 + 408) < 0x198) )
  {
    if ( (unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() )
    {
      v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = 82;
        LOBYTE(v32) = v31;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v32,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          82,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
          v6);
      }
      return;
    }
    v12 = 0;
  }
  if ( !(unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() && v12 < 0x198 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3159);
  v14 = Win32AllocPoolZInit(v12, 0x6D696955u);
  if ( !(unsigned int)Feature_MitInputInteropMessageAllocationFailed__private_IsEnabledDeviceUsage() )
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3173);
    goto LABEL_26;
  }
  if ( v14 )
  {
LABEL_26:
    *(_DWORD *)v14 = a3;
    v16 = CTouchProcessor::CalcManipulationInputInfoSize(v15, v6);
    if ( v12 <= v16 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3179);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = v14 + 8;
    *(LARGE_INTEGER *)((isChildPartition() ? 0x48 : 0) + a2 + 104) = PerformanceCounter;
    CTouchProcessor::BuildManipulationInputInfo(
      v19,
      (struct tagMANIPULATION_INPUT_INFO *)(v14 + 8),
      v16,
      (const struct CPointerInputFrame *)a2);
    InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a2 + 72));
    InputTraceLogging::Pointer::SendFrameToUserMode(
      (const struct CPointerInputFrame *)a2,
      v6,
      (const struct tagMANIPULATION_INPUT_INFO *)(v14 + 8));
    SendMessageTo(7LL, v14, v12, v20);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v39 = *(_OWORD *)(v14 + 168);
    v40 = *(_OWORD *)(v14 + 184);
    if ( !*(_DWORD *)(v14 + 156) )
      goto LABEL_39;
    do
    {
      v24 = 240LL * v23;
      NodeById = CTouchProcessor::FindNodeById((struct _KTHREAD **)a1, *(_WORD *)(v24 + v18 + 164), 0, 0);
      if ( NodeById )
      {
        _InterlockedAdd((volatile signed __int32 *)NodeById + 9, 1u);
        if ( *((int *)NodeById + 9) <= 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3207);
      }
      v26 = *(_DWORD *)(v24 + v18 + 172);
      if ( (v26 & 2) != 0 )
        v22 = 1;
      if ( (v26 & 4) != 0 )
        v21 = 1;
      ++v23;
    }
    while ( v23 < *(_DWORD *)(v14 + 156) );
    if ( !v21 )
    {
LABEL_39:
      if ( (_DWORD)v39 != 3 || !v22 )
      {
        v27 = HMValidateHandleNoSecure(v40, 19);
        if ( v27 && (v29 = *(_QWORD *)(v27 + 472)) != 0 )
        {
          v37 = *(_DWORD *)(v29 + 956);
          v30 = *(_DWORD *)(v14 + 160) & 1;
          v38 = 0;
          v34 = v40;
          v36 = -v30;
          v35 = v39;
          SendMessageTo(19LL, (__int64)&v34, 24LL, v28);
          *(_DWORD *)(v29 + 960) = 0;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3249);
        }
      }
    }
    Win32FreePool((char *)v14);
    return;
  }
  v8 = WPP_GLOBAL_Control;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 83;
    v33 = 83;
    goto LABEL_13;
  }
}
