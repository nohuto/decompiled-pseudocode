/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C001B0E8
 * Callers:
 *     UsbhHubIsr @ 0x1C0004510 (UsbhHubIsr.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhResumeSuspendedPort @ 0x1C001AA6C (UsbhResumeSuspendedPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001AEC0 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhDriverResetPort @ 0x1C001AF40 (UsbhDriverResetPort.c)
 *     UsbhPortResumeComplete @ 0x1C001B2A0 (UsbhPortResumeComplete.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C00359FC (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C004CBE0 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C004CDA0 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C004CF80 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C004D050 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhLogSignalResumeEvent @ 0x1C001B190 (UsbhLogSignalResumeEvent.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)UsbhLogSignalResumeEvent() )
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
