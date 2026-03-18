/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C004DFA0
 * Callers:
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C004DE50 (HMCreateHandleForObject.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0055EE4 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C018B2A4 (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0198130 (RIMFindTouchDigitizerWithSize.c)
 *     rimQueueCompleteFrame @ 0x1C01A9AEC (rimQueueCompleteFrame.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B7F9C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 v4; // r8

  v3 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4);
  return (unsigned int)v3;
}
