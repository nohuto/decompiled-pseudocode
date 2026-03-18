/*
 * XREFs of UsbhDriverUnload @ 0x1C00433D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     USBHUB_FreeBugCheck @ 0x1C004259C (USBHUB_FreeBugCheck.c)
 *     UsbhModuleDispatch @ 0x1C0044710 (UsbhModuleDispatch.c)
 *     wil_UninitializeFeatureStaging @ 0x1C0075008 (wil_UninitializeFeatureStaging.c)
 *     WppCleanupKm @ 0x1C00754A8 (WppCleanupKm.c)
 */

__int64 __fastcall UsbhDriverUnload(__int64 a1, int a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_bd192adfbaab37968b6512a601d84f30_Traceguids);
  UsbhModuleDispatch(0, a2, 0, 4, 0LL, 0LL);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)WPP_MAIN_CB.Dpc.DeferredContext);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)WPP_MAIN_CB.Dpc.DeferredRoutine);
  WppCleanupKm(a1);
  return wil_UninitializeFeatureStaging();
}
