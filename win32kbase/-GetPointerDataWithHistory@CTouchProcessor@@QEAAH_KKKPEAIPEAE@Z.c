__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  char v9; // bl
  int v10; // edx
  int v11; // r8d
  __int64 PointerInfoSize; // r12
  unsigned int v13; // esi
  CTouchProcessor *v14; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v16; // edx
  struct CPointerMsgData *v17; // rdi
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  _QWORD *FrameById; // rax
  const struct CPointerInputFrame *v21; // rbp
  void *v22; // r8
  CPointerInfoNode *v23; // rdi
  unsigned int v24; // r14d
  unsigned int HistoryCount; // eax
  unsigned int v26; // edi
  unsigned int v27; // r15d
  int v28; // edx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  CPointerInfoNode *v30; // rdi
  unsigned int v31; // eax
  void *v32; // r8
  _QWORD *v34; // [rsp+48h] [rbp-50h]
  CInpLockGuard *v35; // [rsp+50h] [rbp-48h] BYREF
  int v36; // [rsp+58h] [rbp-40h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v13 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      124,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v35, (struct CInpLockGuard *)(this + 4), 1);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, a2);
  v17 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v16 && !v9 )
      goto LABEL_34;
    v19 = 125;
LABEL_33:
    v22 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v22) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v18->AttachedDevice,
      v16,
      (_DWORD)v22,
      v18->DeviceExtension,
      5,
      7,
      v19,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_34:
    v13 = 0;
    goto LABEL_70;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4);
  v34 = FrameById;
  v21 = (const struct CPointerInputFrame *)FrameById;
  if ( !FrameById )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v16 && !v9 )
      goto LABEL_34;
    v19 = 126;
    goto LABEL_33;
  }
  if ( *((_DWORD *)v17 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5152);
  v23 = (CPointerInfoNode *)(*((_QWORD *)v21 + 30) + 480LL * *((unsigned int *)v17 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v23) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5154);
  if ( (*(_DWORD *)v23 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5155);
  v24 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v13 = CTouchProcessor::PointerInfoCopyOutHelper(
            (PERESOURCE *)this,
            v23,
            *((struct tagHID_POINTER_DEVICE_INFO **)v21 + 32),
            a3,
            PointerInfoSize,
            a6);
    if ( v13 )
    {
      a4 -= PointerInfoSize;
      a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v23);
  v26 = *((_DWORD *)v23 + 86);
  v27 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v21);
  if ( v13 )
  {
    while ( PreviousFrameByDevice )
    {
      if ( v27 > 1 )
      {
        if ( v26 >= *((_DWORD *)PreviousFrameByDevice + 12) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5184);
        v30 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v26);
        if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5186);
        ++v24;
        if ( a4 >= (unsigned int)PointerInfoSize )
        {
          v13 = CTouchProcessor::PointerInfoCopyOutHelper(
                  (PERESOURCE *)this,
                  v30,
                  (struct tagHID_POINTER_DEVICE_INFO *)v34[32],
                  a3,
                  PointerInfoSize,
                  a6);
          if ( v13 )
          {
            a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
            a4 -= PointerInfoSize;
          }
        }
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount(v30) != v27 - 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5205);
        v31 = CPointerInfoNode::GetHistoryCount(v30);
        v26 = *((_DWORD *)v30 + 86);
        v27 = v31;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                  (CTouchProcessor *)this,
                                  PreviousFrameByDevice);
        if ( v13 )
          continue;
      }
      if ( !v13 )
        goto LABEL_59;
      break;
    }
    *a5 = v24;
  }
LABEL_59:
  LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v28 || v9 )
  {
    v32 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v32) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v28,
      (_DWORD)v32,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      127,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_70:
  if ( !v36 )
    CInpLockGuard::UnLock(v35);
  return v13;
}
