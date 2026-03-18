/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0035C0C
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000D6AC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0011DA0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015F80 (Usbh_PCE_wChange_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00347B8 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0033834 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
