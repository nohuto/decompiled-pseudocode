void *__fastcall hCreateKernelTimer(TIMER_TYPE TimerType)
{
  NTSTATUS v1; // eax
  int v2; // edx
  int v3; // r8d
  struct _OBJECT_ATTRIBUTES v5; // [rsp+50h] [rbp-38h] BYREF
  void *v6; // [rsp+98h] [rbp+10h] BYREF

  memset(&v5.Length + 1, 0, 20);
  memset(&v5.Attributes + 1, 0, 20);
  v6 = 0LL;
  v5.Length = 48;
  v5.Attributes = 512;
  v1 = ZwCreateTimer(&v6, 0x1F0003u, &v5, TimerType);
  if ( v1 < 0 )
  {
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        12,
        (__int64)&WPP_1759bcbb9db2365e46dd4c1dded80818_Traceguids,
        v1);
    }
  }
  return v6;
}
