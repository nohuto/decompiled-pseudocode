void __fastcall CTouchProcessor::ReferenceMsgData(CTouchProcessor *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  struct CPointerMsgData *NonConstMsgData; // rax
  int v6; // r9d
  struct _KTHREAD *CurrentThread; // rdx
  struct CPointerMsgData *v8; // rdi
  char v9; // bl
  _UNKNOWN **v10; // r8
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(a1, a2);
  CurrentThread = KeGetCurrentThread();
  v8 = NonConstMsgData;
  if ( *((struct _KTHREAD **)a1 + 5) != CurrentThread )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11273);
  v9 = 1;
  if ( !_InterlockedIncrement((volatile signed __int32 *)v8 + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11280);
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)v8 + 9) & 0x40) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11284);
      v10 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*((_DWORD *)v8 + 9) & 0x40) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(CurrentThread) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(CurrentThread) = 0;
      }
      if ( (_BYTE)CurrentThread || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)CurrentThread,
          (_DWORD)v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          7,
          290,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
          (char)v8);
      }
    }
    *((_DWORD *)v8 + 9) |= 0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11295);
  }
  if ( (*((_BYTE *)v8 + v3 + 48))++ == 0xFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11297);
  if ( !*((_BYTE *)v8 + v3 + 48) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(CurrentThread) = v9;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)CurrentThread,
        (_DWORD)v10,
        v6,
        v12,
        v13,
        291,
        v14,
        v3,
        (char)v8);
    }
  }
}
