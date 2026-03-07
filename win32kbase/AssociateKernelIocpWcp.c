__int64 __fastcall AssociateKernelIocpWcp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  int v7; // edx
  int v8; // ebx
  int v9; // r8d

  v8 = ZwAssociateWaitCompletionPacket(a1, a2, a3, a4, a5, a6, 0LL, a7);
  if ( v8 < 0 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        15,
        (__int64)&WPP_1759bcbb9db2365e46dd4c1dded80818_Traceguids,
        v8);
    }
  }
  return (unsigned int)v8;
}
