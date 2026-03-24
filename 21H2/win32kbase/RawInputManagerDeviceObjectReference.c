/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C006A730
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006A2E8 (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006A500 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C006A5E0 (HMCreateHandleForObject.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4500 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161ADC (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0164660 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C71C (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01820FC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 846LL);
  return (unsigned int)v1;
}
