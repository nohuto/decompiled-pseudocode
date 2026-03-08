/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C01B9064
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0034C6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimDestroyDeadzone @ 0x1C01B2AC8 (rimDestroyDeadzone.c)
 *     RIMAssignPreparsedData @ 0x1C01B3578 (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1C01B5B18 (RIMFreePointerDevice.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  int v6; // edx
  _UNKNOWN **v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx

  v2 = *(_QWORD *)(a2 + 472);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2743);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 456), a2, v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v6) = 0;
    }
    v7 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v8,
        (_DWORD)gRimLog,
        3,
        1,
        38,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
        v5);
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v10 = *(char **)(a1 + 1048);
    if ( v10 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    rimDestroyDeadzone((__int64)v7, (__int64)v10, v8, v9);
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 472) = 0LL;
}
