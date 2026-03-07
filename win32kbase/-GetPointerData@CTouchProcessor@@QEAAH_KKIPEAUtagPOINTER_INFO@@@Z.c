__int64 __fastcall CTouchProcessor::GetPointerData(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  int v6; // r15d
  __int64 v7; // rdi
  char v9; // bl
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v12; // edx
  struct CPointerMsgData *v13; // rdi
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  _QWORD *FrameById; // rax
  _QWORD *v17; // rsi
  void *v18; // r8
  unsigned int v19; // edi
  CPointerInfoNode *v20; // rdi
  int v21; // edx
  void *v22; // r8
  CInpLockGuard *v24; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+48h] [rbp-30h]

  v6 = a3;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      120,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( a4 != (unsigned int)GetPointerInfoSize(v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5062);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v24, (struct CInpLockGuard *)(this + 4), 1);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, v7);
  v13 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v12 && !v9 )
      goto LABEL_36;
    v15 = 121;
LABEL_35:
    v18 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v18) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v12,
      (_DWORD)v18,
      v14->DeviceExtension,
      5,
      7,
      v15,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_36:
    v19 = 0;
    goto LABEL_53;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4);
  v17 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v12 && !v9 )
      goto LABEL_36;
    v15 = 122;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v13 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5079);
  v20 = (CPointerInfoNode *)(v17[30] + 480LL * *((unsigned int *)v13 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5081);
  if ( (*(_DWORD *)v20 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5082);
  v19 = CTouchProcessor::PointerInfoCopyOutHelper(
          (PERESOURCE *)this,
          v20,
          (struct tagHID_POINTER_DEVICE_INFO *)v17[32],
          v6,
          a4,
          a5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v21) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v21 || v9 )
  {
    v22 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v22) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      (_DWORD)v22,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      123,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_53:
  if ( !v25 )
    CInpLockGuard::UnLock(v24);
  return v19;
}
