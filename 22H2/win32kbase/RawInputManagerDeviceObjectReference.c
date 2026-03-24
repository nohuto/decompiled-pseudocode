/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C006B1E0
 * Callers:
 *     rimOnPnpArrived @ 0x1C0056904 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006AFB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C006B090 (HMCreateHandleForObject.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4840 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161A0C (RIMFindSiblingMouseDevice.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C0164590 (RIMFindTouchDigitizerWithSize.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C64C (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018202C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 846LL);
  return (unsigned int)v1;
}
