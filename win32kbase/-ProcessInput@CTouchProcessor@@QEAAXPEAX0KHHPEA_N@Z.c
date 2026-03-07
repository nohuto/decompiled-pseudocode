void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        void *a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  int v7; // esi
  __int64 v8; // rbx
  int v11; // edx
  int v12; // r8d
  bool *v13; // rax
  char v14; // di
  char *v15; // r12
  __int64 v16; // r13
  char *v17; // rsi
  char *v18; // rcx
  int v19; // edx
  int v20; // r8d
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // ax
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v24; // rbx
  struct CPointerInputFrame *v25; // rax
  __int64 v26; // rcx
  const struct CPointerInputFrame *v27; // rbx
  CTouchProcessor *v28; // rcx
  int v29; // edx
  void *v30; // r8
  _BYTE v31[104]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+B0h] [rbp+8h] BYREF
  int v33; // [rsp+C8h] [rbp+20h]

  v7 = (int)a2;
  v8 = a4;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v31,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v13 = a7;
  *((_BYTE *)this + 48) = 0;
  *v13 = 0;
  v14 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      10,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v15 = &a3[v8];
  v16 = HMValidateHandleNoSecure(v7, 19);
  while ( a3 + 240 <= v15 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v32, "ProcessTouchOrPenInput", 0LL);
    v17 = a3;
    v18 = a3;
    a3 += *(unsigned int *)a3;
    if ( ApiSetSanitizeRIMCOMPLETEFRAME(v18) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)&v17[(isChildPartition() ? 0x48 : 0) + 72] = PerformanceCounter;
      if ( !v16 )
      {
        v33 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 757LL);
      }
      v24 = *(_QWORD *)(v16 + 2272);
      *(_QWORD *)&v17[(isChildPartition() ? 0x48 : 0) + 64] = v24;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v17 + 48));
      v25 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v17, 0, 0);
      v27 = v25;
      if ( v25 )
      {
        CTouchProcessor::ReferenceFrameInt(v26, v25);
        CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v28, v27);
        CTouchProcessor::CheckAndSendFindMyPenWnf(this, v27);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(this, v27) )
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, v27, (struct RIMCOMPLETEFRAME *)v17);
        else
          InputTraceLogging::Pointer::BufferInDelayZone(v27);
        goto LABEL_34;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v22 = 12;
    }
    else
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v22 = 11;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      v19,
      v20,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      v22,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_34:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v32);
  }
  v29 = (int)a7;
  *a7 = *((_BYTE *)this + 48);
  if ( a3 != v15 )
  {
    v33 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 808LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v29) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v14 = 0;
  if ( (_BYTE)v29 || v14 )
  {
    v30 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v30) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v29,
      (_DWORD)v30,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      13,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v31);
}
