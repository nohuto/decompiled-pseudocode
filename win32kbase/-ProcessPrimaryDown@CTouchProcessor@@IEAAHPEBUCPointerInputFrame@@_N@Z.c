__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  const struct CPointerInputFrame *v4; // rsi
  char v6; // bl
  char v7; // r8
  unsigned int v8; // r14d
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // rdi
  CTouchProcessor *v13; // rcx
  __int64 v14; // rax
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // edx
  char v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE v30[40]; // [rsp+40h] [rbp-A8h] BYREF
  CInpLockGuard *v31; // [rsp+68h] [rbp-80h]
  _BYTE v32[120]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( (_BYTE)a2 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v7,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      187,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v8 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6745);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)v4 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6746);
  if ( (*((_DWORD *)v4 + 57) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6747);
  v10 = *((unsigned int *)v4 + 12);
  v11 = 0;
  v12 = *((_QWORD *)v4 + 30);
  if ( (_DWORD)v10 )
  {
    do
    {
      if ( v12 >= *((_QWORD *)v4 + 30) + 480 * v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6759);
      if ( *(_QWORD *)(v12 + 16)
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v12)
        && CTouchProcessor::ShouldGenerateMessagesForNode(v13, v4, (const struct CPointerInfoNode *)v12, v3) )
      {
        break;
      }
      v10 = *((unsigned int *)v4 + 12);
      v12 += 480LL;
      ++v11;
    }
    while ( v11 < (unsigned int)v10 );
    v8 = 0;
  }
  v14 = *((unsigned int *)v4 + 12);
  if ( v11 == (_DWORD)v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        188,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v9 && !v6 )
      return 0LL;
    v16 = 189;
LABEL_104:
    WPP_RECORDER_AND_TRACE_SF_(
      v15->AttachedDevice,
      v9,
      v6,
      v15->DeviceExtension,
      5,
      7,
      v16,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    return 0LL;
  }
  if ( v12 >= *((_QWORD *)v4 + 30) + 480 * v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6795);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6796);
  if ( !*(_QWORD *)(v12 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6797);
  if ( (*(_DWORD *)v12 & 0x1000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        190,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( !(_BYTE)v9 && !v6 )
      return 0LL;
    v16 = 191;
    goto LABEL_104;
  }
  if ( *(_DWORD *)(v12 + 444) )
  {
    v9 = *(_QWORD *)(v12 + 192);
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          192,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( !(_BYTE)v9 && !v6 )
        return 0LL;
      v16 = 193;
      goto LABEL_104;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v12 + 352, v9, 1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          194,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( !(_BYTE)v9 && !v6 )
        return 0LL;
      v16 = 195;
      goto LABEL_104;
    }
    v8 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v12) )
    {
      if ( !CInputDest::DoesBelongToForeground(v12 + 352, 1) || !CInputDest::DoesBelongToForegroundThread(v12 + 352) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 396) & 0x2000000) != 0 )
          {
            v20 = *(_QWORD *)(gpqForeground + 120);
            if ( v20 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v20 + 16)
                && CInputDest::DoesBelongToForeground(v12 + 352, 1) )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                  || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v21) = 0;
                }
                if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v21,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    4,
                    7,
                    196,
                    (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                  || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                {
                  LOBYTE(v21) = 0;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v22 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  v22 = 0;
                }
                if ( (_BYTE)v21 || v22 )
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v21,
                    v22,
                    WPP_GLOBAL_Control->DeviceExtension,
                    5,
                    7,
                    197,
                    (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)v32,
          (struct CInputDest *)(v12 + 352),
          v18,
          v19);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v30,
          (struct CInpLockGuard *)(this + 4),
          0LL,
          v23);
        v8 = ApiSetEditionSetForegroundCheckNoActivate(v12 + 352);
        CInpLockGuard::LockExclusive(v31);
        CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v30, v24, v25, v26);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v32, v27, v28, v29);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v9 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v6,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      198,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  return v8;
}
