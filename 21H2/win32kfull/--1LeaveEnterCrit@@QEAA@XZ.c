/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00D9FF4 (xxxDesktopThreadWaiter.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C00F9CA0 (SfnINOUTNCCALCSIZE.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C0233AA8 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(0LL, 1LL);
}
