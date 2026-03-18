/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0036EC8
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0004220 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0004C90 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0007A40 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F4B0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0035B1C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0034B98 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035C24 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
