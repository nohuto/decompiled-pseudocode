/*
 * XREFs of RIMFreeHidDesc @ 0x1C018B428
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0189BB4 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(_WORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // rdx
  char *v5; // rdx
  char *v6; // rdx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      28,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      (char)a1,
      a1[21],
      a1[20]);
  }
  v4 = (char *)*((_QWORD *)a1 + 3);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
  v5 = (char *)*((_QWORD *)a1 + 2);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  v6 = (char *)*((_QWORD *)a1 + 4);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a1);
}
