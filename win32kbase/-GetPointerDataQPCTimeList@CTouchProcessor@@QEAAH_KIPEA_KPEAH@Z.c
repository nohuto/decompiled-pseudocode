__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v6; // r15d
  __int64 v7; // rdi
  unsigned int v9; // ebx
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v12; // edx
  int v13; // r8d
  struct CPointerMsgData *v14; // rdi
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v18; // rsi
  __int64 v19; // rdi
  unsigned int HistoryCount; // ebp
  unsigned int v21; // r14d
  unsigned int v22; // edi
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int16 v28; // [rsp+30h] [rbp-68h]
  CInpLockGuard *v29; // [rsp+48h] [rbp-50h] BYREF
  int v30; // [rsp+50h] [rbp-48h]

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
      148,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v29, (struct CInpLockGuard *)(this + 4), 1);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5574);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, v7);
  v14 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v12 && !(_BYTE)v9 )
      goto LABEL_65;
    v16 = 149;
    goto LABEL_24;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v18 = FrameById;
  if ( !FrameById )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v12 && !(_BYTE)v9 )
      goto LABEL_65;
    v16 = 150;
    goto LABEL_24;
  }
  if ( *((_DWORD *)v14 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5593);
  v19 = *((_QWORD *)v18 + 30) + 480LL * *((unsigned int *)v14 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5595);
  if ( a5 && *a5 && (*(_DWORD *)(v19 + 180) & 0x400000) == 0 )
  {
    *a5 = 0;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v12 && !(_BYTE)v9 )
      goto LABEL_65;
    v16 = 151;
LABEL_24:
    v28 = v16;
LABEL_64:
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v15->AttachedDevice,
      v12,
      v13,
      v15->DeviceExtension,
      5,
      7,
      v28,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_65:
    v9 = 0;
    goto LABEL_88;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v19);
  if ( v6 > HistoryCount )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v9) = 0;
    if ( !(_BYTE)v12 && !(_BYTE)v9 )
      goto LABEL_65;
    v28 = 152;
    goto LABEL_64;
  }
  v21 = 1;
  *a4 = *(_QWORD *)(v19 + 248);
  if ( v6 > 1 )
  {
    v22 = *(_DWORD *)(v19 + 344);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v18);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v22 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5640);
      v24 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v22;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5642);
      v25 = v21++;
      a4[v25] = *(_QWORD *)(v24 + 248);
      if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24) != HistoryCount - 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5652);
      v26 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24);
      v22 = *(_DWORD *)(v24 + 344);
      HistoryCount = v26;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v21 < v6 );
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      153,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_88:
  if ( !v30 )
    CInpLockGuard::UnLock(v29);
  return v9;
}
