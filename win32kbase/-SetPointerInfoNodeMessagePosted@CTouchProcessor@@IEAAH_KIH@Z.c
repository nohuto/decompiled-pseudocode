__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  char v8; // di
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v11; // edx
  int v12; // r8d
  struct CPointerMsgData *v13; // rsi
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v17; // rcx
  const struct CPointerInputFrame *v18; // r14
  int v20; // edx
  struct CPointerInfoNode *v21; // rbx
  int v22; // r8d
  int v23; // eax
  int v24; // ebp
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax

  v5 = a3;
  v6 = a2;
  v8 = 1;
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
      235,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7674);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, v6);
  v13 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v11 && !v8 )
      return 0LL;
    v15 = 236;
LABEL_35:
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v11,
      v12,
      v14->DeviceExtension,
      5,
      7,
      v15,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v18 = FrameById;
  if ( !FrameById )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v11 && !v8 )
      return 0LL;
    v15 = 237;
    goto LABEL_35;
  }
  v21 = CTouchProcessor::LookupNode(v17, FrameById, *((_DWORD *)v13 + 8));
  if ( *((_WORD *)v21 + 86) != *((_WORD *)v13 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7691);
  if ( *((_DWORD *)v21 + 2) >= *((_DWORD *)v18 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7692);
  switch ( v5 )
  {
    case 0x249u:
      if ( (*(_DWORD *)v21 & 8) == 0 && (*(_DWORD *)v21 & 0x40) == 0 && (*((_DWORD *)v21 + 45) & 1) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7704);
      v23 = *(_DWORD *)v21;
      v24 = 0x800000;
      v25 = 0x1000000;
      if ( (*(_DWORD *)v21 & 0x800000) != 0
        || (v23 & 0x1000000) != 0
        || (v23 & 0x4000000) != 0
        || (v23 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7709);
      }
      v26 = a4 << 24;
LABEL_52:
      v27 = v24 | *(_DWORD *)v21 ^ v25 & (*(_DWORD *)v21 ^ v26);
      goto LABEL_81;
    case 0x24Au:
      v28 = *(_DWORD *)v21;
      v24 = 0x8000000;
      v25 = 0x10000000;
      if ( (*(_DWORD *)v21 & 0x8000000) != 0
        || (v28 & 0x10000000) != 0
        || (v28 & 0x40000000) != 0
        || (v28 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7722);
      }
      v26 = a4 << 28;
      goto LABEL_52;
    case 0x251u:
      if ( (*(_DWORD *)v21 & 0x40) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7729);
      if ( *(int *)v21 < 0 || (v29 = *((_DWORD *)v21 + 1), (v29 & 1) != 0) || (v29 & 4) != 0 || (v29 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7734);
      *(_DWORD *)v21 |= 0x80000000;
      *((_DWORD *)v21 + 1) ^= (*((_DWORD *)v21 + 1) ^ a4) & 1;
      goto LABEL_82;
    case 0x252u:
      v30 = *((_DWORD *)v21 + 1);
      if ( (v30 & 8) != 0 || (v30 & 0x10) != 0 || (v30 & 0x40) != 0 || (v30 & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7746);
      *((_DWORD *)v21 + 1) = *((_DWORD *)v21 + 1) ^ (*((_DWORD *)v21 + 1) ^ (16 * a4)) & 0x10 | 8;
      goto LABEL_82;
  }
  v31 = *(_DWORD *)v21;
  if ( (*(_DWORD *)v21 & 0x80000) != 0 || (v31 & 0x400000) != 0 || (v31 & 0x200000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7755);
  v27 = *(_DWORD *)v21 ^ (*(_DWORD *)v21 ^ (a4 << 20)) & 0x100000 | 0x80000;
LABEL_81:
  *(_DWORD *)v21 = v27;
LABEL_82:
  if ( a4 )
    *(_DWORD *)(160LL * *((unsigned int *)v21 + 2) + *((_QWORD *)v18 + 31) + 140) |= 8u;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v22) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v22) = 0;
  }
  if ( (_BYTE)v20 || (_BYTE)v22 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v22,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      238,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  return 1LL;
}
