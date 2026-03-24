/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8654
 * Callers:
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 *     FreezeThawTimers @ 0x1C0110A20 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01EB0F0 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
