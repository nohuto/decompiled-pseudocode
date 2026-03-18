/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C0139F12
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FFB10 (xxxMNEndMenuStateInternal.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01FF08C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(struct tagMENUSTATE **this)
{
  struct tagMENUSTATE *v1; // rcx

  v1 = *this;
  if ( v1 )
    xxxUnlockMenuStateInternal(v1, 0);
}
