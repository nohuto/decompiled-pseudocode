/*
 * XREFs of ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00CFEF0
 * Callers:
 *     NtUserGetClipCursor @ 0x1C0159140 (NtUserGetClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

struct tagRECT *__fastcall CCursorClip::GetClip(struct tagRECT *this, struct tagRECT *__return_ptr retstr)
{
  CPushLock::AcquireLockShared((CPushLock *)&this[2]);
  *retstr = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  return retstr;
}
