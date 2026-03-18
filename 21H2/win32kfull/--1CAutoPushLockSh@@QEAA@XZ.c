/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01CEF78
 * Callers:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C00FD920 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01E5F20 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
