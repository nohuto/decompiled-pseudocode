__int64 __fastcall HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_HUB_WAS_RESET_ON_RESUME, 0LL, *(_QWORD *)(v1 + 248));
  HUBMUX_QueuePowerUpEventToDSMs(v1, 4014LL);
  return 1000LL;
}
