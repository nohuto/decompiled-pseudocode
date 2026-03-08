/*
 * XREFs of UsbhCancelEnumeration @ 0x1C0022424
 * Callers:
 *     UsbhBusPause_Action @ 0x1C0012DC0 (UsbhBusPause_Action.c)
 *     UsbhEnumerate1 @ 0x1C001A4E8 (UsbhEnumerate1.c)
 *     UsbhPCE_Disable @ 0x1C0034550 (UsbhPCE_Disable.c)
 *     UsbhEnumerate2 @ 0x1C004C770 (UsbhEnumerate2.c)
 *     UsbhHandleOvercurrent @ 0x1C004CC94 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C00367A4 (UsbhAssertBusLock.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003A81C (Usbh_BusPause_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C004C9E8 (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v9; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      42,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a3 + 4));
  Log(a1, 1024, 1668826446, a3, 0LL);
  if ( a2 != 1 && a2 != 2 )
    return a2;
  FdoExt(a1);
  UsbhCancelResetTimeout(a1, a3, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a3 + 376), *(_WORD *)(a3 + 4));
  UsbhBusUnlatchPdo(a1, a4, a3, v9, 0LL);
  Usbh_BusPause_PdoEvent(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
