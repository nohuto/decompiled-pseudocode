/*
 * XREFs of UsbhPdoTrapFatal_Dbg @ 0x1C002D6F8
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x1C0041C74 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhPdoTrapFatal_Dbg(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  if ( BugCheckParameter3 )
    USBHUB_TriggerCallBacks(BugCheckParameter3);
  KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
}
