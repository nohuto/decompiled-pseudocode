void __fastcall CTouchProcessor::UnreferenceMsgData(struct _KTHREAD **a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  struct CPointerMsgData *NonConstMsgData; // rbx
  PDEVICE_OBJECT *v7; // rdx
  char v8; // bp
  _UNKNOWN **v9; // r8
  _DWORD *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11320);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11335);
  _InterlockedDecrement((volatile signed __int32 *)NonConstMsgData + 6);
  v7 = &WPP_GLOBAL_Control;
  v8 = 1;
  v9 = &WPP_RECORDER_INITIALIZED;
  v10 = (_DWORD *)((char *)NonConstMsgData + 36);
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*v10 & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11340);
      v7 = &WPP_GLOBAL_Control;
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*v10 & 0x40) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          (_DWORD)v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          292,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *v10 &= ~0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11351);
  }
  if ( !*((_BYTE *)NonConstMsgData + v3 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11352);
    if ( !*((_BYTE *)NonConstMsgData + v3 + 48) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = v8;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_Lq(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          v11,
          v12,
          v13,
          v14,
          293,
          v15,
          v3,
          (char)NonConstMsgData);
      }
    }
  }
  --*((_BYTE *)NonConstMsgData + v3 + 48);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    if ( (*v10 & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(
        a1,
        (__int64)v7,
        *((_DWORD *)NonConstMsgData + 7),
        *((_DWORD *)NonConstMsgData + 8));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, a2);
  }
}
