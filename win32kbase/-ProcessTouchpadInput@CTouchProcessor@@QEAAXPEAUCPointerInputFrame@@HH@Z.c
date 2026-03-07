void __fastcall CTouchProcessor::ProcessTouchpadInput(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        int a3,
        int a4)
{
  int v8; // edx
  int v9; // r8d
  char v10; // bl
  struct RIMCOMPLETEFRAME *v11; // r8
  const struct CPointerInputFrame *v12; // rax
  int v13; // edx
  int v14; // r8d
  const struct CPointerInputFrame *v15; // rdi
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 *v22; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v23[56]; // [rsp+48h] [rbp-60h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v23,
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
      18,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v22, "ProcessTouchpadGesture", 0LL);
  CTouchProcessor::CommitInputFrame(this, a2);
  v12 = CTouchProcessor::ReferenceInputFrame(this, a2, v11, 0);
  v15 = v12;
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 12) <= *((_DWORD *)v12 + 13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 942);
    if ( !*((_QWORD *)v15 + 30) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 943);
    if ( *((_DWORD *)v15 + 12) == 1 && (*((_DWORD *)v15 + 57) & 8) != 0 )
    {
      v18 = (_DWORD *)*((_QWORD *)v15 + 30);
      if ( (*v18 & 0x400) != 0 && (v18[45] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave((struct _KTHREAD **)this, v15);
    }
    v19 = (_QWORD *)((char *)v15 + 24);
    v20 = *((_QWORD *)v15 + 3);
    if ( *(const struct CPointerInputFrame **)(v20 + 8) != (const struct CPointerInputFrame *)((char *)v15 + 24)
      || (v21 = (_QWORD *)*((_QWORD *)v15 + 4), (_QWORD *)*v21 != v19) )
    {
      __fastfail(3u);
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    *((_QWORD *)v15 + 4) = (char *)v15 + 24;
    *v19 = v19;
    CTouchProcessor::GenerateMessagesCore(this, a3, a4, 0, v15);
    CTouchProcessor::UnreferenceFrame(this, v15);
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v17 = 21;
      goto LABEL_50;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        19,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v17 = 20;
LABEL_50:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v13,
        v14,
        v16->DeviceExtension,
        5,
        7,
        v17,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v23);
}
