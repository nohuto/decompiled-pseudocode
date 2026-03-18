/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C00349E0
 * Callers:
 *     UsbhHubIsr @ 0x1C0004510 (UsbhHubIsr.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhRequestPortSuspend @ 0x1C001A734 (UsbhRequestPortSuspend.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001AEC0 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhEnumerate1 @ 0x1C001EDD0 (UsbhEnumerate1.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C00359FC (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C004BE8C (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C004CDA0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0033834 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
