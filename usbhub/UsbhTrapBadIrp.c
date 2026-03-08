/*
 * XREFs of UsbhTrapBadIrp @ 0x1C002DFF0
 * Callers:
 *     UsbhGenDispatch @ 0x1C001E130 (UsbhGenDispatch.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x1C0041C74 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapBadIrp(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  if ( BugCheckParameter3 )
    USBHUB_TriggerCallBacks(BugCheckParameter3);
  KeBugCheckEx(0xFEu, 8uLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
}
