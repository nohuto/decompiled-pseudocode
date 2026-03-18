/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0035BCC
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C000D6AC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0034AE8 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C003502C (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00353CC (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C001B190 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
}
