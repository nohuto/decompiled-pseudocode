__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  unsigned int v10; // r15d
  const struct CPointerInfoNode *v11; // r14
  __int64 Queue; // rsi
  char v13; // r13
  struct tagTHREADINFO *ThreadInfo; // rbx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // edx
  unsigned int v19; // esi
  int v20; // r12d
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  bool v27; // cf
  unsigned int v28; // esi
  int v29; // r8d
  int v30; // edx
  bool v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-58h]
  char v36; // [rsp+110h] [rbp+8h]
  int v37; // [rsp+118h] [rbp+10h]

  v37 = (int)a2;
  v10 = 0;
  v33 = 0LL;
  v11 = a4;
  Queue = CInputDest::GetQueue((__int64)a2, 0);
  v13 = 1;
  if ( !Queue )
    goto LABEL_24;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10319);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10322);
  if ( !a8 || (*(_DWORD *)v11 & 0x800) != 0 || a9 )
    goto LABEL_24;
  v15 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 23), 19);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10333);
  if ( CheckAccessEx((int *)(*(_QWORD *)(v15 + 472) + 944LL), (unsigned int *)(Queue + 432), 0LL)
    || (v17 = *(_QWORD *)(*(_QWORD *)(v15 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v17 + 812) & 0x30) == 0x10
    && (v16 = *((_QWORD *)ThreadInfo + 53), v17 == v16)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v16 + 864), 0) )
  {
LABEL_24:
    v19 = a6;
    v20 = *((unsigned __int16 *)v11 + 86);
    if ( a6 != 595 )
      v20 = *((unsigned __int16 *)v11 + 86) | ((*((_WORD *)v11 + 90) & 0xE1F7) << 16);
    GetPointerInputSource(*((_DWORD *)v11 + 42), a8, a9, &v33);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v21 = 0;
    }
    v36 = v21;
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = flagString(HIWORD(v20));
      messageString(a6, a6, v23, v22);
      LOBYTE(v24) = v32;
      LOBYTE(v25) = v36;
      WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v24,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
      v11 = a4;
      v19 = a6;
    }
    v26 = *((_QWORD *)v11 + 31);
    v27 = *((_DWORD *)v11 + 78) != 0;
    v35 = 0LL;
    v34 = 0LL;
    v28 = ApiSetEditionPostInputMessage(v37, 0LL, v19, v20, a5, a7, v26, 0LL, v27 ? 8 : 0, &v33, (__int64)&v34);
    if ( v28 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = 282;
        LOBYTE(v30) = v13;
        LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v30,
          v29,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          282,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
    }
    return v28;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v13 = 0;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 280;
      LOBYTE(v18) = v13;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        280,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 432), 8);
  }
  return v10;
}
