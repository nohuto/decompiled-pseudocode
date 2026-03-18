/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C006F3A0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     NtUserLockCursor @ 0x1C00AD6F0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00CF260 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00A0B94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::ClearClip(CCursorClip *this)
{
  __int64 v2; // rcx
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v2 )
    v2 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(struct tagRECT *)this;
    CCursorClip::UpdateClipRect(this, &v3);
  }
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
