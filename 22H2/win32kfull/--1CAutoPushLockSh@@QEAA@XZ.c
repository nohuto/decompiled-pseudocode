/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014F272
 * Callers:
 *     FreezeThawTimers @ 0x1C00A2740 (FreezeThawTimers.c)
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     SetProcessTimerDelay @ 0x1C01C08C0 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this, __int64 a2, __int64 a3)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL, a3);
  KeLeaveCriticalRegion();
}
