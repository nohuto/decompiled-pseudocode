/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0036604
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0005C60 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C00354BC (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0035A14 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0035DD8 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C001B7B8 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
}
