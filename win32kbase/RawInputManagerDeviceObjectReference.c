/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0088EF0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C0088D60 (HMCreateHandleForObject.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00CD1C8 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1C01ADDCC (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C01BD3A0 (RIMFindTouchDigitizerWithSize.c)
 *     rimQueueCompleteFrame @ 0x1C01D2F84 (rimQueueCompleteFrame.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01E273C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  return (unsigned int)v1;
}
