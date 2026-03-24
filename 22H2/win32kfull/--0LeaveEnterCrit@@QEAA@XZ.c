/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01363D8
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0058830 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00D9CA4 (xxxDesktopThreadWaiter.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C00F9950 (SfnINOUTNCCALCSIZE.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C02334E8 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
