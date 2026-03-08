/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C020AEAC
 * Callers:
 *     NtUserLockCursor @ 0x1C003A670 (NtUserLockCursor.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0015004 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LONG top; // r9d
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = (struct tagRECT *)*((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  CPushLock::AcquireLockExclusive((CPushLock *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 32LL));
  if ( PtInRect(a2, *((_QWORD *)gpsi + 620)) )
  {
    *(_QWORD *)&v7.left = v4;
    v5 = HIDWORD(v4);
  }
  else
  {
    top = a2->top;
    LODWORD(v4) = a2->left + (a2->right - a2->left) / 2;
    v7.left = v4;
    LODWORD(v5) = top + (a2->bottom - top) / 2;
    v7.top = v5;
  }
  v7.right = v4 + 1;
  v7.bottom = v5 + 1;
  CCursorClip::UpdateClipRect(v2, &v7);
  CPushLock::ReleaseLock((CPushLock *)&v2[2]);
}
