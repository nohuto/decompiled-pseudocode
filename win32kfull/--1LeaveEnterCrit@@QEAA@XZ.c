/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012C60C
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006D360 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C0094300 (xxxDesktopThreadWaiter.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C02165AC (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(1LL, 0LL);
}
