/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8094
 * Callers:
 *     InternalSetTimer @ 0x1C0080790 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C01106A0 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EAB30 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
