/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0015530
 * Callers:
 *     NtUserLockCursor @ 0x1C003A670 (NtUserLockCursor.c)
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     NtUserClipCursor @ 0x1C016D9B0 (NtUserClipCursor.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0015004 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
    CCursorClip::UpdateClipRect((struct tagRECT *)this, &v3);
  }
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
