void __fastcall CTouchProcessor::ProcessInputOld(CTouchProcessor *this, void *a2, char *a3, unsigned int a4)
{
  int v4; // esi
  __int64 v5; // rbx
  int v8; // edx
  int v9; // r8d
  char v10; // di
  char *v11; // r15
  int v12; // edx
  __int64 v13; // r12
  char *v14; // rsi
  char *v15; // rcx
  int v16; // edx
  int v17; // r8d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v19; // rbx
  struct CPointerInputFrame *v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  const struct CPointerInputFrame *v24; // rbx
  CTouchProcessor *v25; // rcx
  void *v26; // r8
  _BYTE v27[104]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v28; // [rsp+B0h] [rbp+8h] BYREF
  int v29; // [rsp+C8h] [rbp+20h]

  v4 = (int)a2;
  v5 = a4;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v27,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      14,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v11 = &a3[v5];
  v13 = HMValidateHandleNoSecure(v4, 19);
  while ( a3 + 240 <= v11 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v28, "ProcessTouchOrPenInput", 0LL);
    v14 = a3;
    v15 = a3;
    a3 += *(unsigned int *)a3;
    if ( ApiSetSanitizeRIMCOMPLETEFRAME(v15) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)&v14[(isChildPartition() ? 0x48 : 0) + 72] = PerformanceCounter;
      if ( !v13 )
      {
        v29 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 858LL);
      }
      v19 = *(_QWORD *)(v13 + 2272);
      *(_QWORD *)&v14[(isChildPartition() ? 0x48 : 0) + 64] = v19;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v14 + 48));
      v20 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v14, 0, 0);
      v24 = v20;
      if ( v20 )
      {
        CTouchProcessor::ReferenceFrameInt(v22, v20);
        CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v25, v24);
        CTouchProcessor::CheckAndSendFindMyPenWnf(this, v24);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(this, v24) )
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, v24, (struct RIMCOMPLETEFRAME *)v14);
        else
          InputTraceLogging::Pointer::BufferInDelayZone(v24);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v21) = 0;
        }
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v21,
            v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            7,
            16,
            (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          15,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v28);
  }
  if ( a3 != v11 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 907LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v12 || v10 )
  {
    v26 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v26) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      (_DWORD)v26,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      17,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v27);
}
