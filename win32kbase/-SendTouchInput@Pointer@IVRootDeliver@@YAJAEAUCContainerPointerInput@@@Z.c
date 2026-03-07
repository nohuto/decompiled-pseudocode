__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  PVOID v6; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char *v12; // rcx
  struct _UNICODE_STRING v13; // xmm6
  int v14; // r13d
  char v15; // bl
  int v16; // edx
  int v17; // r14d
  int v18; // edx
  int v19; // r8d
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  LARGE_INTEGER PerformanceCounter; // rax
  struct _UNICODE_STRING v23; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v24[8]; // [rsp+68h] [rbp-9h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *((_QWORD *)this + 1);
  v6 = 0LL;
  Object = 0LL;
  v8 = SGDGetUserSessionState(this, a2, a3, a4);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v8 + 16840) + 1360LL)) )
    return 0LL;
  v12 = *(char **)(v4 + 32);
  v13 = 0LL;
  v14 = 0;
  v15 = 1;
  if ( v12 )
  {
    v17 = RawInputManagerDeviceObjectResolveHandle(v12, 3u, *(_DWORD *)(v4 + 192) == 0, &Object);
    if ( v17 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          17,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v17);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v15 = 0;
      if ( (_BYTE)v16 || v15 )
      {
        LOBYTE(v9) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v9,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          18,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      return (unsigned int)v17;
    }
    v6 = Object;
    v13 = *(struct _UNICODE_STRING *)((char *)Object + 280);
  }
  else
  {
    v14 = 1;
  }
  CIVSerializer::CIVSerializer(v24, 3LL, v9, v10);
  v24[0] = &CIVGenericSerializer::`vftable';
  if ( v24[2] )
  {
    v23 = v13;
    v17 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v4,
            (const struct CPointerRawData **)v5,
            &v23,
            (struct CIVTouchSerializer *)v24);
    if ( v17 < 0 )
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v15 = 0;
      }
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v21 = 21;
    }
    else
    {
      v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v24);
      if ( v17 >= 0 )
      {
        *(union _LARGE_INTEGER *)(v4 + 184) = gliQpcFreq;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v23 = v13;
        *(LARGE_INTEGER *)(v4 + 112) = PerformanceCounter;
        v17 = IVSerializeRimCompleteFrameForTouchInputPacket(
                (struct RIMCOMPLETEFRAME *)v4,
                (struct CPointerInputFrame *)v5,
                &v23,
                v14,
                (struct CIVTouchSerializer *)v24);
        if ( v17 >= 0 )
        {
          InputTraceLogging::Pointer::SendFrameToContainer(
            *(struct RIMDEV *const *)(*(_QWORD *)(v5 + 256) + 16LL),
            (const struct CPointerInputFrame *)v5);
          v17 = ivrIVSend((const struct CIVSerializer *)v24, 2u, (IVRootDeliver::Pointer *)((char *)this + 16));
          if ( v17 >= 0 )
            goto LABEL_65;
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v15 = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v21 = 23;
        }
        else
        {
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v15 = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v21 = 20;
        }
      }
      else
      {
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v15 = 0;
        }
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_65;
        v21 = 19;
      }
    }
  }
  else
  {
    v17 = -1073741801;
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v15 = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    v21 = 22;
  }
  LOBYTE(v18) = v15;
  WPP_RECORDER_AND_TRACE_SF_d(
    v20->AttachedDevice,
    v18,
    v19,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v21,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v17);
LABEL_65:
  if ( v6 )
    ObfDereferenceObject(v6);
  v24[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v24);
  return (unsigned int)v17;
}
