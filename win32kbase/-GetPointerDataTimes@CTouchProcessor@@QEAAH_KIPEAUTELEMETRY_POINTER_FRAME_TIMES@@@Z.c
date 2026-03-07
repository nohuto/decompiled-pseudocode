__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        unsigned int a3,
        struct TELEMETRY_POINTER_FRAME_TIMES *a4)
{
  unsigned int v4; // esi
  char v6; // di
  CTouchProcessor *v7; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v9; // edx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r8
  struct CPointerMsgData *v11; // r15
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // ax
  struct CPointerInputFrame *FrameById; // rax
  CPointerInfoNode *v15; // r15
  unsigned int HistoryCount; // esi
  const struct CPointerInputFrame *v18; // rdx
  unsigned int v19; // r15d
  _OWORD *v20; // rcx
  struct CPointerInputFrame *v21; // [rsp+48h] [rbp-80h]
  struct CPointerInputFrame *v22; // [rsp+48h] [rbp-80h]
  CInpLockGuard *v23; // [rsp+50h] [rbp-78h] BYREF
  int v24; // [rsp+58h] [rbp-70h]
  int v25; // [rsp+60h] [rbp-68h]
  unsigned int v26; // [rsp+64h] [rbp-64h]
  const struct CPointerInputFrame *v27; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+D8h] [rbp+10h]
  unsigned int v30; // [rsp+E0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v6 = 1;
  }
  else
  {
    v6 = 1;
    LOBYTE(a2) = 1;
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
      154,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v23, (struct CInpLockGuard *)(this + 4));
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5684);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, v29);
  v11 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v9 && !v6 )
      goto LABEL_54;
    v13 = 155;
LABEL_53:
    LOBYTE(PreviousFrameByDevice) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v9,
      (_DWORD)PreviousFrameByDevice,
      v12->DeviceExtension,
      5,
      7,
      v13,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_54:
    if ( !v24 )
      CInpLockGuard::UnLock(v23);
    return 0LL;
  }
  FrameById = (struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4);
  v21 = FrameById;
  if ( !FrameById )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v9 && !v6 )
      goto LABEL_54;
    v13 = 156;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v11 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5703);
  v15 = (CPointerInfoNode *)(*((_QWORD *)v21 + 30) + 480LL * *((unsigned int *)v11 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5705);
  if ( (*(_DWORD *)v15 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5706);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v15);
  v26 = HistoryCount;
  LODWORD(PreviousFrameByDevice) = v30;
  if ( v30 > HistoryCount )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v9 && !v6 )
      goto LABEL_54;
    v13 = 157;
    goto LABEL_53;
  }
  v18 = v21;
  v22 = (struct CPointerInputFrame *)((char *)v21 + 72);
  *(_OWORD *)a4 = *(_OWORD *)v22;
  *((_OWORD *)a4 + 1) = *((_OWORD *)v22 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)v22 + 2);
  *((_OWORD *)a4 + 3) = *((_OWORD *)v22 + 3);
  *((_OWORD *)a4 + 4) = *((_OWORD *)v22 + 4);
  *((_OWORD *)a4 + 5) = *((_OWORD *)v22 + 5);
  *((_OWORD *)a4 + 6) = *((_OWORD *)v22 + 6);
  *((_OWORD *)a4 + 7) = *((_OWORD *)v22 + 7);
  *((_OWORD *)a4 + 8) = *((_OWORD *)v22 + 8);
  v19 = 1;
  v25 = 1;
  if ( v30 > 1 )
  {
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v18);
    v27 = PreviousFrameByDevice;
    while ( v19 < v30 && PreviousFrameByDevice && HistoryCount > 1 )
    {
      v20 = (_OWORD *)((char *)a4 + 144 * v19);
      *v20 = *(_OWORD *)v22;
      v20[1] = *((_OWORD *)v22 + 1);
      v20[2] = *((_OWORD *)v22 + 2);
      v20[3] = *((_OWORD *)v22 + 3);
      v20[4] = *((_OWORD *)v22 + 4);
      v20[5] = *((_OWORD *)v22 + 5);
      v20[6] = *((_OWORD *)v22 + 6);
      v20[7] = *((_OWORD *)v22 + 7);
      v20[8] = *((_OWORD *)v22 + 8);
      v25 = ++v19;
      v26 = --HistoryCount;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
      v27 = PreviousFrameByDevice;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v18) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v18 || v6 )
  {
    LOBYTE(PreviousFrameByDevice) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v18,
      (_DWORD)PreviousFrameByDevice,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      158,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  if ( !v24 )
    CInpLockGuard::UnLock(v23);
  return 1LL;
}
