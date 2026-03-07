void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct PTPMouseInputData *a3)
{
  char v5; // di
  struct _MousePacketPerf *v7; // rbx
  const struct tagUIPI_INFO_INT *v8; // r12
  struct tagPOINT v9; // rdi
  int v10; // r8d
  int v11; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v13; // rcx
  _BYTE v14[16]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+50h] [rbp-69h] BYREF
  struct _MOUSE_INPUT_DATA v16[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+17h]

  v5 = 1;
  InputTraceLogging::Mouse::ProcessInput(0LL, a2, 1);
  v7 = (struct _MousePacketPerf *)gptCursorAsync;
  v8 = 0LL;
  if ( a3 )
  {
    v8 = (const struct tagUIPI_INFO_INT *)*((_QWORD *)a3 + 2);
    v7 = *(struct _MousePacketPerf **)a3;
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 512LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 4LL)
    && !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL)
    && *((_DWORD *)this + 12) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(this, a2) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 16;
      LOBYTE(v11) = v5;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        16,
        (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() && isChildPartition() )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3872));
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[9]) = 3;
    v17 = 3LL;
    HIDWORD(v17) = *((unsigned __int16 *)a2 + 2);
    memset(v16, 0, sizeof(v16));
    if ( a3 && *((_QWORD *)a3 + 1) )
    {
      LODWORD(v15[9]) = 1;
      LODWORD(v17) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = (_QWORD *)*((_QWORD *)a3 + 1);
      v15[7] = PerformanceCounter.QuadPart;
      v15[0] = *v13;
      v15[1] = v13[1];
      v15[2] = v13[2];
      v15[3] = v13[3];
      v15[4] = v13[4];
      v15[5] = v13[5];
      v15[6] = v13[6];
    }
    v9 = **(struct tagPOINT **)&CMouseProcessor::ProcessMouseInputData(
                                  this,
                                  (struct CMouseProcessor::MouseInputDataEx *)v14,
                                  (struct tagPOINT)a2,
                                  v7,
                                  v16,
                                  v8);
    v15[8] = KeQueryPerformanceCounter(0LL).QuadPart;
    RIMLockExclusive((__int64)this + 3416);
    MousePerfSummary::CollectMousePerfTelemetry(
      (CMouseProcessor *)((char *)this + 2792),
      (const struct _MousePerf *)v15);
    *((_QWORD *)this + 428) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
    KeLeaveCriticalRegion();
    if ( a3 )
      *(struct tagPOINT *)a3 = v9;
  }
}
