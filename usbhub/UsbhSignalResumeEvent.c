/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C001B710
 * Callers:
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0001F1C (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhResumeSuspendedPort @ 0x1C001A698 (UsbhResumeSuspendedPort.c)
 *     UsbhPortResumeComplete @ 0x1C001B070 (UsbhPortResumeComplete.c)
 *     UsbhDriverResetPort @ 0x1C001B8C0 (UsbhDriverResetPort.c)
 *     UsbhHubIsr @ 0x1C001D8F0 (UsbhHubIsr.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036434 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C004D4D0 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C004D870 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C004D940 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLogSignalResumeEvent @ 0x1C001B7B8 (UsbhLogSignalResumeEvent.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v4 = *(int *)(a2 + 12);
    v6 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(a1, 16, 1886479734, v4, v6);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
