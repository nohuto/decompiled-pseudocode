/*
 * XREFs of Usbh_SSH_HubFailedResume @ 0x1C005A44C
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C001CC84 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubFailedResume(__int64 a1, __int64 a2, __int64 a3)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  FdoExt(a1);
  UsbhUnlockSSH(a3, 6);
  return 3221225473LL;
}
