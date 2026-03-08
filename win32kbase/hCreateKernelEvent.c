/*
 * XREFs of hCreateKernelEvent @ 0x1C00CFF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void *__fastcall hCreateKernelEvent(EVENT_TYPE EventType, BOOLEAN a2)
{
  NTSTATUS v2; // eax
  int v3; // edx
  int v4; // r8d
  struct _OBJECT_ATTRIBUTES v6; // [rsp+50h] [rbp-38h] BYREF
  void *v7; // [rsp+A0h] [rbp+18h] BYREF

  memset(&v6.Length + 1, 0, 20);
  memset(&v6.Attributes + 1, 0, 20);
  v7 = 0LL;
  v6.Length = 48;
  v6.Attributes = 512;
  v2 = ZwCreateEvent(&v7, 0x1F0003u, &v6, EventType, a2);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        17,
        11,
        (__int64)&WPP_1759bcbb9db2365e46dd4c1dded80818_Traceguids,
        v2);
    }
  }
  return v7;
}
