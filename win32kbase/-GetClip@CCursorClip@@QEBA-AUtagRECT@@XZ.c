/*
 * XREFs of ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C020AE60
 * Callers:
 *     NtUserGetClipCursor @ 0x1C016F6E0 (NtUserGetClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

struct tagRECT *__fastcall CCursorClip::GetClip(struct tagRECT *this, struct tagRECT *__return_ptr retstr)
{
  CPushLock::AcquireLockShared((CPushLock *)&this[2]);
  *retstr = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  return retstr;
}
