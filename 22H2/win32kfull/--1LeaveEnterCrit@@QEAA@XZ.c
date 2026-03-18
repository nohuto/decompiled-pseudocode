/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0138BBC
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxDesktopThreadWaiter @ 0x1C006A140 (xxxDesktopThreadWaiter.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRemoteReconnect @ 0x1C0132780 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C02139E4 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(1LL, 0LL);
}
