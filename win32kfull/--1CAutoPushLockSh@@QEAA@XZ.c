/*
 * XREFs of ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C0142398
 * Callers:
 *     FreezeThawTimers @ 0x1C00D8DA0 (FreezeThawTimers.c)
 *     SetProcessTimerDelay @ 0x1C01C1A20 (SetProcessTimerDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this, __int64 a2, __int64 a3)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL, a3);
  KeLeaveCriticalRegion();
}
