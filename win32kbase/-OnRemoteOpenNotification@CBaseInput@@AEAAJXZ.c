__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // rsi
  int v9; // ebx
  PDEVICE_OBJECT v11; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  char v20; // [rsp+20h] [rbp-68h]
  __int16 v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v25; // [rsp+98h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v25, "OnRemoteOpenNotification", 0LL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v7 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      LODWORD(v24) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1316LL);
      v9 = -1073741816;
      goto LABEL_16;
    }
    v8 = (__int64)*(&gRemoteKeyboardChannelHandlePair + 1);
  }
  else
  {
    v8 = (__int64)*(&gRemoteMouseChannelHandlePair + 1);
  }
  v9 = -1073741816;
  if ( v8 != -1 )
  {
    if ( !v8 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v3) = 0;
      }
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v5,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          13,
          (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
      }
      v9 = 0;
      goto LABEL_13;
    }
    v24 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
    v17 = PsGetCurrentProcess(v14, v13, v15, v16);
    v9 = ObDuplicateObject(v17, v8, CurrentProcess, &v24, 0, 512, 2, 0);
    if ( v9 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          14,
          (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
          v9);
      }
      goto LABEL_13;
    }
    v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
           *((_QWORD *)this + 1),
           (unsigned int)&DestinationString,
           v7,
           v24,
           0,
           0LL);
    if ( v9 < 0 )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v3) = 0;
      }
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v9;
        v21 = 15;
        v20 = 2;
        goto LABEL_41;
      }
    }
    goto LABEL_13;
  }
LABEL_16:
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = v7;
    v21 = 12;
    v20 = 4;
LABEL_41:
    WPP_RECORDER_AND_TRACE_SF_d(
      v11->AttachedDevice,
      v3,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      3,
      v21,
      (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
      v22);
  }
LABEL_13:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v25);
  return (unsigned int)v9;
}
