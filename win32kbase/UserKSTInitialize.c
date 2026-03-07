__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rsi
  char v4; // bl
  char v5; // r8
  int v6; // edx
  CKernelSensorThread *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  unsigned __int8 v16; // di
  __int64 v18; // rax
  unsigned int v19; // r8d
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+68h] [rbp-50h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      10,
      (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    {
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029CD63,
        0LL,
        0LL,
        2u,
        &v21);
      v19 = dword_1C02CA7E0;
    }
    if ( v19 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029CB35,
        0LL,
        0LL,
        2u,
        &v20);
  }
  if ( CInputThreadBase::DeclareThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
    if ( (int)CKernelSensorThread::InitializeEventHandles(v7, a1, v2) >= 0
      && (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.DeviceObject) >= 0
      && (unsigned int)ActivateKSTInputProcessingHelper() )
    {
      if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C02CA7E0,
          (unsigned __int8 *)dword_1C029CB06,
          0LL,
          0LL,
          2u,
          &v20);
      CInputThreadBase::ActivateInputProcessing((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      IOCPDispatcher::RegisterThreadDispatcherObject(
        (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 7));
      IOCPDispatcher::RegisterThreadDispatcherObject(
        (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8));
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 9),
        lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 10),
        lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 11),
        lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_,
        0LL);
      if ( qword_1C02D7438 && (unsigned int)qword_1C02D7438(v11) )
      {
        v18 = SGDGetUserSessionState(v11, v10, v12, v13);
        CBaseInput::HandleTSRequest(*(_QWORD *)(v18 + 3272), 0LL);
      }
      v14 = SGDGetUserSessionState(v11, v10, v12, v13);
      CBaseInput::Read(*(CBaseInput **)(v14 + 3304));
      v16 = 1;
    }
    else
    {
      v16 = 0;
      KSTIOCPDispatcher_Destroy(v9, v8);
      CKernelSensorThread::DestroyEventHandles((CKernelSensorThread *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          13,
          (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v15 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        26,
        14,
        (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
    return v16;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v6 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        26,
        12,
        (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
    return 0LL;
  }
}
