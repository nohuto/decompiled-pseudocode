/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00093E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C00109DC (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x1C00407BC (FWUPDATE_ReenumerateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(v1 + 248));
  HUBMUX_QueuePowerUpEventToPSMs(v1, 3022LL);
  FWUPDATE_ReenumerateFirmwareUpdateDevice(v1);
  return 1000LL;
}
