/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0036644
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0005350 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0005C60 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F290 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014D00 (Usbh_PCE_wChange_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C003518C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0034208 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
