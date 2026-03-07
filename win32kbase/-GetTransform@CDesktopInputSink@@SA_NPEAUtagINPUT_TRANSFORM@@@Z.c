char __fastcall CDesktopInputSink::GetTransform(struct tagINPUT_TRANSFORM *a1)
{
  struct CDesktopInputSink *Instance; // rdi
  int v3; // edx
  int v4; // r8d
  CompositionInputObject *v5; // rcx
  PDEVICE_OBJECT v6; // r10
  bool v7; // bl
  __int16 v8; // cx
  int v10; // edx
  LONG SignalState; // r8d
  bool v12; // bl
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  char v15; // [rsp+40h] [rbp-18h]

  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v5 = (CompositionInputObject *)*((_QWORD *)Instance + 2);
  if ( !v5 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = 10;
LABEL_19:
    LOBYTE(v3) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      v6->AttachedDevice,
      v3,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      24,
      v8,
      (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids);
LABEL_20:
    CPushLock::ReleaseLock(Instance);
    return 0;
  }
  if ( (int)CompositionInputObject::QueryTransform(v5, a1) < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v8 = 11;
    goto LABEL_19;
  }
  CPushLock::ReleaseLock(Instance);
  SignalState = WPP_MAIN_CB.DeviceLock.Header.SignalState;
  if ( !WPP_MAIN_CB.DeviceLock.Header.SignalState )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = v12;
      LOBYTE(SignalState) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        SignalState,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        24,
        12,
        (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids);
    }
    return 0;
  }
  v13 = (__m128)LODWORD(FLOAT_1_0);
  v13.m128_f32[0] = 1.0 / (float)((float)WPP_MAIN_CB.DeviceLock.Header.SignalState / 96.0);
  v14 = _mm_shuffle_ps(v13, v13, 0);
  *(__m128 *)a1 = _mm_mul_ps(*(__m128 *)a1, v14);
  *((__m128 *)a1 + 1) = _mm_mul_ps(*((__m128 *)a1 + 1), v14);
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = SignalState;
    LOBYTE(SignalState) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      SignalState,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      24,
      14,
      (__int64)&WPP_57191d14ba8d34808e88878d5fc76f63_Traceguids,
      v15);
  }
  return 1;
}
