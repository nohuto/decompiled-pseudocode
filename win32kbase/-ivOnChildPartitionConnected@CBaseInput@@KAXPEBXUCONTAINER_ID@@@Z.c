void __fastcall CBaseInput::ivOnChildPartitionConnected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx

  v4 = a2;
  v5 = a1;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  v7 = v5;
  v8 = 6 * v5;
  v9 = *(_QWORD *)(v6 + 48LL * v5 + 3304);
  if ( v9 )
  {
    CBaseInput::ivInitialSendPnpForChildPartition(v9, v4);
  }
  else
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        18,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
        v5);
    }
  }
}
