/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C00015A0
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00017D0 (UsbhDriverResetPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0001C3C (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortResumeComplete @ 0x1C0018460 (UsbhPortResumeComplete.c)
 *     UsbhHubIsr @ 0x1C0019BF0 (UsbhHubIsr.c)
 *     UsbhResumeSuspendedPort @ 0x1C001BEB8 (UsbhResumeSuspendedPort.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036CB8 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C004DFF0 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C004E1B0 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C004E390 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C004E460 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0001648 (UsbhLogSignalResumeEvent.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // r9d
  KIRQL v5; // r10
  __int64 v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v4 = *(_DWORD *)(a2 + 12);
    v6 = *(unsigned __int16 *)(a2 + 4);
    *(_DWORD *)(a2 + 448) = 1;
    Log(v3, 16, 1886479734, v4, v6);
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
